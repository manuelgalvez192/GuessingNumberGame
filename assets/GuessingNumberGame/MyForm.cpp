#include "MyForm.h"
#include <stdlib.h>
#include <iostream>
using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void main(array<String^>^ args)
{
    /*
    int userNumber, randomNum, lives = 5, score = 0;
    std::cout << "The game starts\n";
    while (score != 1000)
    {
        std::cout << "You have " << lives << " lives\n";
        srand(time(NULL));
        randomNum = rand() % 101;
        std::cout << "Try to guess the number to win $1,000\n";
        std::cin >> userNumber;
        while ((userNumber != randomNum) && (lives > 0))
        {
            lives--;
            std::cout << "Wrong number, try again. You have " << lives << " lives remaining\n";
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
            return;
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
    */

    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    GuessingNumberGame::MyForm form;
    Application::Run(%form);

    //return (0);
}