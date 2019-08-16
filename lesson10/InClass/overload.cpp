#include <iostream>
using namespace std;

int f(){
	return 0;
}

int f(int a){
	return a;
}

int f(int a, int b){
	return a+b;
}

int main(){
	cout << f() << endl;
	cout << f(30) << endl;
	cout << f(100, 200) << endl;
	return 0;
}
