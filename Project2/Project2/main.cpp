#include "DDA_Header.h"
void main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(400, 400);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("DDA");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
}