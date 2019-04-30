#include<iostream>
#include<cmath>
using namespace std;
int main()
{   
	int a = 2, q = 11, ya, yb, xa, xb, k1, k2;
	cout << "enter public key of user A : ";
	cin >> xa;
	cout << "enter public key of user B : ";
	cin >> xb;
	ya = pow(a, xa);
	ya %= q;
	yb = pow(a, xb);
	yb %= q;
	k1 = pow(yb, xa);
	k1 %= q;
	k2 = pow(ya, xb);
	k2 %= q;
	cout << "k1 : " << k1;
	cout << "k2 : " << k2;
	if(k1==k2)
	{
    	cout << "since both the keys are same, common key is : " << k1;
	}
	return 0;