#ifndef __MY_LIST_H__
#define __MY_LIST_H__
struct Data{
    int a;
    int b;
};
struct Node{
    Data data;
    Node * next;
};
class myList{
private:
    Node * head;
public:
    void initList();
    void insertList(int data);
    Node * searchList();
    void traverseList();
    void destroyList();
};

#endif