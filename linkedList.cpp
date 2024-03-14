#include <iostream>

using namespace std;

class Node{
    public:
        int data;
        Node * next;

        Node(){
            this->next=NULL;
        }

        Node(int data){
            this->data=data;
            this->next=NULL;
        }
};



