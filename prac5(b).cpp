#include<iostream>
#include<string.h>
using namespace std;
int i=0;
class circle
{
    private:
    float r;
   
    public:
        circle()
        {
            ++i;
            r=1; 
        }
        circle(float x){
        r=x;
        i++;
        }
        circle(class circle &circlex)
        {
            i++;
            r=circlex.r;
        }
        void display()
        {
            cout<<"Circle with radius "<<r<<" has area "<<3.148*r*r<<endl;
        }
        ~circle()
        {
            cout<<"One Object is deleted\nTotal Active Objects are "<<--i<<endl;
            
        }
};
int main()
{
    cout<<"static memory........ "<<endl;    
    class circle x;
    x.display();
    class circle y(20);
    y.display();
    class circle z(x);
    z.display();
    
    return 0;
}