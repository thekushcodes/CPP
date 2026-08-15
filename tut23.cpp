#include <iostream>
using namespace std;

// Objects Memory Allocation and using Arrays in Classes

// Using arrays inside a class:
class Shop
{
    int itemID[10];
    int itemPrice[10];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void Shop ::setPrice(void)
{
    cout << "Enter ID of your item number " << counter + 1 << endl;
    cin >> itemID[counter];
    cout << "Enter price of item: " << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with ID " << itemID << " is " << itemPrice << endl;
    }
}

int main()
{
    Shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();
    return 0;
}