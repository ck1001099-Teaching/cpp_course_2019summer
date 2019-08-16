#include <iostream>
#include <string>
using namespace std;

class Human{
public:
	Human(){}
	~Human();
	string name;
	int age;
	void f();
private:
	void g();
};

int main(){
	Human h1;
	h1.name = "Cindy";
	
	Human h2(h1);
	h2.name = "Andy";
	
	return 0;
}

Human::~Human(){
	cout << "Release " << name << endl;
}

void Human::f(){
	cout << "f() function" << endl;
	g();
}

void Human::g(){
	cout << "g() function" << endl;
}
