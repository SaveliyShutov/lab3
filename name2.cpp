#include "name2.h"

Name2::Name2(const std::string& first_name)
    : first_name_(first_name), last_name_(""), patronymic_("") {}

Name2::Name2(const std::string& first_name, const std::string& last_name)
    : first_name_(first_name), last_name_(last_name), patronymic_("") {}

Name2::Name2(const std::string& first_name, const std::string& last_name, const std::string& patronymic)
    : first_name_(first_name), last_name_(last_name), patronymic_(patronymic) {}

std::string Name2::to_string() const {
  std::string result;
  if (!last_name_.empty()) result += last_name_ + " ";
  result += first_name_;
  if (!patronymic_.empty()) result += " " + patronymic_;
  return result;
}

void Name2::print() const {
  std::cout << to_string() << std::endl;
}
