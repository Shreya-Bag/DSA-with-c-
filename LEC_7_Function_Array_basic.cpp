#include<iostream>
using namespace std;
 void Print(int num=5){
    cout<<num<<endl;
 }
void Add(int n1,int n2){
   cout<<n1+n2<<" ";
   return;
}
void Add(int n1,int n2,int n3){
   cout<<n1+n2+n3<<" ";
   return;
}

 int main(){
    /*int num;
    cin>>num;
    Print(num);
    Print();   Default parameter use*/

// Function Overloading
   Add(5,5);
   Add(2,3,10);

   return 0;
 }
 /*
 int main(){
 
    int arr[5];
    cout<<"Enter 5 number to add : ";
    for(int i=0;i<5;i++)
    cin>>arr[i];
    int sum=0;
    for(int i=0;i<5;i++)
    sum=sum+arr[i];
    cout<<"sum is: "<<sum;




 }*/