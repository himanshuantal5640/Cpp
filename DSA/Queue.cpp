#include<bits/stdc++.h>
using namespace std;
class Queue{
   

    public:
         int* arr;
        int size;
        int front;
        int rear;
        Queue(int n){
            size = n;
            arr = new int[size];
            front = 0;
            rear = 0;
        }
        bool isEmpty(){
            if(front == rear){
                return true;
            }
            else{
                return false;
            }
        }
        void push(int data){
            if(rear == size){
                cout<<"Queue is full"<<endl;
            }
            else{
                arr[rear] = data;
                rear++;
            }
        }
        int pop(){
            if(front== rear){
                return -1;
            }
            else{
                int ans = arr[front];
                arr[front] = -1;
                front++;
                if(front == rear){
                    front = rear = 0;
                }
                return ans;
            }
        }
        int getfront(){
            if(front == rear){
                return -1;
            }
            else{
                return arr[front];
            }
        }
        int getrear(){
            if(front == rear){
                return -1;
            }
            else{
                return arr[rear-1];
            }
        }
};
int main(){
    Queue s(5);
    s.push(4);
    s.push(3);
   
}