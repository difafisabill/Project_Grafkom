#include <windows.h>
#include <glut.h>
#include <math.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int numLines = 0;
float *xd1, *yd1, *xd2, *yd2;
float xmin = -52, ymin = 5;
float xmax = -31, ymax = 18;

void display();
void cohen_Line(float x1, float y1, float x2, float y2, int i);
int code(float x, float y);

void init(void) {
	glClearColor(236.0 / 255.0, 244.0 / 255.0, 214.0 / 255.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(-60, -23, -5, 27);
}

void key(unsigned char key, int x, int y) {
	if (key == 'c' || key == 'C') {
		for (int i = 0; i < numLines; ++i) {
			cohen_Line(xd1[i], yd1[i], xd2[i], yd2[i], i);
		}
	}
	glFlush();
}

void freeMemory() {
	delete[] xd1;
	delete[] yd1;
	delete[] xd2;
	delete[] yd2;
}

void cohen_Line(float x1, float y1, float x2, float y2, int i) {
	int c1 = code(x1, y1);
	int c2 = code(x2, y2);
	float m = (y2 - y1) / (x2 - x1);

	if ((c1 & c2) != 0) {
		xd1[i] = xd2[i] = yd1[i] = yd2[i] = 0;
		return;
	}
	while ((c1 | c2) > 0) {
		float xi = x1, yi = y1;
		int c = c1;
		if (c == 0) {
			c = c2;
			xi = x2;
			yi = y2;
		}
		float x, y;
		if ((c & 8) > 0) {
			y = ymax;
			x = xi + 1.0 / m * (ymax - yi);
		}
		else if ((c & 4) > 0) {
			y = ymin;
			x = xi + 1.0 / m * (ymin - yi);
		}
		else if ((c & 2) > 0) {
			x = xmax;
			y = yi + m * (xmax - xi);
		}
		else if ((c & 1) > 0) {
			x = xmin;
			y = yi + m * (xmin - xi);
		}
		if (c == c1) {
			xd1[i] = x;
			yd1[i] = y;
			c1 = code(xd1[i], yd1[i]);
		}
		if (c == c2) {
			xd2[i] = x;
			yd2[i] = y;
			c2 = code(xd2[i], yd2[i]);
		}
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

void userInput() {
	cout << "Masukkan jumlah garis: ";
	cin >> numLines;
	cout << "*************************************************";
	cout << "\n";

	xd1 = new float[numLines];
	yd1 = new float[numLines];
	xd2 = new float[numLines];
	yd2 = new float[numLines];

	for (int i = 0; i < numLines; ++i) {
		cout << "Garis " << i + 1<<"\n";
		cout << "Masukkan titik x1 " << ": ";
		cin >> xd1[i];
		cout << "Masukkan titik y1 " << ": ";
		cin >> yd1[i];
		cout << "Masukkan titik x2 " << ": ";
		cin >> xd2[i];
		cout << "Masukkan titik y2 " << ": ";
		cin >> yd2[i];
		cout << endl;
		cout << "************************************************* \n";

	}
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