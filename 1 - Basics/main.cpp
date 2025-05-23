#include <iostream>
#include <vector>
#include <string>
#include <cmath>

//namespace allows for variables to have the same name without major conflicts (very used on big projects)
namespace first {
    int x = 2;
}
namespace second {
    int x = 3;
}

// This is a simple demonstration on typedef
// Used as an "alias"
typedef std::vector<std::pair<std::string, int>> pairlist_t; //Convention is to use _t at the end

// Now we can use this simple line
pairlist_t pairlist;
// Another thing to note is that instead of typedef you should probably use "using" keyword, it works better with templates

int main() {

    // We can use this line to turn the default namespace to the one we want (without the need of "name::variable")
    // using namespace first;
    // std::cout << x << '\n';

    // Also instead of using:
    // using std;
    // This can cause conflicts, the best is to define for each one like:
    // using std::cout;

    // -------------------------------
    std::string name;

    // Setting output
    // std::cout << "What is your name? " << '\n';

    // Getting user input
    // std::cin >> name; //This will get the name but not the spaces
    // std::getline(std::cin, name); // Requires <string>, gets full line
    // We can use std::getline(std::cin, std::ws, name); to prevent '\n' from the user input 

    // Greedings
    // std::cout << "Hello " << name << '\n';

    // -------------------------------

    // Data types

    // Int
    // int x = 1;

    // Double
    // double y = 1.1;

    // Float
    // float z = 1.1f;

    // Boolean
    // bool a = false;

    // Long
    // long b = 1410065408;

    // Char
    // char c = 'c';

    // String
    // std::string d = "Hello world";

    // -------------------------------

    // Const keyword (Uppercase convetion)
    // Becomes read-only (prevents override)
    // const double PI = 3.14;

    // -------------------------------

    // // Print local x, in this case 1
    // std::cout << x << '\n';
    
    // // Print x on the namespace first
    // std::cout << first::x << '\n';

    // // Print x on the namespace second
    // std::cout << second::x << '\n';

    // -------------------------------
    // Simple math functions

    // double x = 1;
    // double y = 2;
    // double result;
    
    // result = std::max(x,y);
    // result = std::min(x,y);
    // result = pow(x,y);
    // result = sqrt(9);

    // std::cout << result << '\n';

    // -------------------------------
}