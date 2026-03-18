#include <iostream>
#include <vector>

long long firstInput(long long a)
{
    return (a * (a + 1)) / 2;
}

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> secondLineArr(n - 1);
    long long sum = 0;
    long long sum1 = 0;
    long long missingNUmber = 0;

    for (int i = 0; i < secondLineArr.size(); i++) {
        std::cin >> secondLineArr[i];
    } // puts it in the array

    for (int i = 0; i < secondLineArr.size(); i++) {
        sum += secondLineArr[i];
    }

    sum1 = firstInput(n);
    missingNUmber = sum1 - sum;

    std::cout << missingNUmber;
};

