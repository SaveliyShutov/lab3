#ifndef EMPLOYEE2_H
#define EMPLOYEE2_H

#include <string>
#include <iostream>
#include <vector>
#include "department2.h"

class Employee2 {
 public:
  Employee2(const std::string& name, Department2* department);
  void set_department(Department2* department);
  std::string get_name() const;
  std::string to_string() const;
  void print() const;

  std::vector<Employee2*> get_colleagues() const;
  
 private:
  std::string name_;
  Department2* department_;
};

#endif  // EMPLOYEE2_H
