#include<bits/stdc++.h>

using namespace std;

struct node
{
  node* next;
  int value;

  node()
  {
    next = NULL;
    value = 0;
  }

  node(int val)
  {
    next = NULL;
    value = val;
  }
};

class queues
{
    private:
    node* start;
    node* end;
    node* head;
    
    public:
    
    queues()
    {
        head = new node();
        start = head;
        end = head;
    }

    ~queues()
    {
        while(start != NULL)
        {
          node* current = start->next;
          delete start;
          start = current;
        }
    }

    void enqueue(int element)
    {
        node* added_node  = new node(element);
        end->next = added_node;
        end = added_node;
    }

    void dequeue()
    {
        if(start == NULL || end == head) cout<< "Queue is empty"<<endl;
        else 
        {
            node* current = start;
            if (start == head)
            {
                current = current->next;
                start = start->next;
            }
            start = start->next;
            delete current;
        }
    }

    void print()
    {
      node* current = start;
      if (current == head) current = current->next;
      while(current != NULL)
      {
        cout<< current->value<<"  ";
        current = current->next;
      }
      cout<< endl;
    }

};


int main()
{
    queues my_queue;
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
   my_queue.print();

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