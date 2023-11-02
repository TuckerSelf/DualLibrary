/**
 * @file main.cpp
 * @author Tucker Self, Braden Windsor
 * @date 2023-11-01
 * @brief Main for Group Library Assignment
 * 
 * Allows user to use the Library systems
 */
#include <iostream>
#include "library.h"

using namespace std;

int main() {
  int pages, year;
  float price;
  string filename, filename2, title, author, authName, isbn;
  library myL;
  
  int input = 0;
  while(input != 8){
    cout << "Welcome to the UTM Library!  You may select one of the following options: \n"
	 << "1 Read books from a file\n"
	 << "2 Write the library to a file\n"
	 << "3 Print the library\n"
	 << "4 Find author's bibliography\n"
	 << "5 Find album\n"
	 << "6 Add a Book\n"
	 << "7 Delete a Book\n"
	 << "8 Exit this program\n"
	 << "Please enter your choice now: ";

    cin >> input;
    cout << "\n";

    if (input == 1){
      cout << "Enter the file you wish to read: ";
      cin >> filename;
      
      myL.read_file(filename);
      cout << "File read in \n\n";
    }
    
    else if (input == 2){
      cout << "Enter the file you wish to write to: ";
      cin >> filename2;

      myL.write_file(filename2);
      cout << "File written to\n\n";
    }
    
    else if (input == 3){
      myL.print_list();
      cout << "\n\n";
    }
    
    else if (input == 4){
      cout << "Enter author's name: ";
      getline(cin, authName);

      cout << myL.find_author(authName);
      cout <<"\n\n";
    }
    
    else if (input == 5){
      cout << "Enter book title: ";
      cin >> title;

      cout << myL.find_album(title);
      cout << "\n\n";
    }
    
    else if (input == 6){
      cout << "Enter the book you wish to add\n";

      cout << "Enter title: ";
      getline(cin, title);

      cout << "Enter author: ";
      getline(cin, author);

      cout << "Enter pages: ";
      cin >> pages;

      cout << "Enter isbn: ";
      cin >> isbn;

      cout << "Enter price: ";
      cin >> price;

      cout << "Enter year: ";
      cin >> year;

      myL.insert_sorted(title, author, pages, isbn, price, year);
      cout << "\n\n";
    }
    
    else if (input == 7){
      cout << "Enter the book you wish to delete\n";

      cout << "Enter author: ";
      cin >> authName;

      cout << "Enter title: ";
      cin >> title;

      myL.Delete(authName, title);
      cout << "\n\n";
    }
    
    else if (input == 8){
      return 0;
    }

    else{
      cout << "Invaild input\n\n";
    }
  }
  
  return 0;
}
