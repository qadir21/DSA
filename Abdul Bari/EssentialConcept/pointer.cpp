#include<iostream> 
#include<stdio.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int *p;
    p = &a;
    cout << a << endl;
    cout << *p ;
    return 0;
}