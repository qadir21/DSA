#include<iostream>
#include<vector>
using namespace std;

int main() 
{
    int n1;
    cin >> n1;
    int arr1[n1];
    for(int i = 0; i < n1; i++) cin >> arr1[i];

    int n2;
    cin >> n2;
    int arr2[n2];
    for(int i = 0; i < n2; i++) cin >> arr2[i];

    int i = 0, j = 0;
    vector<int> unionArray;

    while(i < n1 && j < n2) 
    {
        if(arr1[i] < arr2[j]) 
        {
            if(unionArray.empty() || unionArray.back() != arr1[i]) 
                unionArray.push_back(arr1[i]);
            i++;
        }
        else if(arr2[j] < arr1[i]) 
        {
            if(unionArray.empty() || unionArray.back() != arr2[j]) 
                unionArray.push_back(arr2[j]);
            j++;
        }
        else 
        { // arr1[i] == arr2[j]
            if(unionArray.empty() || unionArray.back() != arr1[i]) 
                unionArray.push_back(arr1[i]);
            i++;
            j++;
        }
    }

    // Remaining elements of arr1
    while(i < n1) 
    {
        if(unionArray.empty() || unionArray.back() != arr1[i]) 
            unionArray.push_back(arr1[i]);
        i++;
    }

    // Remaining elements of arr2
    while(j < n2) 
    {
        if(unionArray.empty() || unionArray.back() != arr2[j]) 
            unionArray.push_back(arr2[j]);
        j++;
    }

    // Output result
    for(int x : unionArray) cout << x << " ";
    return 0;
}