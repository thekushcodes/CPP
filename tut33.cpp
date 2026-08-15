#include <iostream>
using namespace std;

// Dynamic initialization of Objects using Constructors
// This means that the objects will be made dynamically during runtime (like by taking user input).

class BankDeposit
{
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    BankDeposit() {} // If we do not make this empty type constructor, it will throw an error. We made this constructor because even if we do not give values of p, y, r then also program will run.
    BankDeposit(int p, int y, float r); // p-> Principal, y-> Years, r-> Interest
    // r can be value like 0.04 (percent value/100)

    BankDeposit(int p, int y, int r);
    // r can be value like 14 (percent value only)

    void show();
};

BankDeposit ::BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;

    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate); // Return value will be (1+r) times after a year, like 1.04 times the principal amount.
    }
}

BankDeposit ::BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r) / 100; // Here we just converted the percentage value into decimal value, i.e., we divided it by 100.

    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate); // Return value will be (1+r) times after a year, like 1.04 times the principal amount.
    }
}

void BankDeposit ::show()
{
    cout << endl
         << "Principal amount was " << principal << endl
         << "Return value after " << years << " years is " << returnValue<<endl;
}

int main()
{
    BankDeposit bd1, bd2, bd3;
    int p, y;
    float r; // Rate in decimal form.
    int R; // Rate in percent form.

    // bd3.show();

    cout<<"Enter the value of p, y and r: "<<endl;
    cin>>p>>y>>r;
    bd1 = BankDeposit(p,y,r);
    bd1.show();


    cout<<"Enter the value of p, y and R: "<<endl;
    cin>>p>>y>>R;
    bd2 = BankDeposit(p,y,R);
    bd2.show();

    return 0;
}