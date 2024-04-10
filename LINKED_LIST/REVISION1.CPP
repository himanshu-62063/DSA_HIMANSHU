// #include<iostream> 
// using namespace std ;

// class node{
//     public:
//     int data ;
//     node*next;

//     node(){
//         this->data=0;
//         this->next=NULL;
//     }

//     node(int data){
//         this->data=data;
//         this->next=NULL;
//     }

// };

//void insertathead(node*head ,int  data){
    //step 1 .... create a new node 
  //  node*newnode = new node (data);
    //step2 ..... newnode ->next= head
    //newnode->next=head;
    //step 3
    //head= newnode;

//}
//void print(node*head){
  //  node*temp=head;
    //while(temp!=NULL){
      //  cout<<temp->data<<" ";
       // temp= temp->next;

    //}
//}


//int main(){

  //  node*head=new node(10);
    // node*second=new node(20);
    // node*third=new node(40);
    // node*forth=new node(50);
    //insertathead(head , 70);
    //insertathead(head, 50);


    // head->next=second;
    // second->next=third;
    // third->next=forth;
    // forth->next=NULL;

  //  print(head);



   // return 0;
//}

//.....................................................................................................................


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


void insertathead(node*&head , node*tail,int data){
    //step 1
    node*newnode=new node(data);
    //step2

    newnode->next=head;

    //step3 
    head = newnode;

}

void insertattail(node*head, node*tail ,int  data){

//step 1
node*newnode= new node(data);

//step2

tail->next=newnode;

//step3
tail = newnode;

}

//print 

void print(node*head ){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
}


int main(){

    node*head=NULL;
    node*tail=NULL;

    insertathead(head , tail ,20);
     insertathead(head , tail ,30);
     insertathead(head , tail ,50);
     insertathead(head , tail ,40);
    

    insertattail(head, tail , 30);
   print(head);




return 0;
}