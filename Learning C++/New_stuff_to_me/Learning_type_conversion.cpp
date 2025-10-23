#include <iostream>

int main() {

    int x = 3.14; //Will be trunkated or something, and gets converted to 3

    float y = (int) 3.156; //Turns 3.156 into a int, causing it to be trunkated (Doesn't work when turning int into float/double)
    //This is an explicit conversion, being manual


    char letter = 100; //Turns the int into the ASCII equivilant, being d. This is an implicit coversion, being automatic
  
    
    std::cout << x << "\n";

    std::cout << y << std::endl;

    std::cout << letter;
    
    return 0;
}