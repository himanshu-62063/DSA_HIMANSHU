#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node*next;

    node(){
        this->data=0;
        this->next=NULL;

    }
    node(int data){
        this->data=data;
        this->next=NULL;
    }

};


//......................................................................................
// want to insert a node rights at the head of lined list.............................
// 1. create a node 
//2. new node_next = head
//3. head= new node  

void insertathead(node*&head , node*tail,int data){
    //step 1
    node*newnode=new node(data);
    //step2

    newnode->next=head;

    //step3 
    head = newnode;

}
//........................................................................................

//want to insert a node at tail in linked list.............................
//1. create a node 
//2. tail-> next = newnode 
//3. tail = new node 


void insertattail(node*&head ,node*&tail , int data){

    // step 1
    node*newnode= new node(data);
    // step2
    tail->next=newnode;

    //step3

    tail = newnode;
}

//print .............................................................
void print(node*head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
//....................................................................





int main (){
node*tail=NULL;
node*head=NULL;
//node*head= new node(10);
insertathead(head,tail,20);
insertathead(head,tail,30);
insertathead(head,tail,40);
insertattail(head,tail,77);


print(head);

    return 0;
}