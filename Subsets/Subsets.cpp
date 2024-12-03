// Subsets.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

void GetSubsets(const std::vector<int>& vec, size_t index, std::vector<int>& r, std::vector<std::vector<int>>& result)
{
    if (index == vec.size())
        return;

    for (size_t i = index; i < vec.size(); ++i)
    {
        r.push_back(vec[i]);
        result.push_back(r);
        GetSubsets(vec, i + 1, r, result);
        r.pop_back();
    }
}

std::vector<std::vector<int>> Subsets(const std::vector<int>& A)
{
    std::vector<std::vector<int>> result;
    std::vector<int> v;
    result.push_back(v);
    GetSubsets(A, 0, v, result);

    return result;
}

int main()
{
    while (true)
    {
        std::cout << "Array size: ";
        int count = 0;
        std::cin >> count;
        if (count == 0)
            break;

        std::vector<int> v(count, 0);
        std::cout << "Numbers in array (0 to exit): ";
        for (int i = 0; i < v.size(); ++i)
            std::cin >> v[i];

        std::vector<std::vector<int>> result = Subsets(v);

        std::cout << "There are " << result.size() << " subsets: " << std::endl;
        for (auto& vec : result)
        {
            std::cout << '[';
            if (vec.size())
                std::cout << vec[0];

            for (size_t i = 1; i < vec.size(); ++i)
                std::cout << ", " << vec[i];
            std::cout << ']' << std::endl;
        }
    }
}
