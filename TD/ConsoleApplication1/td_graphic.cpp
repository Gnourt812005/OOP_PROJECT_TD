#pragma once
#include "td_graphic.h"

Graphic::~Graphic() {
	for (int i = 0; i < n_row; i++)
		delete[] pixel[i];
	delete[] pixel;
}

void Graphic::setPixel(string file_name) {
	ifstream fi(file_name);
	fi >> n_row >> n_col;
	pixel = new char *[n_row];
	for (int i = 0; i < n_row; i++) {
		fi.get();
		pixel[i] = new char[n_col];
		for (int j = 0; j < n_col; j++)
			fi >> pixel[i][j];
	}

	fi.close();
}

char Graphic::getPixel(short x, short y) {
	return pixel[x][y];
}