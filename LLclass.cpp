# include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node*next;

    Node(int val){
        this->val=val;
        this->next=NULL;
    }

};

class LinkedList{
public:
    Node*head;
    Node*tail;
    int size;

    LinkedList(){
        head=tail=NULL;
        size=0;
    }
    void insertAtEnd(int val){
        Node*temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
       
    }

    void insertAtBegining(int val){
        Node*temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head=temp;
        }
        size++;
    }
    void InsertAtIndex(int index,int val){
        Node*newNode=new Node(val);
        Node*temp=head;
        int count=1;
        
        while(count  < index){
            temp=temp->next;
            count++;
        }
        newNode->next=temp->next;
        temp->next=newNode;
        size++;
    }

    void display(){
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    void deleteTail(){
        Node*temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        size--;
    }

    void deleteIndex(int index){
        Node*temp=head;
        if(size==0){
            cout<<"can't delete";
            return ;
        }
        if(size==1){
            head=tail=NULL;
        }
        int count=1;
        while(count<index){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        size--;
    }

    int getElement(int index){
        Node*temp=head;
        if(index< 0| index>=size){
            cout<<"Invalid Index";
            return -1;
        }
        else if(index==0) return head->val;
        else if(index==(size-1)) tail->val;
        else{
            for(int i=1;i<=size;i++){
                temp=temp->next;
            }
            return temp->val; 

        }
    }

    
    

};


int main(){
    LinkedList ll ;
    ll.insertAtEnd(25);
    ll.display();
    ll.insertAtEnd(15);
    ll.display();
    ll.insertAtEnd(5);
    ll.display();
    ll.insertAtEnd(5);
    ll.insertAtBegining(1);
    ll.InsertAtIndex(2,100);
    ll.InsertAtIndex(0,10);
    ll.deleteTail();
    ll.display();

    cout<<ll.size;
    // cout<<ll.size();
    return 0;
}