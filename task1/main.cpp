#include<windows.h>
#include<GL/glut.h>
void display()
{
        glClearColor(1.0f,1.0f,1.0f,1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        glBegin(GL_LINES);
        glColor3f(0,0,0);
        glVertex2f(-1,0);
        glVertex2f(1,0);
        glVertex2f(0,1);
        glVertex2f(0,-1);

        glEnd();

        glBegin(GL_TRIANGLES);
        glColor3f(0,0,0);
        glVertex2f(-.5,.6);
        glVertex2f(-.7,.2);
        glVertex2f(-.3,.2);
        glEnd();



        glBegin(GL_QUADS);
        glColor3f(0,0,0);
        glVertex2f(.2,.6);
        glVertex2f(.2,.2);
        glVertex2f(.6,.2);
        glVertex2f(.6,.6);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(0,0,0);
        glVertex2f(-.3,-.3);
        glVertex2f(-.4,-.2);
        glVertex2f(-.7,-.2);
        glVertex2f(-.8,-.3);
        glVertex2f(-.8,-.6);
        glVertex2f(-.7,-.7);
        glVertex2f(-.4,-.7);
        glVertex2f(-.3,-.6);
        glEnd();




        glBegin(GL_LINES);
        glColor3f(1,0,0);
        glVertex2f(.2,-.2);
        glVertex2f(.4,-.6);
        glEnd();
        glBegin(GL_LINES);
        glColor3f(1,0,0);
        glVertex2f(.4,-.6);
        glVertex2f(.6,-.2);
        glEnd();
        glBegin(GL_LINES);
        glColor3f(1,0,0);
        glVertex2f(.6,-.2);
        glVertex2f(.2,-.2);
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
