#include <iostream>
#include <cmath>

int main() {
    float a;
    float b;

    std::cout << "Length of side A: ";
    std::cin >> a;
    std::cout << "\n";

    std::cout << "Length of side B: ";
    std::cin >> b;
    std::cout << "\n";

    float c;
    c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "The hypotenuse of this triangle is " << c;
    return 0;
}