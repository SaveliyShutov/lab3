#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <iostream>
#include "department.h"

class Employee {
 public:
  Employee(const std::string& name, Department* department);
  void set_department(Department* department);
  std::string get_name() const;
  std::string to_string() const;
  void print() const;
  
 private:
  std::string name_;
  Department* department_;
};

#endif  // EMPLOYEE_H
