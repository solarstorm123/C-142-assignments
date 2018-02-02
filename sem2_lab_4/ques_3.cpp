#include <iostream>
using namespace std;

class Company{
    string name;
    long number;
    string issue;
public:
    Company(){
        name="avnish";
        number=789;
        issue="dfsdf";
    }
    void getName(string a);
    void getNumber(long b);
    void getIssue(string c);
};

void Company::getName(string a){
    name="a";
}

void Company::getNumber(long b){
    number=b;
}

void Company::getIssue(string c){
    issue=c;
}

class node{
public:
    Company data;
    node*next;
};

class Queue{
node*head;
node*tail;
public:
    Queue(){
    head=NULL;
    tail=NULL;}

    void push(int x);
    void pop();
};

void Queue::push(int x){
node*temp=new node;
if (head==NULL){
    head=temp;
    temp->data=x;
    temp->next=NULL;
    tail=temp;
}
else{
        tail->next=temp;
        temp->data=x;
        temp->next=NULL;
        tail=temp;
}
cout<<x<<" is pushed."<<endl;
};

void Queue::pop(){
    if(head!=NULL){
    node*temp;
    temp=head;
    cout<<head->data<<" is popped."<<endl;
    delete head;
    head=temp->next;
    }
    else{
        cout<<"stack underflow"<<endl;
    }
}

int main(){
    Company a;
    a.getName("anand");
    a.getNumber(12345);
    a.getIssue("fever");

    Company b;
    b.getName("vishal");
    b.getNumber(546);
    b.getIssue("headache");

    Company c;
    c.getName("ashu");
    c.getNumber(145);
    c.getIssue("vomit");

    Company d;
    d.getName("biju");
    d.getNumber(345);
    d.getIssue("eye distress");

    Company f;
    f.getName("camilla");
    f.getNumber(123);
    f.getIssue("phone-sickness");

    Company g;
    g.getName("demi");
    g.getNumber(782);
    g.getIssue("drugs");

    Company h;
    h.getName("shakira");
    h.getNumber(186);
    h.getIssue("football");

    Company i;
    i.getName("ellie");
    i.getNumber(1235);
    i.getIssue("cough");

    Company j;
    j.getName("britney");
    j.getNumber(237);
    j.getIssue("fracture");

    Company k;
    k.getName("sia");
    k.getNumber(555);
    k.getIssue("cold");

    Queue L;
    L.add

    return 0;
}
