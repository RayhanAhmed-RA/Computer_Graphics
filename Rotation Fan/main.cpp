#include <windows.h>
#include <GL/glut.h>
#include<math.h>

# define PI           3.14159265358979323846

GLfloat j=0.0f;


void Idle()
{
    glutPostRedisplay();
}
void display() {
	glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    glBegin(GL_QUADS);
	glColor3ub(128,128,128);

	glVertex2f(-.03,0);
	glVertex2f(.03,0);
	glVertex2f(.03,.5);
	glVertex2f(-.03,.5);
	glEnd();


    glLoadIdentity();

	glPushMatrix();
    glRotatef(j,0.0,0.0,0.1);
     int i;
     glColor3ub(0, 128, 255);

	GLfloat x=0.0f; GLfloat y=0.0f; GLfloat radius =.1f;
	int triangleAmount = 10;


	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {

                glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

   glBegin(GL_QUADS);
	glColor3ub(128, 128, 255);

	glVertex2f(.05,-.1); //fan1
	glVertex2f(-.05,-.1);
	glVertex2f(-.05,-.15);
	glVertex2f(.05,-.15);

	glVertex2f(.08,-.15);
	glVertex2f(-.08,-.15);
	glVertex2f(-.08,-.7);
	glVertex2f(.08,-.7);

	glVertex2f(.15,.05);//fan2
	glVertex2f(.1,.05);
	glVertex2f(.1,-.05);
	glVertex2f(.15,-.05);

	glVertex2f(.15,.08);
	glVertex2f(.7,.08);
	glVertex2f(.7,-.08);
	glVertex2f(.15,-.08);




	glVertex2f(.05,.1); //fan3
	glVertex2f(-.05,.1);
	glVertex2f(-.05,.15);
	glVertex2f(.05,.15);

	glVertex2f(.08,.15);
	glVertex2f(-.08,.15);
	glVertex2f(-.08,.7);
	glVertex2f(.08,.7);



	glVertex2f(-.15,.05); //fan4
	glVertex2f(-.1,.05);
	glVertex2f(-.1,-.05);
	glVertex2f(-.15,-.05);

	glVertex2f(-.15,.08);
	glVertex2f(-.7,.08);
	glVertex2f(-.7,-.08);
	glVertex2f(-.15,-.08);
	//============//
	glBegin(GL_QUADS);
	glColor3ub(128,128,128);

	glVertex2f(-.05,.05);
	glVertex2f(-.05,-.05);
	glVertex2f(.05,-.05);
	glVertex2f(.05,.05);
	glEnd();


	glPopMatrix();
   j+=0.3f;
   glLoadIdentity();

glFlush();
}


void display_up()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    glBegin(GL_QUADS);
	glColor3ub(128,128,128);

	glVertex2f(-.03,0);
	glVertex2f(.03,0);
	glVertex2f(.03,.5);
	glVertex2f(-.03,.5);
	glEnd();


    glLoadIdentity();

	glPushMatrix();
    glRotatef(j,0.0,0.0,0.1);
     int i;
     glColor3ub(0, 128, 255);

	GLfloat x=0.0f; GLfloat y=0.0f; GLfloat radius =.1f;
	int triangleAmount = 10;


	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {

                glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

   glBegin(GL_QUADS);
	glColor3ub(128, 128, 255);

	glVertex2f(.05,-.1); //fan1
	glVertex2f(-.05,-.1);
	glVertex2f(-.05,-.15);
	glVertex2f(.05,-.15);

	glVertex2f(.08,-.15);
	glVertex2f(-.08,-.15);
	glVertex2f(-.08,-.7);
	glVertex2f(.08,-.7);

	glVertex2f(.15,.05);//fan2
	glVertex2f(.1,.05);
	glVertex2f(.1,-.05);
	glVertex2f(.15,-.05);

	glVertex2f(.15,.08);
	glVertex2f(.7,.08);
	glVertex2f(.7,-.08);
	glVertex2f(.15,-.08);




	glVertex2f(.05,.1); //fan3
	glVertex2f(-.05,.1);
	glVertex2f(-.05,.15);
	glVertex2f(.05,.15);

	glVertex2f(.08,.15);
	glVertex2f(-.08,.15);
	glVertex2f(-.08,.7);
	glVertex2f(.08,.7);



	glVertex2f(-.15,.05); //fan4
	glVertex2f(-.1,.05);
	glVertex2f(-.1,-.05);
	glVertex2f(-.15,-.05);

	glVertex2f(-.15,.08);
	glVertex2f(-.7,.08);
	glVertex2f(-.7,-.08);
	glVertex2f(-.15,-.08);
	//============//
	glBegin(GL_QUADS);
	glColor3ub(128,128,128);

	glVertex2f(-.05,.05);
	glVertex2f(-.05,-.05);
	glVertex2f(.05,-.05);
	glVertex2f(.05,.05);
	glEnd();


	glPopMatrix();
   j+=0.3f;
   glLoadIdentity();

glFlush();
}



void display_down()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    glBegin(GL_QUADS);
	glColor3ub(128,128,128);

	glVertex2f(-.03,0);
	glVertex2f(.03,0);
	glVertex2f(.03,.5);
	glVertex2f(-.03,.5);
	glEnd();


    glLoadIdentity();

	glPushMatrix();
    glRotatef(j,0.0,0.0,0.1);
     int i;
     glColor3ub(0, 128, 255);

	GLfloat x=0.0f; GLfloat y=0.0f; GLfloat radius =.1f;
	int triangleAmount = 10;


	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {

                glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

   glBegin(GL_QUADS);
	glColor3ub(128, 128, 255);

	glVertex2f(.05,-.1); //fan1
	glVertex2f(-.05,-.1);
	glVertex2f(-.05,-.15);
	glVertex2f(.05,-.15);

	glVertex2f(.08,-.15);
	glVertex2f(-.08,-.15);
	glVertex2f(-.08,-.7);
	glVertex2f(.08,-.7);

	glVertex2f(.15,.05);//fan2
	glVertex2f(.1,.05);
	glVertex2f(.1,-.05);
	glVertex2f(.15,-.05);

	glVertex2f(.15,.08);
	glVertex2f(.7,.08);
	glVertex2f(.7,-.08);
	glVertex2f(.15,-.08);




	glVertex2f(.05,.1); //fan3
	glVertex2f(-.05,.1);
	glVertex2f(-.05,.15);
	glVertex2f(.05,.15);

	glVertex2f(.08,.15);
	glVertex2f(-.08,.15);
	glVertex2f(-.08,.7);
	glVertex2f(.08,.7);



	glVertex2f(-.15,.05); //fan4
	glVertex2f(-.1,.05);
	glVertex2f(-.1,-.05);
	glVertex2f(-.15,-.05);

	glVertex2f(-.15,.08);
	glVertex2f(-.7,.08);
	glVertex2f(-.7,-.08);
	glVertex2f(-.15,-.08);
	//============//
	glBegin(GL_QUADS);
	glColor3ub(128,128,128);

	glVertex2f(-.05,.05);
	glVertex2f(-.05,-.05);
	glVertex2f(.05,-.05);
	glVertex2f(.05,.05);
	glEnd();


	glPopMatrix();
   j+=0.3f;
   glLoadIdentity();

glFlush();
}


void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
        case 'u':
            glutDisplayFunc(display_up);//
            break;
        case 'd':
            glutDisplayFunc(display_down);//
            break;
        glutPostRedisplay();
}}



void SpecialInput(int key, int x, int y)
{
switch(key)
{
    case GLUT_KEY_UP:
        glutDisplayFunc(display_up);
        break;
    case GLUT_KEY_DOWN:
        glutDisplayFunc(display_down);
        break;
    case GLUT_KEY_LEFT:
        break;
    case GLUT_KEY_RIGHT:
        break;}

    glutPostRedisplay();
}



void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON)
	{
			glutDisplayFunc(display_up);}

		if (button == GLUT_RIGHT_BUTTON)
	{
			glutDisplayFunc(display_down);}

    glutPostRedisplay();
}



int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutCreateWindow("Fan");
    glutDisplayFunc(display);

    glutIdleFunc(Idle);

    glutKeyboardFunc(handleKeypress);
    glutSpecialFunc(SpecialInput);
    glutMouseFunc(handleMouse);

    glutMainLoop();
    return 0;}
