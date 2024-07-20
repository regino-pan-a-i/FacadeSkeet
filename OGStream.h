#pragma once
#include "position.h"
#include "skeet.h"
class OGStream
{
public:
	void flush();
	void setPosition(Position pos);
	void drawRectangle(Position pos);
	void drawLine(const Position& begin, const Position& end,
		double red, double green, double blue);
	void drawDot();
	void drawDisk(const Position& center, double radius, double red, double green, double blue);
	void drawBackground(double redBack, double greenBack, double blueBack, Position dimensions);
	void drawHourglass(double percent,
                      double redFore, double greenFore, double blueFore,
                      double redBack, double greenBack, double blueBack, Position dimensions);
	void drawText(const Position& topLeft, const char* text);
private:
	Position pos;

};

