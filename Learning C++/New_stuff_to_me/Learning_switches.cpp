#include <iostream>

int main() {
    int month;

    std::cout << "Enter a number (1-12) " << "\n";
    std::cin >> month;

    //Instead of doing a bunch of else if statements, we'll use a switch

    switch(month){
        case 1: //Starts the first possibility
            std::cout << "The current month is january";
            break; // Breaks the current possibility

        case 2: 
            std::cout << "The current month is feburary";
            break;
        case 3: 
            std::cout << "The current month is march";
            break;
        case 4: 
            std::cout << "The current month is april";
            break;
        case 5: 
            std::cout << "The current month is may";
            break;
        case 6: 
            std::cout << "The current month is june";
            break;
        case 7: 
            std::cout << "The current month is july";
            break;
        case 8: 
            std::cout << "The current month is august"; 
            break;
        case 9: 
            std::cout << "The current month is september";
            break;
        case 10: 
            std::cout << "The current month is october";
            break;
        case 11: 
            std::cout << "The current month is november";
            break;
        case 12: 
            std::cout << "The current month is december ";
            break;
        
            default: // Basically an else statement
            std::cout << "Please type a number between 1 and 12";
    }
    
    return 0;
}