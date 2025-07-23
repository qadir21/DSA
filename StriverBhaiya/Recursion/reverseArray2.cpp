#include<iostream> 
using namespace std;
void reverseArray(int * a, int i, int n)
{
	if(i >= n / 2) return;
	int temp = a[i];
	a[i] = a[n - i - 1];
	a[n - i - 1] = temp;
	reverseArray(a, i + 1, n);
}
int main()
{
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) cin >> arr[i];
	reverseArray(arr, 0, n);
	for(int i : arr) cout << i << " ";
	return 0;
}