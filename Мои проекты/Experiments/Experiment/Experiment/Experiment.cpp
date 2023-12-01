#include <iostream>

using namespace std;

double divide(int a, int b)
{
    if (!b)  // если b == 0
    {
        throw "You're stupid";
    }
    if (b > a)
    {
        throw "The second number is greater than the first one";
    }
    return a / b;
}

void test(int a, int b)
{
    try
    {
        double result{ divide(a, b) };
        cout << result << endl;
    }
    catch (string cot)
    {
        cout << "Error code:" << cot << endl;
    }
    catch (const char* error_message)
    {
        cout << error_message << endl;
    }
}

int main()
{
    test(100, 20);      
    test(100, 0);       
    test(100, 1000);    
}