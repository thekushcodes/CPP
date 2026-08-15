#include <iostream>
using namespace std;

// Polymorphism in C++
// Poly-> Many, Morphism-> Forms [ One name, multiple forms ]
// Eg. Function overloading, Operator overloading, Virtual functions, etc.

/* Two types: 
1. Compile-time polymorphism
-> Achieved in two ways-> by Function overloading, Operator overloading.
-> Also called 'Early binding/Static binding'.
-> We/compiler already know/can guess which function is going to be called.

2. Run-time polymorphism
-> Achieved by Virtual functions. When program is actually running, at that time it is decided which function will be called.
-> There is no binding as in function overloading, it is binded which function will be executed by looking at the parameters. Here, the decision is taken during run-time by looking at the type of the pointer. 
-> This does not mean we cannot guess which function will run by looking at the code. It's just that compiler decides during the run-time in this case.
*/

int main(){
    
    return 0;
}