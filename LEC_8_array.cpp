#include<iostream>
using namespace std;
void Prime(int num){
    if(num<2)
    return;
    for(int i=2;i<num;i++){
        if(num%i==0)
        return;
    }
    cout<<num<<" ";
}
int main(){
//Reverse printing array
/*
    int arr[5]={1,2,3,4,5};
    for(int i=4;i>=0;i--)
    cout<<arr[i]<<" ";
*/
//Finding largest element in array
/*
    int arr[6]={2,-9,70,43,-5};
    int largest=arr[0];
    for(int i=1;i<=5;i++){
        if(arr[i]>largest)
        largest=arr[i];
    }
    cout<<"Largest number is : "<<largest;
*/
//HW-Find Smallest element
/*
    int arr[6]={2,-9,70,43,-5};
    int smallest=arr[0];
    for(int i=1;i<=5;i++){
        if(arr[i]<smallest)
        smallest=arr[i];
    }
    cout<<"Smallest number is : "<<smallest;
*/
//Print odd numbers of array
/*    
    int arr[8]={2,5,7,8,9,10,-11,-3};
    for(int i=0;i<8;i++){
        if(arr[i]%2==1 || arr[i]%2==-1)
        cout<<arr[i]<<" ";
    }
*/
//HW-Print EVEN numbers of array
/*
    int arr[8]={2,5,12,8,9,10,-11,-4};
    for(int i=0;i<8;i++){
        if(arr[i]%2==0)
        cout<<arr[i]<<" ";
    }
*/
//Print elements of array which are prime
/*
    int arr[8]={2,-11,9,7,97,6,44,19};
    for(int i=0;i<8;i++)
    Prime(arr[i]);
*/
//HW-Print elements of array which are prime without function
/*
    int arr[8]={2,-11,9,7,97,6,44,19};
    for(int i=0;i<8;i++){
        if(arr[i]<2){
            continue;
        }
        int count=0;
        for(int j=2;j<arr[i];j++){
        count++;
        if(arr[i]%j==0)
        break;
        }
        if(count<arr[i]-2)
        continue;
        cout<<arr[i]<<" ";
        
    }
*/
//HW-Print elements of array which are prime without function-another way
/*
    int arr[8]={2,-11,9,7,97,6,44,19};
    for(int i=0;i<8;i++){
        if(arr[i]<2){
            continue;
        }
        bool isPrime=1;
        for(int j=2;j<arr[i];j++){
            if(arr[i]%j==0){
                isPrime=0;
                break;
            }
        }
        if(isPrime)
        cout<<arr[i]<<" ";
        
    }
*/
//Rotating array by 1 place
/* 
    int arr[8]={2,-11,9,7,97,6,44,19};
    int num = arr[7];
    for(int i=6;i>=0;i--){
        arr[i+1]=arr[i];
    }
    arr[0]=num;
    for (int i = 0; i < 8; i++)
    {
        cout<<arr[i]<<" ";
    }
*/
//Same by increasing loop
    /**/
//GFG 
//Unique number I
//Minimum steps to make product equal to one 
//Missing element in array
    return 0;
}