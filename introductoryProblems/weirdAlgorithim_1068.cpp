// https://cses.fi/problemset/task/1068
#include <iostream> // Allows fot the use of 'std::cin'
#include <vector>

int main(){
    int n;
    std::cin >> n;
    while (n > 1)
    {
        if (n % 2 == 0)
        {
           n = n / 2;

        }
        else if (n % 2 == 1)
        {
            n = (n * 3) + 1;
        }

        std::cout << n << std::endl;
    }
}
