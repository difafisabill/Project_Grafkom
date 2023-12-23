#include <windows.h>
#include <glut.h>
#include <math.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int numLines = 0;
float *xd1, *yd1, *xd2, *yd2;
float *oriXd1, *oriYd1, *oriXd2, *oriYd2;
float xmin = -52, ymin = 5;
float xmax = -31, ymax = 18;


void display();
void liangBarsky_Line(double x1, double y1, double x2, double y2, int i);
int code(float x, float y);
void undoClipping();

void init(void) {
	glClearColor(236.0 / 255.0, 244.0 / 255.0, 214.0 / 255.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(-60, -23, -5, 27);
}

void mykey(unsigned char key, int x, int y) {
	if (key == 'c' || key == 'C') {
		for (int i = 0; i < numLines; ++i) {
			liangBarsky_Line(xd1[i], yd1[i], xd2[i], yd2[i], i);
		}
	}
	else if (key == 'z' || key == 'Z') {
		undoClipping();
	}
	glFlush();
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(154.0 / 255.0, 208.0 / 255.0, 194.0 / 255.0);
	glLineWidth(5);

	glBegin(GL_LINE_LOOP);
	glVertex2i(xmin, ymin);
	glVertex2i(xmin, ymax);
	glVertex2i(xmax, ymax);
	glVertex2i(xmax, ymin);
	glEnd();

	glColor3f(250.0 / 255.0, 112.0 / 255.0, 112.0 / 255.0);
	glLineWidth(3);
	for (int i = 0; i < numLines; ++i) {
		glBegin(GL_LINES);
		glVertex2i(xd1[i], yd1[i]);
		glVertex2i(xd2[i], yd2[i]);
		glEnd();
	}
	glFlush();
}

void userInput() {
	cout << "Masukkan jumlah garis : ";
	cin >> numLines;
	cout << "*************************************************";
	cout << "\n";

	xd1 = new float[numLines];
	yd1 = new float[numLines];
	xd2 = new float[numLines];
	yd2 = new float[numLines];
	oriXd1 = new float[numLines];
	oriYd1 = new float[numLines];
	oriXd2 = new float[numLines];
	oriYd2 = new float[numLines];

	for (int i = 0; i < numLines; ++i) {
		cout << "Garis " << i + 1 << "\n";
		cout << "Masukkan titik x1 " << ": ";
		cin >> xd1[i];
		cout << "Masukkan titik y1 "<< ": ";
		cin >> yd1[i];
		cout << "Masukkan titik x2 "<< ": ";
		cin >> xd2[i];
		cout << "Masukkan titik y2 " << ": ";
		cin >> yd2[i];
		oriXd1[i] = xd1[i];
		oriYd1[i] = yd1[i];
		oriXd2[i] = xd2[i];
		oriYd2[i] = yd2[i];
		cout << endl;
		cout << "************************************************* \n";
	}
}

void freeMemory() {
	delete[] xd1;
	delete[] yd1;
	delete[] xd2;
	delete[] yd2;
	delete[] oriXd1;
	delete[] oriYd1;
	delete[] oriXd2;
	delete[] oriYd2;
}

int diptest(double p, double q, double *t1, double *t2){
	double t = q / p;
	if (p < 0.0){
		if (t > *t1) *t1 = t;
		if (t > *t2) return (false);
	}
	else if (p > 0.0){
		if (t < *t2) *t2 = t;
		if (t < *t1) return (false);
	}
	if (p == 0.0){
		if (q < 0.0) return (false);
	}
	return (true);
}

void liangBarsky_Line(double x0, double y0, double x1, double y1, int i){
	double dx = x1 - x0, dy = y1 - y0, t1 = 1.0, te = 0.0;
	if (diptest(-dx, x0 - xmin, &te, &t1))
	if (diptest(dx, xmax - x0, &te, &t1))
	if (diptest(-dy, y0 - ymin, &te, &t1))
	if (diptest(dy, ymax - y0, &te, &t1)){
		if (t1 < 1.0){
			x1 = x0 + t1*dx;
			y1 = y0 + t1*dy;
		}
		if (te > 0.0){
			x0 = x0 + te*dx;
			y0 = y0 + te*dy;
		}
	}

	xd1[i] = x0;
	yd1[i] = y0;
	xd2[i] = x1;
	yd2[i] = y1;
	display();
}


void undoClipping() {
	for (int i = 0; i < numLines; ++i) {
		xd1[i] = oriXd1[i];
		yd1[i] = oriYd1[i];
		xd2[i] = oriXd2[i];
		yd2[i] = oriYd2[i];
	}
	display();
}

int code(float x, float y) {
	int c = 0;
	if (y > ymax) c = 8;
	if (y < ymin) c = 4;
	if (x > xmax) c = c | 2;
	if (x < xmin) c = c | 1;
	return c;
}