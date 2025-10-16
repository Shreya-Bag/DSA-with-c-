#include<iostream>
using namespace std;
void fun(int** p,int row, int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            p[i][j]=i+j;
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
           cout<<p[i][j]<<" ";

        }
        cout<<endl;
    }

}
int factorial(int n){
    if(n==1)
    return 1;
    return n*factorial(n-1);
}
int power(int m,int n){
    if(n==1)
    return m;
    return m*power(m,n-1);
}
int fibonacci(int n){
    if(n==1)
    return 0;
    if(n==2)
    return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
   /*int m,n;
    cin>>m>>n;
    int array[m][n];*/

    //1 D dynamically
    /*int m;
    cin>>m;
    int* p = new int[m];
    for(int i=0;i<m;i++){
        p[i]=i*2;

    }
    for(int i=0;i<m;i++){
        cout<<p[i]<<" ";
        
    }*/

    //2D dynamically
    /*
    int m,n;
    cout<<"enter no of rows : ";
    cin>>m;
    int **p=new int*[m];
    cout<<"Enter the no of columns : ";
    cin>>n;
    for(int i=0;i<m;i++){
        p[i]= new int[n];
    }
    fun(p,m,n);*/
    //factorial by recursion
    /*
    int m;
    cin>>m;
    cout<<factorial(m);*/

    //power by recursion
    /*
    int m,n;
    cout<<"enter number and power respectively : ";
    cin>>m>>n;
    cout<<"answer is : "<<power(m,n);*/

    //fibonacci with recursion

    int n;
    cin>>n;
    cout<<"answer is : "<<fibonacci(n);

    //climb stairs : https://leetcode.com/problems/climbing-stairs/submissions/1782401610/

}