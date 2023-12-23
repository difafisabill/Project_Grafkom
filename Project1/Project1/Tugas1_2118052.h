#include <stdio.h>
#include <glut.h>

void titik_dan_garis(){
	glPointSize(12);
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POINTS);
	// titik tengah
	glColor3f(1, 1, 1);
	glVertex2i(0, 0);
	// titik atas
	glColor3f(1, 1, 0);
	glVertex2f(0, 0.7);
	// titik bawah
	glColor3f(1, 1, 0);
	glVertex2f(0, -0.7);
	// titik kanan
	glColor3f(1, 1, 0);
	glVertex2f(0.7, 0);
	// titik kiri
	glColor3f(1, 1, 0);
	glVertex2f(-0.7, 0);
	glEnd();

	glBegin(GL_LINES);
	// garis atas
	glColor3f(0, 1, 0);
	glVertex2f(-0.4, 0.4);
	glVertex2f(0.4, 0.4);
	// garis kiri
	glColor3f(0, 1, 0);
	glVertex2f(-0.4, 0.4);
	glVertex2f(-0.4, -0.4);
	// garis bawah
	glColor3f(0, 1, 0);
	glVertex2f(-0.4, -0.4);
	glVertex2f(0.4, -0.4);
	// garis kanan
	glColor3f(0, 1, 0);
	glVertex2f(0.4, 0.4);
	glVertex2f(0.4, -0.4);

	// garis miring kanan bawah
	glColor3f(1, 0, 0);
	glVertex2f(0.4, -0.4);
	glVertex2f(0.9, -0.9);

	// garis miring kiri bawah
	glColor3f(1, 0, 0);
	glVertex2f(-0.4, -0.4);
	glVertex2f(-0.9, -0.9);

	// garis miring kiri atas
	glColor3f(1, 0, 0);
	glVertex2f(-0.4, 0.4);
	glVertex2f(-0.9, 0.9);


	// garis miring kanan atas
	glColor3f(1, 0, 0);
	glVertex2f(0.4, 0.4);
	glVertex2f(0.9, 0.9);
	glEnd();
	glFlush();

}



