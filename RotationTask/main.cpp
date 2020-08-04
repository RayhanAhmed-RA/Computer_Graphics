#include<windows.h>
#include<GL/glut.h>
#include<math.h>
# define PI          3.14159265358979323846
GLfloat j=0;

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
void idle()
{
    glutPostRedisplay();
}
void display()
{


    /*
    glBegin(GL_QUADS);//tree1
        glColor3ub(118, 92, 72);
        glVertex2f(.850,.350);
        glVertex2f(.850,-.150);
        glVertex2f(.9,-.150);
        glVertex2f(.9,.350);
        glEnd();

        circle(.875,.27,0.1,34,139,34);
        circle(.875,.3,0.08,34,139,34);
        circle(.795,.2085,0.08,34,139,34);
        circle(.955,.2085,0.08,34,139,34);
    */
    circle(0,0,.050,128,128,128);

            glBegin(GL_QUADS);
            glColor3f(0,0,0);
            glVertex2f(-.020,-.050);
            glVertex2f(-.020,-.6);
            glVertex2f(.020,-.6);
            glVertex2f(.020,-.050);
            glEnd();

        glClearColor(1.0f,1.0f,1.0f,1.0f);
        glClear(GL_COLOR_BUFFER_BIT);


        glPushMatrix();
        glRotated(j,.0,.0,.1);

        glBegin(GL_TRIANGLES);
        glColor3f(0,0,0);
        glVertex2f(-.050,.4);
        glVertex2f(0,.050);
        glVertex2f(.050,.4);

        glEnd();

        glBegin(GL_TRIANGLES);
        glColor3f(0,0,0);
        glVertex2f(.4,.050);
        glVertex2f(.050,0);
        glVertex2f(.4,-.050);

        glEnd();

        glBegin(GL_TRIANGLES);
        glColor3f(0,0,0);
        glVertex2f(-.050,0);
        glVertex2f(-.4,.050);
        glVertex2f(-.4,-.050);

        glEnd();

        glBegin(GL_TRIANGLES);
        glColor3f(0,0,0);
        glVertex2f(0,-.050);
        glVertex2f(-.050,-.4);
        glVertex2f(.050,-.4);

        glEnd();

        glPopMatrix();
        j=j+1;

        glFlush();


}

int main(int argc, char**argv)
{
    glutInit(&argc,argv);
    glutCreateWindow("OpenGL Setup Test");
    glutInitWindowSize(320,320);
    glutDisplayFunc(display);
    glutIdleFunc(idle);
    glutMainLoop();
    return 0;
}
