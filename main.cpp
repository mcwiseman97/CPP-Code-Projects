#include <iostream>

using namespace std;

int main(){
    cout << "What is your name?  ";
    // Strings are characters in the alphabet or that should not be seen as a number
    string name;
    cin >> name;

    cout << "\nWhat is your age?  ";
    // An int, is a number of a whole value such as 1, 2, or 3
    // This is apposed to a float, which is a number with a decimal point such as 1.1, 2.34, or 6.23
    int age;
    cin >> age;

    // This cout combines a normal display message to a console and the variables we pulled in using cin
    cout << "Hello " << name << ", who is " << age << ". I hope you are well!" << endl;
    return 0;
}