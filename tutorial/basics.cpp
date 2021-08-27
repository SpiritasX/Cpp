#include <iostream>
#include <string> // Needed for string type since it's not built-in.
#include <cmath> // Math lib...
using namespace std; // Avoids the need for typing stuff like std::cout...

void func(int num = 5); // If an argument not given, default value is 5.
// Function overloading...
int zbir(int a, int b);
double zbir(double a, double b);

int main()
{
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

    string food = "Burger";
    string &meal = food;

    cout << meal << endl;
    cout << &food << endl;

    string* ptr = &food;

    cout << *ptr << endl;
    func(3);
    func(); // Parameter takes the default value.
    func(12);

    cout << zbir(2, 5) << " " << zbir(1.3, 6.21) << endl;
    return 0;
}

void func(int num)
{
    cout << num << endl;
}

int zbir(int a, int b)
{
    return a + b;
}

double zbir(double a, double b)
{
    return a + b;
}
