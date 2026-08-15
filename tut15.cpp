#include <iostream>
using namespace std;

// *****Function*****->> Top-Down structured programming (Make once, use forever!)

// Function-Prototype
//Look if the function is after main(), then function prototype assures that the function is available.
// SYNTAX: function_name (arguments;)
int sum(int a,int b);

// int sum (int a, b) -->> Wrong, we have to define the type of each argument
// int sum (int, int) -->> Acceptable

void g(void); //means it does not take any value(arguments), nor it returns something.
// The above thing can also be written as: 'void g()'

int main(){ // main() is also a function from which our program starts in C++.
    int num1, num2;
    cout<<"Enter first number: "<<endl;
    cin>>num1;
    cout<<"Enter second number: "<<endl;
    cin>>num2;
    cout<<"The sum is: "<<sum(num1, num2);
    g();

    return 0;
}

int sum(int a, int b){ //This is how we make a function in C++. The variables in parenthesis are arguments.
    int c = a+b;
    return c;
} // If we keep this function after main(), then it gives error. This is handled by *****Function-Prototype*****

void g(){ // This is how we make a void function(It does not return anything). 
    cout<<"Hello world";
}

//Formal parameters->> Parameters which we made in function, like a and b in above case. a,b will take values from actual parameters num1, num2.
//Actual parameters->> Values which are passed in the function, like num1 and num2.