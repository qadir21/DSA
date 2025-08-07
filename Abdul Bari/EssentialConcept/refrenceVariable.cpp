#include<iostream>
using namespace std;
int main()
{
	int a;
	cin >> a;
	int &r = a;
	cout << r << endl;
	r++;
	cout << a << endl;
	cout << r << endl;
	return 0;
}