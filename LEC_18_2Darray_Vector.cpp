#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main(){

    //Diagonal print
    /*
    int arr[5][4];

    for(int i=0;i<5;i++)
    for(int j=0;j<4;j++)
    cin>>arr[i][j];

    int row=1,col=0;
    while(col<4){
        int i=0,j=col;
        while(j>=0){
            cout<<arr[i][j]<<" ";
            i++;j--;
        }
        col++;
    }
    while(row<5){
        int i=row,j=3;
        while(i<5){
            cout<<arr[i][j]<<" ";
            i++;j--;
        }
        row++;
    }*/
    // counting zero in sorted matrix - https://www.geeksforgeeks.org/problems/count-zeros-in-a-sorted-matrix/1

    //vector
/*
    vector<int>v;
    for(int i=1; i<=10;i++)
        v.push_back(i*13%10);
    cout<<v.capacity();
    //sorting
    // sort(v.begin(),v.end());
    // sort(v.rbegin(),v.rend());
    //sort(v.begin(),v.end() , greater<int>());

    for(auto x: v)
        cout<<x<<" ";
    */
/*
    vector<vector<int>>arr(4,vector<int>(3));
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++)
        cin>>arr[i][j];
    }
    // sort(arr.begin(),arr.end());
    for(int i=0;i<4;i++){
        sort(arr[i].begin(),arr[i].end());
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }

*/  

    //charector ARRAY
    char arr[10];

    // for(int i=0;i<10;i++){
    //     cin>>arr[i];
    // }

    cin>>arr;
    // for(int i=0;i<10;i++){
    //     cout<<arr[i]<<" ";
    // }
    cout<<arr;
return 0;
}