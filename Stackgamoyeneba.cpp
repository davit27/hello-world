#include <iostream>
#include <cstdlib>

struct Node {
	int data;
	Node *next;
};
using namespace std;

class Stack {
	private:
		Node *Top;
	public:
		Stack(){
			Top=0;
		}
		
		void Push(int k){
			
			Node *tmp;
			tmp=new Node();
			tmp->data=k;
			tmp->next=Top;
			Top=tmp;
		}
		
		void Pop(){
			
			if(Top!=0){
				Node *tmp=Top;
				Top=Top->next;
				
			}
		}
		
		void print (){
			Node *tmp=Top;
			if (tmp==0) cout<<"steki carielia";
			while (tmp->next!=0){
				cout<<tmp->data<<"---";
				tmp=tmp->next;
			}
			cout<<tmp->data;
		}
        int GetTop(){
        	int p=Top->data;
        	return p;
		}
};



int main(int argc, char** argv) {
	Stack *A=new Stack();
	Stack *B=new Stack();
	 A->Push(3);
	 A->Push(4);
	 A->Push(5);
	 A->Push(9);
	 A->Push(10);
	 B->Push(1);
	 B->Push(2);
	 B->Push(6);
	 B->Push(7);
	 B->Push(11);
	 
	 	 for (int i=0; i<2; i++){
	 	B->Push(A->GetTop());
	    A->Pop();
	 }
	 cout<<A->GetTop()<<endl;
	B->print();
    
    
	system("pause");
	return 0;
}
