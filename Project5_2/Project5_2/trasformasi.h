
#include <glut.h>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<pair<float, float>>points;
int numpoints;
int transformasi;
int refleksi;
int shear;
int translasi;
int skalling;
float skalaX;
float skalaY;
float translasiX;
float translasiY;
float shearX;
float shearY;
float rotasi;

void drawPolygon(){
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.0, 0.0);
	for (const auto & point : points){
		glVertex2f(point.first, point.second);
	}
	glEnd();
	glFlush();
}

void drawPolygonMirrorX(){
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);
	for (const auto & point : points){
		glVertex2f(point.first, -point.second);
	}
	glEnd();
	glFlush();
}

void drawPolygonMirrorY(){
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 1.0);
	for (const auto & point : points){
		glVertex2f(-point.first, point.second);
	}
	glEnd();
	glFlush();
}

void drawPolygonMirrorXY(){
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 0.0);
	for (const auto & point : points){
		glVertex2f(-point.first, -point.second);
	}
	glEnd();
	glFlush();
}

void drawPolygonRefleksi() {
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);
	for (const auto& point : points) {
		// Reflect against X-axis
		glVertex2f(point.first, -point.second);

		// Reflect against Y-axis
		glVertex2f(-point.first, point.second);

		// Reflect against XY-axis
		glVertex2f(-point.first, -point.second);
	}
	glEnd();
	glFlush();
}


void drawPolygonShearX(){
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);
	for (const auto & point : points){
		glVertex2f(point.first + shearX * point.second, point.second);
	}
	glEnd();
	glFlush();
}

void drawPolygonShearY(){
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 1.0);
	for (const auto & point : points){
		glVertex2f(point.first, point.second + shearY * point.first);
	}
	glEnd();
	glFlush();
}

void drawPolygonShearXY(){
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);
	for (const auto & point : points){
		glVertex2f(point.first + shearX * point.second, point.second);
	}
	glColor3f(0.0, 0.0, 1.0);
	for (const auto & point : points){
		glVertex2f(point.first, point.second + shearY * point.first);
	}
	glEnd();
	glFlush();
}

void drawPolygonRotasi(){
    glBegin(GL_POLYGON);
    glColor3f(0.0, 1.0, 0.0);
    const float angleRadius = rotasi * (3.14 / 180.0);
    for (const auto & point : points){
        float x = point.first * cos(angleRadius) - point.second * sin(angleRadius);
        float y = point.first * sin(angleRadius) + point.second * cos(angleRadius);
        glVertex2f(x, y); 
    }
    glEnd();
    glFlush();
}

void drawPolygonTranslate(){
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 1.0);
	for (const auto & point : points){
		glVertex2f(point.first + translasiX, point.second + translasiY);
	}
	glEnd();
	glFlush();
}

void drawPolygonScale(){
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.0, 1.0);
	for (const auto & point : points){
		glVertex2f(point.first * skalaX, point.second * skalaY);
	}
	glEnd();
	glFlush();
}

void myInit(void){
	glClearColor(1.0, 1.0, 1.0, 0.0);
	gluOrtho2D(-20.0, 20.0, -20.0, 20.0);
}

void myDisplay(){
	drawPolygon();
	if (transformasi == 1){
		switch (refleksi){
		case 1: drawPolygonMirrorX();
			break;
		case 2: drawPolygonMirrorY();
			break;
		case 3: drawPolygonMirrorXY();
			break;
		case 4: drawPolygonRefleksi();
			break;
		}
	}
	else if (transformasi == 2){
		switch (shear){
		case 1: drawPolygonShearX();
			break;
		case 2: drawPolygonShearY();
			break;
		case 3: drawPolygonShearX();
			drawPolygonShearY();
			break;
		}
	}
	else if (transformasi == 3){
		drawPolygonRotasi();
	}
	else if (transformasi == 4){
		drawPolygonTranslate();
	}
	else if (transformasi == 5){
		drawPolygonScale();
	}
}