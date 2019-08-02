#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
	map<int, int> m1;
	m1[0] = 100;
	m1[100] = 200;
	cout << m1[0] << " " << m1[100] << endl;
	
	map<string, int> m2;
	m2["apple"] = 20;
	m2["banana"] = 43;
	
	map<string, double> m3;
	m3["Amy"] = 79.5;
	m3["Bob"] = 92.6;
	
	map<string, map<int, double> > m4;
	map<int, double> m4_1;
	m4_1[106] = 88.4;
	m4_1[107] = 90.2;
	m4_1[108] = 97.2;
	m4["Cindy"] = m4_1;
	cout << m4["Cindy"][107] << endl;
	
	
	return 0;
}
