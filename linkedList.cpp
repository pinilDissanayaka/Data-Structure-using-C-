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


int main(){
    cout << "Hello";
    return 0;
}
