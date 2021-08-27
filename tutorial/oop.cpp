#include <iostream>
#include <fstream> // files...
using namespace std;

class MyClass
{
    char x; // Private by default.

    public: // or private or protected (private, but viewable by children)
        int myNum;
        string myString;

        MyClass(int num);
        /*{
            myNum = num;
        }*/

        void myMethod();

        // Public setter for a private variable
        void setX(char c)
        {
            x = c;
        }

        // Public getter of a private variable
        char getX()
        {
            return x;
        }
};

// Defining functions and the constructor outside of the class itself.
MyClass::MyClass(int num)
{
    myNum = num;
}

void MyClass::myMethod()
{
    cout << "Hello, World!\n";
}

int main()
{
    MyClass myObj(7);

    myObj.myString = "hi hehe";

    cout << myObj.myNum << endl;

    myObj.myMethod();


    ofstream MyFile("file.txt");

    MyFile << "Files can be tricky, but it is fun enough!" << endl;
    MyFile << "line 2 or sumn I guess";

    MyFile.close();

    ifstream MyFile2("file.txt");

    string myText;

    while(getline(MyFile2, myText)) // getline is a part of ifstream only and not fstream!
    {
        cout << myText << endl;
    }

    MyFile2.close();

    try
    {
        int age = 12;
        if(age >= 18)
            cout << "Welcome to the club.";
        else
            throw(age);
    }
    catch(int age)
    {
        cout << "You are underage[" << age << "].\n";
    }

    return 0;
}
