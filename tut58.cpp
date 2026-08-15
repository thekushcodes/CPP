#include <iostream>
using namespace std;

// Abstract Base Class and Pure Virtual Functions in C++

// Abstract Base Class- A class which has at least one virtual function. We make abstract base class because we know that we have to overwrite the pure virtual function in it, just like we did in the previous lecture with the display() functin.

// Pure Virtual Function- It is a virtual function jiska derived class me ek version bnana hi pde, like if we remove display() of like the CWHText class then also the virtual function of base class will run. But if we make a pure virtual function to hme derived class me uska function bnana hi pdega.

// -->> Pure virtual function hm use krte h abstract base class ko bnane ke lie, aur abstract base class ka maksad hi hota h ki hm uss class ko bna rhe h to derive other class.

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() = 0; // This is Pure Virtual function. This is also known as Do-nothing function. This function will not run itself, it just makes it mandatory to make it's version in the derived class.
};

class CWHVideo : public CWH
{
    float videoLength;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
        videoLength = vl;
    }
    void display()
    {
        cout << "This is an amazing video with title- " << title << endl;
        cout << "This video has rating- " << rating << " out of 5 stars." << endl;
        cout << "Length of this video is " << videoLength << " minutes." << endl;
    }
};

class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "This is an amazing text tutorial with title- " << title << endl;
        cout << "This text tutorial has rating- " << rating << " out of 5 stars." << endl;
        cout << "Number of words in this tutorial is " << words << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    // For CWH video:
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djVideo(title, rating, vlen);
    djVideo.display();

    // For CWH text
    title = "Django tutorial text";
    words = 456;
    rating = 4.69;
    CWHText djText(title, rating, words);
    djText.display();

    CWH *tut[2];
    tut[0] = &djVideo;
    tut[1] = &djText;

    tut[0]->display();
    tut[1]->display();

    return 0;
}