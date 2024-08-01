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

void Display1(Node*head){
    Node*temp=head;
    if(temp==NULL) return ;
    cout<<temp->data<<" ";
    Display1(temp->next);
}
int main(){
    Node*a=new Node(10);
    Node*b=new Node(20);
    Node*c=new Node(30);
    Node*d=new Node(40);

    a->next=b;
    b->next=c;
    c->next=d;
    

   Display1(a);

    return 0;
}