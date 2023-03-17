#include <bits/stdc++.h>
#include <stack>
#include <sstream>

int main(){
	
    std::string s; getline(std::cin,s);
    std::stringstream os; os << s;
    std::stack<std::string>st;
    
    while(!os.eof()){
    	std::string str;
		os>>str;
		st.push(str);	
	}
	
	while(!st.empty()){
		if(st.size() > 1)
			std::cout<<st.top()<<" ";
		else 
			std::cout<<st.top();
		st.pop();
	}
    
    return 0;
}

//    stack<char>st;
//    for(char x:s) st.push(x);
//    
//    while(!st.empty()){
//        cout<<st.top();
//        st.pop();
//    }
    