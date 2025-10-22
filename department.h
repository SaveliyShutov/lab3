#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <string>
#include <iostream>

class Employee;  // forward declaration

class Department {
 private:
  std::string name_;
  Employee* manager_;

 public:
  Department(const std::string& name);
  void set_manager(Employee* manager);
  Employee* get_manager() const;
  std::string get_name() const;
};

#endif  // DEPARTMENT_H
