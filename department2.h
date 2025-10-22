#ifndef DEPARTMENT2_H
#define DEPARTMENT2_H

#include <string>
#include <iostream>
#include <vector>

class Employee2;  // forward declaration

class Department2 {
 private:
  std::string name_;
  Employee2* manager_;
  std::vector<Employee2*> employees_;

 public:
  Department2(const std::string& name);
  void set_manager(Employee2* manager);
  Employee2* get_manager() const;
  std::string get_name() const;

  void add_employee(Employee2* employee);
  const std::vector<Employee2*>& get_employees() const;
};

#endif  // DEPARTMENT2_H
