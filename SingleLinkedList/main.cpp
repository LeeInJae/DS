#include <iostream>
#include "List.h"
#include "CursorList.h"
#include "DoubleLinkedList.h"
#include "../BST/BST.h"
#include "../Hash/OpenAddressHash.h"
#include "../KMP/KMP.h"
#include "../BoyerMoore/BoyerMoore.h"
#include "../Set/Set.h"
#include "../Set/BitSet.h"
#include "../Euclidean/EuclideanMethod.h"
#include "../Hanoi/Hanoi.h"
#include "../NQueen.h"
#include "../Sort/BubbleSort.h"
#include "../Sort/SelectionSort.h"
#include "../Sort/InsertionSort.h"
#include "../Sort/ShellSort.h"
#include "../Sort/QuickSort.h"
#include "../Sort/MergeSort.h"
#include "../Sort/Heap.h"
#include "../Sort/fsort.h"
#include "../Stack/Stack.h"

int main() {
    Stack stack(5);
    stack.Push(1);
    stack.Push(2);
    stack.Push(3);
    stack.Push(4);
    stack.Push(5);
    stack.Push(6);
    stack.Print();
    const auto data1 = stack.Pop();
    std::cout << "pop1 = " << data1 << std::endl;
    stack.Print();
    if(stack.IsFull()) {
        std::cout << "stack is full" << std::endl;
    } else {
        std::cout << "stack isn't full" << std::endl;
    }

    stack.Pop();
    stack.Pop();
    stack.Pop();
    stack.Pop();
    stack.Pop();
    stack.Push(100);
    stack.Push(200);
    stack.Print();
    const auto data2 = stack.Peek();
    std::cout << "peak1 = " << data2 << std::endl;
    stack.Print();

    stack.Pop();
    stack.Pop();
    stack.Pop();
    stack.Pop();
    if(stack.IsEmpty()) {
        std::cout << "stack is empty" << std::endl;
    } else {
        std::cout << "stack isn't empty" << std::endl;
    }
    return 0;
}