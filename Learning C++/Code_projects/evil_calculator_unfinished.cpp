#include <iostream>
#include <cmath>


int main() {
    double first_number;
    double second_number;
    
    std::string choice;


    std::cout << "Please choose one" << '\n';
    std::cout << "Arithmetic operations (AO), or trigonometry (T)" << '\n' << '\n';
    std::cin >> choice;

    if(choice == "AO"){
        std::cout << '\n' << "Addition (A), subtraction (S), multiplication (M), or division? (D)"  << '\n' << '\n';

        std::string arithmetic_choice;

        std::cin >> arithmetic_choice;

        if(arithmetic_choice == "A"){
            
            double sum;
            std::cout << "First number: ";
            std::cin >> first_number;

            std::cout << "Second number: ";
            std::cin >> second_number;

            sum = first_number + second_number;

            std::cout << "The sum of " << first_number << " plus " << second_number << " is " << sum;
        }

        else if(arithmetic_choice == "S"){
            double sum;
            std::cout << "First number: ";
            std::cin >> first_number;

            std::cout << "Second number: ";
            std::cin >> second_number;

            sum = first_number - second_number;

            std::cout << "The sum of " << first_number << " minus " << second_number << " is " << sum;
        }
                
        else if(arithmetic_choice == "M"){
            double sum;
            std::cout << "First number: ";
            std::cin >> first_number;

            std::cout << "Second number: ";
            std::cin >> second_number;

            sum = first_number * second_number;

            std::cout << "The sum of " << first_number << " times " << second_number << " is " << sum;
        }

        else if(arithmetic_choice == "D"){
            double sum;
            std::cout << "First number: ";
            std::cin >> first_number;

            std::cout << "Second number: ";
            std::cin >> second_number;

            sum = first_number / second_number;

            std::cout << "The sum of " << first_number << " divided by " << second_number << " is " << sum;
        }
    }
    
    else if(choice == "T") {
        std::string trig_choice;
        
        std::cout << '\n' << "Length of hypotenuse (LH), Sine (S), Cosine (C), or Tangent (T)" << '\n' << '\n';
        std::cin >> trig_choice;

        if(trig_choice == "LH"){
            float a;
            float b;

            std::cout << "Length of the first side: ";
            std::cin >> a;

            std::cout << "Length of the second side ";
            std::cin >> b;

            double c = sqrt(pow(a, 2) + pow(b, 2));
            std::cout << "The length of this hypotenuse is " << c;
        }
        
        else if(trig_choice == "S"){
            float angle;

            std::cout << '\n' << "What is your angle? (in degrees): ";
            std::cin >> angle;

            double sine_angle = sin(angle / 180 * M_PI);

            std::cout << "The sine of " << angle << " is " << sine_angle;
        
        }

        else if(trig_choice == "C"){
            float angle;

            std::cout << '\n' << "What is your angle? (in degrees): ";
            std::cin >> angle;

            double cosine_angle = cos(angle / 180 * M_PI);

            std::cout << "The cosine of " << angle << " is " << cosine_angle;
        }

        else if(trig_choice == "T"){
            float angle;

            std::cout << '\n' << "What is your angle? (in degrees): ";
            std::cin >> angle;

            double tangent_angle = tan(angle / 180 * M_PI); ;

            std::cout << "The tangent of " << angle << " is " << tangent_angle;
        }
    }
    return 0;
}