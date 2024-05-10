#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node * next;

    Node(){
        this->data=0;
        this->next=nullptr;
    }

    Node(int data){
        this->data=data;
        this->next=nullptr;
    }
};

class LinkedList{
    Node * head;

public:
    LinkedList(){
        this->head=nullptr;
    }

    int insertNode(int data){
        Node newNode= new Node(data);
        if(head == nullptr){
            head=newNode;
        }
        else{
            Node * temp = head;

        }
    }



};


int main(){
    cout << "Hello";
    return 0;
}
