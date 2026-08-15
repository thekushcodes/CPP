#include <iostream>
using namespace std;

//*****POINTER***** ->> It is a data type, a type of variable, which holds the address of other data types.
int main(){
    int a = 3;
    int * b = &a; //Ek aisa variable which holds address of variable a. //Jb hm b ko print krenge, it will print address of a in RAM

    // & ->> Address of operator
    cout<<"The address of a is: "<<b<<endl;
    cout<<"The address of a is: "<<&a<<endl; // b and &a - both are same as we have assigned b = &a above.
    
    // * ->> Deferencing operator ->> Kind of means 'value at' 
    cout<<"THe value at address b is: "<<*b<<endl;

    //The below code is *****Pointer to pointer***** ,i.e., it stores the address of another pointer.
    int** c = &b;
    cout<<"The address of b is: "<<c<<endl; // c = &b ,i.e., c is the address of b.
    cout<<"The value at address c is: "<<*c<<endl;
    cout<<"The value at address value_at(value_at(c)) is: "<<**c<<endl;


    return 0;
}