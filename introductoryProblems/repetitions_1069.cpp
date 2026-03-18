#include <iostream>
#include <string>
#include <vector>

int main()
{

    std::string n;
    std::string charachters;
    std::cin >> charachters;
    int recordLength = 1;
    int recordLengthCounter = 1;

    for (int i = 1; i < charachters.size(); i++)
    {
        if (charachters[i] == charachters[i - 1])
        {
            recordLengthCounter++;
            if (recordLengthCounter > recordLength)
            {
                recordLength = recordLengthCounter;
            }
        }
        if (charachters[i] != charachters[i - 1])
        {
            recordLengthCounter = 1;
        }
    }

    if (charachters.size() == 1)
    {
        recordLength = 1;
    }

    std::cout << recordLength;
}