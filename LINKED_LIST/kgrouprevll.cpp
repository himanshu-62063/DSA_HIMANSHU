 #include<iostream>
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
        cout<<temp->data;
        temp=temp->next;
    }
    cout <<endl;
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

 node*reverseKnode(node*&head, int k){
    if(head==NULL){
        cout<<"ll is empty"<<endl;
        return NULL;

    }
    int len = getlength(head);
    if(k>len){
        cout<<"enter the valid value for k"<<endl;
        return head;
    }
    //it means the no of node in ll is >= k

    //reverse first k node of linked list

    node*prev=NULL;
    node*curr=head;
    node*forward=curr->next;
    int count =0;

    while(count<k){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        count++;
    }
    //step 2 = recursive call

    if(forward != NULL){
        head->next=reverseKnode( forward , k );
    }
    return prev;
 }


 int main(){

    node*head=new node(10);
    node*second=new node(20);
    node*third=new node(30);
    node*forth=new node(40);
    node*fifth=new node(50);

    head->next=second;
    head->next=second;
    second->next=third;
    third->next=forth;
    forth->next=fifth;
    fifth->next=NULL;

    print(head);
    reverseKnode(head,3);
    print (head);

    return 0;


 }