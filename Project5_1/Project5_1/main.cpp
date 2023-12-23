#include "transformasi_2d.h"// Memanggil header
void main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

	float angle, tx, ty, sx, sy;

	garis();
	cout << "\n\tMenu Transformasi" << "\n\n";
	cout << "1. Refleksi" << "\n";
	cout << "2. Shear" << "\n";
	cout << "3. Rotasi" << "\n";
	cout << "4. Translasi" << "\n";
	cout << "5. Scaling" << "\n";
	garis();
	cout << "\nPilih Menu : ";
	cin >> choice;

	switch (choice) {
	case 1:
		cout << "masukan jumlah titik: ";
		cin >> edges;
		for (int i = 0; i < edges; i++) {
			cout << "masukkan koordinat :" << i + 1 << ":";
			cin >> pntX1 >> pntY1;
			pntX.push_back(pntX1);
			pntY.push_back(pntY1);
		}

		cout << "Pilih sumbu refleksi (X/Y): ";
		cin >> reflectionAxis;

		garis();
		glutInit(&argc, argv);
		glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
		glutInitWindowSize(500, 500);
		glutInitWindowPosition(100, 150);
		glutCreateWindow("2018111");

		if (reflectionAxis == 'X' || reflectionAxis == 'x')
			drawPolygonMirrorReflectionX();
		else if (reflectionAxis == 'Y' || reflectionAxis == 'y')
			drawPolygonMirrorReflectionY();

		glutDisplayFunc(myDisplay);
		myInit();
		glutMainLoop();
		break;

	case 2:
		cout << "masukan jumlah titik: ";
		cin >> edges;
		for (int i = 0; i < edges; i++) {
			cout << "masukan kordinat : " << i + 1 << " : ";
			cin >> pntX1 >> pntY1;
			pntX.push_back(pntX1);
			pntY.push_back(pntY1);
		}

		cout << "\nmasukan shearing factor untuk X: ";
		cin >> shearingX;
		cout << "\nmasukan shearing factor untuk Y: ";
		cin >> shearingY;

		garis();
		glutInit(&argc, argv);
		glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
		glutInitWindowSize(500, 500);
		glutInitWindowPosition(100, 150);
		glutCreateWindow("2018111");

		drawPolygonShearingX();
		drawPolygonShearingY();

		glutDisplayFunc(myDisplay);
		myInit();
		glutMainLoop();
		break;

	case 3:
		cout << "masukan jumlah titik: ";
		cin >> edges;
		for (int i = 0; i < edges; i++) {
			cout << "masukan kordinat : " << i + 1 << " : ";
			cin >> pntX1 >> pntY1;
			pntX.push_back(pntX1);
			pntY.push_back(pntY1);
		}

		cout << "\nmasukkan sudut rotasi (derajat): ";
		cin >> angle;
		angle = angle * 3.14159265359 / 180.0;

		garis();
		glutInit(&argc, argv);
		glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
		glutInitWindowSize(500, 500);
		glutInitWindowPosition(100, 150);
		glutCreateWindow("2018111");

		drawPolygonRotation(angle);

		glutDisplayFunc(myDisplay);
		myInit();
		glutMainLoop();
		break;

	case 4:
		cout << "masukan jumlah titik: ";
		cin >> edges;
		for (int i = 0; i < edges; i++) {
			cout << "masukan kordinat : " << i + 1 << " : ";
			cin >> pntX1 >> pntY1;
			pntX.push_back(pntX1);
			pntY.push_back(pntY1);
		}

		cout << "\nmasukan translasi tx: ";
		cin >> tx;
		cout << "\nmasukan translasi ty: ";
		cin >> ty;

		garis();
		glutInit(&argc, argv);
		glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
		glutInitWindowSize(500, 500);
		glutInitWindowPosition(100, 150);
		glutCreateWindow("2018111");

		drawPolygonTranslation(tx, ty);

		glutDisplayFunc(myDisplay);
		myInit();
		glutMainLoop();
		break;
	case 5:
		cout << "masukan jumlah titik: ";
		cin >> edges;
		for (int i = 0; i < edges; i++) {
			cout << "masukan kordinat : " << i + 1 << " : ";
			cin >> pntX1 >> pntY1;
			pntX.push_back(pntX1);
			pntY.push_back(pntY1);
		}

		cout << "\nmasukan faktor scaling sx: ";
		cin >> sx;
		cout << "\nmasukan faktor scaling sy: ";
		cin >> sy;

		garis();
		glutInit(&argc, argv);
		glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
		glutInitWindowSize(500, 500);
		glutInitWindowPosition(100, 150);
		glutCreateWindow("2018111");

		drawPolygonScaling(sx, sy);

		glutDisplayFunc(myDisplay);
		myInit();
		glutMainLoop();
		break;

	default:
		break;
	}

	glutInitWindowSize(500, 500);
	glutInitWindowPosition(100, 150);
	glutCreateWindow("2018111");
	glutDisplayFunc(myDisplay);
	myInit();
	glutMainLoop();
}
