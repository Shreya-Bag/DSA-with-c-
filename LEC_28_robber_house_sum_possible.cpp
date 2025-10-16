#include<iostream>
using namespace std;

//robber house
/*
class Solution {
  public:
    int findMaxSum(vector<int>& arr) {
        // code here
        int size=arr.size();
        int sum=0;
        find(arr,size,sum,0,0);
        return sum;
    }
    void find(vector<int>& arr , int n,int &sum,int total,int index){
    if(index>=n){
        sum= max(sum,total);
        return;
    }
    find(arr,n,sum,total,index+1);
    find(arr,n,sum,total+arr[index],index+2);
}
};
*/

//robber house 2 : (Stickler Thief II) : https://www.geeksforgeeks.org/problems/house-robber-ii/1
/*
class Solution {
  public:
    int maxValue(vector<int>& arr) {
        // your code here
        int size=arr.size();
        int sum_left=0,sum_right=0;
        find(arr,size-1,sum_left,0,0);
        find(arr,size,sum_right,0,1);
        return max(sum_left,sum_right);
    }
    void find(vector<int>& arr , int n,int &sum,int total,int index){
    if(index>=n){
        sum= max(sum,total);
        return;
    }
    find(arr,n,sum,total,index+1);
    find(arr,n,sum,total+arr[index],index+2);
}
};
*/

//Ways to Express an Integer as Sum of Powers
/*
class Solution {
public:
    int numberOfWays(int n, int x) {
        int count=0;
        sum_pos(1,n,x,0,count);
        return count;

    }
void sum_pos(int n , int num,int power,int total,int &count){
    if(total==num){
        count++;
        return;
    }
    if(total>num)
    return;
    if(n>num)
    return;

    sum_pos(n+1,num,power,total,count);
    sum_pos(n+1,num,power,total+pow(n,power),count);
}
};
*/


//power set
void sum_pos(int *arr, int size, int index, int sum){
    if(size==index){
        cout<<sum<<" ";
        return;
    }
    sum_pos(arr,size,index+1,sum);
    sum_pos(arr,size,index+1,sum+arr[index]);
}

//sum possible with repettation
void sum_possible(int *arr, int size, int index, int sum , int target,int &ans){
    if(size==index){
        if(sum==target){
            ans=1;
            
        }
        return;
        
    }
    if(sum>target)
    return;
    sum_possible(arr,size,index+1,sum,target,ans);
    sum_possible(arr,size,index,sum+arr[index],target,ans);
}
int main(){
    int arr[]={4,2 };
    int sum=0,index=0;
    int target=5;
    int ans=0;
    sum_possible(arr,2,0,0,target,ans);
    cout<<ans;
    //sum_pos(arr,4,index,sum);

}
