#include<iostream>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
    char ch;
};

int main()
{
    int l, b;
    cin >> l >> b;
    struct Rectangle r1 = {l, b};
    cout << r1.length << " ";
    cout << r1.breadth << " ";
    return 0;
}