#include<bits\stdc++.h>
using namespace std;

int f=-1,r=-1,n=10;
int arr[10];

void enqueue(int x){
    if(f==-1 && r==-1){
        f=0;
        r=0;
        arr[r]=x;
        return;
    }
    else if((r+1)%n==f){
        cout << "The Queue is Full!";
        return;
    }
    else{
        r=(r+1)%n;
        arr[r]=x;
        return;
    }
}

void dequeue(){
    if(f==-1 && r==-1){
         cout << "The Queue is Empty!";
         return;
    }
    else if(f==r){
        f=-1;
        r=-1;
        return;
    }
    else{
        f=(f+1)%n;
    }
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