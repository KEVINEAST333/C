#include <iostream>
#include <vector>
using namespace std;
//�������Base������������ͬ��Ա����fn1��fn2��
//˽��������Derived�࣬ͨ��Dervied��Ķ�����û��ຯ��fn1()����д��Դ����
class Base {
public :
    Base() {};
    ~Base() {
    };
    void fn1();
    void fn2();

};
void Base::fn1()
{
    cout << "Base fn1 is used." << endl;
}
void Base::fn2()
{
    cout << "Base fn2 is used." << endl;
}

class Dervied : private Base {
public:
    Dervied() {};
    ~Dervied() {};
};




//int main()
//{
//
//    Dervied d ;
//    d.fn1(); 
//    return 0;
//}