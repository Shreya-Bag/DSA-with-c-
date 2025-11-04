#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

int main(){
    Node n;
    n.data= 7;
    cout<<n.data<<" "<<n.next;
}