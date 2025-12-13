#include <iostream>
#include<conio.h>
using namespace std;
class Test {
	private:
		int n;
		public:
			Test()
			{
			n=0;	
			}
			void input()
			{
				cout<<"Enter any number";
				cin>>n;
			}
			void show(){
			cout<<"value of n is ="<<n;	
			}
		};
		int mai()
		{
		Test*ptr;
		 ptr=new Test;
		 ptr->input();
		 ptr->show();	
		}
