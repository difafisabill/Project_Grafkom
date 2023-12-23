#include <stdio.h> //utk input output
#include <math.h> //utk operasi aritmatika
#include <iostream> //utk input output
#include <vector> // membuat matriks
#include <glut.h> //utk menerjemahkan glut agar proses dapat dirunning
using namespace std; //instruksi yang berfungsi untuk mengenali cout dan cin
int pntX1, pntY1, choice, edges;
vector<int> pntX;
vector<int> pntY;
char reflectionAxis, shearingAxis;
int shearingX, shearingY;
void drawPolygon()
{
	glBegin(GL_POLYGON); //menggambar polygon
	glColor3f(1.0, 0.0, 0.0); //memberi warna pada objek
	for (int i = 0; i < edges; i++) //utk menggambar titik
	{
		glVertex2i(pntX[i], pntY[i]); //utk menyimpan nilai 
	}
	glEnd(); //mengakhiri proses 
	glFlush(); //proses rendering
}
void garis() {
	for (int i = 1; i <= 20; i++) //utk membuat garis
	{
		cout << "=";
	}
}
void drawPolygonMirrorReflectionX()
{
	glBegin(GL_POLYGON); //menggambar polygon
	glColor3f(0.0, 0.0, 1.0); //memberi warna pada objek
	for (int i = 0; i < edges; i++) { //utk menggambar titik
		glVertex2i((pntX[i]), (pntY[i] * -1)); //rumus sumbu x
	}
	glEnd(); //mengakhiri proses 
	glFlush(); //proses rendering
}
void drawPolygonMirrorReflectionY()
{
	glBegin(GL_POLYGON); //menggambar polygon
	glColor3f(1.0, 1.0, 1.0); //memberi warna pada objek
	for (int i = 0; i < edges; i++) { //utk menggambar titik
		glVertex2i((pntX[i] * -1), (pntY[i])); //rumus sumbu y
	}
	glEnd(); //mengakhiri proses 
	glFlush(); //proses rendering
}
void drawPolygonShearingX()
{
	glBegin(GL_POLYGON); //menggambar polygon
	glColor3f(0.0, 0.0, 1.0); //memberi warna pada objek
	for (int i = 0; i < edges; i++) //utk menggambar titik
	{
		glVertex2i((pntX[i] + shearingX * pntY[i]),
			pntY[i]); //rumus sumbu x
	}
	glEnd(); //mengakhiri proses 
	glFlush(); //proses rendering
}
void drawPolygonShearingY()
{
	glBegin(GL_POLYGON); //menggambar polygon
	glColor3f(1.0, 1.0, 1.0); //memberi warna pada objek
	for (int i = 0; i < edges; i++) //utk menggambar titik
	{
		glVertex2i(pntX[i], (pntY[i] + shearingY *pntX[i])); //rumus sumbu y
	}
	glEnd(); //mengakhiri proses 
	glFlush(); //proses rendering
}
void myInit(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.0); //menentukan nilai yang jelas untuk buffer warna
		glColor3f(0.0f, 0.0f, 0.0f); //utk menentukan warna garis / titik
		glPointSize(1.0); // ukuran objek
	glMatrixMode(GL_PROJECTION); //menentukan nilai matriks
	glLoadIdentity(); //merubah matriks
	gluOrtho2D(-50, 20, -50, 20); //mengatur proyeksi hasil koordinat kiri, kanan, bawah dan atas
}
void myDisplay()
{
	//memanggil fungsi
	drawPolygon();
	drawPolygonShearingX();
	drawPolygonShearingY();
	drawPolygonMirrorReflectionX();
	drawPolygonMirrorReflectionY();
}