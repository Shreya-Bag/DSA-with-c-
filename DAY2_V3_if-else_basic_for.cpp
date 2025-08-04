#include<iostream>
using namespace std;

int main(){
    //only for small letters now
    /*
    char c='s';
    if( c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
    cout<<"Vowel";
    else
    cout<<"consonant";
    */
   /*
   int num =90;
   if(num%3==0 && num%5==0)
   cout<<"perfect";
   else
   cout<<"not perfect";
    */
    /*
    int num1,num2;
    cout<<"Enter two numbers for addition : ";
    cin>>num1>>num2;
    int sum;
    sum = num1+num2;
    cout<<"Your sum is: "<<sum;
    */
    /*
    int year;
    cout<<"Enter year: ";
    cin>>year;
    if((year%400==0)||(year%4==0 && year%100!=0))
    cout<<"Leap year";
    else
    cout<<"Not a leap year";
    */

   /*
   int n;
    cout<<"Enter number : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
    */
/*
    for(int num=1;num<=20;num++)//see the bracket use
    if(num%2==0){
    cout<<num<<" ";
    cout<<num*4<<" ";
    }
*/
    int sum =0;
    for(int n=1;n<=10;n++)
    sum=sum +n;
    cout<<sum;
    return 0;
    
}