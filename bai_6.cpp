/*
 ∧,,,∧
(  ̳• · • ̳)
/    づ♡                           ~ Louiszn ~
##################################################################################
Viết chương trình nhập vào một số nguyên dương và kiểm tra số đó có phải là số Amstrong không.
##################################################################################
*/

#include <iostream>
#include <cmath>

int main()
{
    int n, k = 0, sum = 0, temp;
    std::cout << "Nhap vao mot so nguyen duong: ";
    std::cin >> n;

    temp = n;
    while (temp > 0)
    {
        k++;
        temp /= 10;
    }

    temp = n;
    while (temp > 0)
    {
        int digit = temp % 10;
        sum += pow(digit, k);
        temp /= 10;
    }

    if (sum == n)
    {
        std::cout << n << " la so armstrong" << std::endl;
    }
    else
    {
        std::cout << n << " khong phai la so Armstrong" << std::endl;
    }

    system("pause");
    return 0;
}
