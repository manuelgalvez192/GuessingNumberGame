#include <iostream>
#include <random>

int main()
{
    int userNumber, randomNum, lives = 5, score = 0;
    while (score != 1000)
    {
        std::cout << "You have 5 lives\n";
        randomNum = std::rand() % 10;
        std::cout << "Try to guess the number to win $1,000\n";
        std::cin >> userNumber;
        while ((userNumber != randomNum) && (lives > 0))
        {
            lives--;
            std::cout << "Wrong number, try again. You have " << lives << " left\n";
            if (userNumber < randomNum)
            {
                std::cout << "The magic number is greater than the number you are trying to guess\n";
            }
            else if (userNumber > randomNum)
            {
                std::cout << "The magic number is less than the number you are trying to guess\n";
            }
            std::cin >> userNumber;
        }
        if (lives == 0)
        {
            std::cout << "GAME OVER\n";
            std::cout << "The magic number is " << randomNum;
            return (0);
        }
        if (userNumber == randomNum)
        {
            std::cout << "You win the round\n";
            score = score + 100;
            std::cout << "Your score is " << score << "\n";
            lives = lives + 3;
        }
    }
    std::cout << "YOU WIN THE GAME";
    return (0);
}