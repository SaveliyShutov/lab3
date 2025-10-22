#include "employee2.h"

Employee2::Employee2(const std::string& name, Department2* department)
    : name_(name), department_(department) {
  if (department_) department_->add_employee(this);
}

void Employee2::set_department(Department2* department) {
  department_ = department;
  if (department_) department_->add_employee(this);
}

std::string Employee2::get_name() const {
  return name_;
}

std::string Employee2::to_string() const {
  if (!department_) return name_;
  Employee2* manager = department_->get_manager();
  if (manager == this)
    return name_ + " начальник отдела " + department_->get_name();
  else if (manager)
    return name_ + " работает в отделе " + department_->get_name() +
           ", начальник которого " + manager->get_name();
  else
    return name_ + " работает в отделе " + department_->get_name();
}

void Employee2::print() const {
  std::cout << to_string() << std::endl;
}

std::vector<Employee2*> Employee2::get_colleagues() const {
  std::vector<Employee2*> colleagues;
  if (!department_) return colleagues;
  for (auto e : department_->get_employees()) {
    if (e != this) colleagues.push_back(e);
  }
  return colleagues;
}
