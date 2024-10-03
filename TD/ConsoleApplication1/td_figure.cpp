#pragma once
#include "td_figure.h"

Graphic Figure::getCostume() {
	return costume;
}

void Figure::setCostume(string file_name) {
	costume.setPixel(file_name);
}

Coordinate Figure::getCurrentCoordinate() {
	return cur_coord;
}

void Figure::setCurrentCoordinate(short x, short y) {
	cur_coord.setCoordX(x);
	cur_coord.setCoordY(y);
}