#include <iostream>
using namespace std;

// Pointers to Derived Classes in C++

class BaseClass
{
public:
    int var_base;
    void dispaly()
    {
        cout << "Displaying base class variable var_base " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void dispaly()
    {
        cout << "Displaying base class variable var_base " << var_base << endl;
        cout << "Displaying derived class variable var_derived " << var_derived << endl;
    }
};

int main()
{
    BaseClass *base_class_pointer; // Pointer pointing to object of BaseClass
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived; // Base class ke pointer ko point kra dia derived class ke obj se
    // agr hmne base class ke pointer ko derived class ke obj ko point kra dia fir bhi agr hm uss pointer se display function call krenge to base class ka hi run hoga kyuki wo pointer h to ultimately base class ka hi. isse kehte h late binding

    base_class_pointer->var_base = 34;
    base_class_pointer->dispaly(); // base class ka display function run krdega // iss baar binding hui base class ke display function se

    // base_class_pointer->var_derived=34; // ye hm nhi krskte bcz pointer base class ka h aur base class ke methods ko access krega sirf ya jo methods inherit hue h unhe

    DerivedClass *derived_class_pointer;
    derived_class_pointer = &obj_derived; // Derived class ke pointer ko uske object se point kra dia
    derived_class_pointer->var_derived = 24;
    derived_class_pointer->dispaly(); // iss baar binding hui derived class ke display function se

    // ye binding waali baat ya output hm pehle se dekh ke bta skte the lekin fir bhi run time pr hi compiler ne kaun sa display function run hoga wo decide kia

    return 0;
}