#include <iostream>
using namespace std;

class Test{
public:
	static int number;
private:
	
};

int Test::number = 0;

int main(){
	Test t1, t2;
	t1.number = 10;
	t2.number = 20;
	cout << t1.number << " " << t2.number << endl;
	cout << &t1.number << " " << &t2.number << endl;
	
	return 0;
}
