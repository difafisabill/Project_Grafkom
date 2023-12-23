#include "transformasi_2d.h"; //memanggil header
void main(int argc, char** argv) {
	garis(); //memanggil fungsi
	cout << "\n\tMenu Transformasi" << "\n\n";
	cout << "1. Refleksi" << "\n";
	cout << "2. Shear" << "\n";
	garis();
	cout << "\nPilih Menu : ";
	cin >> choice;
	switch (choice) {
	case 1:
		cout << "masukan jumlah titik: "; cin >> edges;
		for (int i = 0; i < edges; i++)
		{
			cout << "masukkan koordinat :" << i + 1 <<
				":"; cin >> pntX1 >> pntY1; // nilai koordinat
			pntX.push_back(pntX1); //memasukkan nilai koordinat ke dalam vektor
				pntY.push_back(pntY1);
		}
		garis(); //memanggil fungsi
		glutInit(&argc, argv); //inisialisasi library GLUT
		glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); //utk membuat tampilan glut rgb dan buffer
			glutInitWindowSize(500, 500); //utk menentukan ukuran window
			glutInitWindowPosition(100, 150); //utk mengatur posisi
			glutCreateWindow("2018111"); //memberi judul window
		glutDisplayFunc(myDisplay); //memanggil display
		myInit(); //memanggil fungsi
		glutMainLoop(); //melakukan perulangan event
		break;
	case 2:
		cout << "masukan jumlah titik: "; cin >> edges;
		for (int i = 0; i < edges; i++)
		{
			cout << "masukan kordinat : " << i + 1 << " : "; cin >> pntX1 >> pntY1;
				pntX.push_back(pntX1);
			pntY.push_back(pntY1);
		}
		garis();
		cout << "\nmasukan shearing factor untuk X: "; cin
			>> shearingX;
		cout << "\nmasukan shearing factor untuk Y: "; cin
			>> shearingY;
		glutInit(&argc, argv);
		glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
		glutInitWindowSize(500, 500);
		glutInitWindowPosition(100, 150);
		glutCreateWindow("2018111");
		glutDisplayFunc(myDisplay);
		myInit();
		glutMainLoop();
		break;
	default:
		break;
	}
}
