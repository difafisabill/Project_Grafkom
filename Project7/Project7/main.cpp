#include "clipping.h"

int main(int argc, char **argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(600, 600);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Clipping_2118052");
	glutDisplayFunc(display);
	glutKeyboardFunc(key);
	userInput();
	init();
	glutMainLoop();
	freeMemory();
	return 0;
}