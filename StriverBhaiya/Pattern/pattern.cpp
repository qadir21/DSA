#include<iostream>
using namespace std;
void print1(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void print2(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void print3(int n)
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void print4(int n)
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
void print5(int n)
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j < n - i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void print6(int n)
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n - i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void print7(int n)
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j < n - i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void print8(int n)
{
    for(int i = 0; i < n; i++)
    {
    // space
    cout << "  ";
    for(int j = 0; j < n - i - 1; j++)
    {
        cout << "  ";
    }
    // star 
    for(int j = 0; j < 2 * i + 1; j++)
    {
        cout << "* ";
    }
    // space
    for(int j = 0; j < n - i - 1; j++)
    {
        cout << "  ";
    }
    cout << endl;
    }
}
void print9(int n)
{
    for(int i = 0; i < 2 * n; i++)
    {
    // space
    for(int j = 0; j < i; j++)
    { 
        cout << "  ";
    }
    // star 
    for(int j = 0; j < (2 * n) - (2 * i - 1); j++)
    {
        cout << "* ";
    }
    // space
    for(int j = 0; j < i; j++)
    {
        cout << "   ";
    }
    cout << endl;
    } 
}
void print10(int n)

{
    for(int i = 0; i < 2 * n + 1; i++)
    {
        cout << "* ";
    }
    cout << endl;
}
void print11(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < i;j++)
        {
            cout << "* ";
        }
        cout << endl;
    } 
    for(int i = 0; i < n; i++)
    {
        for(int j = n; j > i; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void print12(int n)
{
    for(int i = 0; i < 2 * n; i++)
    {
        int star = i;
        if(i > n) star = 2 * n - i;
        for(int j = 0; j < star; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void print13(int n)
{
    
    for(int i = 0; i < n; i++)
    {
        int x = i % 2 == 0 ? 1 : 0;
        for(int j = 0; j <= i; j++)
        {
            cout << x << " ";
            //x = x == 0 ? 1 : 0;
            x = 1 - x;
        }
        cout << endl;
    }
}
void print14(int n)
{
    for(int i = 1; i <= n; i++)
    {
        // space = 2 * n - 2
        // start
        for(int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        // space 
        for(int j = 0; j < 2 * (n - i); j++)
        {
            cout << "  ";
        } 
        // star
        for(int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void print15(int n)
{
    int x = 1;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            cout << x << " ";
            x++;
        }
        cout << endl;
    }
}
void print16(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            cout << (char) (j + 65) << " ";
        }
        cout << endl;
    }
}
void print17(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(char ch = 'A'; ch <= 'A' + (n - i - 1); ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}
void print18(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            cout << (char) (i + 65) << " ";
        }
        cout << endl;
    }
}
void print19(int n)
{ 
    // space n - 1 
    for(int i = 0; i < n; i++)
    {
        // space
        for(int j = 0; j < n - 1 - i; j++)
        {
            cout << "  ";
        }
        // char left
        for(int j = 0; j <= i; j++)
        {
            cout << (char) (j + 65) << " ";
        }
        // char right
        for(int j = 0; j < i; j++)
        {
            cout << (char) (j + 65) << " ";
        }
        cout << endl;

    }
}
void print20(int n)
{
    char ch = 'A' + n - 1;
    for(int i = 0; i < n; i++)
    {
        for(char x = ch; x >= ch - i; x--)
        {
            cout << x << " ";
        }
        cout <<endl;
    }
}
void print21(int n)
{
    char ch = 'A' + n - 1;
    for(int i = 0; i < n; i++)
    {
        for(char x = ch - i; x <= ch; x++)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}
void print22(int n)
{
    // 
    for(int i = 0; i < n; i++)
    {
        // star
        for(int j = n; j > i; j--)
        {
            cout << "* ";
        }
        // space
        for(int j = 0; j < 2 * i; j++)
        {
            cout << "  ";
        }
        // start
        for(int j = n; j > i; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for(int i = 0; i < n; i++)
    {
        // star
        for(int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        // space
        for(int j = 0; j < 2 *(n - i - 1); j++)
        {
            cout << "  ";
        }
        // star
        for(int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void print23(int n)
{
    // Upper Half
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        for(int j = 0; j < 2 * (n - i - 1); j++)
        {
            cout << "  ";
        }
        for(int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    } 

    // Lower Half
    for(int i = n - 2; i >= 0; i--)
    {
        for(int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        for(int j = 0; j < 2 * (n - i - 1); j++)
        {
            cout << "  ";
        }
        for(int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void print24(int n)
{
    for(int i = 0; i < n; i++) cout << "* ";
    cout << endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(j == 0 || j == n - 1) cout << "* ";
            else cout << "  ";
        }
        cout << endl;
    }
    for(int i = 0; i < n; i++) cout << "* ";
    cout << endl;
}
void print25(int n)
{
    for(int i = 0; i < 2 * n - 1; i++)
    {
        for(int j = 0; j < 2 * n - 1 ; j++)
        {
            int top = i;
            int left = j;
            int right = (2 * n - 2) - j;
            int down = 2 * n - 2;
            cout << (n - min(min(top, down), min(left, right))) << " ";
        }
        cout << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        print25(n);
    }
    return 0;
}