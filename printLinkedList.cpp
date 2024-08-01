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
   Node a(10);
   Node b(20);
   Node c(30);
   Node d(40);
  
   
    // this is to link one-another
   a.next=&b;
   b.next=&c;
   c.next=&d;
  


   Node temp=a;

   while(1){
        cout<<temp.data<<" ";
        if((temp.next)==NULL) break;
        temp=(*(temp.next));
   }



    return 0;
}