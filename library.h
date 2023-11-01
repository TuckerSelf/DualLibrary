/**
 * @file library.h
 * @author Tucker Self, Braden Windsor
 * @date 2023-11-01
 * @brief Library H file
 * 
 * Creates prototype functions for the library class
 */

#include <string>
#include "book.h"

#ifndef LIBRARY_H
#define LIBRARY_H

class library{
  
private:
  std::list<book> entries;

public:
  void push_front(std::string bookTitle, std::string authName, int pageNum, std::string isbnInsert, float cover, int yearNum);

  void push_back(std::string bookTitle, std::string authName, int pageNum, std::string isbnInsert, float cover, int yearNum);

  void read_file(std::string fileName);

  void write_file(std::string fileName);

  void insert_sorted(std::string bookTitle, std::string authName, int pageNum, std::string isbnInsert, float cover, int yearNum);

  std::string find_author(std::string authName);

  std::string find_album(std::string bookTitle);

  void delete(std::string authName, std::string bookName);

  void print_list();
};

#endif //LIBRARY_H
