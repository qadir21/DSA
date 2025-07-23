#include<iostream>
using namespace std;
void printName(int n)
{
	if(n < 1) return;
	cout << "Qadir" << endl;
	printName(n - 1); 
}
int main()
{
	int n;
	cin >> n;
	printName(n);
	return 0;
}