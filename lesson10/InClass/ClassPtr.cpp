#include <iostream>
#include <vector>
using namespace std;

class A{
public:
	void f(){ cout << "f() function" << endl; }
	void Set_a(int a){
		this->a = a;
	}
	void Print(){
		cout << this << endl;
	}
private:
	int a;
	double b;
	char c;
	bool d;
	vector<int> e;
};

void test(A*);

int main(){
	vector<A> vec;
	
	A obj1;
	A* ptr = &obj1;
	cout << ptr << endl;
	cout << &obj1 << endl;
	
	obj1.f();
	ptr->f();
	
	obj1.Print();
	
	return 0;
}

void test(A* obj){
	obj->f();
}
