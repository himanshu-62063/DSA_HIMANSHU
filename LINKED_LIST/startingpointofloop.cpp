#include<iostream>
using namespace std;

class node{

public:
int data=0;
node*next=NULL;

node(int data){
    this->data=data;
    this->next=NULL;
}

};

node*startingpointloop(node*head){
    if(head==NULL){
        cout<<"ll is empty"<<endl;
        return NULL;
    }
    node*slow=head;
    node*fast=head;

    while(fast != NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        if(slow==fast){
            slow=head;
            break;
        }
    }
    while(slow!=fast){
        slow=slow->next;
        fast=fast->next;
    }
    return slow;
   

 }

int main(){
    node*head=new node(10);
    node*second=new node(20);
    node*third=new node(30);
    node*forth=new node(40);
    node*fifth=new node(50);
    node*sixth=new node(60);
    node*seventh=new node(70);
    node*eighth=new node(80);
    node*ninth=new node(90);


    head->next=second;
    second->next=third;
    third->next=forth;
    forth->next=fifth;
    fifth->next=sixth;
    sixth->next=seventh;
    seventh->next=eighth;
    eighth->next=ninth;
    ninth->next=fifth;

    cout<<"starting point of a loop is: "<<startingpointloop(head)->data<<endl;
    return 0;



}