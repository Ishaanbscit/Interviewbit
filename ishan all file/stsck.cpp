/*middle elemnt is 25;
size of stack is 5
size/2 +1;*/
#inlude<iostream>
#include<stack>
using namepace std;

int solve (stack<int> &st, int& pos){
	//base case
}


int getMiddleElement(stack<int> &st){
	int size =st.size();
	if(st.empty())
	return -1;
	else{
		//stack is not empty
		//oddd
		int pos=0;
		if(size & 1){
			pos = size/2 +1;
		}
		else{
			pos=size/2;
		}
		int ans= solve
	}
}
 
 int main(){
 	stack<int> st;
 	st.push(10);
 	st.push(20);
 	st.push(30);
 	st.push(40);
 	st.push(50);
 	
 	
 	int mid = getMiddleElement(st);
 	cout<<"Middle element"
 }
