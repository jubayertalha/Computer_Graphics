#include <windows.h>#include <GL/glut.h>void display() {	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);	glClear(GL_COLOR_BUFFER_BIT);    glBegin(GL_POLYGON); //top-left square        glColor3f(1.0f, 0.0f, 0.0f); //red        glVertex2f(-0.8f, 0.1f); //bottom-left        glVertex2f(-0.2f, 0.1f); //bottom-right        glVertex2f(-0.2f, 0.7f); //top-right        glVertex2f(-0.8f, 0.7f); //top-left    glEnd();    glBegin(GL_POLYGON); //bottom-left square        glColor3f(0.0f, 1.0f, 0.0f); //green        glVertex2f(-0.7f, 0.0f); //top-left        glVertex2f(-0.1f, 0.0f); //top-right        glVertex2f(-0.1f, -0.6f); //bottom-right        glVertex2f(-0.7f, -0.6f); //bottom-left    glEnd();    glBegin(GL_POLYGON); //bottom-left small square        glColor3f(0.2f, 0.2f, 0.2f); //black        glVertex2f(-0.5f, -0.3f); //top-right        glColor3f(1.0f, 1.0f, 1.0f); //white        glVertex2f(-0.5f, -0.7f); //bottom-right        glColor3f(0.2f, 0.2f, 0.2f); //black        glVertex2f(-0.9f, -0.7f); //bottom-left        glColor3f(1.0f, 1.0f, 1.0f); //white        glVertex2f(-0.9f, -0.3f); //top-left    glEnd();    glBegin(GL_TRIANGLES); //bottom-right triangle        glColor3f(0.0f, 0.0f, 1.0f); //blue        glVertex2f(0.4f, -0.1f); //top-center        glVertex2f(0.1f, -0.6f); //bottom-left        glVertex2f(0.7f, -0.6f); //bottom-right    glEnd();    glBegin(GL_TRIANGLES); //bottom-right revers triangle        glColor3f(1.0f, 0.0f, 0.0f); //red        glVertex2f(0.3f, -0.4f); //top-left        glColor3f(0.0f, 1.0f, 0.0f); //green        glVertex2f(0.9f, -0.4f); //top-right        glColor3f(0.0f, 0.0f, 1.0f); //blue        glVertex2f(0.6f, -0.9f); //bottom-center    glEnd();    glBegin(GL_POLYGON); //top-right hexagon        glColor3f(1.0f, 1.0f, 0.0f); //yellow        glVertex2f(0.4f, 0.2f); //bottom-left        glVertex2f(0.6f, 0.2f); //bottom-right        glVertex2f(0.7f, 0.4f); //center-right        glVertex2f(0.6f, 0.6f); //top-right        glVertex2f(0.4f, 0.6f); //top-left        glVertex2f(0.3f, 0.4f); //center-left    glEnd();	glFlush();}int main(int argc, char** argv) {	glutInit(&argc, argv);	glutCreateWindow("OpenGL Setup Test");	glutInitWindowSize(320, 320);	glutDisplayFunc(display);	glutMainLoop();	return 0;}