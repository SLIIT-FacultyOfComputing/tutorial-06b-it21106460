#include "Box.h"
#include <iostream>
#include <iomanip>
using namespace std;

// Implement setters and getters
void Box::setLength(int l)
{
	if (l > 0){
		length = l;
	} else {
		length = 10;
	}
}

void Box::setWidth(int w)
{
	if (w > 0){
		width = w;
	} else {
		width = 10;
	}
}

void Box::setHeight(int h)
{
	if (h > 0){
		height = h;
	} else {
		height = 10;
	}
}

int Box::getLength()
{
	return length;
}

int Box::getWidth()
{
	return width;
}

int Box::getHeight()
{
	return height;
}

// Implemenet the calcVolume() function
int Box::calcVolume()
{
	return (length * width * height);
}