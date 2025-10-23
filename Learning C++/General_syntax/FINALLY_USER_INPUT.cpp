#include <iostream>

int main() {
    using string = std::string;

    string name;

    int age;
    std::cout << "How old are you?" << "\n";
    std::cin >> age;

    std::cout << "What is your name?" << "\n";
    std::getline(std::cin >> std::ws, name); //Use this function if the input may contain a space (multiple words)
    
    //Make sure to also put in the std::ws, to rid of any white spaces (Regular spaces, \n, \r \v etc.)
    //std::ws is only really needed if there's another input before itself
    
    //cin means character input, meaning that whatever value is type in, will be put into the specified variable

    //Also important, the >> is an extraction, which means it takes the input, as opposed to << which is an insertion


    std::cout << "Hi there, " << name << "!" << "\n"; //Just saying "Hi there," then whatever ya put in
    std::cout << "You are " << age << " years old ";
    return 0;
}