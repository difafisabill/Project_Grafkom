#include<stdlib.h>
#include<glut.h>
#include <stdio.h>
#include <iostream>
using namespace std;

float w = 480, h = 480; 
float sudut = 0, sx = 0, sy = 0, sz = 0;
float rot = 0.0f;
float z_pos = -200.0f;
int pilihan;

float translationX = 0.0f;
float translationY = 0.0f;
float translationZ = 0.0f;

int clickCount = 0;
int mouseX, mouseY;


void Sphere() {
	glColor3ub(108, 52, 40);
	glutWireSphere(2, 50, 20);
}

void displaySphere(){
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	glTranslatef(translationX, translationY, translationZ);  
	glTranslatef(0, 0, z_pos);
	glRotatef(sudut, sx, sy, sz);
	glRotatef(rot, 0, 1, 0);
	Sphere();
	glutSwapBuffers();
}


void Cube() {
	glColor3ub(238, 147, 34);
	glutWireCube(20);
}

void displayCube(){
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	glTranslatef(0, 0, z_pos);
	glTranslatef(translationX, translationY, translationZ);  
	glRotatef(sudut, sx, sy, sz);
	glRotatef(rot, 0, 1, 0);
	Cube();
	glutSwapBuffers();
}

void Cone() {
	glColor3f(250.0 / 255.0, 112.0 / 255.0, 112.0 / 255.0);
	glutWireCone(4, 10, 40, 30);//ukuran objek
}
//menampilkan objek
void displayCone(){
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	glTranslatef(translationX, translationY, translationZ);  // Terapkan translasi
	glTranslatef(0, 0, z_pos);//ukuran tampilan objek
	glRotatef(sudut, sx, sy, sz);//untuk posisi objek
	glRotatef(rot, 0, 1, 0);//untuk rotasi objek 
	Cone();//pemanggilan objek
	glutSwapBuffers();
}

//membuat objek dodecahedron
void Dodecahedron() {
	glColor3ub(126, 48, 225);
	glutWireDodecahedron();//prosedur objek
}
//menampilkan objek
void displayDodecahedron(){
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	glTranslatef(translationX, translationY, translationZ);  // Terapkan translasi
	glTranslatef(0, 0, z_pos);//ukuran tampilan objek
	glRotatef(sudut, sx, sy, sz);//untuk posisi objek
	glRotatef(rot, 0, 1, 0);//untuk rotasi objek
	Dodecahedron();//pemanggilan objek
	glutSwapBuffers();
}

//membuat objek teapot
void Teapot() {
	glColor3ub(69, 255, 202);//warna objek
	glutWireTeapot(4);//ukuran objek
}
//menampilkan objek
void displayTeapot(){
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	glTranslatef(translationX, translationY, translationZ);  // Terapkan translasi
	glTranslatef(0, 0, z_pos);//ukuran tampilan objek
	glRotatef(sudut, sx, sy, sz);//untuk poisi objek 
	glRotatef(rot, 0, 1, 0);//untuk rotasi objek
	Teapot();//pemanggilan objek
	glutSwapBuffers();
}

//membuat objek torus
void Torus() {
	glColor3ub(0, 255, 255);//warna objek
	glutWireTorus(1, 8, 80, 100);//ukuran objek
}
//menampilkan objek
void displayTorus(){
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	glTranslatef(translationX, translationY, translationZ);  
	glTranslatef(0, 0, z_pos);
	glRotatef(sudut, sx, sy, sz);
	glRotatef(rot, 0, 1, 0);
	Torus();
	glutSwapBuffers();
}


void displayGabungan(){
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	glTranslatef(translationX, translationY, translationZ);  
	glTranslatef(0, 0, z_pos);
	glRotatef(sudut, sx, sy, sz);
	glRotatef(rot, 0, 1, 0);
	Cube();
	Sphere();
	Teapot();
	Torus();
	glutSwapBuffers();
}

void resize(int w1, int h1) {
	glViewport(0, 0, w1, h1);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0, (float)w1 / (float)h1, 1.0, 300.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}
void init() {
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glEnable(GL_DEPTH_TEST);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45., (GLdouble)w / (GLdouble)h, 1., 300.);
	glMatrixMode(GL_MODELVIEW);
	z_pos = -40.0f;
}

void mouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON) {
		if (clickCount == 0) {
			translationX = 10.0f;
			translationY = 10.0f;
			translationZ = z_pos;
		}
		else if (clickCount == 2) {
			mouseX = x;
			mouseY = y;
		}
		clickCount++;
		glutPostRedisplay();
	}
}

void timer(int value){
	glutPostRedisplay();
	glutTimerFunc(10, timer, 50);
}

void motion(int x, int y){
	translationX += (x - mouseX) / 10.0f;
	translationY -= (y - mouseY) / 10.0f;
	mouseX = x;
	mouseY = y;
}


void myTimeOutKanan(int id){
	rot += 1;
	glutPostRedisplay();
	glutTimerFunc(100, myTimeOutKanan, 0);
}

void myTimeOutKiri(int id){
	rot -= 1;
	glutPostRedisplay();
	glutTimerFunc(100, myTimeOutKiri, 0);
}

void myKeyboard(unsigned char key, int x, int y) {
	if (key == 'w' || key == 'W') {
		sx = 1;
		sy = 0;
		sz = 0;
		sudut -= 10;
	}
	else if (key == 'a' || key == 'A') {
		sx = 0;
		sy = 1;
		sz = 0;
		sudut -= 10;
	}
	else if (key == 's' || key == 'S') {
		sx = 1;
		sy = 0;
		sz = 0;
		sudut += 10;
	}
	else if (key == 'd' || key == 'D') {
		sx = 0;
		sy = 1;
		sz = 0;
		sudut += 10;
	}
	else if (key == '-' || key == '_') {
		z_pos -= 10.0f;
	}
	else if (key == '+' || key == '=') {
		z_pos += 10.0f;
	}
	else if (key == 'q' || key == 'Q') {
		glutTimerFunc(100, myTimeOutKiri, 0);
	}
	else if (key == 'r' || key == 'R') {
		glutTimerFunc(100, myTimeOutKanan, 0);
	}
	glutPostRedisplay();
}

void update(int value) {
	glutPostRedisplay();
	glutTimerFunc(50, update, 0);
}