# include<iostream>
using namespace std;
class Node{
public:
    int val;
    class Node*next;

    Node(int data){         // this is constructor
        val=data;
        this->next=NULL;
    }
};

void display(Node*head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void deleteNode(Node*head,Node*target){
    Node*temp=head;
    while(temp->next!=target){
        temp=temp->next;
    }
    temp->next=target->next;

}


int main(){

    Node* a =new Node(10);
    Node* b =new Node(20);
    Node* c =new Node(30);
    Node* d =new Node(40);
    a->next=b;
    b->next=c;
    c->next=d;
    deleteNode(a,c);
    display(a);

   


    return 0;
}
