//program that computes how to dispense change after a purchase
#include<iostream>
using namespace std;

int t,p,b,n1,n2,n3,n4,n5,n6,n7,n8,n9,n10;

int main(){

cout<< "Enter Amount of purchase Rs : "; //prompt the user for the amount of purchase
cin>>t;
cout<<"\n";

cout<<"Enter Amount of cash tendered Rs : ";//prompt the user for the amount of cash tendered
cin>>p;
b=p-t; //Calculating the Balance
cout<<"\n";

cout<<"Balance Rs - "<<b<<endl; //displaying the Balance
cout<<"\n";

n1=b/5000,b=b%5000;
n2=b/2000,b=b%2000;
n3=b/1000,b=b%1000;
n4=b/500,b=b%500;
n5=b/100,b=b%100; //calculating number of notes and coins
n6=b/50,b=b%50;
n7=b/20,b=b%20;
n8=b/10,b=b%10;
n9=b/5,b=b%5;
n10=b/2,b=b%2;

 cout<<"Rs 5000 Notes  - "<<n1<<endl;
cout<<"Rs 2000 Notes  - "<<n2<<endl;
cout<<"Rs 1000 Notes  - "<<n3<<endl;
cout<<"Rs 500 Notes   - "<<n4<<endl;
cout<<"Rs 100 Notes   - "<<n5<<endl; //displaying number of notes and coins
cout<<"Rs 50 Notes    - "<<n6<<endl;
cout<<"Rs 20 Notes    - "<<n7<<endl;
cout<<"Rs 10 Coins    - "<<n8<<endl;
cout<<"RS 5 Coins     - "<<n9<<endl;
cout<<"Rs 2 Coins     - "<<n10<<endl;
cout<<"Rs 1 Coins     - "<<b<<endl;
return 0;
}
