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


int main(){

    Node* a =new Node(10);
    Node* b =new Node(20);
    Node* c =new Node(30);
    Node* d =new Node(40);
   a.next=&b;
   b.next=&c;
   c.next=&d;

    Node*temp =& a;
    while(temp!=NULL){
        cout<< temp->data <<" ";
        temp = temp->next;
    }


    return 0;
}