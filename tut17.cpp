#include <iostream>
using namespace std;

// Inline functions, Default arguments and Constant arguments

// Inline functions->> It reduces process time as it takes when we do all the things in traditional way.
// This is done by using 'inline' keyword before function as below. This way, the function code gets transferred to the function call directly while compilation.
// We only make those functions inline which takes very less lines of code, otherwise the overall concept of function will shatter as it was a code which was written once and used several times. Bigger code is not put in inline because it will take a lot of memory and create mess instead of saving time.
// When to not use inline functions->> During recursions, functions having static variables, 

inline int product(int a, int b){
    return a*b;
}

// int product(int a, int b){

//     static int c = 0; // This will be executed only once, next time it will retain value of c.
//     // static means the variable will retain the value, i.e., each time the compiler will return to 'c' it will retain its value, like c was 0 then next time it became 1 and so on.
//     c = c + 1;
//     return a*b+c;
// }

float moneyRecieved(int currentMoney, float factor=1.04){ // We gave default argument // Default arguments are written in the end.
    return currentMoney * factor;
}

// Constant argument
int strlen(const char *p){}// Here const makes sure that value of p will not change anyhow. // This is significant when we pass arguments as reference.

int main(){
    // int a,b;
    // cout<<"Enter the values of a and b: "<<endl;
    // cin>>a>>b;
    // cout<<"The product of a and b is: "<<product(a,b)<<endl;
    // cout<<"The product of a and b is: "<<product(a,b)<<endl;

    int money = 100000;
    cout<<"If you have "<<money<<", you will get: "<<moneyRecieved(money)<<endl;
    cout<<"For VIP: If you have "<<money<<", you will get: "<<moneyRecieved(money, 1.1)<<endl;
    return 0;
}