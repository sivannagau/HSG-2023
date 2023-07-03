/*
 ∧,,,∧
(  ̳• · • ̳)
/    づ♡                           ~ Louiszn ~
##################################################################################
Mọi số tự nhiên đều có thể viết được dưới dạng tổng của hai số nguyên tố.
Viết chương trình thực hiện tách một số tự nhiên thành tổng của hai số nguyên tố
##################################################################################
*/

#include <iostream>

// Check xem value có phải là số nguyên tố hay không
bool is_prime(int n)
{
    if (n <= 1)
    {
        return false;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

// Tìm số nguyên tố có tổng hai số = n và thay đổi giá trị
void find_primes(int n, int &first_prime, int &second_prime)
{
    first_prime = 0;
    second_prime = n;
    for (int i = 2; i < n; i++)
    {
        if (is_prime(i) && is_prime(n - i))
        {
            first_prime = i;
            second_prime = n - i;
            break;
        }
    }
}

int main()
{
    int n, first_prime, second_prime;
    std::cout << "Nhap mot con so nguyen n: ";
    std::cin >> n;
    find_primes(n, first_prime, second_prime);
    std::cout << n << " = " << first_prime << " + " << second_prime << std::endl;
    system("pause");
    return 0;
}
