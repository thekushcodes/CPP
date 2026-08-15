#include <iostream>
#include <string>
using namespace std;

// OOPs Recap, Nesting and Member Functions

// OOPs - Classes and Objects
// Class -> Extension of structures.
// Classes can have methods and properties.
// Classes can make few members as private and few as public.
// Structures in C++ are typedef.
// We can declare objects along with the class declaration, like below:
/*class Employee{
}harry, rohan;*/
// "harry.salary = 8" makes no sense if salary is private, i.e., overwite not possible.

// Nesting of Member functions-> Basically like using function inside a function.

class Binary
{
    // private:
    string s; // By default, everything in a class is private, so this is in private even if it is not mentioned.
    // If we put any function declaration in private, then we cannot access it in the main function.

public:
    void read();
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);
};

void Binary ::read(void)
{
    cout << "Enter a binary number: " << endl;
    cin >> s;
}

void Binary ::chk_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect Binary format!" << endl;
            exit(0);
        }
    }
}

void Binary ::ones_compliment(void) // Jaha pr '0' waha '1' and jaha '1' waha '0' kr dega ye function.
{
    chk_bin(); // Here it is used as Nesting of member functions. This way we do not need to declare this 'chk_bin' function in the class
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void Binary ::display(void)
{
    cout << "Displaying your binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    Binary b;
    b.read();
    // b.chk_bin(); // Here we used 'chk_bin()' in the 'ones_complement()' so we do not need to run it here. Also, we can put 'chk_bin()' in private now. When we will keep this in private then we will not be able to run this function here in main().
    b.display();
    b.ones_compliment();
    b.display();
    return 0;
}