/**
 * @file book.h
 * @author Tucker Self, Braden Windsor
 * @date 2023-11-01
 * @brief book struct
 * 
 * Creates the book struct for use in the library class
 */

#include <string>

struct book{
  Node *next;
  
  std::string title;
  std::string author;
  int pages;
  std::string isbn;
  float price;
  int year;
};
