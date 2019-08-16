#include <iostream>
using namespace std;

class Node {
public:
	Node(){
		cout << "HAHAHAHA!!!" << endl;
		tmp = new int(10);
		value = 0;
		index = -100;
	}
	Node(int a){
		cout << "YESSSSSS!" << endl;
		cout << a << endl;
	}
	~Node(){
		cout << "NOOOOOOOOOOOOO!" << endl;
		cout << index << endl;
		delete tmp;
	}
	int value;
	int GetIndex();
	void SetIndex(int);
	int* GetTmp(){ return tmp; }
private:
	int index;
	int* tmp;
};

int main(){
	int a = 10;
	if (a > 0){
		Node node1(3), node2;
		
		cout << node1.GetTmp() << " " << node2.GetTmp() << endl;

		node1.value = 5;
		node2.value = 10;
		cout << node1.value << " " << node2.value << endl;

		node1.SetIndex(30);
		node2.SetIndex(60);
		cout << node1.GetIndex() << " " << node2.GetIndex() << endl;
	}


	return 0;
}

int Node::GetIndex(){
	return index;
}

void Node::SetIndex(int i){
	index = i;
}


















