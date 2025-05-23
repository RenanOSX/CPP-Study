#include <iostream>
#include <limits>
#include <cmath>

using std::cout;
using std::cin;

int main() {

    int op;
    double x;
    double y;
    double result;

    cout << "======== CALCULATOR ========" << '\n';
    do {
        cout << "Please select the operation (1 = +; 2 = -; 3 = *; 4 = %; 5 = /): " << '\n';
        cin >> op;
        cin.clear();
        cin.ignore();
    } while (std::cin.fail() || op < 1 || op > 5);

    do {
    cout << "Value of X: " << '\n';
    cin >> x;
    cin.clear();
    cin.ignore();
    } while (x < std::numeric_limits<int>::min() || x > std::numeric_limits<int>::max() || std::cin.fail());

    do {
        cout << "Value of Y: " << '\n';
        cin >> y;
        cin.clear();
        cin.ignore();
    } while (y < std::numeric_limits<int>::min() || y > std::numeric_limits<int>::max() || std::cin.fail());

    switch (op)
    {
    case 1:
        result = x + y;
        break;
    case 2:
        result = x - y;
        break;
    case 3:
        result = x * y;
        break;
    case 4:
        result = std::fmod(x,y);
        break;
    case 5:
        result = x / y;
        break;
    default:
        cout << "Bad input" << '\n';
        break;
    }

    cout << "Result: " << result << '\n';
    cout << "============================" << '\n';
}