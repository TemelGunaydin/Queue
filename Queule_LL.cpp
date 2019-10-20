
#include <iostream>
using namespace std;

class Node
{
 int data;
 Node *next;
 Node *front;
 Node *rear;
 public:
  Node ()
  {
     front = NULL;
     rear=NULL;
  }
  void enqueue(int x);
  int dequeue();
  void Display();
};


void Node::enqueue(int x)
{
  Node *t;
  t=new Node;
 if(t==NULL)
 cout<<"Queue is FUll\n";
 else
 {
 t->data=x;
 t->next=NULL;
 if(front==NULL)
 front=rear=t;
 else
 {
 rear->next=t;
 rear=t;
 }
 }

}
int Node::dequeue()
{
 int x=-1;
 Node* t;

 if(front==NULL)
 cout<<"Queue is Empty\n";
 else
 {
 x=front->data;
 t=front;
 front=front->next;
 delete t;
 }
 return x;
}
void Node::Display()
{
 Node *p=front;
 while(p)
 {
 cout<<" "<<p->data;
 p=p->next;
 }
 cout<<endl;

}
int main()
{
  Node n{};

 n.enqueue(10);
 n.enqueue(20);
 n.enqueue(30);
 n.enqueue(40);
 n.enqueue(50);

 n.Display();

 cout<<" "<<n.dequeue();
 cout<<endl;

 return 0;
}
