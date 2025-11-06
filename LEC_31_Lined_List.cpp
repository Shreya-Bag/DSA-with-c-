#include<iostream>
using namespace std;
 
class Node{
    public:
    int data ;
    Node* next;
};

void Print (Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}

void reverse(Node* head){
    if(head==NULL){
        return;
    }
    reverse(head->next);
    cout<<head->data<<" ";
}
int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //creating linked list
    Node* head=new Node;
    head->data= arr[0];
    Node* temp = head;
    for(int i=1;i<n;i++){
        temp->next=new Node;
        temp=temp->next;
        temp->data= arr[i];
    }
    temp->next = NULL;


    //printing linked list
    Print(head);

    cout<<endl;
    //printing linked list REVERSE
    reverse(head);

    
}

//counting length : https://www.geeksforgeeks.org/problems/count-nodes-of-linked-list/1

//inserting element in a sorted linked list : https://www.geeksforgeeks.org/problems/insert-in-a-sorted-list/1