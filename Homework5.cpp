#include<iostream>
using namespace std;

void add();
void display();

struct node
{
	int score;
	node* next;
};

node* head = NULL;

int main()
{
	int choice = 0;
	while(choice != 3){
		cout<<"What would you like to do? (enter 1, 2, or 3)"<<endl;
		cout<<"|1. Create a linked list\n|2. Display the linked list\n|3. Exit"<<endl;
		cin>>choice;

		switch(choice){
		case 1:{
			add();
			break;
			   }
		case 2:{
			display();
			break;
			   }
		case 3:{
			system("pause");
			return 0;
			   }
		default: cout<<"Invalid Input"<<endl;
		}
	}
}

void add()
{
	int length = 0;
	cout<<"how many nodes would you like to create?";
	cin>>length;
	node* newnode;
	for(int i = 0; i < length; i++){
		newnode = new node;
		cout<<"enter a score: ";
		cin>>newnode->score;
		newnode->next = head;
		head = newnode;
	}
}

void display()
{
	if(head == NULL)
		cout<<"There is no list to display, please create a list first then try again."<<endl;
	else{
		node* current = head;
		while(current != NULL){
			cout<<current->score<<endl;
			current = current->next;	
		}
	}
}

