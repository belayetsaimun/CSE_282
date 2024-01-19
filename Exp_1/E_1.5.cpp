/*Write a C++ program to subtract two complex numbers.*/

#include <iostream>
using namespace std;

struct Complex
{
    int real;
    int imag;
};

Complex subtract(Complex num1, Complex num2)
{
    Complex res;
    res.real = num1.real - num2.real;
    res.imag = num1.imag - num2.imag;
    return res;
}

int main()
{
    Complex num1, num2, res;
    cout << "Enter the real and imaginary parts of the first complex number: ";
    cin >> num1.real >> num1.imag;
    cout << "Enter the real and imaginary parts of the second complex number: ";
    cin >> num2.real >> num2.imag;
    res= subtract(num1, num2);
    cout << "The subtraction of the complex numbers is: " << res.real << " + " << res.imag << "i" << endl;

}
