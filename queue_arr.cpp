#include<bits\stdc++.h>
using namespace std;

int f=0,r=-1,n=10;
int arr[10];

int isFull(){
    if(r==9){
        return 1;
    }
    else{
        return 0;
    }
}

int isEmpty(){
    if(f>r){
        return 1;
    }
    else{
        return 0;
    }
}

void enqueue(int x){
    if(isFull()){
         cout << "The Queue is Full!";
         return;
    }
    r++;
    arr[r]=x;
}

void dequeue(){
    if(isEmpty()){
         cout << "The Queue is Empty!";
         return;
    }
    f++;
}

void display(){
    cout << "The Queue : ";
    for(int i=f;i<=r;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
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