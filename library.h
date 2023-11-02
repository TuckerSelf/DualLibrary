/**
 * @file library.h
 * @author Tucker Self, Braden Windsor
 * @date 2023-11-01
 * @brief Library H file
 * 
 * Creates prototype functions for the library class
 */

#include <string>
#include <list>
#include "book.h"

#ifndef LIBRARY_H
#define LIBRARY_H

class library{
  
private:
  std::list<book> entries;

public:

/**
 * uses list push_front to add requested data to the front of the list struct
 *
 * @param std::string bookTitle title of book
 * @param std::string authName author name
 * @param int pageNum number of pages
 * @param std::string isbnInsert isbn
 * @param float cover cover price
 * @param int yearNum year of release
 * @pre 
 * @return void 
 * @post data added to front of entries list
 * 
 */
  void push_front(std::string bookTitle, std::string authName, int pageNum, std::string isbnInsert, float cover, int yearNum);


/**
 * pushes requested data to the back of the list struct
 *
 * @param std::string bookTitle book title
 * @param std::string authName author name
 * @param int pageNum number of pages
 * @param std::string isbnInsert isbn
 * @param float cover cover price
 * @param int yearNum year released
 * @pre 
 * @return void 
 * @post data added to back of entries list
 * 
 */
  void push_back(std::string bookTitle, std::string authName, int pageNum, std::string isbnInsert, float cover, int yearNum);


/**
 * reads data from file into entries list
 *
 * @param std::string fileName name of file
 * @pre assumes file is of valid format and information
 * @return void 
 * @post data added to entries list
 * 
 */
  void read_file(std::string fileName);


/**
 * writes data from entries list into file
 *
 * @param std::string fileName name of file to be written
 * @pre data is stored in entries
 * @return void 
 * @post data is printed into file of given name
 * 
 */
  void write_file(std::string fileName);


/**
 * inserts requested data into list struct organized by author name
 *
 * @param std::string bookTitle book title
 * @param std::string authName author name
 * @param int pageNum number of pages
 * @param std::string isbnInsert isbn
 * @param float cover cover price
 * @param int yearNum year released
 * @pre 
 * @return void 
 * @post data added to appropriate section of entries list
 * 
 */
  void insert_sorted(std::string bookTitle, std::string authName, int pageNum, std::string isbnInsert, float cover, int yearNum);


/**
 * finds book by a given author
 *
 * @param std::string authName name of author
 * @pre 
 * @return std::string books by the author
 * @post 
 * 
 */
  std::string find_author(std::string authName);


/**
 * gives all information of books written by an author
 *
 * @param std::string authName name of author
 * @pre 
 * @return std::string all information recorded of author's books
 * @post 
 * 
 */
  std::string find_album(std::string authName);


/**
 * removes data stored in entries list
 *
 * @param std::string authName author name
 * @param std::string bookName name of book
 * @pre 
 * @return void 
 * @post removes the data that was stored in entries list
 * 
 */
  void delete(std::string authName, std::string bookName);


/**
 * prints all information stored in entries list
 *
 * @pre information is stored in entries
 * @return void 
 * @post prints to console all stored information.
 * 
 */
  void print_list();
};

#endif //LIBRARY_H
