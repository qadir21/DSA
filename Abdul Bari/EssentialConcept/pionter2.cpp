#include<iostream> 
#include<stdio.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *p;
    p = (int*)malloc(n * sizeof(int));
    //p = new int[n];
    for(int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    for(int i = 0; i < n; i++) cout << p[i] << " ";
    free(p);
    return 0;
}