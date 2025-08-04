#include<iostream>
using namespace std;
int main(){
    //finding index of smallest missing element in a sorte array
    int n;
    cout<<"Enter array size :";
    cin>>n;
    int arr[n];
    cout<<"enter array elements: ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    int start=0,end=n-1,mid,index;
    while(start<=end){
        mid=(start+end)/2;
        if(arr[mid]==mid){
            start=mid+1;
            index=mid+1;
        }
        else{
            end=mid-1;
            index=mid;
        }
    }
    cout<<"Index is : "<<index;

}

// Find Kth Rotation
// Given an increasing sorted rotated array arr of distinct integers. The array is right-rotated k times. Find the value of k. - https://www.geeksforgeeks.org/problems/rotation4723/1

//Search in a sorted rotated array - https://www.geeksforgeeks.org/problems/search-in-a-rotated-array4618/1

//Allocate Minimum Pages - https://www.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/1
