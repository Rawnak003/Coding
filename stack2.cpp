#include<bits\stdc++.h>
using namespace std;

struct node{
    int data;
    struct node* next;
};

struct node* top=0;

void push(int x){
    struct node* newNode=(struct node*)malloc(sizeof(struct node));
    struct node* top=0;
    newNode->data=x;
    newNode->next=top;
    top=newNode;
}

void pop(){
    if(top==0){
        cout << "The stack is empty!";
        return;
    }
    struct node* temp=top;
    top=temp->next;
    free(temp);
}

void print(){
    struct node* temp=top;
    if(top==0){
        cout << "The stack is empty!";
        return;
    }
    while(temp!=NULL){
        cout << temp->data << " ";
        temp=temp->next;
    }
    cout << endl;
}

int main(){
    push(1);
    push(2);
    push(3);
    push(4);
    pop();
    pop();
    push(5);
    push(6);
    push(7);
    push(8);
    pop();
    print();
}