#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

int main() {

    double a;
    double b;

    cout << "Please type a value for A: " << '\n';
    cin >> a;

    cout << "Please type a value for B: " << '\n';
    cin >> b;

    double result = sqrt((pow(a,2)+pow(b,2)));

    cout << "Side C is: " << result;

}