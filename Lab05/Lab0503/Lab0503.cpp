#include <iostream>
using namespace std;

void swapByValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
   
}

void swapByReference(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
    
}

int main()
{
	int a, b;
    cout << "Enter value a: ";
    cin >> a;
    cout << "Enter value b: ";
    cin >> b;

    swapByValue(a, b);
    cout << "After swap (Call by Value): a = " << a << ", b = " << b << endl;

    swapByReference(a, b);
    cout << "After swap (Call by Reference): a = " << a << ", b = " << b << endl;

    return 0;
}