#include <iostream>
#include <string> // Needed for string type since it's not built-in.
#include <cmath> // Math lib...
using namespace std; // Avoids the need for typing stuff like std::cout...

int main() {
    // cout test
    cout << "Hello, World!\n";

    int x = 5;
    double pi = 3.14;
    // endl same as '\n'
    cout << pi + x << endl;
    cout << pi << " " << x << endl;
    // string test
    string temp;
    // cin test
    cin >> temp;
    cout << temp << endl;
    // powers of 10
    int a = 5E8;

    cout << a << endl;

    string firstName = "Dejan";
    string lastName = "Bogovac";

    cout << firstName.append(" " + lastName) + "\n"; // append() is much faster than '+'.
    cout << firstName.length() << endl; // length() or size()!

    getline(cin, temp); // cin considers whitespace characters as terminating!!!

    cout << temp << endl;

    return 0;
}
