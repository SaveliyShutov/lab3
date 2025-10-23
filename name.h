#ifndef NAME_H
#define NAME_H

#include <string>
#include <iostream>

class Name {
 public:
  Name();
  Name(const std::string& last_name,
       const std::string& first_name = "",
       const std::string& middle_name = "");

  std::string to_string() const;
  void print() const;

 private:
  std::string last_name_;
  std::string first_name_;
  std::string middle_name_;
};

#endif  // NAME_H
