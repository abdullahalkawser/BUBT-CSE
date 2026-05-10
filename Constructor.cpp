#include <iostream>   // Input Output library
using namespace std;

// Student class তৈরি
class Student
{
private:
    int age;

public:

    // ==============================
    // Default Constructor
    // কোনো parameter নেয় না
    // ==============================
    Student()
    {
        age = 0;

        cout << "Default Constructor Called" << endl;
    }

    // ==================================
    // Parameterized Constructor
    // parameter নেয়
    // ==================================
    Student(int a)
    {
        // parameter এর value age এ store হবে
        age = a;

        cout << "Parameterized Constructor Called" << endl;
    }

    // age দেখানোর function
    void show()
    {
        cout << "Age = " << age << endl;
    }
};

int main()
{
    // ==============================
    // Default Constructor Call
    // ==============================
    Student s1;

    s1.show();

    cout << endl;

    // =================================
    // Parameterized Constructor Call
    // =================================
    Student s2(20);

    s2.show();

    return 0;
}