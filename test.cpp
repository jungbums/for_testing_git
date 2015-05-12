#include <iostream>
using namespace std;

class calcul{
private :

public :
	void display(){
		cout<<"1.plus"<<endl;
		cout<<"2.minus"<<endl;
		cout<<"what is your option? :";
	}

	void add(int a,int b){
		cout<<"a+b="<<a+b<<endl;
	}
	void minus(int a,int b){
		cout<<"a-b="<<a-b<<endl;
	}
};

int main()
{
	int a,b;
	int option;
	calcul calculator;
	cout<<"input two numbers : "; cin>>a>>b;
	calculator.display(); cin>>option;
	if(option==1)
		calculator.add(a,b);
	else if(option==2)
		calculator.minus(a,b);
	else
		cout<<"ㄲㅈ"<<endl;
	return 0;
}
