#include<iostream>
using namespace std;
class node{
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
void insertathead (node*head , node* tail , int data){
    if (head == NULL){
        node*newnode = new node(data);
        head=newnode;
        tail=newnode;

    }
    else{
        node*newnode=new node (data);
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
    }
}

void insertattail (node*head , node*tail ,int data){
    if(head==NULL){
        node*newnode= new node(data);
        head =newnode;
        tail=newnode;
    }
    else{
        node*newnode= new node (data);
        tail->next=newnode;
        newnode->prev= tail;
        tail= newnode ;
    }
}

int getlength(node*head){
    int len=0;
    node*temp=head;
    while(temp != NULL){
        temp= temp->next;
        len++;
    }
    return len;
}


void insertatposition(int data, int position, node* &head, node* &tail) {
        if(head == NULL) {
                node* newNode = new node(data);
                head = newNode;
                tail = newNode;
                return;
        }
        //step1: find the position: prev & curr;

        if(position == 0) {
                insertathead(head, tail , data);
                return;
        }
       
        int len = getlength(head);
        
        if(position >= len) {
                insertattail(head, tail, data);
                return;
        }
        //ste1:find prev and curr
        int i = 1;
        node* prev = head;
        while(i < position) {
                prev= prev -> next;
                i++;
        }
        node* curr = prev -> next;

        //step2;
        node* newNode = new node(data);

        //step3:
        newNode -> next = curr;

        //step4:
        prev -> next = newNode;
}



void print (node*head ){
    node*temp=head;
    while ( temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
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

    insertatposition(101, 5, head, tail);
        cout<< "Printing after insert at position call" << endl;
         print(head);
         cout << endl;







    return 0;
}