#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "td_graphic.h"
#include "td_coordinate.h"

using namespace std;

class Figure {
private:
	Graphic costume;
	Coordinate cur_coord;
public:
	void setCostume(string);
	Graphic getCostume();
	void setCurrentCoordinate(short, short);
	Coordinate getCurrentCoordinate();
};