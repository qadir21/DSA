#include<iostream>
using namespace std;

int main() {
    int n, d;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    cin >> d;

    // Perform left rotation d times
    for(int i = 0; i < d; i++) {
        int temp = arr[0]; // always remove first element
        for(int j = 1; j < n; j++) {
            arr[j - 1] = arr[j];
        }
        arr[n - 1] = temp;
    }

    for(int x : arr) cout << x << " ";
    return 0;
}