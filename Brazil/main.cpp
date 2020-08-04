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
        glClearColor(1.0f,1.0f,1.0f,1.0f);
        glClear(GL_COLOR_BUFFER_BIT);




        glBegin(GL_QUADS);
        glColor3f(0,100,0);
        glVertex2f(-.5,.350);
        glVertex2f(-.5,-.350);
        glVertex2f(.5,-.350);
        glVertex2f(.5,.350);
        glEnd();

        glBegin(GL_QUADS);
        glColor3f(255,255,0);
        glVertex2f(-.3,0);
        glVertex2f(0,-.2);
        glVertex2f(.3,0);
        glVertex2f(0,.2);
        glEnd();

        circle(0,0,.1,65, 105, 225);

        glBegin(GL_QUADS);
        glColor3f(255,255,155);
        glVertex2f(-.1,.020);
        glVertex2f(-.1,0);
        glVertex2f(0,.0350);
        glVertex2f(0,.0550);
        glEnd();

        glBegin(GL_QUADS);
        glColor3f(255,255,155);
        glVertex2f(0,.0550);
        glVertex2f(0,.0350);
        glVertex2f(.1,.0);
        glVertex2f(.1,.020);
        glEnd();


        glBegin(GL_LINES);
        glColor3f(255,255,255);
        glVertex2f(-.045,-.045);
        glVertex2f(-.025,-.025);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(255,255,255);
        glVertex2f(-.045,-.025);
        glVertex2f(-.025,-.045);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(255,255,255);
        glVertex2f(-.035,-.02);
        glVertex2f(-.035,-.05);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(255,255,255);
        glVertex2f(-.01,-.015);
        glVertex2f(.01,0);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(255,255,255);
        glVertex2f(-.01,0);
        glVertex2f(.01,-.015);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(255,255,255);
        glVertex2f(-.0008,.01);
        glVertex2f(-.0008,-.025);
        glEnd();


        glBegin(GL_LINES);
        glColor3f(255,255,255);
        glVertex2f(-.01,-.065);
        glVertex2f(.01,-.045);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(255,255,255);
        glVertex2f(-.01,-.045);
        glVertex2f(.01,-.065);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(255,255,255);
        glVertex2f(-.0008,-.04);
        glVertex2f(-.0008,-.07);
        glEnd();


        glBegin(GL_LINES);
        glColor3f(255,255,255);
        glVertex2f(.045,-.045);
        glVertex2f(.025,-.025);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(255,255,255);
        glVertex2f(.045,-.025);
        glVertex2f(.025,-.045);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(255,255,255);
        glVertex2f(.035,-.02);
        glVertex2f(.035,-.05);
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
