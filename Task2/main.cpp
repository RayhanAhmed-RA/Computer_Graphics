#include<windows.h>
#include<GL/glut.h>
void display()
{
        glClearColor(1.0f,1.0f,1.0f,1.0f);
        glClear(GL_COLOR_BUFFER_BIT);




        glBegin(GL_QUADS);
        glColor3ub(255,0,0);
        glVertex2f(.6,.1);
        glVertex2f(.6,.2);
        glVertex2f(-.6,.2);
        glVertex2f(-.6,.1);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255,128,0);
        glVertex2f(.6,.2);
        glVertex2f(.6,.3);
        glVertex2f(-.6,.3);
        glVertex2f(-.6,.2);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255,255,0);
        glVertex2f(.6,.3);
        glVertex2f(.6,.4);
        glVertex2f(-.6,.4);
        glVertex2f(-.6,.3);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(64,255,0);
        glVertex2f(.6,.4);
        glVertex2f(.6,.5);
        glVertex2f(-.6,.5);
        glVertex2f(-.6,.4);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(0,255,255);
        glVertex2f(.6,.5);
        glVertex2f(.6,.6);
        glVertex2f(-.6,.6);
        glVertex2f(-.6,.5);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(0,0,255);
        glVertex2f(.6,.6);
        glVertex2f(.6,.7);
        glVertex2f(-.6,.7);
        glVertex2f(-.6,.6);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255,0,255);
        glVertex2f(.6,.7);
        glVertex2f(.6,.8);
        glVertex2f(-.6,.8);
        glVertex2f(-.6,.7);
        glEnd();








        glFlush();



}
int main(int argc, char**argv)
{
    glutInit(&argc,argv);
    glutCreateWindow("OpenGL Setup Test");
    glutInitWindowSize(320,320);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
