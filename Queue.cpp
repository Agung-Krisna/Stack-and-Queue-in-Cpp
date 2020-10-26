#include <iostream>

using namespace std;

int queue[100];
int n = 100;
int front = - 1; 
int rear = - 1;
void enqueue() {
   int val;
   if (rear == n - 1)
   std::cout<<"Queue Overflow"<<std::endl;
   else {
      if (front == - 1)
      front = 0;
      std::cout<<"Insert the element in queue : "<<std::endl;
      std::cin>>val;
      rear++;
      queue[rear] = val;
   }
}
void dequeue() {
   if (front == - 1 || front > rear) {
      std::cout<<"Queue Underflow ";
      return ;
   } else {
      std::cout<<"Element deleted from queue is : "<< queue[front] <<endl;
      front++;;
   }
}
void peek() {
   if (front == - 1)
   std::cout<<"Queue is empty"<<endl;
   else {
      std::cout<<"Queue elements are : ";
      for (int i = front; i <= rear; i++)
      std::cout<<queue[i]<<" ";
         std::cout<<endl;
   }
}
int main() {
   int ch;
   std::cout<<"(1) Enqueue element to queue"<<std::endl;
   std::cout<<"(2) Dequeue element from queue"<<std::endl;
   std::cout<<"(3) Display all the elements of queue"<<std::endl;
   std::cout<<"(4) Exit"<<std::endl;
   do {
      std::cout<<"Enter your choice : "<<std::endl;
      std::cin<<ch;
      switch (ch) {
         case 1: 
         enqueue();
         break;
         case 2: 
         dequeue();
         break;
         case 3: 
         peek();
         break;
         case 4: 
         std::cout<<"Exit"<<std::endl;
         break;
         default: 
         std::cout<<"Invalid choice"<<std::endl;
      }
   } while(ch!=4);
   return 0;
