#include<bits/stdc++.h>
using namespace std;
class circle
{

    float radius;
    static int total;
public :
    circle()
    {
        radius=1.0;
        total++;
    }
     circle(float x)
    {
        radius=x;
        total++;
    }
    circle(circle &t)
    {
        radius=t.radius;
        total++;
    }
    ~circle()
    {
        cout<<"one object is deleted "<<endl<<" total active objects are "<<--total<<endl;
    }
    void display()
    {
        cout<<"circle with radius "<<radius<<" has area  "<<3.148*radius*radius<<endl;
    }
};

int circle :: total =-1;
 int main()
 {
     circle* d1= new circle;
     circle* d2= new circle(20);
     circle* d3= new circle(*d1);
     d1->display();
     d2->display();
     delete d1;
     delete d2;
     d3->display();
     delete d3;
 }