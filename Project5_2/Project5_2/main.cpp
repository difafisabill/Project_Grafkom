
#include "trasformasi.h"
int main(int argc, char** argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutCreateWindow("Tugas5_Transformasi_2118052");

	// Pilihan
	cout << "******************************************************" << endl;
	cout << "		 MENU TRANSFORMASI" << endl;
	cout << "******************************************************" << endl;


	cout << "1. Refleksi" << endl;
	cout << "2. Shear" << endl;
	cout << "3. Rotasi" << endl;
	cout << "4. Translasi" << endl;
	cout << "5. Scalling" << endl;
	cout << "Masukkan Pilihan Transformasi : ";
	cin >> transformasi;

	// Input titik
	if (transformasi == 1){
		cout << "Masukkan jumlah titik : ";
		cin >> numpoints;
		points.reserve(numpoints);
		for (int i = 0; i < numpoints; ++i){
			float x, y;
			cout << "Masukkan koordinat titik" << i + 1 << "(xy): ";
			cin >> x >> y;
			points.push_back({ x, y });
		}
		// Input refleksi
		cout << "Pilihan refleksi" << endl;
		cout << "1. Terhadap sumbu X" << endl;
		cout << "2. Terhadap sumbu Y" << endl;
		cout << "3. Terhadap sumbu XY" << endl;
		cout << "4. Terhadap sumbu X, Y, dan XY" << endl;
		cout << "Masukkan pilihan refleksi : ";
		cin >> refleksi;
	}
	else if (transformasi == 2){
		cout << "Masukkan jumlah titik: ";
		cin >> numpoints;
		points.reserve(numpoints);
		for (int i = 0; i < numpoints; ++i){
			float x, y;
			cout << "Masukkan koordinat titik" << i + 1 << " (x y): ";
			cin >> x >> y;
			points.push_back({ x, y });
		}
		// Input shear
		cout << "Pilihan shear" << endl;
		cout << "1. Terhadap sumbu X" << endl;
		cout << "2. Terhadap sumbu Y" << endl;
		cout << "3. Terhadap sumbu XY" << endl;
		cout << "Masukkan pilihan shear : ";
		cin >> shear;
		if (shear == 1){
			cout << "Masukkan faktor shear X: ";
			cin >> shearX;
		}
		else if (shear == 2){
			cout << "Masukkan faktor shear Y: ";
			cin >> shearY;
		}
		else{
			cout << "Masukkan faktor shear X: ";
			cin >> shearX;
			cout << "Masukkan faktor shear Y: ";
			cin >> shearY;
		}
	}
	else if (transformasi == 3){
		cout << "Masukkan Jumlah titik: ";
		cin >> numpoints;
		points.reserve(numpoints);
		for (int i = 0; i < numpoints; ++i){
			float x, y;
			cout << "Masukkan koordinat titik " << i + 1 << " (x y): ";
			cin >> x >> y;
			points.push_back({ x, y });
		}
		cout << "Masukkan sudut derajat rotasi : ";
		cin >> rotasi;
	}
	else if (transformasi == 4){
		cout << "Masukkan Jumlah titik: ";
		cin >> numpoints;
		points.reserve(numpoints);
		for (int i = 0; i < numpoints; ++i){
			float x, y;
			cout << "Masukkan koordinat titik " << i + 1 << " (x y): ";
			cin >> x >> y;
			points.push_back({ x, y });
		}
		cout << "Masukkan faktor translasi X: ";
		cin >> translasiX;
		cout << "Masukkan faktor translasi Y: ";
		cin >> translasiY;
	}
	else if (transformasi == 5){
		cout << "Masukkan Jumlah titik: ";
		cin >> numpoints;
		points.reserve(numpoints);
		for (int i = 0; i < numpoints; ++i){
			float x, y;
			cout << "Masukkan koordinat titik " << i + 1 << " (x y): ";
			cin >> x >> y;
			points.push_back({ x, y });
		}
		cout << "Masukkan faktor skala X: ";
		cin >> skalaX;
		cout << "Masukkan faktor skala Y: ";
		cin >> skalaY;
	}
	glutDisplayFunc(myDisplay);
	myInit();
	glutMainLoop();
	return 0;
}