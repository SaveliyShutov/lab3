#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <string>
#include <iostream>

class Employee;  // forward declaration

class Department {
 public:
  Department(const std::string& name);
  void set_manager(Employee* manager);
  Employee* get_manager() const;
  std::string get_name() const;
  
 private:
  std::string name_;
  Employee* manager_;
};

#endif  // DEPARTMENT_H
