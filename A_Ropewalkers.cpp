#include <iostream>
#include <algorithm>

int solve(int a, int b, int c, int d) {
    return std::max(0, d - (b - a)) + std::max(0, d - (c - b));
}

int main() {
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    std::sort(&a, &a + 3); // sort a, b, c in ascending order
    std::cout << solve(a, b, c, d) << std::endl;
    return 0;
}


