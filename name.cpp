#include "name.h"

Name::Name() : last_name_(""), first_name_(""), middle_name_("") {}

Name::Name(const std::string& last_name,
           const std::string& first_name,
           const std::string& middle_name)
    : last_name_(last_name),
      first_name_(first_name),
      middle_name_(middle_name) {}

std::string Name::to_string() const {
  std::string result;
  if (!last_name_.empty()) result += last_name_;
  if (!first_name_.empty()) {
    if (!result.empty()) result += " ";
    result += first_name_;
  }
  if (!middle_name_.empty()) {
    if (!result.empty()) result += " ";
    result += middle_name_;
  }
  return result;
}

void Name::print() const {
  std::cout << to_string() << std::endl;
}
