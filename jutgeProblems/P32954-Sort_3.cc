#include <iostream>

void sort3(int &a, int &b, int &c) {
  if (a > b) {
    if (b > c) {
      std::swap(a, c);
    } else {
      if (c < a)
        std::swap(a, c);
      std::swap(a, b);
    }
  } else {
    if (b < c)
      ;
    else {
      if (c < a)
        std::swap(a, c);
      std::swap(c, b);
    }
  }
}

int main() {
  int x, y, z;
  while (std::cin >> x >> y >> z) {
    sort3(x, y, z);
    std::cout << x << ' ' << y << ' ' << z << std::endl;
  }
  return 0;
}
