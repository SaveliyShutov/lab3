#ifndef NAME2_H
#define NAME2_H

#include <string>
#include <iostream>

class Name2 {
 public:
  explicit Name2(const std::string& first_name);
  Name2(const std::string& first_name, const std::string& last_name);
  Name2(const std::string& first_name, const std::string& last_name, const std::string& patronymic); 

  std::string to_string() const;
  void print() const;

 private:
  std::string first_name_;
  std::string last_name_;
  std::string patronymic_;
};

#endif  // NAME2_H
