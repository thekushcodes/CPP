#include <iostream>
using namespace std;

//In this lecture, I was taught to *****MAKE SNIPPETS like the 'boilerplate'
int main(){

    //break sends the code outside the loop, like, when condition meets and break triggers, it states that get out of the loop and the loop breaks without further iteration!!
    for (int i = 0; i < 4; i++)
    {
        cout<<i<<endl;
        if (i==2){
            break;
        }
    }

    //continue sends the code back to the loop, like, when condition meets and continue triggers, it states that go to the loop back again without running the code below it!!
    for (int i = 0; i < 4; i++)
    {
        if (i==2){
            continue;
        }
        cout<<i<<endl;
    }
    
    return 0;
}