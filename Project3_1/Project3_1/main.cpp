#include "Lingkaran.h"
int main(int argc, char** argv) {
	getInput();
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(640, 480);
	glutInitWindowPosition(100, 150);
	glutCreateWindow("2118052_Lingkaran MidPoint");
	glutDisplayFunc(myDisplay);
	myInit();
	glutMainLoop();
}