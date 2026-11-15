#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, section;
    int age, semester;
    float cgpa;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your CGPA: ";
    cin >> cgpa;

    cout << "Enter your semester: ";
    cin >> semester;

    cout << "Enter your section: ";
    cin >> section;

    cout << "\nMy name is " << name << ". I am " << age << " years old, my CGPA is " << cgpa << ", I am studying in Semester " << semester << ", Section " << section << ".";

    return 0;
}

