#include <stdlib.h>
#include <glut.h>
int objek;
using namespace std;

float w = 500, h = 500;
float sudut = 0, sx = 0, sy = 0, sz = 0;
float zoomFactor = 1.0;
float rotationSpeed = 3.0;
bool rotateLeft = false;
bool rotateRight = false;

void sphere() {
	glColor3f(82.0f / 255.0f, 114.0f / 255.0f, 242.0f / 255.0f);
	glutWireSphere(10, 15, 23); 
}
void cube() {
	glColor3f(178.0f / 255.0f, 39.0f / 255.0f, 39.0f / 255.0f);
	glutWireCube(20); 
}
void cone() {
	glColor3f(54.0f / 255.0f, 47.0f / 255.0f, 217.0f / 255.0f);
	glutWireCone(2, 8, 15, 17);  
}
void dodecahedron() {
	glColor3f(168.0f / 255.0f, 100.0f / 255.0f, 100.0f / 255.0f);
	glutWireDodecahedron(); 
}
void teapot() {
	glColor3f(248.0f / 255.0f, 203.0f / 255.0f, 46.0f / 255.0f);
	glutWireTeapot(5); 
}
void torus() {
	glColor3f(0.0f, 110.0f / 255.0f, 127.0f / 255.0f);
	glutWireTorus(1, 10, 35, 50);  
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	glTranslatef(0, 0, -40);
	glScalef(zoomFactor, zoomFactor, zoomFactor);  
	switch (objek) {
	case 1:
		glRotatef(sudut, sx, sy, sz);
		sphere(); 
		break;
	case 2:
		glRotatef(sudut, sx, sy, sz);
		cube(); 
		break;
	case 3:
		glRotatef(sudut, sx, sy, sz);
		cone(); 
		break;
	case 4:
		glRotatef(sudut, sx, sy, sz);
		dodecahedron(); 
		break;
	case 5:
		glRotatef(sudut, sx, sy, sz);
		teapot(); 
		break;
	case 6:
		glRotatef(sudut, sx, sy, sz);
		torus(); 
		break;
	case 7: 
		glRotatef(sudut, sx, sy, sz);
		torus();
		cube();
		cone();
		teapot();
		break;
	default:
		break;
	}
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
}

void myKeyboard(unsigned char key, int x, int y) {
	if (key == 's' || key == 'S') {
		sx = 1;
		sy = 0;
		sz = 0;
		sudut += 10;
		rotateLeft = false;
		rotateRight = false;
	}
	else if (key == 'w' || key == 'W') {
		sx = 1;
		sy = 0;
		sz = 0;
		sudut -= 10;
		rotateLeft = false;
		rotateRight = false;
	}
	else if (key == 'a' || key == 'A') {
		sx = 0;
		sy = 1;
		sz = 0;
		sudut -= 10;
		rotateLeft = false;
		rotateRight = false;
	}
	else if (key == 'd' || key == 'D') {
		sx = 0;
		sy = 1;
		sz = 0;
		sudut += 10;
		rotateLeft = false;
		rotateRight = false;
	}
	else if (key == '+') {
		zoomFactor += 0.1; 
	}
	else if (key == '-') {
		zoomFactor -= 0.1; 
		if (zoomFactor < 0.1) {
			zoomFactor = 0.1;
		}
	}
	else if (key == 'q' || key == 'Q') {
		rotateLeft = true; 
	}
	else if (key == 'r' || key == 'R') {
		rotateRight = true; 
	}
}

void myKeyboardUp(unsigned char key, int x, int y) {
	if (key == 'q' || key == 'Q') {
		rotateLeft = true;
		rotateRight = false;
	}
	if (key == 'r' || key == 'R') {
		rotateRight = true;
		rotateLeft = false;
	}
}

void update(int value) {
	if (rotateLeft) {
		sx = 0;
		sy = 1;
		sz = 0;
		sudut -= rotationSpeed;
	}
	if (rotateRight) {
		sx = 0;
		sy = 1;
		sz = 0;
		sudut += rotationSpeed;
	}
	glutPostRedisplay();
	glutTimerFunc(50, update, 0);
}