#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Object{
public:
	Object(string name = "default"){
		this->name = name;
		this->index = count+1;
		count = count + 1;
		objList.push_back(this);
//		cout << index << endl;
	}
	~Object(){
		count = count - 1;
		objList.erase(objList.begin() + index-1);
		for (int i = 0 ; i < count ; i++){
			objList[i]->index = i+1;
		}
//		cout << name << endl;
	}
	static void info(){
		cout << "----------------" << endl;
		cout << "總物體數目: " << count << endl;
		cout << "----------------" << endl;
		for (int i = 0 ; i < objList.size() ; i++){
			cout << "編號" << objList[i]->index
			     << " 名稱: " << objList[i]->name << endl;
		}
		cout << "----------------" << endl;
	}
private:
	string name;
	int index;
	static int count;
	static vector<Object*> objList;
};

int Object::count = 0;
vector<Object*> Object::objList;

int main(){
	Object obj0;
	Object obj1("Cube"), obj2("Sphere");
	
	obj1.info();
	
	if (12 > 5){
		Object obj3("Cube2"), obj4("Sphere2");
		
		obj1.info();
	}
	
	obj1.info();
	
	return 0;
}
