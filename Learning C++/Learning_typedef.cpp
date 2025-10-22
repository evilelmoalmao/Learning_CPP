#include <iostream>
#include <vector> //Idk why the fuck he has vectors in the tutorial, i'm just following along for the instructions

typedef std::vector<std::pair<std::string, int>> pairlist_alias; //Allows you to change the name of data types, like int, string, or even boolean
typedef std::string string;
typedef bool boo; //This stuff can be replaced by the using function, as will be shown

using flt = double; //Reassigns the name of double to flt

string name = "johnathan ";

boo light = false;

int main() {
    flt price;
    price = 14.99;

    using std::cout;
    cout << name ;
    pairlist_alias pairlist;
    cout << light << "\n";

    cout << "$" << price;
    return 0;
}