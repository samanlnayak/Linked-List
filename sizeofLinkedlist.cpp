# include<iostream>
using namespace std;
class Node{
public:
    int data;
    class Node*next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }

};
void Display(Node*head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}


int size(Node*head){
    Node*temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}


int main(){
    Node*a=new Node(10);
    Node*b=new Node(20);
    Node*c=new Node(30);
    Node*d=new Node(40);

    a->next=b;
    b->next=c;
    c->next=d;
    

   Display(a);
   cout<<size(a);

    return 0;
}