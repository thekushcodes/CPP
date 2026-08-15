#include <iostream>
using namespace std;

// Call by value
//Call by reference

int sum(int a, int b){
    int c = a + b;
    return c;
}

//This will not swap x and y
void swap(int a, int b){
    int temp = a;  // temp = 4, a = 4, b = 5 // temp me a ki vlue store ho gyi
    a = b;  // temp = 4, a = b = 5, b = 5 // a ki value change ho gyi which is equal to b
    b = temp; // temp = 4, a = 5, b = 4 // b ki value change ho gyi which is equal to temp(original a)
}


//This(below) is call by reference using pointers.
//This is the actual method to swap values of x and y.
void swapPointer(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

//Call by reference using C++ reference variables
void swapReferenceVar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int x=4, y=5;
    cout<<"The value of x is: "<<x<<endl;
    cout<<"The value of y is: "<<y<<endl;

    // swap(x,y); //Didn't work because it just created copies of x and y in the function.
    // swapPointer(&x, &y); // This will swap x and y using pointer reference.
    swapReferenceVar(x, y); // This will swap x and y using reference variables.

    cout<<"The value of x is: "<<x<<endl;
    cout<<"The value of y is: "<<y<<endl;

    return 0;
}