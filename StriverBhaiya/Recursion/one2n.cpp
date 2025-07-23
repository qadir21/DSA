#include<iostream> 
using namespace std;
void print12N(int x)
{
	if( x == 0) return;
	print12N(x - 1);
	cout << x << endl;
}
int main()
{
	int n;
	cin >> n;
	print12N(n);
	return 0;
}