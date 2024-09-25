#include<iostream>
using namespace std;

float areacircle(float r){
float pi=3.14;
    float area=pi*r*r;
    return area;
}
float arearectangle(float a,float b){

    float area=a*b;
    return area;
}
float areacube(float a,float b,float c){
    float area=2*(a*b + b*c +c*a);
    return area;
}

int main(){

float r,l,b,h,l1,b1,h1;
cout<<"Enter Radius Of Circle      :";
cin>>r;
float cir=areacircle(r);
cout<<"Area Of Circle Is           :"<<cir<<endl;

cout<<"Enter Length Of Rectangle   :";
cin>>l;
cout<<"Enter broadness Of Rectangle:";
cin>>b;
float rec=arearectangle(l,b);
cout<<"Area Of Rectangle Is        :"<<rec<<endl;

cout<<"Enter Length Of Cube        :";
cin>>l1;
cout<<"Enter broadness Of Cube     :";
cin>>h1;
cout<<"Enter Width Of Cube         :";
cin>>b1;
float cube=areacube(l1,b1,h1);
cout<<"Area of Cube Is :"<<cube<<endl; 

return 0;
}