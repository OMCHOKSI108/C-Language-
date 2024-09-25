#include<iostream>
using namespace std;
int grade(float n){
	if(n<=100){
		if(n>=80){
			cout<<"AA";
			return 10.0;
		}
		else if(n < 80 && n >=73){
			cout<<"AB";
			return 9.0; 
		}
		else if(n<73 && n<=66){
			cout<<"BB";
			return 8.0;
		}
		else if(n<66 && n>=60){
			cout<<"BC";
			return 7.0;
		}
		else if(n<60 && n>=55){
			cout<<"CC";
			return 6.0;
		}
		else if(n<55 && n>=50){
			cout<<"CD";
			return 5.0;
		}
		else if (n<50 && n>=45) {
			cout<<"DD";
			return 4.0;
		}
		else if(n<45 && n>=0){
			cout<<"FF";
			return 0.0;
		}
	}
	else{
		cout<<"Enter Valid Marks";
		return -1.0;
	}
	
	
}
float cal_sgpa(float cr1,float cr2,float cr3,float cg1,float cg2,float cg3){
	float sgpa= ((((cr1+cg1)/2)*5.0) + (((cr2+cg2)/2)*3.0) + (((cr3+cg3)/2)*2.0))/(5.0+3.0+2.0);   
	return sgpa;
}
int main(){
	char id[10],name[30];
	float sem,cpt,cpp,bet,bep,pcp,pct;
    float cr_cp=5;
    float cr_pc=2;
    float cr_be=3;
	 cout<<"Student Id   :";
	 cin>>id;
	 cout<<"Student Name :";
	 cin>>name;
	 cout<<"Semester     :";
	 cin>>sem;
	 cout<<" "<<endl;
	 
	 cout<<"Enter Marks Of Computer Programming         :"<<endl;
	 cout<<" Theory     :";
	 cin>>cpt;
	 cout<<" Practical  :";
	 cin>>cpp;
	 
	 cout<<"Enter Marks Of Basics Of Electronics        :"<<endl;
	 cout<<" Theory     :";
	 cin>>bet;
	 cout<<" Practical  :";
	 cin>>bep;
	 
	 cout<<"Enter Marks Of Professional Communication   :"<<endl;
	 cout<<" Theory     :";
	 cin>>pct;
	 cout<<" Practical  :";
	 cin>>pct;
	 cout<<"                              S Theory              Practical"<<endl;
	 cout<<"Computer Programming           ";
	 int cg1 = grade(cpt);
	 cout<<"                       ";
	 int cg2 = grade(cpp);
	 
	 cout<<"\nBasics Of Electronics          ";
	 int cg3 = grade(bet);
	 cout<<"                       ";
	 int cg4=grade(bep);
	 
	 cout<<"\nPersonal Communication         ";
	 int cg5=grade(bet);
	 cout<<"                       ";
	 int cg6=grade(bep);
	 
	 float sgpa=cal_sgpa(cg1,cg2,cg4,cg3,cg5,cg6);
	 cout<<"\nSGPA : "<<sgpa;
	 cout<<"\nBY OM CHOKSI 23AIML010";
	 return 0;
 
}