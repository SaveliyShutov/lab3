#ifndef HOUSE_H
#define HOUSE_H

#include <string>
#include <iostream>

class House {
 private:
  int floors_;

  std::string get_floor_word(int n) const;

 public:
  explicit House(int floors);
  std::string to_string() const;
  void print() const;
};

#endif  // HOUSE_H
