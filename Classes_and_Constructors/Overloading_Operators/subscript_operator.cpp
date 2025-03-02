#include <iostream>

class IntList {
private:
  int m_list[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; // Initial state

public:
  // Universal operator[] (can be used for both const and non-const objects)
  int& operator[](int index) {
    if (index < 0 || index >= 10) {
      throw std::out_of_range("Index out of bounds!");
    }
    return m_list[index];
  }

  // Access function for const objects (returns by value for efficiency)
  const int at(int index) const {
    if (index < 0 || index >= 10) {
      throw std::out_of_range("Index out of bounds!");
    }
    return m_list[index];
  }
};

int main() {
  IntList list;
  list[2] = 3;  // Assignment (modifying non-const object)
  std::cout << list[2] << '\n';

  const IntList clist;
  std::cout << clist.at(2) << '\n';  // Read-only access (using at for const objects)

  return 0;
}
