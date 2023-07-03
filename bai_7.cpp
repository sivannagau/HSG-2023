/*
 ∧,,,∧
(  ̳• · • ̳)
/    づ♡                           ~ Louiszn ~
##################################################################################
Tính tổng các nguyên tử trong một một công thức hóa học.
##################################################################################
*/

#include <iostream>
#include <string>

int main()
{
    std::string compound;
    std::cout << "Nhap mot cong thuc hoa hoc ma ban muon tinh: ";
    std::cin >> compound;

    int count = 0;
    int len = compound.length();
    for (int i = 0; i < len; i++)
    {
        if (isupper(compound[i]))
        {
            int num = 1;
            if (i + 1 < len && isdigit(compound[i + 1]))
            {
                num = compound[i + 1] - '0';
                i++;
            }
            count += num;
        }
    }

    std::cout << "Tong so luong nguyen tu cua " << compound << " la: " << count << std::endl;
    system("pause");
    return 0;
}
