#include <stdio.h>
#include <glut.h>

// PENERAPAN GL_POLYGON
void sayap_atas_kiri(){
	glColor3f(0, 1, 1);
	glBegin(GL_POLYGON);
	glVertex2d(-2.33, 12.17); //C
	glVertex2d(-30.01, 25.71); // D
	glVertex2d(-35.99, 25.7); // E
	glVertex2d(-34.56, 20.23); // F
	glVertex2d(-28.9, 12.17); // G
	glVertex2d(-21.70, 7.98); // H
	glVertex2d(-2.68, 7.79); // I
	glVertex2d(-3.28, 8.84); // J
	glVertex2d(-2.93, 9.65); //K
	glVertex2d(-3.28, 10.91); //L
	glVertex2d(-2.33, 12.17); //C
	glEnd();
}

void polygon_sayap_kiri(){
	GLubyte color[] = { 215, 186, 230 };
	glColor3ubv(color);
	glBegin(GL_POLYGON);
	glVertex2d(-2.33, 12.17); //C
	glVertex2d(-25.2, 23.45); // O
	glVertex2d(-26.61, 22.37); // N
	glVertex2d(-15.6, 16.32); // M
	glVertex2d(-3.35, 10.83); //L
	glEnd();

	color[0] = 173;
	color[1] = 132;
	color[2] = 188;
	glColor3ubv(color);
	glBegin(GL_POLYGON);
	glVertex2d(-15.6, 16.32); // M
	glVertex2d(-26.61, 22.37); // N
	glVertex2d(-26.5, 21.17); // Q
	glVertex2d(-26, 20.5); // P
	glVertex2d(-15.6, 16.32); // M
	glVertex2d(-3.28, 10.91); //L
	glEnd();

	glColor4f(191 / 255.0f, 153 / 255.0f, 206 / 255.0f, 255 / 255.0f);
	glBegin(GL_POLYGON);
	glVertex2d(-3.35, 10.83); // L
	glVertex2d(-15.6, 16.32); // M
	glVertex2d(-26, 20.5); // P
	glVertex2d(-24.02, 15.63); // R
	glVertex2d(-2.93, 9.65); // K
	glEnd();

	color[0] = 100;
	color[1] = 53;
	color[2] = 130;
	glColor3ubv(color);
	glBegin(GL_POLYGON);
	glVertex2d(-3.28, 8.84); // J
	glVertex2d(-2.93, 9.65); // K
	glVertex2d(-24.02, 15.63); // R
	glVertex2d(-22.5, 10.4); // S
	glVertex2d(-13.28, 7.82); // T
	glVertex2d(-2.68, 7.79); // I
	glEnd();


	color[0] = 42;
	color[1] = 0;
	color[2] = 63;
	glColor3ubv(color);
	glBegin(GL_POLYGON);
	glVertex2d(-13.28, 7.82); // T
	glVertex2d(-22.5, 10.4); // S
	glVertex2d(-21.70, 7.98); // H
	glEnd();

	color[0] = 50;
	color[1] = 33;
	color[2] = 78;
	glColor3ubv(color);
	glBegin(GL_POLYGON);
	glVertex2d(-25.17, 23.45); // O
	glVertex2d(-30.01, 25.72); // D
	glVertex2d(-29.69, 24.98); // U
	glVertex2d(-26.61, 22.37); // N
	glEnd();

	color[0] = 0;
	color[1] = 64;
	color[2] = 112;
	glColor3ubv(color);
	glBegin(GL_POLYGON);
	glVertex2d(-26.61, 22.37); // N
	glVertex2d(-29.69, 24.98); // U
	glVertex2d(-26, 20.5); // P
	glVertex2d(-26.5, 21.17); // Q
	glEnd();

	color[0] = 43;
	color[1] = 19;
	color[2] = 113;
	glColor3ubv(color);
	glBegin(GL_POLYGON);
	glVertex2d(-26, 20.5); // P
	glVertex2d(-29.69, 24.98); // U
	glVertex2d(-29.5, 22.5); // V
	glEnd();

	color[0] = 65;
	color[1] = 21;
	color[2] = 142;
	glColor3ubv(color);
	glBegin(GL_POLYGON);
	glVertex2d(-26, 20.5); // P
	glVertex2d(-29.5, 22.5); // V
	glVertex2d(-28.99, 20.6); // W
	glEnd();

	color[0] = 0;
	color[1] = 152;
	color[2] = 193;
	glColor3ubv(color);
	glBegin(GL_POLYGON);
	glVertex2d(-26, 20.5); // P
	glVertex2d(-28.99, 20.6); // W
	glVertex2d(-26.299, 19.89); // Z
	glVertex2d(-25.82, 19.89); // A1
	glEnd();

	color[0] = 1;
	color[1] = 81;
	color[2] = 182;
	glColor3ubv(color);
	glBegin(GL_POLYGON);
	glVertex2d(-24.02, 15.63); // R
	glVertex2d(-25.82, 19.89); // A1
	glVertex2d(-26.299, 19.89); // Z
	glVertex2d(-28.9, 12.12); // G
	glEnd();

	color[0] = 0;
	color[1] = 51;
	color[2] = 153;
	glColor3ubv(color);
	glBegin(GL_POLYGON);
	glVertex2d(-26.299, 19.89); // Z
	glVertex2d(-28.99, 20.6); // W
	glVertex2d(-28.9, 12.12); // G
	glEnd();


	color[0] = 77;
	color[1] = 36;
	color[2] = 117;
	glColor3ubv(color);
	glBegin(GL_POLYGON);
	glVertex2d(-24.02, 15.63); // R
	glVertex2d(-28.9, 12.12); // G
	glVertex2d(-27.3, 11.65); // B1
	glEnd();

	color[0] = 13;
	color[1] = 5;
	color[2] = 52;
	glColor3ubv(color);
	glBegin(GL_POLYGON);
	glVertex2d(-24.02, 15.63); // R
	glVertex2d(-27.3, 11.65); // B1
	glVertex2d(-22.5, 10.4); // S
	glEnd();

	color[0] = 13;
	color[1] = 5;
	color[2] = 52;
	glColor3ubv(color);
	glBegin(GL_POLYGON);
	glVertex2d(-22.5, 10.4); // S
	glVertex2d(-27.3, 11.65); // B1
	glVertex2d(-28.9, 12.12); // G
	glVertex2d(-21.70, 7.98); // H
	glEnd();

	color[0] = 13;
	color[1] = 5;
	color[2] = 52;
	glColor3ubv(color);
	glBegin(GL_POLYGON);
	glVertex2d(-29.69, 24.98); // U
	glVertex2d(-30.01, 25.72); // D
	glVertex2d(-35.99, 25.7); // E
	glVertex2d(-29.5, 22.5); // V
	glEnd();

	color[0] = 30;
	color[1] = 13;
	color[2] = 61;
	glColor3ubv(color);
	glBegin(GL_POLYGON);
	glVertex2d(-33.2, 18.67);
	glVertex2d(-28.99, 20.6); // W
	glVertex2d(-28.9, 12.12); // G
	glEnd();

	color[0] = 68;
	color[1] = 44;
	color[2] = 111;
	glColor3ubv(color);
	glBegin(GL_POLYGON);
	glVertex2d(-29.5, 22.5); // V
	glVertex2d(-35.99, 25.7); // E
	glVertex2d(-34.56, 20.23); // F
	glVertex2d(-28.99, 20.6); // W
	glEnd();

	color[0] = 13;
	color[1] = 5;
	color[2] = 52;
	glColor3ubv(color);
	glBegin(GL_POLYGON);
	glVertex2d(-28.99, 20.6); // W
	glVertex2d(-34.56, 20.23); // F
	glVertex2d(-33.26, 18.298);// C1
	glEnd();
}

void sayap_atas_kanan(){
	// SAYAP KANAN ATAS 
	glBegin(GL_POLYGON);
	glColor3f(0, 1, 1);
	glVertex2d(1.7, 12.24); //D1
	glVertex2d(24.4, 23.48); // E1
	glVertex2d(29.64, 25.88); // F1
	glVertex2d(34.17, 25.53); // G1
	glVertex2d(33.96, 20.29); // H1
	glVertex2d(32.48, 18.6); // I1
	glVertex2d(28.16, 12.22); // J1
	glVertex2d(20.93, 7.97); //K1
	glVertex2d(12.43, 7.82); //L1
	glVertex2d(1.95, 7.68); //M1
	glVertex2d(1.86, 8.75); // N1
	glVertex2d(2.38, 8.94); // O1
	glVertex2d(2.29, 9.48); // P1
	glVertex2d(1.86, 8.75); // Q1
	glVertex2d(2.26, 10.86); // R1
	glVertex2d(2.26, 11.54); // S1
	glEnd();
}

void sayap_kanan_bawah(){
	// SAYAP KANAN BAWAH
	glColor3f(0, 1, 1);
	glBegin(GL_POLYGON);
	glVertex2d(1.75, 7.198); //M2
	glVertex2d(25.26, 5.53); // N2
	glVertex2d(32.49, 2.92); // O2
	glVertex2d(29.57, -1.6); // Z2
	glVertex2d(20.75, -6.15); // A3
	glVertex2d(12.66, -6.15); // W2
	glVertex2d(8.2, -2.34); //V2
	glVertex2d(2, 2); // U2
	glVertex2d(1.79, 3.082); //T2
	glVertex2d(2.3, 4.085); // S2
	glVertex2d(1.98, 4.6); // R2
	glVertex2d(1.94, 5.16); // Q2
	glVertex2d(2, 6); // P2
	glVertex2d(1.02, 6.35); // K2
	glEnd();
}

void sayap_kiri_bawah(){
	// SAYAP KIRI BAWAH
	glColor3f(0, 1, 1);
	glBegin(GL_POLYGON);
	glVertex2d(-2.94, 7.197); //T1
	glVertex2d(-26, 5.51); // U1
	glVertex2d(-33.3, 2.96); // V1
	glVertex2d(-30.19, -1.75); // W1
	glVertex2d(-29.75, -2); // Z1
	glVertex2d(-21.45, -6.24); // A2
	glVertex2d(-13.4, -6.13); // B2
	glVertex2d(-8.68, -2.45); // C2
	glVertex2d(-2.33, 2.28); //D2
	glVertex2d(-2.79, 2.87); // E2
	glVertex2d(-2.85, 4.95); // F2
	glVertex2d(-2.05, 5.8); // J2
	glVertex2d(-1.78, 6.41); // H2
	glVertex2d(-2.16, 6.67); // I2
	glEnd();
}

// PENERAPAN GL_QUADS
void badan(){
	// BADAN
	glBegin(GL_QUADS);
	glBegin(GL_POLYGON);
	glColor3f(6 / 255.0, 3 / 255.0, 29/ 255.0);
	glVertex2d(0.89, 13.06); //S4
	glVertex2d(-1.57, 13.03); // R4
	glVertex2d(-2.33, 12.17); //C
	glVertex2d(-3.28, 10.91); //L
	glVertex2d(-2.93, 9.65); //K
	glVertex2d(-3.28, 8.84); // J
	glVertex2d(-2.68, 7.79); // I
	glVertex2d(-2.94, 7.197); //T1
	glVertex2d(-2.16, 6.67); // I2
	glVertex2d(-1.78, 6.41); // H2
	glVertex2d(-2.05, 5.8); // J2
	glVertex2d(-2.81, 5.4); // G2
	glVertex2d(-2.85, 4.95); // F2
	
	glColor3f(123 / 255.0, 51 / 255.0, 103/255.0);
	glVertex2d(-2.79, 2.87); // E2
	glVertex2d(-2.33, 2.28); //D2
	glVertex2d(-1.68, 1.3); // B3
	glVertex2d(-0.85, 0.69); //C3
	glVertex2d(-0.53, 0.67); // D3
	glVertex2d(-0.3, 0.41); // E3
	glVertex2d(0.12, 0.41); // F3
	glVertex2d(2, 2); // U2
	glVertex2d(1.79, 3.08); // T2
	glVertex2d(2.31, 4.09); // S2
	glVertex2d(1.98, 4.606); //R2
	glVertex2d(1.94, 5.16); // Q2
	glVertex2d(2, 6); // P2
	glVertex2d(1.02, 6.75);//2
	glVertex2d(1.75, 7.198); //M2
	glVertex2d(1.95, 7.68); //M1
	glVertex2d(1.86, 8.75); // N1
	glVertex2d(2.38, 8.94); // O1
	glVertex2d(2.29, 8.94); // P1
	glVertex2d(1.88, 10.23); // Q1
	glVertex2d(1.95, 7.68); // R1
	glVertex2d(2.26, 11.54); // S1
	glVertex2d(1.7, 12.24); // D1
	glEnd();
}

void kepala(){
	// KEPALA
	GLubyte color[] = { 49, 33, 78 };
	glColor3ubv(color);
	glBegin(GL_POLYGON);
	glVertex2d(0.89, 13.06); //S4
	glVertex2d(-1.57, 13.03); // R4
	glVertex2d(-2.36, 14.096); //T4
	glVertex2d(-2.45, 14.67); // U4
	glVertex2d(-3.132, 16.156); // V4
	glVertex2d(-2.38, 17.15); // W4
	glVertex2d(-1.23, 17.396); // Z4
	glVertex2d(-0.72, 16.62); // A5
	glVertex2d(0.03, 16.66); // B5
	glVertex2d(0.46, 17.20); // C5
	glVertex2d(1.45, 17.33); //D5
	glVertex2d(2.42, 16.26); // E5
	glVertex2d(2.47, 15.54); // F5
	glVertex2d(1.69, 14.81); // G5
	glVertex2d(1.48, 13.93); // H5
	glVertex2d(1.34, 13.51); // I5
	glEnd();

 // MATA KIRI 
	glBegin(GL_QUADS);
	glBegin(GL_POLYGON);
	// (merah)
	glColor3f(1.0, 0.0, 0.0);
	glVertex2d(-2.45, 14.67); // U4
	glVertex2d(-3.132, 16.156); // V4
	// (kuning)
	glColor3f(1.0, 1.0, 0.0);
	glVertex2d(-2.38, 17.15); // W4
	glVertex2d(-1.23, 17.396); // Z4
	// (oranye)
	glColor3f(1.0, 0.5, 0.0);
	glVertex2d(-0.72, 16.62); // A5
	glVertex2d(-1.14, 15.21);// S6
	glEnd();

// MATA KANAN
	glBegin(GL_QUADS);
	glBegin(GL_POLYGON);
	//  (merah)
	glColor3f(1.0, 0.0, 0.0);
	glVertex2d(-0.27, 15.43);// Z
	glVertex2d(0.03, 16.66); // B5
	//  (kuning)
	glColor3f(1.0, 1.0, 0.0);
	glVertex2d(0.46, 17.20); // C5
	glVertex2d(1.45, 17.33); //D5
	// (oranye)
	glColor3f(1.0, 0.5, 0.0);
	glVertex2d(2.42, 16.26); // E5
	glVertex2d(2.47, 15.54); // F5
	glVertex2d(1.69, 14.81); // G5
	glEnd();
}

void ekor_atas(){
	// EKOR ATAS
	glColor3f(123 / 255.0, 51 / 255.0, 103 / 255.0);
	glBegin(GL_POLYGON);
	glVertex2d(-1.16, 0.8);//C3
	glVertex2d(-1.11, -3.92); // G3
	glVertex2d(-1.35, -5.17); // J3
	glVertex2d(-0.21, -6.884); //Q3
	glVertex2d(0.58, -5.468); // L3
	glVertex2d(1.008, -4.659); // K3
	glVertex2d(0.845, -2.27);// I3
	glVertex2d(0.311, 2.31); //H3
	glVertex2d(0.344, 0.466);// F3
	glVertex2d(-0.16, 0.466); //E3
	glEnd();
}

void ekor_tengah(){
	// EKOR TENGAH
	glColor3f(75 / 255.0, 22 / 255.0, 90 / 255.0);
	glBegin(GL_POLYGON);
	glVertex2d(-0.21, -6.884); //Q3
	glVertex2d(-1.355, -5.17);     //J3
	glVertex2d(-1.058, -7.850); // J5
	glVertex2d(-1.69, -9); // O3
	glVertex2d(-1.12, -9.76); // T3
	glVertex2d(-1.19, -11.897); // U3
	glVertex2d(-1.35, -12.48);// B4
	glVertex2d(-0.28, -13.93); // C4
	glVertex2d(0.49, -13.51);// A4
	glVertex2d(0.98, -12.74); //Z3
	glVertex2d(1.38, -12.34); //W3
	glVertex2d(1.4, -11.78); //V3
	glVertex2d(1.37, -9); // S3
	glVertex2d(0.462, -7.67); // R3
	glVertex2d(0.57, -6.53); // K5
	glVertex2d(0.91, -5.89); // L5
	glVertex2d(0.58, -5.468); // L3
	glEnd();
}

void ekor_tengah_bawah(){
	// EKOR TENGAH BAWAH
	glColor3f(34 / 255.0, 0 / 255.0, 53 / 255.0);
	glBegin(GL_POLYGON);
	glVertex2d(0.49, -13.51);// A4
	glVertex2d(-0.28, -13.93); // C4
	glVertex2d(-0.77, -14.62); // D4
	glVertex2d(-0.99, -19.98); // F4
	glVertex2d(-1.9, -21.52); // G4
	glVertex2d(-0.89, -22.67); // J4
	glVertex2d(0.54, -22.85);// I4
	glVertex2d(1.24, -21.14); // H4
	glVertex2d(0.299, -20.03);// E4
	glEnd();
}

void ekor_bawah(){
	// EKOR BAWAH
	glBegin(GL_QUADS);
	glBegin(GL_POLYGON);
	glColor3f(6 / 255.0, 3 / 255.0, 29 / 255.0);
	glVertex2d(-0.89, -22.67); // J4
	glVertex2d(-2.25, -25.96); // K4
	glVertex2d(-0.74, -27.84); // M5
	glVertex2d(-2.44, -30.31); // N4
	glVertex2d(0.11, -34.99); // Q4
	glColor3f(123 / 255.0, 51 / 255.0, 103 / 255.0);
	glVertex2d(0.87, -33.45); // P4
	glVertex2d(2.48, -30.34);// O4
	glVertex2d(0.613, -27.52); // M4
	glVertex2d(2, -26);// L4
	glVertex2d(0.54, -22.85);// I4
	glEnd();

}

// PENERAPAN GL_LINE_STRIP
void garis_background(){
	glColor4f(0, 0, 0, 0.3);
	glBegin(GL_LINE_STRIP);
	glVertex2d(-20.21, 21.28); // N5
	glVertex2d(-22.89, 29.48); // O5
	glVertex2d(22.124, 29.56); // P5
	glVertex2d(19.38, 21.1); // Q5
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2d(-2.95, -7.58); // D6
	glVertex2d(-17.46, -12.24); // V5
	glVertex2d(-15, -25); // W5
	glVertex2d(-0.26, -41.02); // U5
	glVertex2d(14.3, -23.8); // Z5
	glVertex2d(16.55, -12.24); // C6
	glVertex2d(2.8, -7.68); // E6
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2d(-3.2, -9.54); // Q5
	glVertex2d(-8.83, -13.05); // R5
	glVertex2d(-15.34, -17.29); // S5
	glVertex2d(-0.33, -39.75); // T5
	glVertex2d(14.47, -17.151); // A6
	glVertex2d(8.397, -13.492); // B6
	glVertex2d(2.6, -9.499); // F6
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2d(-3.2, -9.54); // Q5
	glVertex2d(-8.83, -13.05); // R5
	glVertex2d(-0.33, -39.75); // T5
	glVertex2d(8.397, -13.492); // B6
	glVertex2d(2.6, -9.499); // F6
	glEnd();

	// PENERAPAN GL_LINE_LOOP
	glBegin(GL_LINE_LOOP);
	glVertex2d(-9.85, -3.64); //U5
	glVertex2d(-22.99, -5.36); // R5
	glVertex2d(-10, -10); // Q5
	glVertex2d(-1.35, -7.38); // V5
	glEnd();

	glBegin(GL_LINE_LOOP);
	glVertex2d(0.79, -7.03); // W5
	glVertex2d(9.12, -9.82); // S5
	glVertex2d(20.75, -6.15); // A3
	glVertex2d(9.53, -3.697); // Z5
	glEnd();
	
	// PENERAPAN GL_TRIANGLES
	glColor3f(215 / 255.0, 188 / 255.0, 88 / 255.0);
	glBegin(GL_TRIANGLES);
	glVertex2d(42.99, -28.82); // F8
	glVertex2d(33.99, -37.92); // E8
	glVertex2d(37.61, -32.33); // B8
	glEnd();

	glColor3f(132 / 255.0, 75 / 255.0, 87 / 255.0);
	glBegin(GL_TRIANGLES);
	glVertex2d(43.47, -28.18); // W7
	glVertex2d(37.72, -31.91); // A8
	glVertex2d(38.65, -26.27); // V7
	glEnd();

	glColor3f(14 / 255.0, 23 / 255.0, 92 / 255.0);
	glBegin(GL_TRIANGLES);
	glVertex2d(38.65, -26.27); // U7
	glVertex2d(37.46, -31.74); // Z7
	glVertex2d(34.2, -24.53); // T7
	glEnd();

	glColor3f(38 / 255.0, 31 / 255.0, 46 / 255.0);
	glBegin(GL_TRIANGLES);
	glVertex2d(37.34, -32.21); // C8
	glVertex2d(33.43, -38.29); // D8
	glVertex2d(34.05, -24.84); // S7
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(215 / 255.0, 188 / 255.0, 88 / 255.0);
	glVertex2d(-42.99,- 28.82); // F8
	glVertex2d(-33.99,- 37.92); // E8
	glVertex2d(-37.61,- 32.33); // B8
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(132 / 255.0, 75 / 255.0, 87 / 255.0);
	glVertex2d(-43.47,- 28.18); // W7
	glVertex2d(-37.72,- 31.91); // A8
	glVertex2d(-38.65,- 26.27); // V7
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(14 / 255.0, 23 / 255.0, 92 / 255.0);
	glVertex2d(-38.65,- 26.27); // U7
	glVertex2d(-37.46,- 31.74); // Z7
	glVertex2d(-34.2,- 24.53); // T7
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(38 / 255.0, 31 / 255.0, 46 / 255.0);
	glVertex2d(-37.34,- 32.21); // C8
	glVertex2d(-33.43,- 38.29); // D8
	glVertex2d(-34.05,- 24.84); // S7
	glEnd();
}

void polygon_sayap_kanan(){
	GLubyte color[] = { 215, 186, 230 };
	glColor3ubv(color);
	glBegin(GL_POLYGON);
	glVertex2d(1.7, 12.24); // D1
	glVertex2d(24.4, 23.48); // E1
	glVertex2d(25.68, 22.75); // C3
	glVertex2d(14.99, 16.44); // Q5
	glVertex2d(2.26, 10.86); // R1
	glVertex2d(2.26, 11.54); // S1
	glEnd();

	color[0] = 173;
	color[1] = 132;
	color[2] = 188;
	glBegin(GL_POLYGON);
	glVertex2d(25.68, 22.75); // C3
	glVertex2d(14.99, 16.44); // Q5
	glVertex2d(25.4, 20.54); // S5
	glEnd();

	glColor4f(191 / 255.0f, 153 / 255.0f, 206 / 255.0f, 255 / 255.0f);
	glBegin(GL_POLYGON);
	glVertex2d(1.7, 12.24); // R1
	glVertex2d(14.99, 16.44); // Q5
	glVertex2d(25.4, 20.54); // S5
	glVertex2d(23.18, 15.62); // T5
	glVertex2d(2.29, 9.48); // P1
	glVertex2d(1.88, 10.23); // Q1
	glEnd();

	glColor4f(100 / 255.0f, 53 / 255.0f, 130 / 255.0f, 255 / 255.0f);
	glBegin(GL_POLYGON);
	glVertex2d(2.29, 9.48); // P1
	glVertex2d(23.18, 15.62); // T5
	glVertex2d(21.59, 10.42); // U5
	glVertex2d(12.43, 7.82); // L1
	glVertex2d(1.95, 7.68); // M1
	glVertex2d(1.86, 8.75); // N1
	glVertex2d(2.38, 8.94); // O1
	glEnd();

	glColor4f(42 / 255.0f, 0 / 255.0f, 63 / 255.0f, 255 / 255.0f);
	glBegin(GL_POLYGON);
	glVertex2d(21.59, 10.42); // U5
	glVertex2d(12.43, 7.82); // L1
	glVertex2d(20.93, 7.97); // K1
	glEnd();

	color[0] = 13;
	color[1] = 5;
	color[2] = 52;
	glColor3ubv(color);
	glBegin(GL_POLYGON);
	glVertex2d(24.4, 23.24); //E1
	glVertex2d(29.64, 25.89); // F1
	glVertex2d(25.73, 22.59); // C3
	glEnd();

	color[0] = 0;
	color[1] = 64;
	color[2] = 110;
	glColor3ubv(color);
	glBegin(GL_POLYGON);
	glVertex2d(29.64, 25.89); // F1
	glVertex2d(28.86, 24.47); //B6
	glVertex2d(25.73, 22.59); // C3
	glVertex2d(25.4, 20.54); // S5
	glEnd();

	color[0] = 2;
	color[1] = 3;
	color[2] = 127;
	glColor3ubv(color);
	glBegin(GL_POLYGON);
	glVertex2d(28.89, 24.9); // B6
	glVertex2d(25.4, 20.54); // S5
	glVertex2d(28.7, 22.4); // C6
	glEnd();

	color[0] = 45;
	color[1] = 20;
	color[2] = 102;
	glColor3ubv(color);
	glBegin(GL_POLYGON);
	glVertex2d(28.7, 22.4); // C6
	glVertex2d(25.4, 20.54); // S5
	glVertex2d(28.50, 20.47); //E6
	glEnd();

	color[0] = 45;
	color[1] = 20;
	color[2] = 255;
	glColor3ubv(color);
	glBegin(GL_POLYGON);
	glVertex2d(25.4, 20.54); // S5
	glVertex2d(28.50, 20.47); //E6
	glVertex2d(25.8, 19);// F6
	glEnd();

	color[0] = 1;
	color[1] = 81;
	color[2] = 179;
	glColor3ubv(color);
	glBegin(GL_POLYGON);
	glVertex2d(28.50, 20.47); //E6
	glVertex2d(25.8, 19);// F6
	glVertex2d(25.4, 20.54); // S5
	glVertex2d(23.18, 15.62); // T5
	glVertex2d(28.16, 12.22); // J1
	glEnd();

	color[0] = 20;
	color[1] = 27;
	color[2] = 122;
	glColor3ubv(color);
	glBegin(GL_POLYGON);
	glVertex2d(28.50, 20.47); //E6
	glVertex2d(25.8, 19);// F6
	glVertex2d(28.16, 12.22); // J1
	glEnd();

	color[0] = 13;
	color[1] = 5;
	color[2] = 52;
	glColor3ubv(color);
	glColor3ubv(color);
	glBegin(GL_POLYGON);
	glVertex2d(28.16, 12.22); // J1
	glVertex2d(23.18, 15.62); // T5
	glVertex2d(21.59, 10.42); // U5
	glEnd();

	color[0] = 13;
	color[1] = 5;
	color[2] = 52;
	glColor3ubv(color);
	glBegin(GL_POLYGON);
	glVertex2d(28.16, 12.22); // J1
	glVertex2d(21.59, 10.42); // U5
	glVertex2d(20.93, 7.97); //K1
	glEnd();

	color[0] = 13;
	color[1] = 5;
	color[2] = 52;
	glColor3ubv(color);
	glBegin(GL_POLYGON);
	glVertex2d(29.64, 25.88); // F1
	glVertex2d(34.17, 25.53); // G1
	glVertex2d(28.7, 22.4); // C6
	glVertex2d(28.89, 24.9); // B6
	glEnd();

	color[0] = 68;
	color[1] = 44;
	color[2] = 111;
	glColor3ubv(color);
	glBegin(GL_POLYGON);
	glVertex2d(34.17, 25.53); // G1
	glVertex2d(28.7, 22.4); // C6
	glVertex2d(28.50, 20.47); //E6
	glVertex2d(32.48, 18.6); // I1
	glVertex2d(33.96, 20.29); // H1
	glEnd();

	color[0] = 13;
	color[1] = 5;
	color[2] = 52;
	glColor3ubv(color);
	glBegin(GL_POLYGON);
	glVertex2d(33.96, 20.29); // H1
	glVertex2d(28.50, 20.47); //E6
	glVertex2d(28.16, 12.22); // J1
	glVertex2d(32.48, 18.6); // I1
	glEnd();
}

void polygon_sayap_kiri_bawah(){
	GLubyte color[] = { 105, 45, 115 };
	glColor3ubv(color);
	glBegin(GL_POLYGON);
	glVertex2d(-2.94, 7.197); // T1
	glVertex2d(-26, 5.51); // U1
	glVertex2d(-24.26, 2.16); // G6
	glVertex2d(-15.72, 0.12); // H6
	glVertex2d(-2.85, 4.95); // F2
	glVertex2d(-2.81, 5.4); // G2
	glVertex2d(-2.05, 5.8); // J2
	glVertex2d(-1.78, 6.41); // H2
	glVertex2d(-2.16, 6.67); // I2
	glEnd();

	color[0] = 168;
	color[1] = 89;
	color[2] = 211;
	glColor3ubv(color);
	glBegin(GL_POLYGON);
	glVertex2d(-2.85, 4.95); // F2
	glVertex2d(-15.72, 0.12); // H6
	glVertex2d(-13.4, -6.13); // B2
	glVertex2d(-11.99, -5.36);// R5 
	glVertex2d(-8.68, -2.45); // C2
	glVertex2d(-2.33, 2.28); //D2
	glVertex2d(-2.79, 2.87); // E2
	glEnd();

	color[0] = 13;
	color[1] = 5;
	color[2] = 52;
	glColor3ubv(color);
	glBegin(GL_POLYGON);
	glVertex2d(-26, 5.51); // U1
	glVertex2d(-33.3, 2.96); // V1
	glVertex2d(-30.19, -1.75); // W1
	glVertex2d(-24.26, 2.16); // G6
	glEnd();

	color[0] = 68;
	color[1] = 44;
	color[2] = 111;
	glColor3ubv(color);
	glBegin(GL_POLYGON);
	glVertex2d(-24.26, 2.16); // G6
	glVertex2d(-30.19, -1.75); // W1
	glVertex2d(-21.45, -6.24); // A2
	glVertex2d(-15.72, 0.12); // H6
	glEnd();

	color[0] = 0;
	color[1] = 81;
	color[2] = 180;
	glColor3ubv(color);
	glBegin(GL_POLYGON);
	glVertex2d(-15.72, 0.12); // H6
	glVertex2d(-21.45, -6.24); // A2
	glVertex2d(-13.4, -6.13); // B2
	glEnd();
}

void polygon_sayap_kanan_bawah(){
	GLubyte color[] = { 99, 59, 148 };
	glColor3ubv(color);
	glBegin(GL_POLYGON);
	glVertex2d(1.75, 7.198); //M2
	glVertex2d(25.26, 5.53); // N2
	glVertex2d(23.45, 2.23); // I6
	glVertex2d(15.04, 0.229); // J6
	glVertex2d(1.94, 5.16); // Q2
	glVertex2d(2, 6); // P2
	glVertex2d(1.02, 6.35); // K2
	glEnd();

	color[0] = 168;
	color[1] = 89;
	color[2] = 211;
	glColor3ubv(color);
	glBegin(GL_POLYGON);
	glVertex2d(1.94, 5.16); // Q2
	glVertex2d(15.04, 0.229); // J6
	glVertex2d(12.66, -6.15); // W2
	glVertex2d(8.2, -2.34); //V2
	glVertex2d(2, 2); // U2
	glVertex2d(1.79, 3.082); //T2
	glVertex2d(2.3, 4.085); // S2
	glVertex2d(1.98, 4.6); // R2
	glEnd();

	color[0] = 13;
	color[1] = 5;
	color[2] = 52;
	glColor3ubv(color);
	glBegin(GL_POLYGON);
	glVertex2d(25.26, 5.53); // N2
	glVertex2d(32.49, 2.92); // O2
	glVertex2d(29.57, -1.6); // Z2
	glVertex2d(23.45, 2.23); // I6
	glEnd();

	color[0] = 68;
	color[1] = 44;
	color[2] = 111;
	glColor3ubv(color);
	glBegin(GL_POLYGON);
	glVertex2d(23.45, 2.23); // I6
	glVertex2d(29.57, -1.6); // Z2
	glVertex2d(20.75, -6.15); // A3
	glVertex2d(15.04, 0.229); // J6
	glEnd();

	color[0] = 0;
	color[1] = 81;
	color[2] = 180;
	glColor3ubv(color);
	glBegin(GL_POLYGON);
	glVertex2d(12.66, -6.15); // W2
	glVertex2d(20.75, -6.15); // A3
	glVertex2d(15.04, 0.229); // J6
	glEnd();
}

void square() {
	glBegin(GL_QUADS);
	glColor3f(159 / 255.0, 116 / 255.0, 254 / 255.0);
	glVertex2d(-0.09, 45.25); // M6

	glColor3f(254 / 255.0, 165 / 255.0, 60 / 255.0);
	glVertex2d(-9.81, 34.78); // N6

	glColor3f(76 / 255.0, 165 / 255.0, 251 / 255.0);
	glVertex2d(-0.157, 26.58); // P6
	
	glColor3f(77 / 255.0, 42 / 255.0, 194 / 255.0);
	glVertex2d(9.23, 35.28);  // O6
	glEnd();
}

// PENERAPAN GL_LINES
void line() {
	glBegin(GL_LINES);
	// (merah)
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2d(-5, -11);// M4
	//(biru)
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex2d(-2.44, -30.31);  // N4
	glEnd();

	glBegin(GL_LINES);
	// (merah)
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2d(2.48, -30.34);  // O4
	// biru
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex2d(5, -11);// q6
	glEnd();
}

void myInit(void) {
	glClearColor(235.0 / 255.0, 240.0 / 255.0, 218.0 / 255.0, 1.0);
	glColor3f(0.0f, 1.0f, 0.0);
	glPointSize(2.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-50, 50, -50, 50);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA); // Atur faktor blending
}

void gabungan() {
	glClear(GL_COLOR_BUFFER_BIT);
	//elemen background
	square(); // PENERAPAN GL_QUADS
	garis_background(); //PENERAPAN GL_LINE_STRIP,GL_LINE_LOOP, GL_TRIANGLES
	line(); // PENERAPAN GL_LINES

	//elemen sayap kiri
	polygon_sayap_kiri(); //PENERAPAN GL_POLYGON
	sayap_kiri_bawah(); //PENERAPAN GL_POLYGON
	polygon_sayap_kiri_bawah(); //PENERAPAN GL_POLYGON

	// elemen sayap kanan
	polygon_sayap_kanan(); //PENERAPAN GL_POLYGON
	sayap_kanan_bawah(); //PENERAPAN GL_POLYGON
	polygon_sayap_kanan_bawah(); //PENERAPAN GL_POLYGON
	

	// elemen badan
	badan(); // penerapan  GL_QUADS, GL_POLYGON

	// elemen kepala
	kepala(); // GL_POLYGON, GL_QUADS

	// elemen ekor
	ekor_atas();
	ekor_tengah();
	ekor_tengah_bawah();
	ekor_bawah();
	glFlush();
}

