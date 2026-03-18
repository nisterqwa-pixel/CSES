#include <iostream>
#include <vector>


int  main(){
    long long movesCounter = 0;
    long long  difference;
    int n;
    std::cin >> n;
    std::vector<int> numberArr(n);
    for (int i = 0; i < n; i++){
        std::cin >> numberArr[i];
    }

    for (int i = 1; i < n; i++){
        if (numberArr[i-1] > numberArr[i]){
            difference = numberArr[i-1] - numberArr[i];
            numberArr[i] = numberArr[i] + difference;
             movesCounter += difference;
            difference = 0 ;
         
        }
    }
    std:: cout << movesCounter;
}