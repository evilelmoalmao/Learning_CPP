#include <iostream>

int main () {
    
    int age;

    std::cout << "How old are you? " << "\n";
    std::cin >> age;

    if(age >= 18){
        std::cout << "You may access this website" ; // Pretty simple, just asks in variable is equal to or more than 16
    }
    
    else if (age < 0){
        std::cout << "How... How are you accessing this?"; //Runs if the previous wasn't, and is itself met 
    }

    else{
        std::cout << "Fuck off, youngling" ; //Runs if the previously stated requirement isn't met
    }

    return 0;
}