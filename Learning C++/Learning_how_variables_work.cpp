#include <iostream>

int main() { //This starts the code for some reasons
    
    double x; // This creates the variable, and x is the name of it. THIS IS VERY IMPORTANT
    int y;
    x = 5.8; // This makes the value of x 5, giving it a meaning, instead of being an empty integer
    y = 12.1;
    int z = 1; //Turns out you don't need two lines to create the variable & give it a value
    int sum = x + y; // This creates a different variable, which is the sum of x and y. Sum is not a thing in C++, this is a name we made up.

    char grade; //Char means character, and can store a single character, as opposed to a string, which holds multiple (Can hold numbers)
    grade = 'h';

    bool student; //Bool means boolean, and it's quite literally just true or false. It'll print 0 if false, and 1 if true (likes bits)
    student = false;

    std::string address = "123 gregory road"; //Strings are different to everything else, cause it uses STD for some reason or another

    std::cout << x << "\n"; // Prints out x - being 5 - onto the screen. Reminder that you need to do <<
    //after printing x, cause you're printing a string with a variable.

    std::cout << grade << "\n";

    std::cout << student << "\n";

    std::cout << address << std::endl;

    std::cout << sum << std::endl; 

    //All of the stuff above is just printing stuff
    
    return 0; //Ends the program
}
//Little extra stuff, printing an interger with a float related value rounds it down
//Okay, there's both floats and doubles, but doubles can have 15-17 digits, while floats can only have 6-9 digits (hehehe), so use floats unless it's really long
//There's two ways to make a variable, you can do int x, seperate the line, then do x = 5, or you can make it one line, and make it 
//int x = 5. Drawback to the one line method, is that you can't change it later. I believe this works for all variables