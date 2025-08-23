#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) cin >> arr[i];
	int target;
	cin >> target;
	int idx = -1;
	for(int i = 0; i < n; i++)
	{
		if(arr[i] == target)
		{
			idx = i;
			break;
		}
	}
	(idx != -1) ? cout << target << " is found at index: " << idx : cout << target << " is not found";
	return 0;
}