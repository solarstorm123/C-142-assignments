#include <iostream>
using namespace std;
const int len=10;
class Queue{
int head;
int tail;

public:
Queue(){
head=-1;
tail=-1;
}
int arr[len];
void push(int x);
void pop();
void display();
};

void Queue::push(int x){
    if((tail==len&&head==0) || (tail==head-1)){
            cout<<"overflow"<<endl;
    }
    else if(head==-1){
        head=tail=0;
        arr[tail]=x;
    }
    else if((head!=0)&&(tail==len)){
        tail=0;
        arr[tail]=x;
    }
    else{
        tail++;
        arr[tail]=x;
    }
}

void Queue::pop(){
    cout<<arr[head]<<" is popped."<<endl;
    if(head==len){
        head=0;
    }

    else{head++;}
}

void Queue::display(){
    if((tail<=len)&&(head<tail)){
        int a=head;
        while(a<=tail){
            cout<<arr[a]<<" ";
            a++;
        }
    }
    else if(tail<head){
        for(int a=head;a<=len;a++){
        cout<<arr[a]<<" ";
        }
        for(int a=0;a<=tail;a++){
            cout<<arr[a]<<" ";
        }
    }
    cout<<""<<endl;
}


int main(){
Queue q;
for(int i=1;i<11;++i){
    q.push(i);
}
q.display();
q.pop();
q.pop();
q.pop();
q.pop();
cout<<"intermediate: ";
q.display();
q.push(45);
q.push(46);
q.push(47);
q.push(48);
cout<<"final: ";
q.display();
return 0;
}
