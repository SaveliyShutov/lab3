#include "employee.h"

Employee::Employee(const std::string& name, Department* department)
    : name_(name), department_(department) {}

void Employee::set_department(Department* department) {
  department_ = department;
}

std::string Employee::get_name() const {
  return name_;
}

std::string Employee::to_string() const {
  if (!department_) return name_;
  Employee* manager = department_->get_manager();
  if (manager == this)
    return name_ + " начальник отдела " + department_->get_name();
  else if (manager)
    return name_ + " работает в отделе " + department_->get_name() +
           ", начальник которого " + manager->get_name();
  else
    return name_ + " работает в отделе " + department_->get_name();
}

void Employee::print() const {
  std::cout << to_string() << std::endl;
}
