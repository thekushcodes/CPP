#include <iostream>
#include <cmath> // ***************
using namespace std;

// Solution to Exercise on Inheritence

/*
Create two classes:
    1. SimpleCalculator -> Takes input of two numbers using a utility function and performs +, -, *, / and displays the result using another function.
    2. ScientificCalculator -> Takes input of two numbers using a utility function and performs any four scientific operations of your choice and displays the result using another function.

Create another class "HybridCalculator" and inherit it using these two classes:
    Q1. What type of inheritence are you using? ----> Multiple Inheritence.
    Q2. Which mode of inheritence are you using? ----> public SimpleCalculator, public ScientificCalculator.
    Q3. How is code reusability implemented? ----> Made HybridCalculator using SimpleCalculator and ScientificCalculator.
Create an object of "HybridCalculator" and dispaly result of simple and scientific calculator.
*/

class SimpleCalculator
{
    int a, b;

public:
    void getDataSimple()
    {
        cout << "Enter the value of a " << endl;
        cin >> a;
        cout << "Enter the value of b " << endl;
        cin >> b;
    }
    void performOperationsSimple()
    {
        cout << "The value of a + b is " << (a + b) << endl;
        cout << "The value of a - b is " << (a - b) << endl;
        cout << "The value of a * b is " << (a * b) << endl;
        cout << "The value of a / b is " << (a / b) << endl;
    }
};

class ScientificCalculator
{
    int a, b;

public:
    void getDataScientific()
    {
        cout << "Enter the value of a " << endl;
        cin >> a;
        cout << "Enter the value of b " << endl;
        cin >> b;
    }
    void performOperationsScientific()
    {
        cout << "The value of cos(a) is " << cos(a) << endl;
        cout << "The value of sin(a) is " << sin(a) << endl;
        cout << "The value of exp(a) is " << exp(a) << endl;
        cout << "The value of tan(a) is " << tan(a) << endl;

        cout << "The value of cos(b) is " << cos(b) << endl;
        cout << "The value of sin(b) is " << sin(b) << endl;
        cout << "The value of exp(b) is " << exp(b) << endl;
        cout << "The value of tan(b) is " << tan(b) << endl;
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
};
int main()
{
    HybridCalculator calc;
    calc.getDataScientific();
    calc.performOperationsScientific();

    calc.getDataSimple();
    calc.performOperationsSimple();
    return 0;
}