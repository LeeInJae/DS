//
// Created by cowspirit on 2019-06-23.
//

#ifndef ALGORITHM_QUEUE_H
#define ALGORITHM_QUEUE_H


class Queue {
public:
    Queue(int max) : max_(max), size_(0), front_(0), rear_(0) {
        data_ = new int[max];
    }
    ~Queue() {
        delete[] data_;
    }

    bool Enqueue(int data);
    int Dequeue();
    int Peek();
    void Clear();
    int Capacity();
    int Size();
    bool IsEmpty();
    bool IsFull();
    int Search(const int data);
    void Print();

private:
    int max_;
    int size_;
    int* data_;
    int front_, rear_;
};


#endif //ALGORITHM_QUEUE_H
