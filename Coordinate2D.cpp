#include <cmath>
#include <iostream>
#include "Coordinate2D.h"

void Coordinate2D::SetXY(int x, int y)
{
    this->x = x;
    this->y = y;
}

int Coordinate2D::GetX() const
{
    return this->x;
}

int Coordinate2D::GetY() const
{
    return this->y;
}

void Coordinate2D::GetXY() const
{
    std::cout << '(' << this->x << ',' << this->y << ')' << std::endl;
}


double Coordinate2D::LengthFromZero() const
{
    int xSquare;
    int ySquare;
    int sum;
    xSquare = this->x * this->x;
    ySquare = this->y * this->y;
    sum = xSquare + ySquare;

    return std::sqrt(sum);
}
