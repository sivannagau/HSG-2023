/*
 ∧,,,∧
(  ̳• · • ̳)
/    づ♡                           ~ Louiszn ~
##################################################################################
Lập trình tìm tất cả các hoán vị của dãy số nguyên (1, 2, 3, …, n).
##################################################################################
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

void permute(std::vector<int> &nums, std::vector<std::vector<int>> &result, int start)
{
    if (start == nums.size())
    {
        result.push_back(nums);
        return;
    }

    for (int i = start; i < nums.size(); i++)
    {
        std::swap(nums[start], nums[i]);
        permute(nums, result, start + 1);
        std::swap(nums[start], nums[i]);
    }
}
int main()
{
    int n;
    std::cout << "Nhap mot con so nguyen duong: ";
    std::cin >> n;

    if (std::to_string(n).length() > 3) {
        std::cout << "Ban co chac muon lam dieu nay khong? Con so nay co the khien may ban bi lag do!" << std::endl;
        std::string answer;
        while(answer == "yes" || answer == "no") {
            if (answer == "no") {
                system("pause");
                return 0;
            }
        }
    } 

    std::vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        nums[i] = i + 1;
    }

    std::vector<std::vector<int>> result;
    permute(nums, result, 0);

    for (auto permutation : result)
    {
        for (auto num : permutation)
        {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}