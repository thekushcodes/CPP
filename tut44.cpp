#include <iostream>
using namespace std;

// Virtual Base Class in C++
/*Let's say A ---> B, C ---> D
A se bni B aur C fir B aur C se derive hui D
Maan lo A me koi variable h 'a' jo ki B aur C me to derive ho jaega lekin jb hm 'D' derive krenge to usme wo variable 2 baar derive ho jaega, which will cause ambiguity and duplication
Iss lie hm B aur C ko derive krte smay unhe virtaul base class bna denge
Syntax:
class B:virtual public A{};
class C:virtual public A{};
This means that B is derived as Virtual base class with A, mtlb A virtual base class h, not B and C.*/


int main(){
    
    return 0;
}