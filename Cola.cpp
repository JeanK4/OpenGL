#include "Cola.h"

void Cola::DibujarCola(int n, float angle, float x, float y, float z) {
	glPushMatrix();
	glTranslatef(-1.5, -1.0, 0.0);
	glRotatef(angle, 0.0, 0.0, 2.0);
	glTranslatef(1.5, -1.0, 0.0); glPushMatrix();
	glScalef(1.0, 0.4, 1.0);
	glutSolidCube(1.0);
	glPopMatrix();
	for (int i = 0; i < n; i++) {
		glTranslatef(0.5, 0.0, 0.0);
		glRotatef(angle, 0.0, 0.0, 2.0);
		glTranslatef(0.5, 0.0, 0.0);
		glPushMatrix();
		glScalef(1.0, 0.4, 1.0);
		glutSolidCube(1.0);
		glPopMatrix();
	}
	glPopMatrix();
}
