#include <iostream>
using namespace std;

// this Pointer in C++

class A
{
    int a;

public:
    A &setData(int a)
    {
        this->a = a;
        return *this;
    }
    /*
        void setData(int a){
            // a = a; // This line will give garbage value if we print a.
            // 'this' is a keyword which is a pointer which points to the object which invokes the member function.
            // this points to the object jisne us member function ko execute kia
            this->a = a;
        }
    */
    void getData()
    {
        cout << "The value of a is " << a << endl;
    }
};

int main()
{
    A a;
    a.setData(4).getData(); // Now after writing the class ka member function in pointer form, we can run getData() right here on the object because now it returns an object
    // a.getData();
    return 0;
}