#include<iostream> 
using namespace std;
void reverseArray(int * a, int i , int j)
{
	if(i >= j) return;
	int temp = a[i];
	a[i] = a[j];
	a[j] = temp;
	reverseArray(a, i + 1, j - 1);
}
int main()
{
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) cin >> arr[i];
	reverseArray(arr, 0, n - 1);
	for(int i : arr) cout << i << " ";
	return 0;
}