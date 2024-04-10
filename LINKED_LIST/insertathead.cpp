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



// i want to insert a node rights at the head of lined list.............................
// 1. create a node 
//2. new node_next = head
//3. head= new node  

void insertathead(node*&head , int data){
    //step 1
    node*newnode=new node(data);
    //step2

    newnode->next=head;

    //step3 
    head = newnode;

}
//print 
void print(node*head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}






int main (){

node*head= new node(10);
insertathead(head,20);
insertathead(head,30);
insertathead(head,40);


print(head);

    return 0;
}