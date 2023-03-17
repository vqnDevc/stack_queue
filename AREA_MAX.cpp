#include<iostream>
#include <vector>
using namespace std;
int main(){
    
    vector<int>vt;
    int number;
    while(cin >> number){
        vt.push_back(number);
    }
    
    int sum = 0;
    for(vector<int>::size_type i = 1; i < vt.size()-1; i++){
    	if(vt[i] > vt[i-1] && vt[i] > vt[i+1]){
    		sum += vt[i];
		}
	}
	cout<<sum;
	vt.erase(vt.begin(),vt.end());
    return 0;
}