#include<iostream>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    int j = -1;
    // Find first zero
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }
    if (j != -1) 
    {
        for (int i = j + 1; i < n; i++) 
        {
            if (arr[i] != 0) 
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                j++;
            }
        }
    }
    for (int x : arr) cout << x << " ";
    return 0;
}