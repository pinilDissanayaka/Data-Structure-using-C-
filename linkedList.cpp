#include <iostream>

using namespace std;

class Node{
    public:
        int data;
        Node * next;

    Node(){
        this->data=NULL;
        this->next=NULL
    }

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
}

class LinkedList(){
    Node * head;
    LinkedList(){
        this->head=NULL;
    }
}



