#include "department.h"
#include "employee.h"

Department::Department(const std::string& name) : name_(name), manager_(nullptr) {}

void Department::set_manager(Employee* manager) {
  manager_ = manager;
}

Employee* Department::get_manager() const {
  return manager_;
}

std::string Department::get_name() const {
  return name_;
}
