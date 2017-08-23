#include <iostream>
using namespace std;

int main()
{
	char ch;
	float a,b,result;
	cout<<"enter two numbers:";
	cin>>a>>b;
	cout<<"\n"<<"enter the operator(+,-,*,/):";
	cin>>ch;
	cout<<"\n";
	if (ch=='+') //adittion
	result=a+b;
	else 
	if (ch=='-') //subtraction
	result=a-b;
	else
	if (ch=='*') //multiplication
	result=a*b;
	else
	if (ch=='/') //b must not be zero
	//division operation
	result=a/b;
	else 
	cout<<"wrong operation\n";
	cout<<"\n"<<"the calculated result is:"<<result<<"\n";

return 0;	
}
