#include<iostream> 
#include <unordered_map>
#include <map>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int arr[n];
    unordered_map<int, int> mpp;
    for(int i = 0; i < n; i++) 
    {
        cin >> arr[i];
        mpp[arr[i]]++;
    }
    // itterator over map
    for(auto it : mpp) cout << it.first << "->" << it.second << endl;

    int q;
    cin >> q;
    while(q--)
    {
        int number;
        cin >> number;
        // fetch
        cout << mpp[number] << endl;
    }
    return 0;
}