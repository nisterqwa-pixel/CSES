#include <iostream>
#include <vector>



int main(){
    int n;
    std::vector<int> numbers;
    std::cin >> n;

    if (n < 4 && n > 1) {
        std::cout << "NO SOLUTION";
        return 0 ;
    }

    for (int i = 1; i <= n; i++) {
        numbers.push_back(i);
    }

    for( int i = 1; i < numbers.size(); i=i+2) {
     std::cout << numbers[i] << " ";

    }

       for( int i = 0; i < numbers.size(); i=i+2) {
     std::cout << numbers[i] << " ";

    }

}