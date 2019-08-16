#include <iostream>
using namespace std;

class Circle{
public:
	double GetRadius();
	void SetRadius(double);
	double Test(){
		return GetArea();
	}
private:
	double GetArea();
	double radius;
};

int main(){
	Circle c1;
	c1.SetRadius(100);
	//cout << c1.GetArea() << endl;
	cout << c1.Test() << endl;
	return 0;
}

double Circle::GetRadius(){
	return radius;
}
void Circle::SetRadius(double r){
	radius = r;
}
double Circle::GetArea(){
	return radius * radius * 3.14;
}
