#include<iostream>
#include <string>
using namespace std;
class Dog {
public:
	Dog(int initialAge , int initialWeight );
	~Dog();
	int getAge() {
		return age;
	}
	void setAge(int age) {
		this->age = age;
	}
	int getWeight() {
		return weight;
	}
	void setWeight(int weight) {
		this->weight = weight;
	}
private:
	int age, weight;
};
	Dog::Dog(int initialAge, int initialWeight) {
		age = initialAge;
		weight = initialWeight;
	}
	Dog::~Dog() {
	}
	//int main() {
	//	Dog Jack(2, 10);
	//	cout << "�ܿ�����";
	//	cout << Jack.getAge() << "��" << Jack.getWeight() << "���صĹ�" << endl;
	//	Jack.setAge(7);
	//	Jack.setWeight(20);
	//	cout << "���ڽܿ���";
	//	cout << Jack.getAge() << "��" << Jack.getWeight() << "���صĹ�" << endl;
	//	return 0;
	//}