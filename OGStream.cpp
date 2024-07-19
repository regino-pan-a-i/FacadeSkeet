#include "OGStream.h"

#include <string>
#include <sstream>
using namespace std;


#ifdef __APPLE__
#define GL_SILENCE_DEPRECATION
#include <openGL/gl.h>    // Main OpenGL library
#include <GLUT/glut.h>    // Second OpenGL library
#define GLUT_TEXT GLUT_BITMAP_HELVETICA_18
#endif // __APPLE__

#ifdef __linux__
#include <GL/gl.h>        // Main OpenGL library
#include <GL/glut.h>      // Second OpenGL library
#define GLUT_TEXT GLUT_BITMAP_HELVETICA_12
#endif // __linux__

// #ifdef _WIN32
#include <stdio.h>
#include <stdlib.h>
#include <GL/glut.h>         // OpenGL library we copied 
#define _USE_MATH_DEFINES
#include <math.h>
#define GLUT_TEXT GLUT_BITMAP_HELVETICA_12
// #endif // _WIN32

void OGStream::flush()
{

}
void OGStream::setPosition(Position pos)
{
	Position position = pos;
}
void drawRectangle(const Position& pt,
	               double angle = 0.0,
	               double width = 10.0,
	               double height = 100.0,
	               double red = 1.0,
	               double green = 1.0,
	               double blue = 1.0)
{
	glBegin(GL_QUADS);
	glColor3f((GLfloat)red, (GLfloat)green, (GLfloat)blue);

	// Draw the actual line
	glVertexPoint(rotate(pt, width / 2.0, height / 2.0, angle));
	glVertexPoint(rotate(pt, width / 2.0, -height / 2.0, angle));
	glVertexPoint(rotate(pt, -width / 2.0, -height / 2.0, angle));
	glVertexPoint(rotate(pt, -width / 2.0, height / 2.0, angle));
	glVertexPoint(rotate(pt, width / 2.0, height / 2.0, angle));

	// Complete drawing
	glColor3f((GLfloat)1.0 /* red % */, (GLfloat)1.0 /* green % */, (GLfloat)1.0 /* blue % */);
	glEnd();
}
void OGStream::drawLine(const Position& begin, const Position& end,
	double red, double green, double blue)
{
	glBegin(GL_LINES);
	glColor3f((GLfloat)red, (GLfloat)green, (GLfloat)blue);

	// Draw the actual line
	glVertexPoint(begin);
	glVertexPoint(end);

	// Complete drawing
	glColor3f((GLfloat)1.0 /* red % */, (GLfloat)1.0 /* green % */, (GLfloat)1.0 /* blue % */);
	glEnd();

}
void OGStream::drawDot()
{
	// Get ready, get set...
	glBegin(GL_TRIANGLE_FAN);
	glColor3f((GLfloat)red, (GLfloat)green, (GLfloat)blue);
	double r = radius / 2.0;

	// Go...
	glVertex2f((GLfloat)(point.getX() - r), (GLfloat)(point.getY() - r));
	glVertex2f((GLfloat)(point.getX() + r), (GLfloat)(point.getY() - r));
	glVertex2f((GLfloat)(point.getX() + r), (GLfloat)(point.getY() + r));
	glVertex2f((GLfloat)(point.getX() - r), (GLfloat)(point.getY() + r));

	// Done!  OK, that was a bit too dramatic
	glColor3f((GLfloat)1.0 /* red % */, (GLfloat)1.0 /* green % */, (GLfloat)1.0 /* blue % */);
	glEnd();
}




void OGStream::drawDisk(Position pos, /*Radius rad*/)
{

}
void OGStream::drawBackground(double redBack, double greenBack, double blueBack, Position dimensions)
{
   glBegin(GL_TRIANGLE_FAN);

   // two rectangles is the fastest way to fill the screen.
   glColor3f((GLfloat)redBack /* red % */, (GLfloat)greenBack /* green % */, (GLfloat)blueBack /* blue % */);
   glVertex2f((GLfloat)0.0, (GLfloat)0.0);
   glVertex2f((GLfloat)dimensions.getX(), (GLfloat)0.0);
   glVertex2f((GLfloat)dimensions.getX(), (GLfloat)dimensions.getY());
   glVertex2f((GLfloat)0.0, (GLfloat)dimensions.getY());

   glEnd();

}
void OGStream::drawHourglass()
{

}
void OGStream::drawText()
{

}