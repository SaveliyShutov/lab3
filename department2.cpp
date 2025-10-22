#include "department2.h"
#include "employee2.h"

Department2::Department2(const std::string& name) : name_(name), manager_(nullptr) {}

void Department2::set_manager(Employee2* manager) {
  manager_ = manager;
  add_employee(manager_);
}

Employee2* Department2::get_manager() const {
  return manager_;
}

std::string Department2::get_name() const {
  return name_;
}

void Department2::add_employee(Employee2* employee) {
  for (auto e : employees_) {
    if (e == employee) return;
  }
  employees_.push_back(employee);
}

const std::vector<Employee2*>& Department2::get_employees() const {
  return employees_;
}
