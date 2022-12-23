#include<iostream>
#include<cmath>
using namespace std;
int sum(int y, int z)
{
	return y+z;
}
int subtraction(int y, int z)
{
	return y-z;
}
int multiplication(int y, int z)
{
	return y*z;
}
float qoutiont(float y, float z)
{
	return y/z;
}
int remainder(int y, int z)
{
	return y%z;
}
int main()
{
	float y,z,add,sub,mul,quo,rmndr;
	cout<<"Enter Your 1st no. : "<<endl;
	cin>>y;
	cout<<"Enter Your 2nd no. : "<<endl;
	cin>>z;
	cout<<"The addition of Numbers are: "<<endl;
	add=sum(y,z);
	cout<<add<<endl;
	cout<<"The subtraction of Numbers are: "<<endl;
	sub=subtraction(y,z);
	cout<<sub<<endl;
	cout<<"The multiplication of Numbers are: "<<endl;
	mul=multiplication(y,z);
	cout<<mul<<endl;
	cout<<"The Quotiont of Numbers are: "<<endl;
	quo=qoutiont(y,z);
	cout<<quo<<endl;
	cout<<"The Remainder of Numbers are: "<<endl;
	rmndr=remainder(y,z);
	cout<<rmndr<<endl;
	cout<<"The Square Root of Numbers are: "<<endl;
	cout<<"Sqrt of 1st no. : "<<sqrt(y)<<endl;
	cout<<"Sqrt of 2nd no. : "<<sqrt(z)<<endl;
	cout<<"The Log of Numbers are: "<<endl;
	cout<<"Sqrt of 1st no. : "<<log(y)<<endl;
	cout<<"Sqrt of 2nd no. : "<<log(z)<<endl;
}

