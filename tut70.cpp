#include <iostream>
using namespace std;

// Containers in C++ STL

/*
STL = Containers + Algorithms + Iterators

Types of Containers:
1. Sequence containers - Stores data in linear fashion. Eg. Vectors, List, Dequeue(Double ended queue).
2. Associative containers - Direct access of data. Stores data in a tree-like structure. Eg. Set, Multi-Set, Dictionary, Map, Multi-Map. For faster data fetching (searching, deleting, etc).
3. Derived containers - Can be derived from sequence or associative containers. These are good for real-world modelling. Eg. Stack(LIFO), Queue(FIFO), Priority-Queue

When to use which?
1. Sequence container
-->>Vector-> Random access is fast. Insertion/deletion in middle is slow. Insertion at the end is fast. It is implemented as an array.
-->> List-> Random access is slow. Insertion in middle is fast.

2. Associative container - All operations are fast except random access.

3. Derived container - Analysis of each derived container is done separately. So here, it depends.
*/

int main()
{
    return 0;
}