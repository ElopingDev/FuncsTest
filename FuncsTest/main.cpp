#include <iostream>
#include <windows.h>
#include "funcs.h"
#include <string>
#include <random>



// Variables

std::random_device rd;
std::mt19937 gen(rd());
std::uniform_int_distribution<> dis(0, 1);
int random_num = dis(gen);

class PLAYER {
public:
    int health = 100;
    int x;
    int y;
    int speed = 1;
    bool isAlive = random_num;
    const char* name = "Eloping";

    void Move(int xa, int ya)
    {
        x += xa * speed;
        y += ya * speed;

    }
};

// Entry Point
int main()

{
    PLAYER player1;
    PLAYER player2;
    player1.Move(1, 1);
    player2.Move(5, 6);
    std::cout << "Player1 Coords: " << player1.x << ", " << player1.y << std::endl;
    std::cout << "Player2 Coords: " << player2.x << ", " << player2.y << std::endl;

    char* buffer = new char[8];
    memset(buffer, 0, 8);
    char** ptr = &buffer;
 
    int z = 8;
    int& ammo = z;
    std::cout << "Ammo: " << ammo << std::endl;

    int* armor = new int(10);
    memset(armor, 2, 1);

    std::cin.get();

}