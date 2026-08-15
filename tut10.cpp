#include <iostream>
using namespace std;

int main(){
    /*Loops is C++
    There are 3 types of loops in C++:
    1- For loop
    2- While loop
    3- Do-While loop
    */

    //++++++++++For loop++++++++++
    /*Syntax of For loop:
    for(initialization; condition; updation)
    {
        loop body(C++ code);
    }
    */
    for (int i = 0; i <= 4; i++) //Print 0 to 4  // Here I can make an infinite for loop if the condition is always true, like 34<40 or anything
    {
        cout<<i<<endl;
    }

    //++++++++++While loop+++++++++++
    /*Syntax of While loop:
    while(condition):
    {
        C++ statements;
    }
    */
   int i = 0;
   while (i <= 10) // Print 0 to 10
   {
    cout<<i<<endl;
    i++;
   }

    //++++++++++Do-While loop+++++++++++
    /*Syntax of Do-While loop:
    do
   {
    code
   } while (condition);
    */
   //******The use of this loop is that even if the condition is false, the loop still works for one time.
   do
   {
    cout<<i<<endl;
    i++;
   } while (i<=20);   

    return 0;
}