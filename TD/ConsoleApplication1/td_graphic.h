#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "td_coordinate.h"

using namespace std;

class Graphic {
private:
	char ** pixel;
	int n_row, n_col;

public:
	~Graphic();
	void setPixel(string);
	char getPixel(short, short);
};