#include<iostream>
using namespace std;

class node{
	public:
int data;
node*prev;
node*next;
};

class linkedList {
	private:
		node*head;
		node*tail;
	public :
		linkedList(){
			head=NULL;
			tail=NULL;
		}
	void addNode(int a){
	node*temp=new node;
    if (head==NULL){
	head=temp;
tail=temp;
temp->data=a;
temp->next=NULL;
temp->prev=NULL;
	}
	else{
		node*temp=new node;
		temp->data=a;
		temp->next=NULL;
		tail->next=temp;
		temp->prev=tail;
		tail=temp;
	}
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
		for (int i=0; i<10; ++i) {
			s.addNode(i);
		}
        s.display();
		return 0;
	}



