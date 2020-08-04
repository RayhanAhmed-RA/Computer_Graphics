#include<windows.h>
#include<GL/glut.h>
void display()
{
        glClearColor(1.0f,1.0f,1.0f,1.0f);
        glClear(GL_COLOR_BUFFER_BIT);




        glBegin(GL_QUADS);
        glColor3ub(100,149,237);
        glVertex2f(.7,-.6);
        glVertex2f(.7,-.4);
        glVertex2f(-.4,-.4);
        glVertex2f(-.4,-.6);
        glEnd();



        glBegin(GL_QUADS);
        glColor3ub(105,105,105);
        glVertex2f(.7,-.4);
        glVertex2f(.7,-.3);
        glVertex2f(-.4,-.3);
        glVertex2f(-.4,-.4);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(100,149,237);
        glVertex2f(.7,-.3);
        glVertex2f(.7,-.1);
        glVertex2f(-.4,-.1);
        glVertex2f(-.4,-.3);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(105,105,105);
        glVertex2f(.7,-.1);
        glVertex2f(.7,0);
        glVertex2f(-.4,0);
        glVertex2f(-.4,-.1);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(100,149,237);
        glVertex2f(.7,0);
        glVertex2f(.7,.2);
        glVertex2f(-.4,.2);
        glVertex2f(-.4,0);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(105,105,105);
        glVertex2f(.7,.2);
        glVertex2f(.7,.3);
        glVertex2f(-.4,.3);
        glVertex2f(-.4,.2);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(100,149,237);
        glVertex2f(.7,.3);
        glVertex2f(.7,.5);
        glVertex2f(-.4,.5);
        glVertex2f(-.4,.3);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(105,105,105);
        glVertex2f(.7,.5);
        glVertex2f(.7,.6);
        glVertex2f(-.4,.6);
        glVertex2f(-.4,.5);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(105,105,105);
        glVertex2f(.9,-.6);
        glVertex2f(.9,.6);
        glVertex2f(.9,.6);
        glVertex2f(.9,-.6);
        glEnd();
        glBegin(GL_QUADS);
        glColor3ub(105,105,105);
        glVertex2f(.750,-.750);
        glVertex2f(.750,.6);
        glVertex2f(.7,.6);
        glVertex2f(.7,-.750);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(105,105,105);
        glVertex2f(.7,-.750);
        glVertex2f(.7,-.6);
        glVertex2f(-.5,-.6);
        glVertex2f(-.5,-.750);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(105,105,105);
        glVertex2f(-.4,-.6);
        glVertex2f(-.4,.6);
        glVertex2f(-.5,.6);
        glVertex2f(-.5,-.6);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(112, 128, 144);
        glVertex2f(.750,-.750);
        glVertex2f(.9,-.6);
        glVertex2f(.9,.775);
        glVertex2f(.750,.6);
        glEnd();



        glBegin(GL_QUADS);
        glColor3ub(192,192,192);
        glVertex2f(.9,.775);
        glVertex2f(-.85,.775);
        glVertex2f(-.5,.6);
        glVertex2f(.750,.6);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(105,105,105);
        glVertex2f(-.8,-.6);
        glVertex2f(-.5,-.750);
        glVertex2f(-.5,-.6);
        glVertex2f(-.8,-.450);
        glEnd();


        glBegin(GL_QUADS);
        glColor3ub(100,149,237);
        glVertex2f(-.5,-.6);
        glVertex2f(-.5,-.1);
        glVertex2f(-.8,.1);
        glVertex2f(-.8,-.450);
        glEnd();


        glBegin(GL_QUADS);
        glColor3ub(105,105,105);
        glVertex2f(-.5,-.1);
        glVertex2f(-.5,0);
        glVertex2f(-.8,.15);
        glVertex2f(-.8,.05);
        glEnd();


        glBegin(GL_QUADS);
        glColor3ub(105,105,105);
        glVertex2f(-.5,.6);
        glVertex2f(-.8,.75);
        glVertex2f(-.8,.65);
        glVertex2f(-.5,.5);
        glEnd();


        glBegin(GL_QUADS);
        glColor3ub(100,149,237);
        glVertex2f(-.5,0);
        glVertex2f(-.5,.5);
        glVertex2f(-.8,.65);
        glVertex2f(-.8,.15);
        glEnd();


        glBegin(GL_QUADS);
        glColor3ub(105,105,105);
        glVertex2f(-.8,.75);
        glVertex2f(-.85,.775);
        glVertex2f(-.85,-.57);
        glVertex2f(-.8,-.6);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(47,79,79);
        glVertex2f(-.4,-.750);
        glVertex2f(-.4,-.8);
        glVertex2f(.3,-.8);
        glVertex2f(.3,-.750);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(105,105,105);
        glVertex2f(-.4,-.8);
        glVertex2f(-.350,-.850);
        glVertex2f(.4,-.850);
        glVertex2f(.3,-.8);
        glEnd();



        //


        glBegin(GL_LINES);
        glColor3f(255,255,255);
        glVertex2f(.7,-.167);
        glVertex2f(-.4,-.167);
        glEnd();
        glBegin(GL_LINES);
        glColor3f(255,255,255);
        glVertex2f(.7,-.240);
        glVertex2f(-.4,-.240);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(255,255,255);
        glVertex2f(.7,.147);
        glVertex2f(-.4,.147);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(255,255,255);
        glVertex2f(.7,.067);
        glVertex2f(-.4,.067);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(255,255,255);
        glVertex2f(.7,.447);
        glVertex2f(-.4,.447);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(255,255,255);
        glVertex2f(.7,.367);
        glVertex2f(-.4,.367);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(255,255,255);
        glVertex2f(.7,-.467);
        glVertex2f(-.4,-.467);
        glEnd();
        glBegin(GL_LINES);
        glColor3f(255,255,255);
        glVertex2f(.7,-.540);
        glVertex2f(-.4,-.540);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(255,255,255);
        glVertex2f(-.8,-.100);
        glVertex2f(-.5,-.250);
        glEnd();
        glBegin(GL_LINES);
        glColor3f(255,255,255);
        glVertex2f(-.8,-.350);
        glVertex2f(-.5,-.500);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(255,255,255);
        glVertex2f(-.8,.500);
        glVertex2f(-.5,.350);
        glEnd();
        glBegin(GL_LINES);
        glColor3f(255,255,255);
        glVertex2f(-.8,.250);
        glVertex2f(-.5,.100);
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
