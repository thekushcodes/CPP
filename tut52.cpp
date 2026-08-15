#include <iostream>
using namespace std;

// Array of Objects using Pointers in C++

class ShopItem
{
    int id;
    float price;

public:
    void setData(int a, int b)
    {
        id = a;
        price = b;
    }
    void getData(void) // Point- '(void)' likhne ki jgah kewl () rkhte to bhi same hi h
    {
        cout << "The code of this item is " << id << endl;
        cout << "The price of this item is " << price << endl;
    }
};

int main()
{
    int size = 3;
    int p;
    float q;
    // int *ptr = &size;

    ShopItem *ptr = new ShopItem[size]; // 'Shop *ptr' ek pointer h jo ki store krega 'Shop' obj ka address jo ki dynamically 3 integer store krne ki memory allocate ho jaega jisme pehle block of memory ka address ptr me store ho jaega fir ptr++ krke aage ki memory allocate krte jaega.
    ShopItem *ptrTemp = ptr;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter ID and Price of item " << i + 1 << endl;
        cin >> p >> q;
        // *(ptr).setData(p,q);
        ptr->setData(p, q);
        ptr++;
    }
    for (int i = 0; i < size; i++)
    {
        cout << "Item number: " << i + 1;
        ptrTemp->getData();
        ptrTemp++;
    }

    return 0;
}