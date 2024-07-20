#pragma once
#include "position.h"
class OGStream
{
private:
   Position pos;

public:
    void setPosition(Position pos);
    void drawRectangle(const Position& pt, double angle = 0.0, double width = 10.0, double height = 100.0, double red = 1.0, double green = 1.0, double blue = 1.0) const; 
    void drawLine(const Position& begin, const Position& end, double red, double green, double blue) const; 
    void drawDot(const Position& point, double radius, double red, double green, double blue) const; 
    void drawDisk(const Position& center, double radius, double red, double green, double blue) const; 
    void drawBackground(double redBack, double greenBack, double blueBack, Position dimensions) const; 
    void drawHourglass(double percent, double redFore, double greenFore, double blueFore, double redBack, double greenBack, double blueBack, Position dimensions) const; 
    void drawText(const Position& topLeft, const char* text) const; 
    void drawText(const Position& topLeft, const std::string & text) const; 
    void glVertexPoint(const Position& point) const; 
    Position rotate(const Position& origin, double x, double y, double rotation) const; 
};
