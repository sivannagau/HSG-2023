/*
 ∧,,,∧
(  ̳• · • ̳)
/    づ♡                           ~ Louiszn ~
##################################################################################
Viết chương trình thực hiện phép cộng 2 số tự nhiên lớn (không quá 255 chữ số).
##################################################################################
*/

#include <iostream>
#include <string>

int main()
{
    std::string a, b;

    std::cout << "Nhap so a (Khong qua 255 chu so): ";
    std::cin >> a;
    std::cout << "Nhap so b (Khong qua 255 chu so): ";
    std::cin >> b;

    int
        len_a = a.length(),
        len_b = b.length(),
        sum[255] = {0},
        i = len_a - 1,
        j = len_b - 1,
        k = 0,
        carry = 0;

    while (i >= 0 || j >= 0)
    {
        int x = 0, y = 0;

        if (i >= 0)
        {
            x = a[i] - '0';
            i--;
        }

        if (j >= 0)
        {
            y = b[j] - '0';
            j--;
        }

        int s = x + y + carry;

        if (s > 9)
        {
            carry = 1;
            s = s - 10;
        }
        else
        {
            carry = 0;
        }

        sum[k] = s;
        k++;
    }

    if (carry > 0)
    {
        sum[k] = carry;
        k++;
    }

    for (int i = k - 1; i >= 0; i--)
    {
        std::cout << sum[i];
    }

    std::cout << std::endl;

    system("pause");
    return 0;
}
