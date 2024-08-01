# include<iostream>
using namespace std;
class Node{
public:
    int data;
    class Node*next;

    Node(int data){         // this is constructor
        this->data=data;
        this->next=NULL;
    }
};

void insertAtEnd(Node*head,int val){
    
    Node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new Node(val);


}

void insertAtBegining(Node*&head,int val){
    Node*newNode= new Node(val);
    if(head==NULL) newNode=head;
    newNode->next=head;
    head=newNode;
}


int main(){

    Node* a =new Node(10);
    Node* b =new Node(20);
    Node* c =new Node(30);
    Node* d =new Node(40);
    a->next=b;
    b->next=c;
    c->next=d;

    insertAtEnd(a,45);
    insertAtBegining(a,1);


    Node*temp=a;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }



  

  

    

   


    return 0;
}