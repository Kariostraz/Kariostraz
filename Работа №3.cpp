#include <iostream> 
using namespace std;
int main()
{
    setlocale(0, "");
    double a, b;
    cout << "[-]������� ������ �����: ";
    cin >> a;
    cout << "[-]������� ������ �����: ";
    cin >> b;
    char menu;
    cout << "[-]�������� ������: ";
    cin >> menu;
    if (menu == '+')
    {
        cout << "[-]���������: " << a << " + " << b << " = " << a + b;
    }
    else if (menu == '-')
    {
        cout << "[-]���������: " << a << " - " << b << " = " << a - b;
    }
    else if (menu == '*')
    {
        cout << "[-]���������: " << a << " * " << b << " = " << a * b;
    }
    else if (menu == '/')
    {
        cout << "[-]���������: " << a << " / " << b << " = " << a / b;
    }
    else if (menu == '%')
    {
        cout << "[-]���������: " << a << " % " << b << " = " << a % b;
    }
    return 0;
}