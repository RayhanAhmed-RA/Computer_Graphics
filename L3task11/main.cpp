#include<windows.h>
#include<GL/glut.h>

#include<math.h>>
# define PI           3.14159265358979323846

void circle(GLfloat x,GLfloat y,GLfloat radius,int r,int g, int b)
{
        int i;
        int triangleAmount = 100; //# of triangles used to draw circle

        //GLfloat radius = 0.8f; //radius
        GLfloat twicePi = 2.0f * PI;

        glBegin(GL_TRIANGLE_FAN);
        glColor3ub(r,g,b);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
		glEnd();


}

void display()
{

        glClearColor(0.0f,0.0f,0.0f,1.0f);
        glClear(GL_COLOR_BUFFER_BIT);
        circle(-.8,.7,.1,255,255,255);

        /*===============*/



        /* ===============*/

        glBegin(GL_QUADS);
        glColor3ub(135,135,135);
        glVertex2f(-1,-.2);
        glVertex2f(-1,-.9);
        glVertex2f(1,-.9);
        glVertex2f(1,-.2);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(224,255,255);
        glVertex2f(-1,-.5);
        glVertex2f(-1,-.6);
        glVertex2f(-.7,-.6);
        glVertex2f(-.7,-.5);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(224,255,255);
        glVertex2f(-.4,-.5);
        glVertex2f(-.4,-.6);
        glVertex2f(-.1,-.6);
        glVertex2f(-.1,-.5);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(224,255,255);
        glVertex2f(.2,-.5);
        glVertex2f(.2,-.6);
        glVertex2f(.5,-.6);
        glVertex2f(.5,-.5);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(224,255,255);
        glVertex2f(.8,-.5);
        glVertex2f(.8,-.6);
        glVertex2f(1,-.6);
        glVertex2f(1,-.5);
        glEnd();
        /*=======================*/
        glBegin(GL_QUADS);
        glColor3ub(120,20,160);
        glVertex2f(-.6,.3);
        glVertex2f(-.6,-.1);
        glVertex2f(-.4,-.1);
        glVertex2f(-.4,.3);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(220,20,60);
        glVertex2f(-.350,.4);
        glVertex2f(-.350,-.1);
        glVertex2f(-.150,-.1);
        glVertex2f(-.150,.4);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(120,20,60);
        glVertex2f(-.1,.5);
        glVertex2f(-.1,-.1);
        glVertex2f(.1,-.1);
        glVertex2f(.1,.5);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(120,20,160);
        glVertex2f(.150,.3);
        glVertex2f(.150,-.1);
        glVertex2f(.350,-.1);
        glVertex2f(.350,.3);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(123,104,238);
        glVertex2f(.4,.6);
        glVertex2f(.4,-.1);
        glVertex2f(.6,-.1);
        glVertex2f(.6,.6);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(223,304,238);
        glVertex2f(.650,.2);
        glVertex2f(.650,-.1);
        glVertex2f(.850,-.1);
        glVertex2f(.850,.2);
        glEnd();

        /*==========*/
        glBegin(GL_QUADS);
        glColor3ub(34,139,34);
        glVertex2f(-1,-.1);
        glVertex2f(-1,-.2);
        glVertex2f(1,-.2);
        glVertex2f(1,-.1);
        glEnd();

        /*==============*/

        glBegin(GL_QUADS);
        glColor3ub(178,34,34);
        glVertex2f(-.7,-.220);
        glVertex2f(-.7,-.380);
        glVertex2f(-.4,-.380);
        glVertex2f(-.4,-.220);
        glEnd();
        circle(-.650,-.410,.04,0,0,0);
        circle(-.450,-.410,.04,0,0,0);

        glBegin(GL_QUADS);
        glColor3ub(0, 0, 205);
        glVertex2f(.4,-.620);
        glVertex2f(.4,-.780);
        glVertex2f(.7,-.780);
        glVertex2f(.7,-.620);
        glEnd();
        circle(.650,-.810,.04,0,0,0);
        circle(.450,-.810,.04,0,0,0);









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
