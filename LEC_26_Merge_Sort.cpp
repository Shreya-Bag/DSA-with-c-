#include<iostream>
using namespace std;
void merge(int arr[],int low,int mid,int high){
    
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
void merge_sort(int arr[],int low,int high){
 
    if(low==high){
        return;
    }
    int mid= low+(high-low)/2;
    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,high);
    merge(arr,low,mid,high);
    
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
    
    merge_sort(arr,0,n-1);
    
    cout<< "sorted array is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}