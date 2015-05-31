#include <iostream>
using namespace std;

class calcul{
private :

public :
	void display(){
		cout<<"1.plus"<<endl;
		cout<<"2.minus"<<endl;
		cout<<"3.nanugi"<<endl;
		cout<<"4.gobhagi"<<endl;
		cout<<"what is your option? :";
	}

	void add(double a,double b){
		cout<<"a+b="<<a+b<<endl;
	}
	void minus(double a,double b){
		cout<<"a-b="<<a-b<<endl;
	}
	void nanugi(double a, double b){
		if(b==0){
			cout<<"you can't divide by 0"<<endl;
		}
		else{
			cout<<"a/b="<<a/b<<endl;
		}
	}
	void gobhagi(double a, double b){
		cout<<"axb="<<a*b<<endl;
	}
};

int main()
{
	double a,b;
	int option;
	calcul calculator;
	cout<<"input two numbers : "; cin>>a>>b;
	calculator.display(); cin>>option;
	if(option==1)
		calculator.add(a,b);
	else if(option==2)
		calculator.minus(a,b);
	else if(option==3)
		calculator.nanugi(a,b);
	else if(option==4)
		calculator.gobhagi(a,b);
	else
		cout<<"wrong option"<<endl;
	return 0;
}
