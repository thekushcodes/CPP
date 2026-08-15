#include <iostream>
using namespace std;

// Pointers to Objects and Arrow Operator in C++

class Complex{
    int real, imaginary;
public:
    void getData(){
        cout<<"The real part is "<<real<<endl;
        cout<<"The real imaginary is "<<imaginary<<endl;
    }

    void setData(int a, int b){
        real = a;
        imaginary = b;
    }
};

int main(){
    // Complex c1;
    // Complex *ptr = &c1;
    // c1.setData(1,54);
    // c1.getData();

    Complex *ptr = new Complex;

    // Arrow operator:

    // (*ptr).setData(1,54); // Accessing the object's public function through pointers.
    ptr->setData(1,54); // Arrow operator means dereference 'ptr' and run the function stated next, here the function is setData(). This is just same as the above line, just a different way of writing.

    // (*ptr).getData(); // Parenthesis is important.
    ptr->getData(); // This is just same as the above line, just a different way of writing.
    
    // Array of objects:
    Complex *ptr1 = new Complex[4];
    ptr1->setData(1,4);
    ptr1->getData();
    
    return 0;
}