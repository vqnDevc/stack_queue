#include <bits/stdc++.h>
#include <stack>
using namespace std;

int check(string const s){
	stack<char>st;
	for(char x : s){
		if(x == '(' || x == '[' || x == '{'){
			st.push(x);
		}
		else{
			if(st.empty()){
				return 0;
			}
			else{
				if((st.top() == '(' && x == ')') || (st.top() == '[' && x == ']') || (st.top() == '{' && x == '}') ){
					st.pop();
				}
				else{
					return 0;	
				}	
			} 
		}
	}
	if(st.empty())	return 1;
	else	return 0;
}
int main(){
	string s; cin >> s;
	if(check(s)) cout<<"VALID\n";
	else cout<<"INVALID\n";
	
	return 0;
}


	
	
	
	
