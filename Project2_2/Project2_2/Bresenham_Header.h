#include <iostream>
#include <glut.h>
using namespace std;
int X_Akhir, Y_Akhir, X0, Y0;
void drawLineBresenham(int X0, int Y0, int X_Akhir, int Y_Akhir) {
	glBegin(GL_LINES);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(10, -14);
	glVertex2i(-20, -14);
	glVertex2i(-14, -15);
	glVertex2i(-14, 20);
	glEnd();
	int dx = abs(X_Akhir - X0);
	int dy = abs(Y_Akhir - Y0);
	int Pk = 2 * dy - dx;
	int Xk, Yk;
	if (X0 < X_Akhir) {
		Xk = X0;
		Yk = Y0;
	}
	else {
		Xk = X_Akhir;
		Yk = Y_Akhir;
		X_Akhir = X0;
		Y_Akhir = Y0;
	}
	glColor3f(0, 0, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2i(Xk, Yk);
	while (Xk < X_Akhir) {
		Xk++;
		if (Pk < 0) {
			Pk += 2 * dy;
		}
		else {
			Yk++;
			Pk += 2 * dy - 2 * dx;
		}
		glVertex2i(Xk, Yk);
	}
	glEnd();
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 1.0);
	drawLineBresenham(X0, Y0, X_Akhir, Y_Akhir);
	glFlush();
}
void getInput() {
	cout << "==== Menggambar Dengan Algoritma Bresenham ====" << endl;
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
	gluOrtho2D(-15, 10, -15, 10);
}

