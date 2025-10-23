#include <iostream>

namespace one { //This allows for two variables to have the same name, but be differentiated by their group
    int x = 12; // Like a black Peter, and a white Peter. one::x is 12, while x is 0
}

namespace two {
    int x = 14;
}

int main(){
    using namespace one; //This would change all instances of x, to the one::x (If not already specified)
    using std::cout; //This will change all outputs, to not require the std:: at the start
    using std::string; //This will do the same, but with strings

    string preference = "boys & girls";


    cout << x << "\n"; //Makes sure to put the namespace name, then seperate the variable name with ::
    cout << preference;

    return 0;
}