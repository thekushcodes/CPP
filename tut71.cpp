#include <iostream>
#include <vector> // To include appropriate classes
// Array cannot be resized, which is automatically managed in vectors
// Surf cppreference website for all such methods with details.
using namespace std;

// Vectors in C++ STL

template <class T>
void display(vector<T> &v)
{
    cout << "Displaying this vector" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        // cout<<v[i]<<" ";
        cout << v.at(i) << " ";
    }
    cout << endl;
}

int main()
{
    // Ways to create a vector are shown in: vec1, vec2, vec3, vec4
    vector<int> vec1; // Made a zero-length vector
    int element, size=4;
    // cout<<"Enter the size of vector "<<endl;
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<"Enter an element to add to this vector: ";
    //     cin>>element;
    //     vec1.push_back(element);
    // }
    // vec1.pop_back(); // Removes last added element
    // display(vec1);
    // vector<int> :: iterator iter = vec1.begin(); // Iterator is pointing to the 1st element of vector.
    // vec1.insert(iter+1, 566); // This method will take an iterator(it's like a pointer), and an element. Here, it will insert '566' at 1st position because we made the iterator point in the beginning.
    // We can also add element to the second position like- vec1.insert(iter+1, 567);
    // Also, if we want to insert multiple copies of an element, we can do it this way-> vec1.insert(iter+1, 5, 567); This will add 567 five times starting from 2nd position.
    
    // vector<char> vec2(4); // Char Vector with 4 elements
    // vec2.push_back('5');
    // display(vec2);

    // vector<char> vec3(vec2); // 4 element Char vector- Vec3 made from vec2
    // display(vec3);

    vector<int> vec4(4, 12); // 6-element vector of 3s
    display(vec4);
    cout<<"Size of vec4 is "<<vec4.size();

    return 0;
}