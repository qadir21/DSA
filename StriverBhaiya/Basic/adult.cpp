#include<iostream>
using namespace std;
int main()
{
    int age;
    cin >> age;
    if(age < 18) 
    {
        cout << " Not Adult" << endl;
    }
    else 
    {
        cout << "Adult" << endl;
    }
    return 0;
}