#include<iostream>
using namespace std;
class A{
	public:
	void show(){
		cout<<"show A"<<endl;
	}
};
class B
{
	public:
	void show()
	{
		cout<<"show B"<<endl;
			
		}
};
class C: public A, public B{
	public:
		void show() {
	  A::show();
        B::show();
		}
};

int main()
  {
    A a;
    B b;
    C c;
  	A::obj.show();
  	B::obj.show();
    C::obj.show();
  }
