#include <iostream>
#include <string>
using namespace std;

class Human{
public:
	Human(){
	}
	Human(string str){
		name = str;
	}
	void SetName(string str){
		name = str;
	}
	string GetName(){
		return name;
	}
private:
	string name;
};

int main(){
	Human h1("Cindy");
	cout << h1.GetName() << endl;
	h1.SetName("Alice");
	cout << h1.GetName() << endl;
	//cout << h1.name << endl;
	Human h2;
	h2.SetName("Bob");
	cout << h1.GetName() << " " << h2.GetName() << endl;
	return 0;
}
