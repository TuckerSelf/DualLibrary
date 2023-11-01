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
  while(inFile){
    
  }
  inFile.close();
}

void library::write_file(string fileName){
  ofstream outFile;
  outFile.open(fileName);

  outFile.close();
}

void library::push_front(string bookTitle, string authName, int pageNum, string isbnInsert, float cover, int yearNum){
  
  
  entries.pushfront();
}

void library::push_back(string bookTitle, string authName, int pageNum, string isbnInsert, float cover, int yearNum){


  entries.pushback();
}

void library::insert_sorted(string bookTitle, string authName, int pageNum, string isbnInsert, float cover, int yearNum){
  
}

string library::find_author(string authName){
  list<book>::iterator it;

  if(){

  }
  
}

string library::find_album(string bookTitle){
  list<book>::iterator it;

  if(){

  }
  
}

void library::delete(string authName, string bookName){
  list<book>::iterator it;

  if(){
    if(){

    }
  }

  entries.erase();
}

void library::print_list(){
  list<book>::iterator it;
  
}
