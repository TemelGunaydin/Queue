#include <iostream>
using namespace std;
class Queue
{
 int size;
 int front;
 int rear;
 int *Q;
public:
  Queue()
  {
    front=rear=-1;
    size=10;
    Q=new int[size];
  }
  Queue(int size)
  {
    front=rear=-1;
    this->size=size;
    Q=new int[this->size];
  }
    void enqueue(int x);
    int dequeue();
    void Display();
};

void Queue::enqueue(int x)
{
 if((rear+1)%size==front)
 cout<<"Queue is Full";
 else
 {
 rear=(rear+1)%size;
 Q[rear]=x;
 }
}
int Queue::dequeue()
{
 int x=-1;

 if(front==rear)
 cout<<"Queue is Empty\n";
 else
 {
 front=(front+1)%size;
 x=Q[front];
 }
 return x;
}
void Queue::Display()
{
 int i=front+1;
 do
 {

 printf("%d ",Q[i]);
 i=(i+1)%size;
 }while(i!=(rear+1)%size);

cout<<endl;
}
int main()
{
 Queue q(5);

 q.enqueue(10);
 q.enqueue(20);
 q.enqueue(30);
 q.enqueue(40);
 q.enqueue(50);

 q.Display();

 cout<<q.dequeue()<<" "<<endl;
 return 0;
}
