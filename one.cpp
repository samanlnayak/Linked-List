# include<iostream>
using namespace std;
class Node{
public:
    int data;
    class Node*next;
};

int main(){
   Node a;
   a.data=10;
   Node b;
   b.data=20;
   Node c;
   c.data=30;
   Node d;
   d.data=40;

   a.next=&b;
   b.next=&c;
   c.next=&d;
   d.next=NULL;



    return 0;
}