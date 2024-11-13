#include <algorithm>
#include <iostream>

void min_max(int a, int b, int &mn, int &mx) {
  mn = std::min(a, b);
  mx = std::max(a, b);
}

int main() {
  int knumero_a{0}, knumero_b{0}, mn{0}, mx{0};
  while (std::cin >> knumero_a >> knumero_b) {
    min_max(knumero_a, knumero_b, mn, mx);
    std::cout << "min_max(" << 7 << ", " << -3 << ") → " << mn << ' ' << mx <<
      std::endl;
  }
  return 0;
}
