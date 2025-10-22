#include <iostream>

int main() {
    
    const double pi = 3.14159265; //const makes whatever variable it's next to a constant, being unchanging
    pi = 1000000; //Attempts to change the varible, but gets stopped by the almighty const
    float radius;
    radius = 12;
    double circumference = 2 * pi * radius; //Calculates the circumference

    std::cout << "The circumference of this circle is " << circumference << "cm";

    return 0;
}