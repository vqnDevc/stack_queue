#include <bits/stdc++.h>

using namespace std;
int SIZE = 0, arrSt[100001];

bool empty(){
	return SIZE == 0;
}

void push(int x){
	arrSt[SIZE++] = x;
}

void pop(){
	SIZE--;
	if(SIZE < 0) cout<<"INVALID";
	SIZE = 0;
}

int top(){
	return arrSt[SIZE-1];
}

int size(){
	return SIZE;
}

int main(){
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
				int x;cin>>x;push(x); break;
			case 2:
				pop(); break;
			case 3:
				cout<<top()<<endl; break;
			case 4:
 				cout<<size(); break;
			case 5:
				empty()?cout<<"EMPTY":cout<<"NOT EMPTY";
				break;
			default:
				return 0;
		}
	}
    return 0;
}
