#include <iostream>
using namespace std;

// INHERITENCE and it's different types in C++
/*
->> Reusability is a very important feature of OOPs.
->> In C++, we can reuse a class and add additional features to it.
->> Reusing classes saves time and money.
->> Reusing already tested and debugged class will save a lot of effort of developing and debugging the same thing again.
*/

// What is Inheritence in C++
/*
->> The concept of Reusability in C++ is supported using inheritence.
->> We can reuse the properties of an existing class by inheriting from it.
->> The existing class is called the *****Base class*****.
->> The new class which is inherited is called as the *****Derived class*****.
->> There are different types of inheritence in C++.
*/

// Forms of Inheritence in C++
/*
( Single inheritence-> A derived class with only one base class ). Eg. [ A ----> B ], where A is Base class and B is Derived class.

1. Mulitple inheritence-> A derived class with more than one base class. Eg. [ A , B ----> C], multiple parents, single child.

2. Hierarchical inheritence-> Several derived classes from single base class. Eg. [ A ----> B , C], single parent, multiple children.

3. Multilevel inheritence-> Deriving a class from already derived class. Eg [ A ----> B ----> C ].

4- Hybrid inheritence:
    -> It is a combination of multiple and multilevel inheritence.
    -> A class is derived from two classes as in multiple inheritence.
    -> However, one of the parent class is NOT a base class.
    Eg.    [ A ]
        [ B ] [ C ]
           [ D ] // A made B and C and D is made from B anc C, both.
*/

int main()
{

    return 0;
}
// DRY Principle-> Do not Repeat Yourself.