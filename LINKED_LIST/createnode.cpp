#include<iostream>
using namespace std;


//to create a node.............................................

class node{
    public:
    int data;
    node*next;

// to build constructor........................................

 node(){
    this->data=0;
     this->next=NULL;
 }

 node(int data){
     this->data = data;
     this->next= NULL;
 }


};


//print ki function bna lete hai
void print(node*&head)
{
    node*temp=head; //pointer bna h temporaray
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}


int main(){

// node*head= new node();

//bhot sare node bnalete hai ....................................................
   node*first=new node(10);
   node*second= new node(20);
   node*third=new node(30);
   node*fourth= new node(40);
   node*fifth=new node (50);

//....................................................................................

// ab sare node ko connect kr do ekk dusre se...............................

 first->next=second;
 second->next=third;
 third->next=fourth;
 fourth->next=fifth;

 //...................................................................................

 cout<<"printing the linked list"<<endl;
 print(first);
    return 0;
}