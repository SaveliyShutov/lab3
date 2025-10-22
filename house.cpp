#include "house.h"

House::House(int floors) : floors_(floors) {
  if (floors_ < 1) {
    floors_ = 1;
  }
}

std::string House::get_floor_word(int n) const {
  int last_two = n % 100;
  int last_one = n % 10;

  if (last_two >= 11 && last_two <= 14) return "этажами";

  switch (last_one) {
    case 1:
      return "этажом";
    case 2:
    case 3:
    case 4:
      return "этажами";
    default:
      return "этажами";
  }
}

std::string House::to_string() const {
  std::string word = get_floor_word(floors_);
  return "дом с " + std::to_string(floors_) + " " + word;
}

void House::print() const {
  std::cout << to_string() << std::endl;
}
