#include <iostream>
#include <map>
#include <string>
using namespace std;

// Map in C++ STL

// Map is an associative array.
// Stores data in key-value pairs.

int main()
{
    map<string, int> marksMap;
    marksMap["Harry"] = 98;
    marksMap["Jack"] = 59;
    marksMap["Rohan"] = 2;

    marksMap.insert({{"Suzume", 99}, {"Kuro", 90}}); // To insert in a map.

    map<string, int>::iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << "\n"; // (*iter).first will give us the key and (*iter).second will give us the value.
    }

    cout << "The size of marksMap is " << marksMap.size() << endl;
    cout << "The max size of marksMap is " << marksMap.max_size() << endl;
    cout << "marsMap is empty?  " << marksMap.empty() << endl; // This returns 0 which means false, i.e., map is not empty.

    return 0;
}