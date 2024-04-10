#include<iostream>
using namespace std;
class node {
    public:
    int data;
    node*next;
    node*prev;

node(){
    this->data=0;
    this->next=NULL;
    this->prev=NULL;
}

node(int data){
    this->data=data;
    this->next=NULL;
    this->prev=NULL;
}

};

//print

void print(node*&head){
    node*temp=head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void insertattail(node*head , node*tail , int data){
    if(head==NULL){
        node*newnode= new node(data);
        head= newnode;
        tail= newnode;
    }
    else{
        //step1
        node*newnode =new node(data);
        tail->next=newnode;
        newnode->prev=tail;
        tail = newnode;
    }

}

void insertathead(node*head , node*tail , int data){
    if(head==NULL){
        node*newnode= new node (data);
        head= newnode ;
        tail= newnode ;

    }
    else{
        //step 1
        node*newnode=new node (data);
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
    }


}




int main(){


  node*first=new node (10);
    node*second=new node (20);
     node*third=new node (30);
     node*fourth=new node (40);

     node*head=first;
     node*tail=fourth;

     first->next=second;
     second->prev=first;

     second->next=third;
     third->prev=second;

     third->next=fourth;
     fourth->prev=third;

     print (first);
     cout <<endl;

     insertathead(head , tail , 101);
     print (head);
     cout<<endl;
    
    insertattail(head , tail , 501);
    print (head);
    cout<<endl;

    return 0;


}