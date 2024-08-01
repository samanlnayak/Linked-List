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
  


   cout<<a.data;
   cout<<endl;
   cout<<a.next->data;
   cout<<endl;
                                        //    cout<<(*(*(*(a.next).next).next))->data;
    cout<<(*(a.next)).data<<endl;

    cout<<(*((*(a.next)).next)).data<<endl;
    cout<<(*((*((*(a.next)).next)).next)).data;

    cout<<endl;

    cout<<(((a.next)->next)->next)->data;



    return 0;
}