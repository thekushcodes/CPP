#include <iostream>
using namespace std;

// Member Function Templates and Overloading Template Functions in C++

template <class T>
class Harry
{
public:
    T data;
    Harry(T a)
    {
        data = a;
    }
    void display();
};

template<class T>
void Harry<T>:: display(){
    cout<<data;
}

void func(int a){
    cout<<"I am first function ";
    cout<<a;
}

template<class T>
void func(T a){
    cout<<"I am templatised function ";
    cout<<a;
}

int main()
{
    // Harry<int> h(5);
    // Harry<float> h(5.9);
    Harry<char> h('v');
    cout << h.data << endl;
    h.display();

    cout<<endl;

    func(12); // Which function will be called? Exact match will take highest priority, in this case the first function.
    cout<<endl;
    func('c'); // Here templatised function will be called, obviously i guess.

    return 0;
}