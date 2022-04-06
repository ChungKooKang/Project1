#pragma once
class Coordinate2D
{
private :
	int x;
	int y;

public :
	void SetXY(int x, int y);
	int GetX() const;
	int GetY() const;
	void GetXY() const;
	double LengthFromZero() const;

};

