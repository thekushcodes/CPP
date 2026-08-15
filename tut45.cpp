#include <iostream>
using namespace std;

// Code Example Demonstrating Virtual Base Class in C++
// In this lecture, the format of class is going to be like - [ Student -> (Test, Sports) -> Result ]

class Student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void print_number(void)
    {
        cout << "Your roll number is " << roll_no << endl;
    }
};

class Test : virtual public Student
{
protected:
    int maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks(void)
    {
        // Trick to use cout:
        cout << "Your result is:" << endl
             << "Maths -> " << maths << endl
             << "Physics -> " << physics << endl;
    }
};

class Sports : virtual public Student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score(void)
    {
        cout << "Your PT score is " << score << endl;
    }
};

class Result : public Test, public Sports
{
private:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout << "Your total score is " << total << endl;
    }
};

int main()
{
    Result harry;
    harry.set_number(1020);
    harry.set_marks(78.9, 88.7);
    harry.set_score(9);
    harry.display();
    return 0;
}