#include <iostream>
#include <cstdlib>

int loopCount{0};

void indiNumOutput(int number, int numCount)
{
    double percentage{static_cast<double>(numCount) / static_cast<double>(loopCount) * 100};
    std::cout << "The number " << number << " was there " << numCount << " times which is " << percentage << " percent of the total\n";

}

void foo(int loopCounter)
{
    loopCount = loopCounter;
}

int main()
{
    std::cout << "Enter the amount of times you want to test the randomness of c++!\n";
    int loopCounter{};
    std::cin >> loopCounter;
    foo(loopCounter);

    unsigned int tenCount{0}; //initilizes the different variables 
    unsigned int nineCount{0};
    unsigned int eightCount{0};
    unsigned int sevenCount{0};
    unsigned int sixCount{0};
    unsigned int fiveCount{0};
    unsigned int fourCount{0};
    unsigned int threeCount{0};
    unsigned int twoCount{0};
    unsigned int oneCount{0};

    for (int i{0}; i <= loopCount; ++i)
    {
        int randomNum{(std::rand() % 10) + 1};

        switch(randomNum)
        {
        case 1:
            ++oneCount;
            break;
        case 2:
            ++twoCount;
            break;
        case 3:
            ++threeCount;
            break;
        case 4:
            ++fourCount;
            break;
        case 5:
            ++fiveCount;
            break;
        case 6:
            ++sixCount;
            break;
        case 7:
            ++sevenCount;
            break;
        case 8:
            ++eightCount;
            break;
        case 9:
            ++nineCount;
            break;
        case 10:
            ++tenCount;
            break;
        }
    }

    indiNumOutput(10, tenCount);
    indiNumOutput(9, nineCount);
    indiNumOutput(8, eightCount);
    indiNumOutput(7, sevenCount);
    indiNumOutput(6, sixCount);
    indiNumOutput(5, fiveCount);
    indiNumOutput(4, fourCount);
    indiNumOutput(3, threeCount);
    indiNumOutput(2, twoCount);
    indiNumOutput(1, oneCount);

    return 0;
}