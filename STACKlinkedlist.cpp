#include <bits/stdc++.h>

using namespace std;

struct snode{
	int data;
	struct snode *next;
};
typedef struct snode Node;

struct SLinkedList{
	Node * head;
	Node * tail;
	int size;
};
typedef struct SLinkedList SLinkedList;

Node *creatNode(const int &value){
	Node *tmp = new Node;
	tmp->data = value;
	tmp->next = NULL;
	return tmp;
}

void push(SLinkedList *L, const int &value);
void pop(SLinkedList *L);
int Top(SLinkedList *L);
int Size(SLinkedList *L);
bool Empty(SLinkedList *L);

void push(SLinkedList *L, const int &value){
	Node *newNode = creatNode(value);
	if(L->size == 0){
		L->head = newNode;
		L->tail = newNode;
	}
	newNode->next = L->head;
	L->head = newNode;
	L->size++;
}

void pop(SLinkedList *L){
	if(L->size == 0){
		cout<<"\nINVALID\n";
	}else{
	 	Node *tmp = L->head;
		L->head = tmp->next;
		delete tmp; 	
		L->size--;
	}
}

int Top(SLinkedList *L){
	if(L->head != NULL)	return L->head->data;
}

int Size(SLinkedList *L){
	return L->size;
}

bool Empty(SLinkedList *L){
	return L->size == 0;
}

int main(){
	SLinkedList *st = new SLinkedList;
	st->head = NULL;
	st->tail = NULL;
	st->size = 0;
	
	while(1){
		cout<<"\n--------------\n";
		cout<<"1.push\n";
		cout<<"2.pop\n";
		cout<<"3.top\n";
		cout<<"4.size\n";
		cout<<"5.empty\n";
		cout<<"-EXIT-\n";
		cout<<"---------------\n";
		int n; cin>>n;
		switch(n){
			case 1:
				int x;cin>>x;
				push(st,x);
				break;
			case 2:
				pop(st); break;
			case 3:
				if(Empty(st)) cout <<"EMPTY";
				else cout<<Top(st)<<endl; break;
			case 4:
 				cout<<Size(st); break;
			case 5:
                Empty(st)?cout<<"EMPTY":cout<<"NOT EMPTY";
				break;
			default:
				return 0;
		}
	}
    return 0;
}
