/*
 ∧,,,∧
(  ̳• · • ̳)
/    づ♡                           ~ Louiszn ~
##################################################################################
Viết chương trình cho phép phân tích một số ra thừa số nguyên tố và ghi kết quả 
dưới dạng tích các lũy thừa. Ví dụ: 300 = 2^2.3.5^2
##################################################################################
*/

#include <iostream>
#include <string>
#include <vector>

// Tìm các luỹ thừa của n
std::vector<std::pair<int, int>> get_prime_factors(int n)
{
    std::vector<std::pair<int, int>> factors;

    int i = 2;

    while (n > 1)
    {
        int count = 0;

        while (n % i == 0)
        {
            count++;
            n /= i;
        }

        if (count > 0)
        {
            factors.push_back(std::make_pair(i, count));
        }

        i++;
    }

    return factors;
}

std::string get_product_expression(std::vector<std::pair<int, int>> factors)
{
    std::string expression = "";

    for (int i = 0; i < factors.size(); i++)
    {
        int base = factors[i].first;
        int exponent = factors[i].second;

        if (i != 0)
        {
            expression += " * ";
        }

        expression += std::to_string(base);

        if (exponent > 1)
        {
            expression += "^" + std::to_string(exponent);
        }
    }

    return expression;
}

int main()
{
    int n;
    std::cout << "Nhap so nguyen duong n can phan tich: ";
    std::cin >> n;

    std::vector<std::pair<int, int>> factors = get_prime_factors(n);
    std::string expression = get_product_expression(factors);

    std::cout << n << " = " << expression << std::endl;

    system("pause");
    return 0;
}
