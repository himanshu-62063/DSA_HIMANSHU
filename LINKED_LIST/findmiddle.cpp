#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node*next;

    node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void print(node*head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<endl;
}


node*getMiddle(node* head){
    //if ll is empty

    if(head==NULL){
        cout<<"ll is empty";
        return head;
    }

    //if ll has only one element

    if(head->next==NULL){
        return head;
    }

    //if ll has more than one node 

    node*slow=head;
    node*fast=head;

    while(slow != NULL && fast != NULL){
        fast= fast->next;
        if(fast !=NULL){
            fast=fast->next;
            slow=slow->next;

        }
    }
    return slow;


}


int main(){

node*head=new node(10);
node*second=new node(20);
node*third=new node(30);
node*forth=new node(40);
node*fifth=new node(50);

head->next=second;
second->next=third;
third->next=forth;
forth->next=fifth;
fifth->next=NULL;

print (head);

cout<<"middle node is"<<getMiddle(head)->data<<endl;




    return 0;
}


