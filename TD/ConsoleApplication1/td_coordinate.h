#pragma once

class Coordinate {
private:
	short coord_x, coord_y;

public:
	void setCoordX(short);
	void setCoordY(short);
	short getCoordX();
	short getCoordY();
};