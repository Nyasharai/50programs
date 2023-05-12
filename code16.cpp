//circular queue

#include <iostream>
using namespace std;

class CircularQueue
{
    private:
      int front;
      int rear;
      int queue[5];
      int itemcount;

    public:
      CircularQueue(){
        itemcount = 0;
        front = -1;
        rear = -1;
        for(int i=0;i<5;i++){
                queue[i]=0;
        }
      }

      bool IsFull(){
        if ((rear+1)% 5 == front)  //This condition is being changed. Here 4 is size of circular queue
           return true;
        else
           return false;
      }

      bool IsEmpty(){
        if (front == -1 && rear == -1)
            return true;
        else 
            return false;
      }

      void enqueue(int value){
        if (IsFull())
          cout<<"Queue Overflow"<<endl;
        
        else if(IsEmpty()){
            front = rear = 0;
            queue[rear] = value;
        }

        else{
            rear = (rear+1) % 5; // Here syntax is changed
            queue[rear]=value;
        }
        itemcount++;
      }

      int dequeue(){
        int t=0;
        if (IsEmpty()){
           cout<<"Queue underflow"<<endl;
           return 0;}

        else if(front == rear){
            t = queue[front];
            queue[front]=0;
            front = rear = -1;
            itemcount--;
            return t;
        }

        else{
            t = queue[front];
            queue[front]=0;
            front = (front+1) % 5; // here syntax is changed
            itemcount--;
            return t;
        }
      }

      int count(){
        return (itemcount); // here syntax is changed
      }

      void display(){
        cout<<"The elements in the queue are:"<<endl;
        for(int i=0; i<5; i++){
            cout<<queue[i]<<"\t";
        }
        cout<<endl;
      }
};

int main()
{   
    CircularQueue q;
    int option, value;

    do
    {
        cout << "What operation do you want to perform from 1 to 4? Enter 0 to exit" << endl;
        cout << "1. enqueue()" << endl;
        cout << "2. dequeue()" << endl;
        cout << "3. count()" << endl;
        cout << "4. display()" << endl;

        cin>>option;
        switch(option){
            case 0:
              break;
            
            case 1:
              cout<<"Enqueue Operation"<<endl;
              cout<<"Enter the value to be inserted in queue: ";
              cin>>value;
              q.enqueue(value);
              break;

            case 2:
              cout<<"Dequeue Operation"<<endl;
              cout<<"Dequeued value: "<<q.dequeue()<<endl;
              break;

            case 3:
              cout<<"Count Operation"<<endl;
              cout<<"The number of elements in queue are: "<<q.count()<<endl;
              break;

            case 4:
              cout<<"Display Operation"<<endl;
              q.display();
              break;

            default:
               cout<<"Invalid Input"<<endl;
               break;
        }
        
    } while (option != 0);

    return 0;
}