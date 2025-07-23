#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int a[11] = {1, 3, 2, 6, 9}; 
    

    cout << sizeof(a) << endl;
    cout << a[1] << endl;
    printf("%d\n", a[2]);
    printf("%d\n", a[7]);
    return 0;
}