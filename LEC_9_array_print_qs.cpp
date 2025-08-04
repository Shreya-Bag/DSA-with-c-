#include<iostream>
using namespace std;

int main(){
//printing array elements 5 times
/*
    int arr[5]={1,3,5,7,9};
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }
*/
//Printing array elements in a particular pattern
/*
    int arr[5]={1,3,5,7,9};
    for(int i=0;i<5;i++){
        for(int j=0;j<5-i;j++){
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }
*/
//or
/*   
    int arr[5]={1,3,5,7,9};
    for(int i=5;i>0;i--){
        for(int j=0;j<i;j++){
            cout<<arr[j]<<" ";
        }
    cout<<endl;
    }
*/ 
/*   int arr[5]={2,3,8,7,4};
    for(int i=0;i<5;i++){
        for(int j=i;j<5;j++){
            cout<<arr[j]<<" ";
        }
    cout<<endl;
    }
*/
//printing array in reverse 5 time;
/*    int arr[5]={2,3,8,7,4};
    for(int i=0;i<5;i++){
        for(int j=4;j>=0;j--){
            cout<<arr[j]<<" ";
        }
    cout<<endl;
    }
*/
//Printing array elements in a particular pattern
/*
    int arr[5]={2,3,8,7,4};
    for(int i=0;i<5;i++){
        for(int j=4-i;j>=0;j--){
            cout<<arr[j]<<" ";
        }
    cout<<endl;
    }
*/
/*
    int arr[5]={2,3,8,7,4};
    for(int i=0;i<5;i++){
        for(int j=4;j>=i;j--){
            cout<<arr[j]<<" ";
        }
    cout<<endl;
    }
*/
//Print duplicate  in array where value varry from 0 to n-1
    int arr[5]={1,2,1,3,3};
    int count[5]={0};
    for(int i=0;i<5;i++){
        count[arr[i]]++;
    }
    for(int i=0;i<5;i++){
        if(count[i]>1)
        cout<<i<<" ";
    }

//sorting array of 0,1,2 - gfg- https://www.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1

    return 0;
}