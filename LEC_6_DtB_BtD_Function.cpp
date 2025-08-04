#include<iostream>
using namespace std;
/*
int main(){
/*
    int num;
    cout<<"Enter number : ";
    cin>>num;
    long long sum=0;
    long long mul=1;
    while(num){
        int digit=num%2;
        sum=sum+digit*mul;
        num=num/2;
        mul=mul*10;
    }
    cout<<"Binary is: "<<sum;
*/
//Binary to Decimal
/*
    long long num;
    cout<<"Enter number in Binary : ";
    cin>>num;
    long long sum=0;
    long long mul=1;
    while(num){
        int digit=num%10;
        sum=sum+digit*mul;
        num=num/10;
        mul=mul*2;
    }
    cout<<"Decimal is: "<<sum;
*/
//1's complement-HW
/*
    int num;
    cout<<"Enter number in Binary : ";
    cin>>num;
  
    int sum=0,mul=1;
   
    while(num){
        int rem = num%10;
        rem = rem^1;
        sum=sum+rem*mul;
        mul=mul*10;
        num=num/10;
    }
    cout<<"1's complement is: "<<sum;
*/
//Switch case:
/*
    int num;
    cout<<"Enter number Between 1 - 7 : ";
    cin>>num;
    switch(num){
        case 1:
        cout<<"Monday";
        break;
        case 2:
        cout<<"Tuesday";
        break;
        case 3:
        cout<<"Wednesday";
        break;
        case 4:
        cout<<"Thursday";
        break;
        case 5:
        cout<<"Friday";
        break;
        case 6:
        cout<<"Saturday";
        break;
        case 7:
        cout<<"Sunday";
        break;
        default:
        cout<<"Not a day of week";
        break;
        
    }

*/
/*   

    return 0;

}*/

//Fumction
//HOME WORK
void Factorial(int num){
    long long fact =1;
    for(int i=1;i<=num;i++)
    fact=fact*i;
    cout<<"Factorial is: "<<fact;
    return;
}
void Prime(int num){
    if(num<2){
        cout<<"Not Prime";
        return;
    }
    for(int i=2;i<num;i++){
        if(num%i==0){
            cout<<"Not Prime";
            return;
        }
    }
    cout<<"Prime";
    return;
}
void Average(float x,float y){
    float ans = (x+y)/2;
    cout<<"Average is : "<<ans;
}
int Fibonacci (int n){
    int a=0,b=1;
    if(n==1)
    return a;
    if(n==2)
    return b;
    int c;
    for(int i=3;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return c;

}
int main(){
    /*float num1,num2;
    cout<<"Enter 2 numbers: ";
    cin>>num1>>num2;
    Average(num1,num2);*/
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int ans=Fibonacci(n);
    cout<<"nth Fibonacci term is : "<<ans;

    //Factorial(num);
    //Prime(num);

}