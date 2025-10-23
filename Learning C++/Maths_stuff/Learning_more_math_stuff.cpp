#include <iostream>
#include <cmath> //hhhhhhhhhhhh more libraries/c-math header file

//This code is extremely bad, go to https://cplusplus.com/reference/cmath/ for math functions

int main() {
    double x = 3.14;
    double y = 5;

    double z;
    z = std::max(x, y); //Decides the greater number between the two given variables

    double a;
    a = std::min(x, y);


    std::cout << "The greater number between x and y, is " << z << "\n" << "\n";
    std::cout << "The lesser number between x and y is " << a << "\n" << "\n";

    x = pow(x, y); //Put the first variable to the power of the second variable
    
    std::cout << "The value of x is now " << x << "\n" << "\n";

    x = sqrt(x); //Square roots the inputted variable

    std::cout << "The value of x is now " << x << "\n" << "\n";

    x = abs(x); //I'm not even sure what this would be useful for, it just shows how far away the number is from 0
    
    std::cout << "The value of x is now " << x << "\n" << "\n";

    x = x + 0.66; //Adding to show the next function

    std::cout << "The value of x is now " << x << "\n" << "\n";

    x = round(x); //Will round to the nearest whole number. ceil(x) will always round up, and floor(x) will always round down

    std::cout << "The value of x is now " << x << "\n" << "\n";


    return 0;
}