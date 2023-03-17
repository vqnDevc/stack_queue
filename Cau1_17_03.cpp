#include<bits/stdc++.h>
#include <stack>
using namespace std;
int main(){
    int n; cin>>n;
    int val;
    stack<int>st;
    stack<int>si;
    
    for(int i = 0 ; i < n;i++){
        cin>>val;
        st.push(val);
        if(!si.empty())
        	si.push(st.top() + si.top());
		else
			si.push(val);
    }
    stack<int>si2;
    while(!si.empty()){
    	si2.push(si.top());
    	si.pop();
	}
    
    for(int i = 0; i< n ;i++){
    	cout<<si2.top()<< " ";
    	si2.pop();
	}

    return 0;
}