#include<iostream>
using namespace std;
int partition(int arr[], int start,int end){
    int first=start,second=start;
    int pivot= arr[end];
    while(second<=end){
        if(arr[second]<=pivot){
            swap(arr[first],arr[second]);
            first++;second++;
        }
        else{
            second++;
        }
    }
    return first-1;
}
void quick_sort(int arr[],int start,int end){
    if(start>=end)
    return;
    int index= partition(arr,start,end);
    quick_sort(arr,start,index-1);
    quick_sort(arr,index+1,end);

}
bool sum_pos(int arr[],int size,int sum,int total,int index){
    if(index==size){
        if(sum==total)
        return 1;
        else 
        return 0;
    }
    if(sum==total)
    return 1;
    return sum_pos(arr,size,sum,total,index+1) || sum_pos(arr,size,sum,total+arr[index],index+1);
}
int main(){
    int n;
    cout<<"enter size : ";
    cin>>n;
    int arr[n];
    cout<<"enter "<<n<<" values : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    /*
    quick_sort(arr,0,n-1);
    
    cout<< "sorted array is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }*/
    int sum;
    cout<<"enter sum to check";
    cin>>sum;
    int total=0,index=0;
    cout<<sum_pos(arr,n,sum,total,index);
    //is sum possible
    return 0;
}

//count inversion : https://www.geeksforgeeks.org/problems/inversion-of-array-1587115620/1
/*void merge(vector<int> &arr,int low,int mid,int high,int &count){
    
    int size= (high-low)+1;
    int* a= new int[size];
    
    int pos=0, first=low,last=mid+1;
    while(first<=mid && last<=high){
        if(arr[first]<=arr[last]){
            a[pos]=arr[first];
            pos++;first++;
            
        }
        else{
            a[pos]=arr[last];
            pos++;last++;
             count+=(mid-first+1);
        }
    }
    
    while(first<=mid){
        a[pos]=arr[first];
        pos++;first++;
    }
    while(last<=high){
        a[pos]=arr[last];
        pos++;last++;
    }
    pos=0;int i=low;
    while(i<=high){
        arr[i++]=a[pos++];
    }
    
    delete []a;
   
    
}
void merge_sort(vector<int> &arr,int low,int high,int &count){
 
    if(low==high){
        return ;
    }
    int mid= low+(high-low)/2;
    merge_sort(arr,low,mid,count);
    merge_sort(arr,mid+1,high,count);
    merge(arr,low,mid,high,count);
    
    
}
class Solution {
  public:
    int inversionCount(vector<int> &arr) {
        // Code Here
        int ans=0;
        int size= arr.size();
        merge_sort(arr,0,size-1,ans);
        return ans; 
        
    }
};*/

//robber house own - 
/*int findMaxSum(vector<int>& arr) {
        // code here
        int even=0,odd=0;
        int size= arr.size();
        for(int i=0;i<size;i+=2){
            even+=arr[i];
        }
        for(int i=1;i<size;i+=2){
            odd+=arr[i];
        }
        if(odd>=even)
        return odd;
        else
        return even;
    }*/
