#include "geometric.h"
void main() {
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(500, 500);
	glutCreateWindow("TUGAS4_2118052");
	myInit();
	glutDisplayFunc(gabungan);
	glutMainLoop();
}