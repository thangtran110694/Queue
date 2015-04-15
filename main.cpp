#include <iostream>
#define MAX_SIZE 100
using namespace std;

class Queue {
private:
    int first, //phần tử đầu
        last, //phần tử cuối
        maxSize; //kích thước queue
    int *qData; //mảng giá trị
public:
    Queue();
    ~Queue();
    bool isEmpty();
    bool isFull();
    bool EnQueue(int); //thêm (int) vào cuối queue
    bool DeQueue(); //xóa phần tử ở đầu queue
    int Front(); //hiển thị phần tử đầu queue
};

Queue::Queue(){
    maxSize = MAX_SIZE;
    first = last = 0;
    qData = int[maxSize];
}

Queue::~Queue(){
    delete []qData;
}

bool Queue::EnQueue(int x){

}


