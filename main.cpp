#include <iostream>
#include <random>
using namespace std;

int main()
{
    int userNumber, randomNum, lives = 5, score = 0;
    while (score != 1000)
    {
        std::cout << "The game starts\n";
        std::cout << "You have 5 lives\n";
        randomNum = std::rand() % 100;
        std::cout << "Try to guess the number\n";
        std::cin >> userNumber;
        while ((userNumber != randomNum) && (lives > 0))
        {
            lives--;
            std::cout << "Wrong number, try again\n";
            std::cin >> userNumber;
        }
        if (lives == 0)
        {
            std::cout << "GAME OVER\n";
            return (0);
        }
        if (userNumber == randomNum)
        {
            std::cout << "Score\n"
                      << score + 100;
            std::cout << "You win the round\n";
        }
    }
    std::cout << "YOU WIN THE GAME";
    return (0);
};