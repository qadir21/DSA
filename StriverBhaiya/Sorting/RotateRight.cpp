#include<iostream>
using namespace std;

void reverse(int [], int, int);

int main()
{
    int n, d;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    cin >> d;
    d = d % n;
    reverse(arr, 0, n-1);
    reverse(arr, 0, d-1);
    reverse(arr, d, n-1); 
    for (int x : arr) cout << x << " ";
    return 0;
}

void reverse(int arr[], int i, int j) 
{
    while (i < j) 
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}