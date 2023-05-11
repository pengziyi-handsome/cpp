#include "myList.h"
#include <iostream>
using namespace std;
//������ʵ�ֳ�Ա������ʱ�򣬼ǵø����������ռ�
void myList::initList(){
    head = new Node();
    head->next = nullptr;
}

void myList::insertList(int data){
    Node * cur = new Node();
    cur->data.a = data;
    cur->data.b = data;
    
    cur->next = head->next;
    head->next = cur;
}

void myList::traverseList(){
    Node * pHead = head->next;
    while(pHead){
        cout << pHead->data.a << endl;
        pHead = pHead->next;
    }
}
void myList::destroyList(){
    Node *t;
    while(head){
        t = head;
        head = head->next;
        delete t;
    }
}