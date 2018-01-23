#include<iostream>
using namespace std;

//data structure of node.
struct node{
int data;             //node has two components , one for storing data and other for linking it to other nodes.
node*next;
node*prev;
};

//data structure of linked list.
class linkedList{
private:            //can be accessed only through member functions.
    node*head;
    node*tail;
public:
    //constructor i.e. initialization of head and tail.
    linkedList(){
    head=NULL;
    tail=NULL;
    }

int n=0;                     //will be used to count the number the nodes.

void addNode(int a){         //function to add a node.
	node*temp=new node;

    if (head==NULL){         //for adding the first node.
	head=temp;
    tail=temp;
    temp->data=a;
    temp->next=NULL;
	temp->prev=NULL;

	}
	else{                  //for adding subsequent nodes.
		node*temp=new node;
		temp->data=a;
		temp->next=NULL;
		temp->prev=tail;
		tail->next=temp;
		tail=temp;
	}

	n++;                 //adds one to the value of n every time a node is added and similarly substract one in the following functions.
}

void insertAt(int pos, int data){           //insert node at any valid position.
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
		temp->prev=temp1;
		(temp1->next)->prev=temp;
        temp1->next=temp;
        temp->data=data;
        n++;
    }
    else{cout<<"invalid entry";}
}
void deleteNode(){	//delete the last node.
	node*temp=tail->prev;
	delete tail;                       //check this code;
	temp->next=NULL;
	tail=temp;
    n--;
}
void deleteNodeAt(int pos){          //delete node any given position

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

void display(){                   //displays the elements of linked list.
	
		for (node* temp=head; temp!=NULL; temp=temp->next){
			cout << temp->data << "->";
		}
		cout << "NULL" << endl;
	}

void displayRev(){
	
	cout<<"NULL <-";
	for(node*temp=tail;temp!=NULL; temp=temp->prev){
		cout<<temp->data;
	}
}
};

int main(){
  
  	linkedList s;              //create a linked list named s.

	for(int i=1;i<11;i++){         //adding elements to the node.
    s.addNode(i);
	}

s.display();                   //performing various functions defined above.
s.deleteNode();
s.display();
s.deleteNodeAt(3);
s.display();
s.addNode(10);
s.display();
s.countItems();
s.insertAt(3,45);
s.display();
return 0;
}
