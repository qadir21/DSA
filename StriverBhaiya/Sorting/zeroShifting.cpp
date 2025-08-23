#include<iostream>
#include<vector>
using namespace std;

void reverse(int [], int, int);

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) cin >> arr[i];
	vector<int> temp;
	for(int i = 0; i < n; i++)
	{
		if(arr[i] != 0) temp.push_back(arr[i]);
	}
	for(int i = 0; i < temp.size(); i++) arr[i] = temp[i];
	int noOfNonZeros = temp.size();
	for(int i = noOfNonZeros; i < n; i++) arr[i] = 0;
	for(int x : arr) cout << x << " "; 
	return 0;
}