#include <iostream>
using namespace std;

void qS(int[], int, int);
int partition(int[], int, int);

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    qS(arr, 0, n - 1);
    for(int x : arr) cout << x << " ";
    return 0;
}

void qS(int a[], int low, int high)
{
    if (low < high)
    {
        int p = partition(a, low, high);
        qS(a, low, p);
        qS(a, p + 1, high);
    }
}

int partition(int a[], int low, int high)
{
    int pivot = a[low];
    int i = low - 1;
    int j = high + 1;
    while (true)
    {
        do {
            i++;
        } while (a[i] < pivot);
        do {
            j--;
        } while (a[j] > pivot);
        if (i >= j) return j;
        swap(a[i], a[j]);
    }
}