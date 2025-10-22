#ifndef NAME2_H
#define NAME2_H

#include <string>
#include <iostream>

class Name2 {
 private:
  std::string first_name_;
  std::string last_name_;
  std::string patronymic_;

 public:
  // Конструкторы
  explicit Name2(const std::string& first_name);  // только имя
  Name2(const std::string& first_name, const std::string& last_name);  // имя + фамилия
  Name2(const std::string& first_name, const std::string& last_name, const std::string& patronymic);  // все три

  std::string to_string() const;
  void print() const;
};

#endif  // NAME2_H
