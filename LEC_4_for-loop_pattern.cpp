#include<iostream>
using namespace std;

int main(){
   /*
    int num ;
    cout<<"Enter number: ";
    cin>>num;
    for(int i=1;i<=10;i++){
        cout<<num<<" * "<<i<<" = "<<num*i<<endl;
    }
*/
//Prime number
   /* int n;
    cout<<"Enter number: ";
    cin>>n;
    if(n<2){
        cout<<"Not a prime number.";
        return 0;
    }
    for(int num=2;num<n-1;num++){
        if(n%num ==0){
            cout<<"Not a prime number";
            return 0;
        }
    }
    cout<<"Prime number";
*/

//nth fibonacci number
/*
    int n;
    cout<<"enter nth number: ";
    cin>>n;
    int first=0,second=1,current;
    if(n==1){
        cout<<first;
    }

    if(n==2){
        cout<<second;

    }
    for(int i=3;i<=n;i++){
        current =first+second;
        first=second;
        second=current;
    }
    cout<<current;

*/

//Pattern printing 

/*
    for(int row =1;row<=5;row++){
        for(int col=1;col<=5;col++)
        cout<<"1 ";
        cout<<endl;
    }
*/

/*
    for(int row =1;row<=5;row++){
        for(int col=1;col<=5;col++)
        cout<<col<<" ";
        cout<<endl;
    }
*/
/*
    for(int row =1;row<=5;row++){
        for(int col=1;col<=5;col++)
        cout<<5-col+1<<" ";
        cout<<endl;
    }
*/
/*
    int count=1;
    for(int row =1;row<=5;row++){
        for(int col=1;col<=5;col++)
        {cout<<count<<" ";
        count++;
        }
        cout<<endl;
    }
*/
/*
    for(int row =1;row<=5;row++){
        for(int col=1;col<=row;col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
*/
/*
for(int row =1;row<=5;row++){
        for(int col=1;col<=row;col++)
        {
            cout<< col<<" ";
        }
        cout<<endl;
    }
*/
/*
    for(int row =1;row<=5;row++){
        char c='a'+row-1;
        for(int col=1;col<=5;col++)
            cout<<c<<" ";
        cout<<endl;
    }
*/
/*
    char c='a';
    for(int row =1;row<=5;row++){
        
        for(int col=1;col<=5;col++)
            cout<<c<<" ";
        c++;
        cout<<endl;
    }

*/
/*
    for(int row=1;row<=5;row++){
        for(int col=1;col<=row;col++){
            char c='a'+col-1;
            cout<<c<<" ";
        }
        cout<<endl;
    }
*/
//Home Work

    for(int row=1;row<=5;row++){
        for(int col=1;col<row;col++){
            cout<<"  ";
        }
        for(int col=row;col<=5;col++){
            cout<<col<<" ";
        }
        cout<<endl;
    }


    return 0;

    }
    
