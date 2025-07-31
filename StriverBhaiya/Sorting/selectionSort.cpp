#include<iostream>
using namespace std;

void selectionSort(int[], int);
void Swap(int &, int &);

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    
    selectionSort(arr, n);
    
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}

void selectionSort(int a[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        int mindx = i;
        for(int j = i + 1; j < n; j++)
        {
            if(a[j] < a[mindx]) mindx = j;
        }
        Swap(a[i], a[mindx]);
    }
}

void Swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}