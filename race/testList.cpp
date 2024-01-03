#include <iostream>
#include <list>

template <typename T> class LinkedList{
    public:
        T data;
        LinkedList<T> * next;
    public:
        LinkedList(T d);
        LinkedList<T> * insertData(T d);
        void deleteNext();
};

template <typename T> 
LinkedList<T>::LinkedList(T d) {
        data = d;
        next = nullptr;
}

template <typename T> 
LinkedList<T> * LinkedList<T>::insertData(T d) {
        LinkedList<T> * np = new LinkedList<T>(d);
        np->next = next;
        next = np;
        return np;
}

template <typename T> 
void LinkedList<T>::deleteNext() {
    if(next==nullptr)
        return;
    next = next->next;
}

template <typename T> 
void freeList(LinkedList<T> * list) {
    if(list == nullptr)
        return;
    LinkedList<T> * np = list->next;
    delete list;
    freeList(np);
}

int main() {
    LinkedList<int> * intList = new LinkedList<int>(1);
    LinkedList<int> * tmpList = intList;
    for(int i = 2; i<10; i++){
        tmpList = tmpList->insertData(i);
    }
    tmpList = intList;
    while(tmpList != nullptr){
        std::cout << tmpList->data << " ";
        tmpList = tmpList->next;
    }
    std::cout<<std::endl;
    tmpList = intList->next;
    tmpList->deleteNext();
    tmpList->deleteNext();
    tmpList->deleteNext();
    tmpList = intList;
    while(tmpList != nullptr){
        std::cout << tmpList->data << " ";
        tmpList = tmpList->next;
    }
    std::cout<<std::endl;
    freeList(intList);
    return 0;
}