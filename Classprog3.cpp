#include<iostream>
using namespace std;
class car{
	public :
		string modelname,fueltype,transmission;
		float price,tank,mileage;
		int seat;
		char airbags;

	void getdata(){
		cout<<"Enter Model Name         : ";
		cin>>modelname;
		cout<<"Enter Fuel Type          :";
		cin>>fueltype;
		cout<<"Enter Transmission Type  :";
        cin>>transmission;
		cout<<"Enter Showroom price     : ";
        cin>>price;
        cout<<"Enter Mileage in km/h    : ";
        cin>>mileage;
	    cout<<"Enter Tank Capacity      :";
        cin>>tank;
        cout<<"Enter seating Capacity   :";
        cin>>seat;
        char airbags;

    do {
        cout << "Enter your choice (y/n): ";
        cin >> airbags;

        if (tolower(airbags) != 'y' && tolower(airbags) != 'n') {
            cout << "Invalid input. Please enter 'y' or 'n' only.\n";
            cin.clear();
        }
    } while (tolower(airbags) != 'y' && tolower(airbags) != 'n');

	}
		void displayCarDetails(){
			cout<<"Model    Fuel    Price    Mileage    Transmission    Tank Capacity    Seating    Airbags"<<endl;
			cout<<"                (LAKHS)   (km/L)                      (LITERS)        Capacity"<<endl;
		}
		void putdata(){
			cout<<modelname<<"     "<<fueltype<<"      "<<price<<"        "<<mileage<<"      "<<transmission<<"     "<<tank<<"      "<<seat<<"      "<<airbags<<endl;
		}

//	void putdata(){
//        cout<<"Car Model Name        :"<<modelname<<endl;
//        cout<<"Car Fuel Type         :"<<fueltype<<endl;
//        cout<<"Car Showrrom Price    :"<<price<<endl;
//        cout<<"Car Mileage           :"<<mileage<<endl;
//        cout<<"Car Transmission Type :"<<transmission<<endl;
//        cout<<"Car Tank Capacity     :"<<tank<<endl;
//        cout<<"Car Seating Capacity  :"<<seat<<endl;
//        cout<<"Car number of Airbags :"<<airbags<<endl<<endl;
//    }
}b;
int main(){
	const int num=10;
	int n,i,n1,mn;
    string ft;
    float pr;
car a[100];
char c;
int kl=0;
	cout<<"Enter How Many Cars : ";
	cin>>n;
	if(n>num){
		cout<<"Invalid!";
	}
	for(i=0;i<n;i++){
		cout<<"Enter Car Details ......"<<endl;
		a[i].getdata();
	}
	//user
	cout<<"WELCOME TO TATA MOTORS "<<endl;
	p:
	cout<<"Get Your Prefered Choice From Below"<<endl;
    cout<<"1)Model name   2)Fuel type   3)Price range"<<endl;
      v:
	cout<<"Enter Your Choice"<<endl;
    cin>>n1;

     i=0;
     switch(n1){
     case 1:
        for(i=0;i<n;i++){
        	cout<< "("<<i+1<<") " <<a[i].modelname<<"  ";
		}
		cout<<"\nEnter Model Name OF Car :";
        cin>>mn;

        b.displayCarDetails();
        for(i=0;i<n;i++)
        {
            if(i==mn-1)
				a[i].putdata();
        }
        break;

    case 2:
        cout<<"Enter a Fuel Type "<<i<<":";
        cin>>ft;
         b.displayCarDetails();
        for(int i=0;i<n;i++)
        {
            if(a[i].fueltype==ft)
                a[i].putdata();
        }
        break;
    case 3:
        cout<<"Enter Price Range  "<<i<<":";
        cin>>pr;
         b.displayCarDetails();
        for(int i=0;i<n;i++)
        {
            if(0<a[i].price<pr)
                a[i].putdata();
        }
        break;
    default:
    	cout<<"Enter Valid Number Please Renter...."<<endl;
    goto v;
    }
r:
cout<<"Do You Want Another then press y or else n :";
cin>>c;
if(c=='Y' || c=='y'){
	goto p;
}
else if(c=='N' || c=='n'){
	cout<<"By Om Choksi 23AIML010"<<endl;
	cout<<"Program Exited........";
}
else{
	cout<<"Invalid! renter.."<<endl;
	goto r;
}


	return 0;
}