#include "Figure_I.h"


//fill Figure "I" data in the default constructor
Figure_I::Figure_I() {

	//set color
	color = 0x09;//dark blue

	//fill the mask 0 degrees
	heightTurn0 = 5;
	widthTurn0 = 12;

	char maskTurn0[5][12] = {
		{ ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ' },
		{ ' ',' ',219,219,' ',' ',' ',' ',' ',' ',' ',' ' },
		{ ' ',' ',219,219,' ',' ',' ',' ',' ',' ',' ',' ' },
		{ ' ',' ',219,219,' ',' ',' ',' ',' ',' ',' ',' ' },
		{ ' ',' ',219,219,' ',' ',' ',' ',' ',' ',' ',' ' }
	};

	Turn0 = std::vector<Point>(heightTurn0 * widthTurn0);

	for (int i = 0; i < heightTurn0; ++i) {
		for (int j = 0; j < widthTurn0; ++j) {
			Turn0[((i * widthTurn0) + j)].symbol = maskTurn0[i][j];
			Turn0[((i * widthTurn0) + j)].color = color;
		}
	}

	//fill the mask 180 degrees
	heightTurn180 = 5;
	widthTurn180 = 12;

	char maskTurn180[5][12] = {
		{ ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ' },
		{ ' ',' ',219,219,219,219,219,219,219,219,' ',' ' },
		{ ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ' },
		{ ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ' },
		{ ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ' }
	};

	Turn180 = std::vector<Point>(heightTurn180 * widthTurn180);

	for (int i = 0; i < heightTurn180; ++i) {
		for (int j = 0; j < widthTurn180; ++j) {
			Turn180[(i * widthTurn180 + j)].symbol = maskTurn180[i][j];
			Turn180[(i * widthTurn180 + j)].color = color;
		}
	}

	//assign Figure a mask of 0 degrees
	height = heightTurn0;
	width = widthTurn0;
	mask = std::vector<Point>(height * width);
	mask = Turn0;
}


Figure_I::~Figure_I()
{
}


