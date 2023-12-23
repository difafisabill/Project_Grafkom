#include <stdlib.h>
#include <glut.h>
#include <iostream>
using namespace std;
int X0, Y0, X_Akhir, Y_Akhir;
void getInput() {
	cout << "==== Menggambar Dengan Algoritma DDA ====" << endl;
	cout << "Masukkan Koordinat Awal Titik X: ";
	cin >> X0;
	cout << "Masukkan Koordinat Awal Titik Y: ";
	cin >> Y0;
	cout << "Masukkan Koordinat Akhir Titik X: ";
	cin >> X_Akhir;
	cout << "Masukkan Koordinat Akhir Titik Y: ";
	cin >> Y_Akhir;
	cout << "=========================================" << endl;
}
void init() {
	getInput();
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glPointSize(10.0);
	glLoadIdentity();
	gluOrtho2D(-15, 10, -15, 10);
}
void dda(void) {
	glBegin(GL_LINES);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(10, -14);
	glVertex2i(-20, -14);
	glVertex2i(-14, -15);
	glVertex2i(-14, 20);
	glEnd();

	float x, y, dx, dy, steps, x_inc, y_inc;
	x = X0;
	y = Y0;
	dx = X_Akhir - X0;
	dy = Y_Akhir - Y0;
	if (abs(dx) > abs(dy)) {
		steps = abs(dx);
	}
	else {
		steps = abs(dy);
	}
	x_inc = dx / steps;
	y_inc = dy / steps;
	glBegin(GL_LINE_STRIP);
	glVertex2i(x, y);
	do {
		x += x_inc;
		y += y_inc;
		glColor3f(0.0, 0.0, 0.0);
		glVertex2i(round(x), round(y));
	} while (x > X_Akhir); 
	glEnd();
	glFlush();
}
void display(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	dda();
	glutSwapBuffers();
}
