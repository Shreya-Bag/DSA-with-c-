#include<iostream>
using namespace std;

int main(){
    
//Patern printing 
/*
    int num;
    cout<<"Enter number of rows: ";
    cin>>num;

    for(int row=1;row<=num;row++){

        for(int col=1;col<=num-row;col++){
            cout<<" ";
        }
        for(int col=1;col<=2*row-1;col++){
            cout<<"*";
        }
        cout<<endl;
    }
*/
/*
    int num;
    cout<<"Enter number of rows: ";
    cin>>num;

    for(int row=1;row<=num;row++){

        for(int col=1;col<=num-row;col++){
            cout<<" ";
        }
        for(int col=1;col<=row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
*/

    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int row=1;row<=n;row++){
        for(int col=1;col<=row;col++)
            cout<<"*";
        for(int col=1;col<=2*n-2*row;col++)
            cout<<" ";
        for(int col=1;col<=row;col++)
            cout<<"*";
        cout<<endl;
    }
    for(int row=1;row<=n-1;row++){
        for(int col=1;col<=n-row;col++)
            cout<<"*";
        for(int col=1;col<=2*row;col++)
            cout<<" ";
        for(int col=1;col<=n-row;col++)
            cout<<"*";
        cout<<endl;
    }

//DIGIT FINDING
//METHOD 1
/*
    int num;
    cout<<"Enter number: ";
    cin>>num;
    int devider =10;
    int digit=1;
    for(int i=1;i>0;i++){
        if(num/devider==0){
            cout<<"Number of digit is: "<<digit;
            return 0;
        }
        devider*=10;
        digit++;
    }
*/
//METHOD 2
/*
    int n;
    cout<<"Enter number : ";
    cin>>n;
    int digit=0;
    while(n){
        digit++;
        n/=10;
    }
    cout<<"Number of digit is: "<<digit;
 */
//reversed digit
/* int n;
    cout<<"Enter number : ";
    cin>>n;
    int sum=0;
    while(n){
        int digit=n%10;
        sum=sum*10+digit;
        n=n/10;
    }
    cout<<"Reversed number is : "<<sum;
 */
//Pallindrome number-HW
/*
    int n;
    cout<<"Enter number : ";
    cin>>n;
    int num=n;
    int sum=0;
    while(n){
        int digit=n%10;
        sum=sum*10+digit;
        n=n/10;
    }
    if(sum==num)
        cout<<"YES";
    else
        cout<<"No";
*/
//HOME WORK
//Pattern Printing 
/*
    int n;
    cout<<"Enter number of row: ";
    cin>>n;
    for(int row=1;row<=n;row++){
        for(int col=1;col<=row-1;col++)
            cout<<" ";
        for(int col=1;col<=n-row+1;col++)
            cout<<"* ";

        cout<<endl;
    }
*/
/*
    int n;
    cout<<"Enter number of row: ";
    cin>>n;
    for(int row=1;row<=n;row++){
        for(int col=1;col<=row-1;col++)
            cout<<" ";
        for(int col=1;col<=(n-row)*2+1;col++)
            cout<<"*";

        cout<<endl;
    }
*/  
    
    return 0;


}