#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    public:
    	Node(int val)
    	{
    		data=val;
    		next=NULL;
		}
};

class Linkedlist {
    public:
	Node* head;
public:
	Linkedlist()
	{
		head=NULL;
	}
    void insertAtEnd(int val) {
        Node* newnode = new Node(val);
        if (head == nullptr) 
		{
            head = newnode;
            return;
        }
        Node*temp=head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next=newnode;
    }
    
    void printlist(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << "-> ";
        temp = temp->next;
    }
    cout << endl;
}
    
	void printreverse(Node* head)
{
    if (head == nullptr) 
        return;
    printreverse(head->next);  
    cout << head->data << "->"; 
}

    
	};
	
	int main()
	{
		Linkedlist list;
		list.insertAtEnd(10);
		list.insertAtEnd(20);
		list.insertAtEnd(30);
		list.insertAtEnd(40);
		list.insertAtEnd(50);
		
		cout<<"Before reverse"<<endl;
		list.printlist(list.head);
		cout<<"After reverse"<<endl;
		list.printreverse(list.head);
		
	}    
    