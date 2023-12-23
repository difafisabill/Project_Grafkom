#include "Bresenham_Header.h"
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(400, 400);
	glutCreateWindow("Bresenham");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
	

}
