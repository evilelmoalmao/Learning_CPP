#include <iostream>

int main() {
    int students = 20;
    students = students + 1; //Adds one onto the original number, can also use students+=1, or students++ if adding 1

    students = students - 2; //Subtracts 2 after adding one, can also use students-=2, or student-- if subtracting 1
    
    students*=2; //I think you get the point

    students/=1.5;

    int remainder = students % 2; // Removes 2 until it goes into negative, where it then stops before it goes to negatives, and show the remainder
    //This can be very useful for seeing if a number is even or odd
    
    std::cout << students << "\n";
    std::cout << remainder;
    return 0;
}
//This all follows basic (BO)(DM)(AS)