#include<bits\stdc++.h>
using namespace std;
struct node{
    int data;
    struct node* next;
};
struct node* front=0;
struct node* rear=0;
void enqueue(int x){
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    struct node* temp=rear;
    newNode->data=x;
    newNode->next=NULL;
    if(rear==NULL){
        rear=newNode;
        return;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
    return;
}
void dequeue(){
    if(front==NULL && rear==NULL){
        cout << "The Queue is Empty!";
        return;
    }
    struct node* temp=rear;
    rear=temp->next;
    free(temp);
}
void display(){
    if(front==NULL && rear==NULL){
        cout << "The Queue is Empty!";
        return;
    }
    cout << "The Queue : ";
    struct node* temp=rear;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp=temp->next;
    }
    cout << endl;
}
int main()
{
    cout << "1.Enqueue\n2.Dequeue\n3.Exit\n";
    while(1){
        int a,v;
        cout << "Enter your chioce : ";
        cin >> a;
        switch(a){
            case 1:
            {
                cout << "Enter the value : ";
                cin >> v;
                enqueue(v);
                display();
                break;
            }
            case 2:
            {
                dequeue();
                display();
                break;
            }          
            case 3:
            {
                cout << "The operation is closed" << endl;
                return 0;
            }
        }
    }
}