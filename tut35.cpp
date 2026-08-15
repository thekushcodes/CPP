#include <iostream>
using namespace std;

// Destructors in C++
// Destructors neither takes any value nor it returns a value.
int count = 0;

class num
{
public:
    num()
    {
        count++;
        cout << "This is the time when constructor is called for object number " << count << endl;
    }

    ~num() // This is a destructor.
    {
        cout << "This is the time when my destructor is called for object number " << count << endl;
        count--;
    }
};

int main()
{
    cout << "We are inside our main function" << endl;

    cout << "Creating first object n1" << endl;
    num n1;

    // Below one is a Block. The scope of the elements in a block is inside the block. The elements made in a block will be destroyed as soon as the block is exited.
    {
        cout << "Entering this block." << endl;
        cout << "Creating two more objects" << endl;
        num n2, n3;
        cout << "Exiting this block." << endl;
    }
    
    cout << "Back to main." << endl;

    return 0;
}