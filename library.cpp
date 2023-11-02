/**
 * @file library.cpp
 * @author Tucker Self, Braden Windsor
 * @date 2023-11-01
 * @brief Library cpp file
 * 
 * Gives meaning to the functions of the library class
 */

#include <iostream>
#include <string>
#include <fstream>
#include "library.h"
#include "book.h"

using namespace std;

void library::read_file(string fileName){
  ifstream inFile;
  
  inFile.open(fileName);
  
  string authName, bookTitle, isbnInsert;
  int yearNum, pageNum;
  float cover;
  
  getline(inFile, bookTitle);
  getline(inFile, authName);
  inFile >> pageNum;
  inFile.get();
  getline(inFile, isbnInsert);
  inFile >> cover >> yearNum;
  inFile.get();
  while(inFile){
    insert_sorted(bookTitle, authName, pageNum, isbnInsert, cover, yearNum);
    getline(inFile, bookTitle);
    getline(inFile, authName);
    inFile >> pageNum;
    inFile.get();
    getline(inFile, isbnInsert);
    inFile >> cover >> yearNum;
    inFile.get();
  }
  
  inFile.close();
}

void library::write_file(string fileName){
  ofstream outFile;
  
  outFile.open(fileName);
  list<book>::iterator it;

  for(it = entries.begin(); it != entries.end(); it++){
    outFile << it -> title << endl << it -> author << endl << it -> pages << endl << it -> isbn << endl
	    << it -> price << endl << it  -> year << endl;
  }

  outFile.close();
}

void library::push_front(string bookTitle, string authName, int pageNum, string isbnInsert, float cover, int yearNum){
  book temp;
  temp.title = bookTitle;
  temp.author = authName;
  temp.pages = pageNum;
  temp.isbn = isbnInsert;
  temp.price = cover;
  temp.year = yearNum;
  entries.push_front(temp);
}

void library::push_back(string bookTitle, string authName, int pageNum, string isbnInsert, float cover, int yearNum){
  book temp;
  temp.title = bookTitle;
  temp.author = authName;
  temp.pages = pageNum;
  temp.isbn = isbnInsert;
  temp.price = cover;
  temp.year = yearNum;
  entries.push_back(temp);
}

void library::insert_sorted(string bookTitle, string authName, int pageNum, string isbnInsert, float cover, int yearNum){
  book temp;

  temp.title = bookTitle;
  temp.author = authName;
  temp.pages = pageNum;
  temp.isbn = isbnInsert;
  temp.price = cover;
  temp.year = yearNum;

  list<book>::iterator it;

  if(entries.empty()){
    entries.push_front(temp);
  }
  else{
    it = entries.begin();
    while(it != entries.end() && it -> author < authName){
      it++;
    }
    entries.insert(it, temp);
  }
}

string library::find_author(string authName){
  string authorBooks = "";
  list<book>::iterator it;
  
  if(entries.empty()){
    authorBooks = "N/A";
    return authorBooks;
  }
  
  for(it = entries.begin(); it != entries.end(); it++){
    if(it -> author == authName){
      authorBooks += it -> title + "\n";
    }
  }
  
  if(authorBooks == ""){
    authorBooks = "No books found under given author name.";
    return authorBooks;
  }

  return authorBooks;
}

string library::find_album(string authName){
  string album = "";
  list<book>::iterator it;

  for(it = entries.begin(); it != entries.end(); it++){
    if(it -> author == authName){
      album += "\nBook Title: " + it -> title;
      album += "\nPage Number: " + to_string(it -> pages);
      album += "\nisbn: " + it -> isbn;
      album += "\nCover Price: " + to_string(it -> price);
      album += "\nYear Released: " + to_string(it -> year);
      album += "\n";
    }
  }
  
  if(album == ""){
    album = "No information could be found.";
  }

  return album;
}

void library::Delete(string authName, string bookName){
  list<book>::iterator it;

  it = entries.begin();
  while(it != entries.end() && it -> title != bookName){
    it++;
  }
  
  if(it -> author != authName){
    cout << "Data not found." << endl << endl;
  }
  else{
    entries.erase(it);
    cout << bookName << " removed." << endl << endl;
  }
}

void library::print_list(){
  list<book>::iterator it;

  if(entries.empty()){
    cout << "No book information could be attained." << endl << endl;
  }
  else{
    for(it = entries.begin(); it != entries.end(); it++){
      cout << it -> author << " - " << it -> title << endl << "Page Number: " << it -> pages << endl
	   << "isbn: " << it -> isbn << endl << "Cover Price: " << it -> price << endl << endl;
    }
    cout << endl;
  }
}
