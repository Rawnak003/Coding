#include<iostream>
using namespace std;

int i,n=10,top=-1;
int arr[10];

int isEmpty(){
    if(top==-1){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(){
    if(top==n-1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(int x){
    if(isFull()){
        cout << "The stack is Full!";
        return;
    }
    top++;
    arr[top]=x;
}

void pop(){
    if(isEmpty()){
        cout << "The stack is Empty!";
        return;
    }
    top--;
}

void Top(){
    cout << "Top : " << arr[top] << endl;
}

void Bottom(){
    cout << "Bottom : " << arr[0] << endl;
}

void display(){
    cout << "The stack : ";
    for(int i=0;i<=top;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    cout << "1.Push\n2.Pop\n3.Top\n4.Bottom\n5.Exit\n";
    while(1){
        int a,v;
        cout << "Enter your chioce : ";
        cin >> a;
        switch(a){
            case 1:
            {
                cout << "Enter the value : ";
                cin >> v;
                push(v);
                display();
                break;
            }
            case 2:
            {
                pop();
                display();
                break;
            }
            case 3:
            {
                Top();
                break;
            }
            case 4:
            {
                Bottom();
                break;
            }
            case 5:
            {
                cout << "The operation is closed" << endl;
                return 0;
            }
        }
    }
}