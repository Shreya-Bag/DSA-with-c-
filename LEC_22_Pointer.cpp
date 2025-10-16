#include<iostream>
using namespace std;
void fun(int* c, int* d){
    *c *=2;
    *d *=2;
}
void fun1(int &c, int &d){
    c *=2;
    d *=2;
}
void reverse (int* p , int size){
    int start=0,end=size-1;
    while(start<end){
        swap(p[start],p[end]);
        start++;end--;
    }
}
int main(){
    // int num = 30;
    // cout<<num<<endl;
    // int* p = &num;
    // *p= 20;
    // cout<<num<<endl;

/*
    int arr[5] = {10,20,30,40,50};
    // cout<<arr<<endl;
    // cout<<*(arr+1);
    int* p= arr;
    for(int i=0;i<5;i++){
        cout<<*p<<" ";
        p++;
    }
*/
/*
    int a=5,b=10;
    cout<<a<<" "<<b<<endl;
    fun(&a,&b);
    cout<<a<<" "<<b<<endl;
    fun1(a,b);
    cout<<a<<" "<<b;
*/

    int arr[5]={10,20,30,40,50};
    reverse(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}