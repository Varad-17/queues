#include<bits/stdc++.h>

using namespace std;

class queues
{
  private:
  int* array;
  int current_size,start_index,end_index;
  int max_size;
  
  public :
 queues(int length)
 {
   array = new int[length];
   current_size  =  0;
   start_index = 0;
   end_index = 0;
   max_size = length;
 }

 void enqueue(int element)
 {
    if (current_size < max_size)
    {
        end_index = end_index % max_size;
        array[end_index++] = element;
        current_size++;
    }
    else cout<<"Queue is completely full "<<endl;
 }

 void dequeue()
 {
    if (current_size == 0) cout<<"Queue is completely empty"<<endl;

    else 
    {
        start_index++;
        start_index = start_index % max_size;
        current_size--;
    }
 }

 void print()
 {
    
    for (int iter = 0; iter < current_size; iter++)
    {
        cout<<array[(iter + start_index) % max_size]<<"  ";
    }
    cout<<endl;
 }
};

int main()
{
   queues my_queue(4);
   my_queue.dequeue();
   my_queue.enqueue(5);
   my_queue.print();

   my_queue.enqueue(4);
   my_queue.print();

   my_queue.enqueue(9);
   my_queue.print();

   my_queue.enqueue(6);
   my_queue.print();

   my_queue.enqueue(2);

   my_queue.dequeue();
   my_queue.print();

   my_queue.enqueue(4);
   my_queue.print();

   my_queue.dequeue();
   my_queue.print();

   my_queue.dequeue();
   my_queue.print();

   my_queue.dequeue();
   my_queue.print();

   my_queue.enqueue(8);
   my_queue.print();

   my_queue.enqueue(3);
   my_queue.print();

   my_queue.dequeue();
   my_queue.print();


   return 0;
}