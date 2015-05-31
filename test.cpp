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

	void add(int a,int b){
		cout<<"a+b="<<a+b<<endl;
	}
	void minus(int a,int b){
		cout<<"a-b="<<a-b<<endl;
	}
	void nanugi(int a, int b){
		if(b==0){
			cout<<"0으로 나눌 수 없음!"<<endl;
		}
		else{
			cout<<"a/b="<<(double)a/b<<endl;
		}
	}
	void gobhagi(int a, int b){
		cout<<"axb="<<a*b<<endl;
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
	else if(option==3)
		calculator.nanugi(a,b);
	else if(option==4)
		calculator.gobhagi(a,b);
	else
		cout<<"ㄲㅈ"<<endl;
	return 0;
}
