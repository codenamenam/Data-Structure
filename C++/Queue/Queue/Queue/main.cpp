//
//  main.cpp
//  Queue
//
//  Created by Nam on 2022/03/11.
//

#include <iostream>

using namespace std;

class Queue{
    
    int front = -1;
    int end = -1;
    int maxQueueSize = 0;
    int* arr = new int[maxQueueSize];
    
public:
    Queue(int size){
        maxQueueSize = size;
    }
    
    void Add(int item) {
        end++;
        if(isFull()){
            cout << "Queue is Full!\n";
            end--;
            return;
        } else {
            arr[end] = item;
            cout << "Added " << item << "\n";
        }
    }
    
    void Delete() {
        if(isEmpty()){
            cout << "Queue is Empty!\n";
        } else {
            front++;
            cout << "Deleted: "<< arr[front] << "\n";
        }
    }
    
    bool isFull() {
        if(end == maxQueueSize){
            return true;
        } else {
            return false;
        }
    }
    
    bool isEmpty() {
        if(front==end){
            return true;
        } else {
            return false;
        }
    }
};

int main() {
    Queue obj = Queue(3);
    obj.Delete();
    obj.Add(2);
    obj.Delete();
    obj.Delete();
    obj.Add(3);
    obj.Add(4);
    obj.Add(5);
    obj.Delete();
    obj.Delete();
    obj.Delete();
    obj.Delete();
    obj.Add(3);
}
