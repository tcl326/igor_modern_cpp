#include <random>
#include <iostream>

int main() 
{
    std::random_device rd;  //Will be used to obtain a seed for the random number engine
    std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
    std::uniform_int_distribution<> distrib(0, 99);
    
    int random_number = distrib(gen);

    int guessed_number;

    std::cout << "Guess a number" << std::endl;
    std::cin >> guessed_number;

    while (guessed_number != random_number){
        if (random_number > guessed_number){
            std::cout << "The number you guessed is too small" << std::endl;
        }
        else{
            std::cout << "The number you guessed is too big" << std::endl;
        }

        std::cout << "Guess a new number" << std::endl;
        std::cin >> guessed_number;
    }
    std::cout << "You guessed the correct number!" << std::endl;

}