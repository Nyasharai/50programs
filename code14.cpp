// stack

#include<iostream>
using namespace std;

#define n 100

class stack{
    int* arr;
    int top;

    public: 
      stack(){
        arr = new int[n];
        top = -1;
      }

      void push(int x){
        if (top == n-1){
            cout<<"Stack is overflow"<<endl;
            return;
        }

            top++;
            arr[top] = x;
      }

      void pop(){
        if( top == -1){
            cout<<"Stack is underflow and no element to pop"<<endl;
            return;
        }
        top --;
      }

      int Top(){
        if( top == -1){
            cout<<"no element in stack"<<endl;
            return -1;
        }
        return arr[top];
      }

      bool empty(){
        return top == -1;
      }
};

int main(){
    stack str;
    str.push(2);
    str.push(3);
    str.push(4);
    str.push(5);
    str.push(6);
    cout<<str.Top()<<endl;
    str.pop();
    cout<<str.Top()<<endl;
    str.pop();
    str.pop();
    str.pop();
    str.pop();
    cout<<str.Top()<<endl;
    cout<<str.empty()<<endl;
    return 0;
}