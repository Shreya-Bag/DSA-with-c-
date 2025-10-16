#include<iostream>
using namespace std;
void print(int start,int end){
    if(start>end)
    return;
    cout<<start<<" ";
    print(start+1,end);
}
void print_sum(int* arr, int sum, int size){
    if(size==0)
    return;

    sum+=arr[0];
    cout<<sum<<" ";
    print_sum(arr+1,sum,size-1);
}
void print_sum_opp(int* arr, int sum, int size){
    if(size==0)
    return;

    sum+=arr[0];
    
    print_sum_opp(arr+1,sum,size-1);
    cout<<sum<<" ";
    
}
int search(int *a,int size,int key){
    if(size==0)
    return 0;
    if(a[0]==key)
    return 1;
    return search(a+1,size-1,key);
}
void double_value(int* a, int size){
    if(!size)
    return;
    a[0]*=2;
    double_value(a+1,size-1);
}
int binary(int* arr,int start, int end, int key){
    if(start>end)
    return -1;
    int mid= end + (start- end)/2;
    if(arr[mid]==key)
    return mid+1;
    
    else if(arr[mid]>key)
    return binary(arr,start,mid-1,key);
    else
    return binary(arr,mid+1,end,key);
}
int main(){
    /*int n;
    cin>>n;
    print(1,n);*/

    int arr[5]={1,2,3,4,5};
    /*print_sum(arr,0,5);
    cout<<endl;
    print_sum_opp(arr,0,5);*/
    //cout<<search(arr,5,6);
    cout<<binary(arr,0,4,5);
    /*double_value(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }*/
    return 0;
}