#include <windows.h>#include <GL/glut.h>void display() {    glClear(GL_COLOR_BUFFER_BIT);    glColor3f(0.0f, 0.0f, 0.0f);    glPointSize(40.0f);    glBegin(GL_POLYGON); //outer border        glColor3f(0.0f, 0.0f, 0.0f); //black        glVertex2f(-8, -10); //bottom-left        glVertex2f(8, -10); //bottom-right        glVertex2f(15, -3); //center-bottom-right        glVertex2f(15, 3); //center-top-right        glVertex2f(8, 10); //top-right        glVertex2f(-8, 10); //top-left        glVertex2f(-15, 3); //center-top-left        glVertex2f(-15, -3); //center-bottom-left    glEnd();    glBegin(GL_POLYGON); //inner fill        glColor3f(1.0f, 1.0f, 0.0f); //yellow        glVertex2f(-8, -9); //bottom-left        glVertex2f(8, -9); //bottom-right        glVertex2f(14, -3); //center-bottom-right        glVertex2f(14, 3); //center-top-right        glVertex2f(8, 9); //top-right        glVertex2f(-8, 9); //top-left        glVertex2f(-14, 3); //center-top-left        glVertex2f(-14, -3); //center-bottom-left    glEnd();    glBegin(GL_POLYGON); //left wing        glColor3f(0.0f, 0.0f, 0.0f); //black        glVertex2f(-8, -7); //bottom-left        glVertex2f(-6, -7); //bottom-right        glVertex2f(-6, 7); //top-right        glVertex2f(-8, 7); //top-left        glVertex2f(-13, 2); //center-top        glVertex2f(-13, -2); //center-bottom    glEnd();    glBegin(GL_POLYGON); //right wing        glColor3f(0.0f, 0.0f, 0.0f); //black        glVertex2f(6, -7); //bottom-left        glVertex2f(8, -7); //bottom-right        glVertex2f(13, -2); //center-bottom        glVertex2f(13, 2); //center-top        glVertex2f(8, 7); //top-right        glVertex2f(6, 7); //top-left    glEnd();    glBegin(GL_POLYGON); //left line 1        glColor3f(0.0f, 0.0f, 0.0f); //black        glVertex2f(-6, -8); //bottom-left        glVertex2f(-5, -8); //bottom-right        glVertex2f(-5, 3); //top-right        glVertex2f(-6, 3); //top-left    glEnd();    glBegin(GL_POLYGON); //left line 2        glColor3f(0.0f, 0.0f, 0.0f); //black        glVertex2f(-5, -6); //bottom-left        glVertex2f(-4, -6); //bottom-right        glVertex2f(-4, 2); //top-right        glVertex2f(-5, 2); //top-left    glEnd();    glBegin(GL_POLYGON); //left line 3        glColor3f(0.0f, 0.0f, 0.0f); //black        glVertex2f(-4, -5); //bottom-left        glVertex2f(-3, -5); //bottom-right        glVertex2f(-3, 2); //top-right        glVertex2f(-4, 2); //top-left    glEnd();    glBegin(GL_POLYGON); //left line 4        glColor3f(0.0f, 0.0f, 0.0f); //black        glVertex2f(-3, -4); //bottom-left        glVertex2f(-2, -4); //bottom-right        glVertex2f(-2, 3); //top-right        glVertex2f(-3, 3); //top-left    glEnd();    glBegin(GL_POLYGON); //right line 1        glColor3f(0.0f, 0.0f, 0.0f); //black        glVertex2f(5, -8); //bottom-left        glVertex2f(6, -8); //bottom-right        glVertex2f(6, 3); //top-right        glVertex2f(5, 3); //top-left    glEnd();    glBegin(GL_POLYGON); //right line 2        glColor3f(0.0f, 0.0f, 0.0f); //black        glVertex2f(4, -6); //bottom-left        glVertex2f(5, -6); //bottom-right        glVertex2f(5, 2); //top-right        glVertex2f(4, 2); //top-left    glEnd();    glBegin(GL_POLYGON); //right line 3        glColor3f(0.0f, 0.0f, 0.0f); //black        glVertex2f(3, -5); //bottom-left        glVertex2f(4, -5); //bottom-right        glVertex2f(4, 2); //top-right        glVertex2f(3, 2); //top-left    glEnd();    glBegin(GL_POLYGON); //right line 4        glColor3f(0.0f, 0.0f, 0.0f); //black        glVertex2f(2, -4); //bottom-left        glVertex2f(3, -4); //bottom-right        glVertex2f(3, 3); //top-right        glVertex2f(2, 3); //top-left    glEnd();    glBegin(GL_POLYGON); //center square        glColor3f(0.0f, 0.0f, 0.0f); //black        glVertex2f(-2, -5); //bottom-left        glVertex2f(2, -5); //bottom-right        glVertex2f(2, 7); //top-right        glVertex2f(-2, 7); //top-left    glEnd();    glBegin(GL_POLYGON); //bottom square        glColor3f(0.0f, 0.0f, 0.0f); //black        glVertex2f(-1, -7); //bottom-left        glVertex2f(1, -7); //bottom-right        glVertex2f(1, -5); //top-right        glVertex2f(-1, -5); //top-left    glEnd();    glBegin(GL_POLYGON); //left pint        glColor3f(0.0f, 0.0f, 0.0f); //black        glVertex2f(-6, 6); //bottom-left        glVertex2f(-5, 6); //bottom-right        glVertex2f(-5, 7); //top-right        glVertex2f(-6, 7); //top-left    glEnd();    glBegin(GL_POLYGON); //right point        glColor3f(0.0f, 0.0f, 0.0f); //black        glVertex2f(5, 6); //bottom-left        glVertex2f(6, 6); //bottom-right        glVertex2f(6, 7); //top-right        glVertex2f(5, 7); //top-left    glEnd();    glBegin(GL_POLYGON); //top-left point        glColor3f(0.0f, 0.0f, 0.0f); //black        glVertex2f(-2, 7); //bottom-left        glVertex2f(-1, 7); //bottom-right        glVertex2f(-1, 8); //top-right        glVertex2f(-2, 8); //top-left    glEnd();    glBegin(GL_POLYGON); //top-right point        glColor3f(0.0f, 0.0f, 0.0f); //black        glVertex2f(2, 7); //bottom-left        glVertex2f(1, 7); //bottom-right        glVertex2f(1, 8); //top-right        glVertex2f(2, 8); //top-left    glEnd();    glBegin(GL_POLYGON); //bottom point        glColor3f(0.0f, 0.0f, 0.0f); //black        glVertex2f(-0.5, -8); //bottom-left        glVertex2f(0.5, -8); //bottom-right        glVertex2f(0.5, -7); //top-right        glVertex2f(-0.5, -7); //top-left    glEnd();	glFlush();}void myInit(void){    glClearColor(1.0, 1.0, 1.0, 0.0);    glColor3f(0.0f, 0.0f, 0.0f);    glPointSize(20.0f);    glMatrixMode(GL_PROJECTION);    glLoadIdentity();    gluOrtho2D(-16.0, 16.0, -12.0, 12.0);}int main(int argc, char** argv) {	glutInit(&argc, argv);    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);    glutInitWindowSize (1280, 960);    glutInitWindowPosition (100, 150);    glutCreateWindow ("BatMan Logo");    glutDisplayFunc(display);    myInit ();    glutMainLoop();	return 0;}