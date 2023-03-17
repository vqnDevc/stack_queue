#include <bits/stdc++.h>
#include <string.h>
#include <stack>

using namespace std;

int soNguyen(char c){
	return (int)c - 48;	
}

int main(){
	string s; cin >> s;
	stack<char>stA;
	stack<char>stB;
	stack<int>stC;
	
	int sl = 0,k[1000] = {0};
	vector<char>temp;
	
	for(char c:s){
		if(c == '['){
			stB.push(c);
			
		}
		else if(c == ']'){
			stB.pop();
			if(!stC.empty()){
				for(int i = 1; i < stC.top();i++){
					
					int solg  = sl-1;
					int sizeT = temp.size();
					for(int j = k[solg]; j > 0;j--){
						
						temp.push_back(temp[sizeT-j]);
						
							for(int i = 0; i < solg; i++)
								k[i]++;		
					}
				}
//				if(!stB.empty()){
					sl--;
//				}
				stC.pop();
			}		
		}
		else if(c >= '2' && c <= '9'){
			int x = soNguyen(c);
			stC.push(x);
			sl++;
		}
		else if(c >= 'A' && c <= 'Z'){
			if(stB.empty()){
				stA.push(c);
			}
			else{
				temp.push_back(c);
				for(int i = 0; i < sl; i++){
					k[i]++;	
				}
			}
		}else continue;
	}
	
	
	for(vector<int>::size_type i = 0; i < temp.size(); i++){
		stA.push(temp[i]);
//		cout<<temp[i];
	}
	
	stack<char>stA2;
	while(!stA.empty()){
		stA2.push(stA.top());
		stA.pop();
	}
		
	while(!stA2.empty()){
		cout<<stA2.top();
		stA2.pop();
	}
    return 0;
}
