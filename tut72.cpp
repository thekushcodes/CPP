#include <iostream>
#include <list>
using namespace std;

// List in C++ STL

// List is also a container to store data. It is a bi-directional linear list which is efficient in insertion and deletion.
// List is used when we have to insert and delete in between any two elements frequently.
// Look, array stores data in contiguous blocks of memory like if we store [1,2,3] then memory given will be a, a+4, a+8. So if we insert or delete any element then all the elements will be shifted in the memory. Arrays are faster for access btw.

void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++) // lst.end() tells if the list has come to the end.
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    list<int> list1; // Makes a list of zero length
    list1.push_back(5);
    list1.push_back(6);
    list1.push_back(7);
    list1.push_back(8);
    list1.push_back(9);
    display(list1);
    // list1.pop_front(); // Pops from front.
    // display(list1);
    // list1.remove(6); // Pops all the occurences of the given value
    // display(list1);

    // We used push_back in list1 because it has size 0 so we added elements in it, but in list2, it has already size 3, means this list has 3 elements but those elements has no value so we just have to assign values.

    list<int> list2(3); // Makes an empty list of size 3
    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 6;
    iter++;
    *iter = 9;
    iter++;
    display(list2);

    // Sorting a list
    // list2.sort();
    // display(list2);

    // Merging two lists
    list1.merge(list2);
    display(list1);

    // Reversing a list
    list1.reverse();
    display(list1);

    return 0;
}