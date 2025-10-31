#include <iostream>
#include <cmath>


int main() {
    double first_number;
    double second_number;
    
    std::string choice;


    std::cout << "Please choose one" << '\n';
    std::cout << "Arithmetic Operations (AO), Trigonometry (T), or Inverse Trigonometry (IT)" << '\n' << '\n';
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
        
        std::cout << '\n' << "Length of hypotenuse (LH), exponents (E) Sine (S), Cosine (C), or Tangent (T)" << '\n' << '\n';
        std::cin >> trig_choice;

        if(trig_choice == "LH"){
            float a;
            float b;

            std::cout << "Length of the first side: ";
            std::cin >> a;

            std::cout << "Length of the second side ";
            std::cin >> b;

            const double c = sqrt(pow(a, 2) + pow(b, 2));
            std::cout << "The length of this hypotenuse is " << c;
        }
        
        else if(trig_choice == "S"){
            float angle;

            std::cout << '\n' << "What is your angle? (in degrees): ";
            std::cin >> angle;

            const double sine_angle = sin(angle / 180 * M_PI);

            std::cout << "The sine of " << angle << " is " << sine_angle;
        
        }

        else if(trig_choice == "C"){
            float angle;

            std::cout << '\n' << "What is your angle? (in degrees): ";
            std::cin >> angle;

            const double cosine_angle = cos(angle / 180 * M_PI);

            std::cout << "The cosine of " << angle << " is " << cosine_angle;
        }

        else if(trig_choice == "T"){
            float angle;

            std::cout << '\n' << "What is your angle? (in degrees): ";
            std::cin >> angle;

            const double tangent_angle = tan(angle / 180 * M_PI); ;

            std::cout << "The tangent of " << angle << " is " << tangent_angle;
        }

        else if(trig_choice == "E"){
            float base;
            float exponent;

            std::cout << '\n' << "What is your first number?: ";
            std::cin >> base;

            std::cout << "What is your power to the first number?: " ;
            std::cin >> exponent;

            const double exponentiation = pow(base, exponent);
            std::cout << base << " to the power of " << exponent << " is " << exponentiation;
        }
    }

    else if(choice == "IT") {
        std::string trig_choice;
        
        std::cout << '\n' << "Inverse Sine (S), Inverse Cosine (C), or Inverse Tangent (T)" << '\n' << '\n';
        std::cin >> trig_choice;

    

        if(trig_choice == "S"){
            float length_1;
            float length_2;

            std::cout << '\n' << "What is the length of your opposite? ";
            std::cin >> length_1;
            
            std::cout << '\n' << "What is the length of your hypotenuse ";
            std::cin >> length_2;

            const double thingy = length_1 / length_2;

            const double sine_angle_rad = asin(thingy);
            const double sine_angle_deg = sine_angle_rad * (180 / M_PI);

            std::cout << '\n' << "The angle of this triangle is " << sine_angle_deg;
        
        }

        if(trig_choice == "C"){
            float length_1;
            float length_2;

            std::cout << '\n' << "What is the length of your adjacent? ";
            std::cin >> length_1;
            
            std::cout << '\n' << "What is the length of your hypotenuse? ";
            std::cin >> length_2;

            std::cout << length_2;

            const double thingy = length_1 / length_2;

            const double sine_angle_rad = acos(thingy);
            const double sine_angle_deg = sine_angle_rad * (180 / M_PI);

            std::cout << '\n' << "The angle of this triangle is " << sine_angle_deg;
        
        }

        if(trig_choice == "T"){
            float length_1;
            float length_2;

            std::cout << '\n' << "What is the length of your opposite? ";
            std::cin >> length_1;
            
            std::cout << '\n' << "What is the length of your adjacent ";

            std::cin >> length_2;

            const double thingy = length_1 / length_2;

            const double sine_angle_rad = atan(thingy);
            const double sine_angle_deg = sine_angle_rad * (180 / M_PI);

            std::cout << '\n' << "The angle of this triangle is " << sine_angle_deg;
        
        }
    }
    return 0;

}
