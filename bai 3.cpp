/*
 ∧,,,∧
(  ̳• · • ̳)
/    づ♡                           ~ Louiszn ~
##################################################################################
Lập trình tìm tất cả các hoán vị của chuỗi. VD: ABC ACB BAC BCA CAB CBA
##################################################################################
*/
#include <iostream>
#include <vector>
#include <string>
#include <cctype>

std::vector<std::string> permutation(std::string str)
{
    if (str.length() == 1)
    {
        return {str};
    }
    else
    {
        std::vector<std::string> result;

        for (int i = 0; i < str.length(); i++)
        {
            char first_char = str[i];
            std::string remaining_chars = str.substr(0, i) + str.substr(i + 1);
            /*
            Dùng đệ quy để tìm các chữ còn lại
            */
            std::vector<std::string> sub_permutations = permutation(remaining_chars);

            for (std::string p : sub_permutations)
            {
                result.push_back(first_char + p);
            }
        }

        return result;
    }
}

int main()
{
    std::string str;
    std::cout << "Vui long nhap mot chuoi ky tu: ";
    std::cin >> str;
    std::vector<std::string> perms = permutation(str);
    for (std::string p : perms)
    {
        std::cout << p << std::endl;
    }
    system("pause");
    return 0;
}