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
#include "../Queue/Queue.h"

int main() {
    Queue queue(5);
    queue.Enqueue(1);
    queue.Enqueue(2);
    queue.Enqueue(3);
    queue.Enqueue(4);
    queue.Enqueue(5);
    queue.Enqueue(6);
    queue.Print();
    for(int i=0;i<2;++i) {
        std::cout << queue.Dequeue() << " ";
    }
    std::cout << std::endl;
    queue.Enqueue(-1);
    queue.Enqueue(-2);
    queue.Print();
    return 0;
}