#include<iostream>
using namespace std;
void print(int n)
{
    cout << n << endl;
}
int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        print(n);
    }
    return 0;
}