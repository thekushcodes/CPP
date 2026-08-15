#include <iostream>
using namespace std;

// Single Inheritence Deep Dive

class Base{
    int data1; // By default, it is private and not inheritable.
public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};

void Base ::setData(void){
    data1 = 10;
    data2 = 20;
}
int Base ::getData1(){
    return data1;
}
int Base ::getData2(){
    return data2;
}

class Derived : Base // In this case, we are privately deriving this class. So we won't be able to access 'setData()' function in the main program under the 'Derived' class as now it became the private member of 'Derived' class. To solve this problem, we invoked the 'setData()' function in the 'process()' function itself.
{
    int data3;
public:
    void process();
    void display();
};

void Derived ::process(){
    setData();
    data3 = data2 * getData1();
}

void Derived ::display(){
    cout<<"Value of data1 is "<<getData1()<<endl; // We have to bring 'data1' by a function because it is private member of 'Base' class.
    cout<<"Value of data2 is "<<data2<<endl;
    cout<<"Value of data3 is "<<data3<<endl;
}



int main(){
    Derived der;
    // der.setData();
    der.process();
    der.display();
    
    return 0;
}