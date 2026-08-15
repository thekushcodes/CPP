#include <iostream>
#include <cstring>
using namespace std;

// Virtual Functions Example + Creation Rules in C++

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
    virtual void display() // agr hm yaha virtual nhi lgaenge to last few lines me hm jb display call krrhe through pointers to display() iska call hoga naaki derived clss ka
    {
    }
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

/*
Rules to define Virtual functions:
-> They cannot be static.
-> They are accessed by object pointers.
-> Virtual functions can be a friend of another class.
-> A virtual function in base class might not be used, like in this program.
-> If a virtual function defined in the base class, there is no necessity of redefining it in derived class (agr derived class me nhi mila uss function ka version jise hmne base class me virtual bnaya h to fir wo base class ke function ko hi run krdega).
*/