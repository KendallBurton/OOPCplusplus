// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <iomanip>
#include <process.h>		// for exit()
#include <conio.h>
using namespace std;

#include "C:\Users\kenda\source\repos\ConsoleApplication1\ConsoleApplication1\msoftcon.h"		// for graphics function

struct circle			// graphics circle
{
	int xCo, yCo;			// coord of center
	int radius;
	color fillcolor;			// color
	fstyle fillstyle;			// fill pattern
};

void circ_draw(circle c)
{
	set_color(c.fillcolor);						// set color
	set_fill_style(c.fillstyle);				// set fill pattern
	draw_circle(c.xCo, c.yCo, c.radius);		// draw solid circle
}

int main()
{
	init_graphics();			// initialize graphics system
								// create circles

	circle c1 = { 15, 7, 5, cBLUE, X_FILL };
	circle c2 = { 41, 12, 7, cRED, O_FILL };
	circle c3 = { 65, 18, 4, cGREEN, MEDIUM_FILL };

	circ_draw(c1);				// draw circles
	circ_draw(c2);
	circ_draw(c3);

	set_cursor_pos(1, 25); // cursor to lower left corner

	return 0;
}