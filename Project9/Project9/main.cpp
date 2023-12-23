#include"transformasi3d.h"

void main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH | GLUT_RGBA);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(w, h);
	cout << "1. Sphere" << endl;
	cout << "2. Cube" << endl;
	cout << "3. Cone" << endl;
	cout << "4. Dodecahedron" << endl;
	cout << "5. Teapot" << endl;
	cout << "6. Torus" << endl;
	cout << "7. Gabungan" << endl;
	cout << "Pilih Objek 3D: "; cin >> pilihan;

	switch (pilihan) {
	case 1:
		glutCreateWindow("Sphere_2118052");
		glutDisplayFunc(displaySphere);
		glutKeyboardFunc(myKeyboard);
		glutTimerFunc(10, timer, 50);
		glutMouseFunc(mouse);
		glutMotionFunc(motion);
		break;
	case 2:
		glutCreateWindow("Cube_2118052");
		glutDisplayFunc(displayCube);
		glutKeyboardFunc(myKeyboard);
		glutTimerFunc(10, timer, 50);
		glutMouseFunc(mouse);
		glutMotionFunc(motion);
		break;
	case 3:
		glutCreateWindow("Cone_2118052");
		glutDisplayFunc(displayCone);
		glutKeyboardFunc(myKeyboard);
		glutTimerFunc(10, timer, 50);
		glutMouseFunc(mouse);
		glutMotionFunc(motion);
		break;
	case 4:
		glutCreateWindow("Dodecahedron_2118052");
		glutDisplayFunc(displayDodecahedron);
		glutKeyboardFunc(myKeyboard);
		glutTimerFunc(10, timer, 50);
		glutMouseFunc(mouse);
		glutMotionFunc(motion);
		break;
	case 5:
		glutCreateWindow("Teapot_2118052");
		glutDisplayFunc(displayTeapot);
		glutKeyboardFunc(myKeyboard);
		glutTimerFunc(10, timer, 50);
		glutMouseFunc(mouse);
		glutMotionFunc(motion);
		break;
	case 6:
		glutCreateWindow("Torus_2118052");
		glutDisplayFunc(displayTorus);
		glutKeyboardFunc(myKeyboard);
		glutTimerFunc(10, timer, 50);
		glutMouseFunc(mouse);
		glutMotionFunc(motion);
		break;
	case 7:
		glutCreateWindow("Gabungan_Objek_2118052");
		glutDisplayFunc(displayGabungan);
		glutKeyboardFunc(myKeyboard);
		glutTimerFunc(10, timer, 50);
		glutMouseFunc(mouse);
		glutMotionFunc(motion);
		break;
	}
	glutReshapeFunc(resize);
	init();
	glutMainLoop();
}