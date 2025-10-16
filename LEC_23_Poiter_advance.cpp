#include<iostream>
using namespace std;
void Double (int* a, int size){
    for(int i=0;i<size;i++){
        a[i]*=2;
    }
}
int col=4;
void fun(int a[][4] , int row ){
    int count=1;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            a[i][j]=count;
            count++;
        }
    }
}
int main(){
    //int arr[5]={1,2,3,4,5};
    /*
    Double(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<< " ";

    }*/
    /*
    cout<<arr<<endl;
    cout<<&arr<<endl;
    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;
    cout<<&arr[2];
*/

    //int arr[3][4];
    /*cout<<arr<<endl;
    cout<<arr+1<<endl;
    cout<<arr+2<<endl;
    cout<<arr[0]<<endl;*/
    /*fun(arr,3);
    for(int i=0;i<3;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
*/

    int *p= new int;
    *p=90;
    cout<<p<<endl;
    cout<<*p;
    delete p;
    int *w=new int[10];
    w[0]=2;
    cout<<w[0];
    delete w;

    return 0;
}