#include <iostream>
using namespace std;

// Exercise on C++ Inheritence - { Solution is in 'tut47' }

/*
Create two classes:
    1. SimpleCalculator -> Takes input of two numbers using a utility function and performs +, -, *, / and displays the result using another function.
    2. ScientificCalculator -> Takes input of two numbers using a utility function and performs any four scientific operations of your choice and displays the result using another function.

Create another class "HybridCalculator" and inherit it using these two classes:
    Q1. What type of inheritence are you using?
    Q2. Which mode of inheritence are you using?
    Q3. How is code reusability implemented?
Create an object of "HybridCalculator" and dispaly result of simple and scientific calculator.
*/

/*So I have tried a lot to make this calculator using classes but still things are not going right and also the code seems messy and also I have tried to just make it working. This is clearly not a good program but I am deciding here that I will be putting more efforts to improve my coding skills.*/

class SimpleCalculator
{
public:
    void simpleCalc(int a, char o, int b);
};
void SimpleCalculator ::simpleCalc(int a, char o, int b)
{
    if (o == '+')
    {
        cout << "The sum is " << (a + b) << endl;
    }
    else if (o == '-')
    {
        cout << "The difference is " << (a - b) << endl;
    }
    else if (o == '*')
    {
        cout << "The product is " << (a * b) << endl;
    }
    else if (o == '/')
    {
        cout << "The division is " << (a / b) << endl;
    }
    else
    {
        cout << "Invalid input!" << endl;
    }
}
class ScientificCalculator
{

public:
    ScientificCalculator(void)
    {
        cout << "Select preffered operator by entering it's serial number:" << endl;
        cout << "1. Square" << endl;
        cout << "2. sin" << endl;
        cout << "3. cos" << endl;
        cout << "4. tan" << endl;
    }

    int getOperator(void);
    void scientificCalc(void);
    void scientificCalc1(void);
};

int ScientificCalculator ::getOperator(void)
{
    int op;
    cout << "Enter the operator number: " << endl;
    cin >> op;
    return op;
}

void ScientificCalculator ::scientificCalc(void)
{
    float a;
    cout << "Enter the number: " << endl;
    cin >> a;
    if (getOperator() == 1)
    {
        cout << "The square of the number is " << (a * a);
    }
    else
    {
        cout << "Invalid input!" << endl;
    }
}
void ScientificCalculator ::scientificCalc1(void)
{
    float p, b1, h;
    if (getOperator() == 2)
    {
        cout << "Enter Perpendicular and Hypotenuse" << endl;
        cin >> p;
        cin >> h;
        cout << "The sin of the sides is " << (p / h);
    }
    else if (getOperator() == 3)
    {
        cout << "Enter Base and Hypotenuse" << endl;
        cin >> b1;
        cin >> h;
        cout << "The cos of the sides is " << (b1 / h);
    }
    else if (getOperator() == 4)
    {
        cout << "Enter Perpendicular and Base" << endl;
        cin >> p;
        cin >> b1;
        cout << "The cos of the sides is " << (p / b1);
    }
    else
    {
        cout << "Invalid input!" << endl;
    }
}

int main()
{
    SimpleCalculator ob1;
    ob1.simpleCalc(12, '-', 12);

    ScientificCalculator ob2;
    ob2.getOperator();
    ob2.scientificCalc();
    ob2.getOperator();
    ob2.scientificCalc1();
    return 0;
}