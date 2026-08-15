#include <iostream>
using namespace std;

// Virtual Functions in C++
// Polymorphism-> Objects jo alg-alg classes ko belong kr rhe h wo ek trh ke msg ko respond kre
// virtual bna dene se run time polymorphism implement hota h. it doesnt mean run time pr decision lia jae compiler ke through, it simply means ki jo binding hoti h function ke saath object ka wo run-time pr hota h

/*
Related to previous lecture- dekho agr hmne ek base class ka pointer bnaya jo derived class ke obj ko point kr rha h to hm uss pointer ki madad se kewl base class ke methods ko access kr paenge jaise pichle lect me dekha tha pr agr hm chahe ki base class ka pointer jo derived class ke obj ko point krrha h aur hm chahte h ki uss pointer se derived class ke function ko access krna to wo hm virtual functions ki help se kr skte h

agr hmne base class ke function ki virtual bna dia to derived class ka function run hoga [one thing to keep in mind is ki dono functions of base and derived class ke name same honge] this way we implement run time polymorphism
*/

class BaseClass
{
public:
    int var_base = 1;
    virtual void dispaly() // virtual lga dene se jo default behaviour tha to run base class ka display function wo overwrite ho jaega aur derived class ka display function run hogs
    {
        cout << "1. Displaying base class variable var_base " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived = 2;
    void dispaly()
    {
        cout << "2. Displaying base class variable var_base " << var_base << endl;
        cout << "2. Displaying derived class variable var_derived " << var_derived << endl;
    }
};

int main()
{
    BaseClass *base_class_pointer; // Pointer pointing to object of BaseClass
    BaseClass obj_base;
    DerivedClass obj_derived;

    base_class_pointer = &obj_derived;
    base_class_pointer->dispaly();

    return 0;
}