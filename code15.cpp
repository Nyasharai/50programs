// queue

#include <iostream>
using namespace std;

#define n 100

class queue
{
    int *arr;
    int front;
    int rear;

public:
    queue()
    {
        arr = new int(n);
        front = -1;
        rear = -1;
    }

    void push(int x)
    {
        if (rear == n - 1)
        {
            cout << "Queue is overflow" << endl;
            return;
        }
        rear++;
        arr[rear] = x;
        if (front == -1)
        {
            front++;
        }
    }

    void pop()
    {
        if (front == -1 || front > rear)
        {
            cout << "No element in queue" << endl;
            return;
        }
        front++;
    }

    int peek()
    {
        if (front == -1 || front > rear)
        {
            cout << "No element in queue" << endl;
            return -1;
        }
        return arr[front];
    }

    bool empty()
    {
        if (front == -1 || front > rear)
        {
            cout << "No element in queue" << endl;
            return true;
        }
        return false;
    }

    void show()
    {
        for (int i = 0; i < 4; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.show();
    cout << q.peek() << endl;
    q.pop();
    cout << q.peek() << endl;
    q.pop();
    cout << q.peek() << endl;
    q.pop();
    cout << q.peek() << endl;
    q.pop();
    cout << q.peek() << endl;
    return 0;
}