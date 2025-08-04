#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter array size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" integers : ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    //Selection sort
    /*    for(int i=0;i<n-1;i++){
            int index=i;
            for(int j=i;j<=n-1;j++){
                if(arr[index]>arr[j])
                index=j;
            }
            int temp=arr[index];
            arr[index]=arr[i];
            arr[i]=temp;
        }*/
    
    //Bubble sort
    /*
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }*/
   //Insertion sort
    for(int i=0;i<n-1;i++){
            for(int j=i+1;j>0;j--){
                if(arr[j]<arr[j-1]){
                    int temp=arr[j];
                    arr[j]=arr[j-1];
                    arr[j-1]=temp;
                }
                else 
                break;
            }
        }
    cout<<"Sorted array is: ";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    //Find the fine - https://www.geeksforgeeks.org/problems/find-the-fine4353/1
    //Equlibrium point - https://www.geeksforgeeks.org/problems/equilibrium-point-1587115620/1

}