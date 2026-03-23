#include <iostream>
#include <cstdlib>
#include <array>

void indiNumOutput(int number, int numCount, int loopCount)
{
    double percentage{static_cast<double>(numCount) / static_cast<double>(loopCount) * 100};
    std::cout << "The number " << number << " was there " << numCount << " times which is " << percentage << " percent of the total\n";
}

int main()
{
    std::cout << "Enter the amount of times you want to test the randomness of c++!\n";
    int loopCounter{};
    std::cin >> loopCounter;

    std::array<int, 10> nums{};

    for (int i{0}; i <= loopCounter; ++i)
    {
        const int randomNum{(std::rand() % 10) + 1};

        ++nums[randomNum - 1];
    }

    int num{1};
    for (auto n : nums)
    {
        indiNumOutput(num, n, loopCounter);
        ++num;
    }

    return 0;
}

