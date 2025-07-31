#include<iostream> 
using namespace std;
void mergeSort(int [], int, int);
void merge(int [], int, int, int);
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    mergeSort(arr, 0, n - 1);
    for(int x : arr) cout << x << " ";
    return 0; 
}
void mergeSort(int a[], int lo, int hi)
{
    if(lo == hi) return;
    int mid = (lo + hi) / 2;
    mergeSort(a, lo, mid);
    mergeSort(a, mid + 1, hi);
    merge(a, lo, mid, hi);
    return;

}
void merge(int ar[], int lo, int mid, int hi)
{
    // [lo....mid]
    // [mid + 1.......hi]
    vector<int> temp;
    int left = lo;
    int right = mid + 1;
    while(left <= mid && right <= hi)
    {
        if(ar[left] <= ar[right]) 
        {
            temp.push_back(ar[left]);
            left++;
        }
        else
        {
            temp.push_back(ar[right]);
            right++;
        }
    }
    while(left <= mid)
    {
        temp.push_back(ar[left]);
        left++;
    }
    while(right <= hi)
    {
        temp.push_back(ar[right]);
        right++;
    }
    for(int i = lo; i <= hi; i++) ar[i] = temp[i - lo];
    return;
}
