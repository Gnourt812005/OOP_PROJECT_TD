#pragma once
#include "td_figure.h"

class Enemy : public Figure{
private:
	short speed;
	short hp, cur_hp;
};