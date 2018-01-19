#include<iostream>
using namespace std;

struct node{
int data;
node*next;
};

class linkedList{
private:
    node*head;
    node*tail;
public:
    linkedList(){
    head=NULL;
    tail=NULL;
    }

int n=0;

void addNode(int a){
	node*temp=new node;

    if (head==NULL){
	head=temp;
    tail=temp;
    temp->data=a;
    temp->next=NULL;

	}
	else{
		node*temp=new node;
		temp->data=a;
		temp->next=NULL;
		tail->next=temp;
		tail=temp;
	}

	n++;
}

void insertAt(int pos, int data){
    if (pos==n+1){
        addNode(data);
        n++;
    }
    else if(pos>n+1){
        cout<<"linked list does not have that many elements";
    }
    else if(pos<=n && pos>0){
        node*temp=new node;
        node*temp1=head;
        for(int x=1;x<pos-1;x++){
            temp1=temp1->next;
        }
        temp->next=temp1->next;
        temp1->next=temp;
        temp->data=data;
        n++;
    }
    else{cout<<"invalid entry";}
}
void deleteNode(){
    node*temp=head;
    while(temp->next!=tail){
        temp=temp->next;
    }
    tail=temp;
    temp=temp->next;
    delete temp;
    tail->next=NULL;
    n--;
}
void deleteNodeAt(int pos){

if (pos<n){
node*temp=head;

for(int x=1;x<pos-1;x++){
    temp=temp->next;
}

node*temp1=temp->next;
temp->next=temp1->next;
delete temp1;
n--;
}
else if (pos==n){
    deleteNode();
    n--;
}
else if (pos>n){
    cout<<"invalid entry";
}
}
void countItems(){
cout<<"the number of elements are :"<<n<<endl;
}

void display(){
		node*temp=head;
		for (node* temp=head; temp!=NULL; temp=temp->next){
			cout << temp->data << "->";
		}
		cout << "NULL" << endl;
	}
};
int main(){
    linkedList s;
for(int i=1;i<11;i++){
    s.addNode(i);
}
s.display();
s.deleteNode();
s.display();
s.deleteNodeAt(3);
s.display();
s.countItems();
s.insertAt(3,45);
s.display();
return 0;
}
