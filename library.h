/**
 * @file library.h
 * @author Tucker Self, Braden Windsor
 * @date 2023-11-01
 * @brief Library H file
 * 
 * Creates prototype functions for the library class
 */

#include <string>

#ifndef LIBRARY_H
#define LIBRARY_H

class library{
  
private:
  

public:
  library();
  
  ~library();

  void push_front();

  void push_back();

  void read_file(std::string fileName);

  void write_file(std::string fileName);

  void insert_sorted();

  std::string find_author();

  std::string find_album();

  void delete(std::string authName, std::string bookName);

  void print_list();
};

#endif //LIBRARY_H
