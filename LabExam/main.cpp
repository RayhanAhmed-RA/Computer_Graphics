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
        glClearColor(.0f,.0f,.0f,.0f);
        glClear(GL_COLOR_BUFFER_BIT);




        glBegin(GL_QUADS);
        glColor3f(77, 0, 0);
        glVertex2f(-.7,.2);
        glVertex2f(-.7,-.4);
        glVertex2f(-.3,-.5);
        glVertex2f(-.3,.230);
        glEnd();

        glBegin(GL_QUADS);
        glColor3f(0,0,255);
        glVertex2f(-.3,.230);
        glVertex2f(-.3,-.5);
        glVertex2f(.6,-.4);
        glVertex2f(.6,.150);
        glEnd();

        glBegin(GL_TRIANGLES);
        glColor3f(0,0,255);
        glVertex2f(-.3,.230);
        glVertex2f(.6,.150);
        glVertex2f(.15,.6);
        glEnd();

        glBegin(GL_QUADS);
        glColor3f(140, 115, 115);
        glVertex2f(-.360,.230);
        glVertex2f(-.330,.2);
        glVertex2f(.15,.6);
        glVertex2f(.15,.650);
        glEnd();

        glBegin(GL_QUADS);
        glColor3f(140, 115, 115);
        glVertex2f(.15,.650);
        glVertex2f(.15,.6);
        glVertex2f(.630,.1);
        glVertex2f(.660,.130);
        glEnd();
        glBegin(GL_QUADS);
        glColor3f(255,255,0);
        glVertex2f(-.750,.230);
        glVertex2f(-.730,.2);
        glVertex2f(-.330,.2);
        glVertex2f(-.360,.230);

        glEnd();

        glBegin(GL_QUADS);
        glColor3f(128,0,255);
        glVertex2f(-.750,.230);
        glVertex2f(-.330,.230);
        glVertex2f(.15,.650);
        glVertex2f(-.4,.460);
        glEnd();

        glBegin(GL_QUADS);
        glColor3f(179, 195, 162);
        glVertex2f(-.1,-.475);
        glVertex2f(.050,-.580);
        glVertex2f(.450,-.5);
        glVertex2f(.3,-.430);
        glEnd();
        glBegin(GL_QUADS);
        glColor3f(255, 191, 0);
        glVertex2f(-.060,-.475);
        glVertex2f(.280,-.435);
        glVertex2f(.280,.020);
        glVertex2f(-.060,.020);

        glEnd();

        glBegin(GL_QUADS);
        glColor3f(1,1,1);
        glVertex2f(-.270,0);
        glVertex2f(-.270,-.3);
        glVertex2f(-.080,-.3);
        glVertex2f(-.080,0);
        glEnd();


        glBegin(GL_QUADS);
        glColor3f(1,1,1);
        glVertex2f(.3,-.1);
        glVertex2f(.3,-.160);
        glVertex2f(.350,-.160);
        glVertex2f(.350,-.1);

        glEnd();
        glBegin(GL_QUADS);
        glColor3f(1,1,1);
        glVertex2f(.360,-.1);
        glVertex2f(.360,-.160);
        glVertex2f(.4,-.160);
        glVertex2f(.4,-.1);

        glEnd();
        glBegin(GL_QUADS);
        glColor3f(255, 191, 0);
        glVertex2f(.450,-.1);
        glVertex2f(.450,-.420);
        glVertex2f(.550,-.410);
        glVertex2f(.550,-.1);
        glEnd();
        glBegin(GL_QUADS);
        glColor3f(1,1,1);
        glVertex2f(-.1,.3);
        glVertex2f(-.1,.150);
        glVertex2f(.050,.150);
        glVertex2f(.050,.3);
        glEnd();

        glBegin(GL_QUADS);
        glColor3f(1,1,1);
        glVertex2f(.150,.3);
        glVertex2f(.150,.150);
        glVertex2f(.3,.150);
        glVertex2f(.3,.3);
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
