#include <windows.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <GL/glut.h>
#include <GL/gl.h>
# define PI           3.14159265358979323846
using namespace std;

void display5(int val);


GLfloat i1 = 0.0f;
GLfloat position1 = 0.0f;
GLfloat speed1 = 0.035f;


GLfloat position2 = 0.1f;
GLfloat speed2 = 0.08f;

GLfloat position3 = 0.1f;
GLfloat speed3 = 0.08f;

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

void rainf()
{

    int x=800;
    int y=500;
    static float a=760.0f;
    if(a<=768)
    {
         a=-760.0f;

    }
    glColor3ub(255,255,255);
    glPushMatrix();
    glTranslatef(-5.0f,a,0.0f);
    glBegin(GL_LINES);
    for(int i=500;i>=0;i--)
    {
        for(int j=0;j<=i;j++)
        {
            glVertex3i(x,y,0);
            glVertex3i(x+10,y+50,0);
            x+=rand()%1050;
        }
        y+=rand()%15;
        x=0;

    }
    glEnd();
    glPopMatrix();
    glutPostRedisplay();

}


void update1(int value)
{
    if (position1 < -2.9)
        position1 = 2.0f;
    position1 -= speed1;
    glutPostRedisplay();
    glutTimerFunc(100, update1, 0);
}



void update2(int value)
{
    if (position2 > 2.9)
        position2 = -2.0f;
    position2 += speed2;
    glutPostRedisplay();
    glutTimerFunc(100, update2, 0);
}

void update3(int value)
{
    if (position1 > 2.5)
        position1 = -2.0f;
    position1 += 2 * speed1;
    glutPostRedisplay();
    glutTimerFunc(100, update3, 0);
}

void update4(int value)
{
    if (position2 < -2.9)
        position2 = 2.0f;
    position2 -= speed2;
    glutPostRedisplay();
    glutTimerFunc(100, update4, 0);
}


void update5(int value)
{
    if (position3 < -2.9)
        position3 = 2.0f;
    position3 -= speed3;
    glutPostRedisplay();
    glutTimerFunc(100, update5, 0);
}


//Initializes 3D rendering
void initRendering()
{
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_COLOR_MATERIAL);
}

void handleResize(int w, int h)
{
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0, (double)w / (double)h, 1.0, 200.0);
}

float _angle = 0.0;
float _helifan = 0.0;
float x = 0;
float hf = 5.0f;
float sun = 0.0;
float helimove = 8.0;
static int cl = 0;
string color = "blue";
int a = 0, i = 0, u = 0, b = 0, count_logo = 0, m = 0;
int h = 0;
bool fullscreen = true;

///for Car

float _cameraAngleCar = 0.0;
float initialCarPosi = -8;
float initialCarPosition = 3;
float RCarPosi = -8;
float posCar = 0.0;

//Draws the 3D scene

void display();

void display2(int val)
{

    glutDisplayFunc(display);


}




void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glMatrixMode(GL_MODELVIEW); //Switch to the drawing perspective
    glLoadIdentity(); //Reset the drawing perspectivew
    glTranslatef(0.0, 0.0, -7.0); //Move forward 5 units


    glPushMatrix();
    if (h == 1)
    {

        ///Instruction Text
        glPushMatrix();

        glPopMatrix();

        ///Instruction Window
        glPushMatrix();
        glColor3ub(0, 0, 0);
        glBegin(GL_POLYGON);
        glVertex3f(-2, -2, 0);
        glVertex3f(1, -2, 0);
        glVertex3f(1, 1, 0);
        glVertex3f(-2, 1, 0);
        glEnd();
        glPopMatrix();
    }/// instruction window close

    else
    {

        glScalef(1.03, 1, 0);
        glPushMatrix();
        /// H-Help
        glPushMatrix();
        glPopMatrix();
        /// Help End

        ///LightPost 4 From down left
        glPushMatrix();
        glTranslatef(2, -3.5, 0);
        glColor3ub(0, 0, 0);
        ///Lower_portion
        glBegin(GL_POLYGON);
        glVertex3f(-2, .5, 0);
        glVertex3f(-2.05, .5, 0);
        glVertex3f(-2.05, 2, 0);
        glVertex3f(-2, 2, 0);
        glEnd();
        ///Higher_portion
        glBegin(GL_POLYGON);
        glVertex3f(-2, 1.95, 0);
        glVertex3f(-2, 1.9, 0);
        glVertex3f(-2.2, 2.15, 0);
        glVertex3f(-2.2, 2.2, 0);
        glEnd();

        ///light 4 cone
        glBegin(GL_POLYGON);
        glVertex3f(-2.2, 2.2, 0);
        glVertex3f(-2.27, 2.0, 0);
        glVertex3f(-2.13, 2.0, 0);
        glEnd();
        glPopMatrix();

        ///LightPost 5 From down left
        glPushMatrix();
        glTranslatef(-2.0, -3.5, 0);
        glColor3ub(0, 0, 0);
        ///Lower_portion
        glBegin(GL_POLYGON);
        glVertex3f(-2, .5, 0);
        glVertex3f(-2.05, .5, 0);
        glVertex3f(-2.05, 2, 0);
        glVertex3f(-2, 2, 0);
        glEnd();
        ///Higher_portion
        glBegin(GL_POLYGON);
        glVertex3f(-2, 1.95, 0);
        glVertex3f(-2, 1.9, 0);
        glVertex3f(-2.2, 2.15, 0);
        glVertex3f(-2.2, 2.2, 0);
        glEnd();

        ///light 5 cone
        glBegin(GL_POLYGON);
        glVertex3f(-2.2, 2.2, 0);
        glVertex3f(-2.27, 2.0, 0);
        glVertex3f(-2.13, 2.0, 0);
        glEnd();
        glPopMatrix();
        ///LightPost 6 From down left
        glPushMatrix();
        glTranslatef(6.0, -3.5, 0);
        glColor3ub(0, 0, 0);
        ///Lower_portion
        glBegin(GL_POLYGON);
        glVertex3f(-2, .5, 0);
        glVertex3f(-2.05, .5, 0);
        glVertex3f(-2.05, 2, 0);
        glVertex3f(-2, 2, 0);
        glEnd();
        ///Higher_portion
        glBegin(GL_POLYGON);
        glVertex3f(-2, 1.95, 0);
        glVertex3f(-2, 1.9, 0);
        glVertex3f(-2.2, 2.15, 0);
        glVertex3f(-2.2, 2.2, 0);
        glEnd();

        ///light 6 cone
        glBegin(GL_POLYGON);
        glVertex3f(-2.2, 2.2, 0);
        glVertex3f(-2.27, 2.0, 0);
        glVertex3f(-2.13, 2.0, 0);
        glEnd();
        glPopMatrix();

        ///Car1

        glPushMatrix();
        glTranslatef(initialCarPosition, -2.75, 0.0);


        glPushMatrix();
        glScalef(0.69, 0.69, 0);

        glPushMatrix();
        glTranslatef(-0.5, 0.0, 0.0);


        glColor3ub(45,45,45);
        glBegin(GL_POLYGON);
        for (int i = 0; i < 200; i++)
        {
            float pi = 3.1416;
            float A = (i * 2 * pi) / 100;
            float r = 0.2;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x, y);
        }
        glEnd();

        glPopMatrix();


        glPushMatrix();
        glTranslatef(-0.5, 0.0, 0.0);

        glColor3ub(0, 0, 0);
        glBegin(GL_LINES);
        for (int i = 0; i < 200; i++)
        {
            float pi = 3.1416;
            float A = (i * 2 * pi) / 100;
            float r = 0.21;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x, y);
        }
        glEnd();

        glPopMatrix();


        glPushMatrix();
        glTranslatef(1.0, 0.0, 0.0);
        glColor3ub(45,45,45);
        glBegin(GL_POLYGON);
        for (int i = 0; i < 200; i++)
        {
            float pi = 3.1416;
            float A = (i * 2 * pi) / 100;
            float r = 0.2;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x, y);
        }
        glEnd();

        glPopMatrix();

        glPushMatrix();
        glTranslatef(1.0, 0.0, 0.0);
        glColor3ub(0, 0, 0);
        glBegin(GL_LINES);
        for (int i = 0; i < 200; i++)
        {
            float pi = 3.1416;
            float A = (i * 2 * pi) / 100;
            float r = 0.21;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x, y);
        }
        glEnd();

        glPopMatrix();


        glPushMatrix();


        glColor3ub(204, 102, 255);
        glBegin(GL_POLYGON);
        glVertex3f(1.5, 0.0, 0.0);
        glVertex3f(1.5, 0.5, 0.0);
        glVertex3f(1.0, 0.7, 0.0);
        glVertex3f(0.7, 0.5, 0.0);
        glVertex3f(-0.7, 0.5, 0.0);
        glVertex3f(-0.9, 0.4, 0.0);
        glVertex3f(-1.0, 0.3, 0.0);
        glVertex3f(-1.0, 0.1, 0.0);
        glVertex3f(-0.8, 0.0, 0.0);

        glEnd();


        glColor3ub(0,0,0);
        glBegin(GL_POLYGON);
        glVertex3f(1.0, 0.7, 0.0);
        glVertex3f(0.5, 0.9, 0.0);
        glVertex3f(-0.4, 0.8, 0.0);
        glVertex3f(-0.7, 0.5, 0.0);
        glVertex3f(0.7, 0.5, 0.0);

        glEnd();




        glPopMatrix();

        glPopMatrix();
        glPopMatrix();

        ///Car1   End


        ///Car2
        glPushMatrix();
        glTranslatef(initialCarPosi, -2.2, 0.0);


        glPushMatrix();
        glScalef(0.59, 0.59, 0);

        glPushMatrix();
        glTranslatef(-0.5, 0.0, 0.0);


        glColor3ub(0,0,0);
        glBegin(GL_POLYGON);
        for (int i = 0; i < 200; i++)
        {
            float pi = 3.1416;
            float A = (i * 2 * pi) / 100;
            float r = 0.2;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x, y);
        }
        glEnd();

        glPopMatrix();


        glPushMatrix();
        glTranslatef(-0.5, 0.0, 0.0);

        glColor3ub(0, 0, 0);
        glBegin(GL_LINES);
        for (int i = 0; i < 200; i++)
        {
            float pi = 3.1416;
            float A = (i * 2 * pi) / 100;
            float r = 0.21;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x, y);
        }
        glEnd();

        glPopMatrix();


        glPushMatrix();
        glTranslatef(1.0, 0.0, 0.0);
        glColor3ub(0,0,0);
        glBegin(GL_POLYGON);
        for (int i = 0; i < 200; i++)
        {
            float pi = 3.1416;
            float A = (i * 2 * pi) / 100;
            float r = 0.2;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x, y);
        }
        glEnd();

        glPopMatrix();

        glPushMatrix();
        glTranslatef(1.0, 0.0, 0.0);
        glColor3ub(0, 0, 0);
        glBegin(GL_LINES);
        for (int i = 0; i < 200; i++)
        {
            float pi = 3.1416;
            float A = (i * 2 * pi) / 100;
            float r = 0.21;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x, y);
        }
        glEnd();

        glPopMatrix();

        ///Car Light
        glPushMatrix();

        glColor3ub(255, 255, 255);
        glBegin(GL_POLYGON);
        glVertex3f(1.7, 0.2, 0.0);
        glVertex3f(1.63, 0.3, 0.0);
        glVertex3f(1.45, 0.4, 0.0);
        glVertex3f(1.6, 0.2, 0.0);

        glEnd();

        ///Blue Car Body
        glColor3ub(0, 64, 255);
        glBegin(GL_POLYGON);
        glVertex3f(1.5, 0.0, 0.0);
        glVertex3f(1.7, 0.1, 0.0);
        glVertex3f(1.7, 0.2, 0.0);
        glVertex3f(1.5, 0.5, 0.0);
        glVertex3f(1.0, 0.7, 0.0);
        glVertex3f(0.7, 0.5, 0.0);
        glVertex3f(-0.7, 0.5, 0.0);
        glVertex3f(-0.9, 0.4, 0.0);
        glVertex3f(-1.0, 0.3, 0.0);
        glVertex3f(-1.0, 0.1, 0.0);
        glVertex3f(-0.8, 0.0, 0.0);

        glEnd();

        ///Front Glass Frame
        glColor3ub(25, 255, 222);
        glBegin(GL_POLYGON);
        glVertex3f(0.2, 0.9, 0.0);
        glVertex3f(0.5, 0.5, 0.0);
        glVertex3f(0.6, 0.5, 0.0);
        glVertex3f(0.3, 0.9, 0.0);
        glVertex3f(0.3, 1.1, 0.0);
        glVertex3f(0.2, 1.1, 0.0);

        glEnd();
        ///Front Glass
        glColor3ub(200, 255, 255);
        glBegin(GL_POLYGON);
        glVertex3f(0.3, 1.1, 0.0);
        glVertex3f(0.3, 0.9, 0.0);
        glVertex3f(0.6, 0.5, 0.0);
        glVertex3f(0.7, 0.5, 0.0);
        glVertex3f(1.0, 0.7, 0.0);


        glEnd();
        ///Car Seat
        glColor3ub(0, 0, 0);
        glBegin(GL_POLYGON);
        glVertex3f(-0.7, 0.5, 0.0);
        glVertex3f(0.5, 0.5, 0.0);
        glVertex3f(0.45, 0.6, 0.0);
        glVertex3f(-0.1, 0.6, 0.0);
        glVertex3f(-0.2, 0.6, 0.0);
        glVertex3f(-0.3, 0.7, 0.0);
        glVertex3f(-0.5, 0.7, 0.0);

        glEnd();
        ///Car Seat
        glColor3ub(0, 0, 0);
        glBegin(GL_POLYGON);
        glVertex3f(0.1, 0.6, 0.0);
        glVertex3f(0.0, 0.7, 0.0);
        glVertex3f(-0.1, 0.7, 0.0);
        glVertex3f(-0.1, 0.6, 0.0);

        glEnd();



        glPopMatrix();
        glPopMatrix();
        glPopMatrix();

        ///Blue Car End


        ///Car Black - white begin



        glPushMatrix();
        glTranslatef(RCarPosi, -2.55, 0);
        ///Make Wheel of black car
        glPushMatrix();
        glTranslatef(-2.85, 0.48, 0.0); //Move to the center of the triangle
        glRotatef(_angle, 0.0, 0.0, -1.0);
        glColor3f(0, 0, 0);
        glutSolidSphere(.1, 40, 25);  //(GLdouble innerRadius,GLdouble outerRadius,GLint nsides, GLint rings);
        glPopMatrix();
        glPushMatrix(); //Save the current state of transformations
        glTranslatef(-2.2, 0.48, 0.0); //Move to the center of the triangle
        glRotatef(_angle, 0.0, 0.0, -1.0);
        glColor3f(0, 0, 0);
        glutSolidSphere(.1, 40, 5);  //(GLdouble innerRadius,GLdouble outerRadius,GLint nsides, GLint rings);
        glPopMatrix();
        ///Make body

        glPushMatrix();
        glTranslatef(0.0, 0.32, 0.0);
        glBegin(GL_POLYGON);
        glColor3ub(0, 51, 0);
        glVertex3f(-2.16, 0.48, 0.0);
        glVertex3f(-2.26, 0.40, 0.0);
        glVertex3f(-1.83, 0.32, 0.0);
        glVertex3f(-1.84, 0.40, 0.0);
        glEnd();
        glPopMatrix();
        ///right body

        glPushMatrix();
        glTranslatef(0.0, 0.32, 0.0);
        glColor3f(102, 153, 153);
        glBegin(GL_POLYGON);
        glVertex3f(-2.26, 0.15, 0.0);
        glVertex3f(-1.85, 0.15, 0.0);
        glVertex3f(-1.8, 0.20, 0.0);
        glVertex3f(-1.80, 0.32, 0.0);
        glVertex3f(-1.82, 0.32, 0.0);
        glVertex3f(-1.84, 0.40, 0.0);
        glVertex3f(-2.16, 0.48, 0.0);
        glVertex3f(-2.26, 0.415, 0.0);
        glEnd();
        glPopMatrix();

        /// leftbody
        glPushMatrix();
        glTranslatef(-0.7, 0.32, 0.0);
        glColor3f(102, 153, 153);
        glBegin(GL_POLYGON);
        glVertex3f(-2.16, 0.15, 0.0);
        glVertex3f(-2.56, 0.15, 0.0);
        glVertex3f(-2.56, 0.38, 0.0);
        glVertex3f(-2.50, 0.42, 0.0);
        glVertex3f(-2.16, 0.44, 0.0);
        glEnd();
        glPopMatrix();

        /// glass of 2nd car

        glPushMatrix();
        glTranslatef(0.0, 0.32, 0.0);
        glColor3f(0.4, 0.40, 0.40);
        glBegin(GL_POLYGON);
        glVertex3f(-2.26, 0.43, 0.0);
        glVertex3f(-2.165, 0.485, 0.0);
        glVertex3f(-2.265, 0.67, 0.0);
        glVertex3f(-2.32, 0.64, 0.0);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(0.0, 0.32, 0.0);
        glColor3f(0.4, 0.40, 0.40);
        glBegin(GL_POLYGON);
        glVertex3f(-2.27, 0.43, 0.0);
        glVertex3f(-2.33, 0.64, 0.0);
        glVertex3f(-2.50, 0.64, 0.0);
        glVertex3f(-2.50, 0.43, 0.0);
        glEnd();
        glPopMatrix();


        glPushMatrix();
        glTranslatef(0.0, 0.32, 0.0);
        glColor3f(0.4, 0.40, 0.40);
        glBegin(GL_POLYGON);
        glVertex3f(-2.51, 0.43, 0.0);
        glVertex3f(-2.51, 0.64, 0.0);
        glVertex3f(-2.70, 0.64, 0.0);
        glVertex3f(-2.70, 0.43, 0.0);
        glEnd();
        glPopMatrix();


        glPushMatrix();
        glTranslatef(0.0, 0.32, 0.0);
        glColor3f(0.4, 0.40, 0.40);
        glBegin(GL_POLYGON);
        glVertex3f(-2.71, 0.43, 0.0);
        glVertex3f(-2.71, 0.64, 0.0);
        glVertex3f(-2.83, 0.64, 0.0);
        glVertex3f(-2.91, 0.45, 0.0);
        glVertex3f(-2.91, 0.43, 0.0);
        glEnd();
        glPopMatrix();


        glPushMatrix();
        glTranslatef(0.0, 0.32, 0.0);
        glColor3f(102, 153, 153);
        glBegin(GL_POLYGON);
        glVertex3f(-2.26, 0.15, 0.0);
        glVertex3f(-2.26, 0.40, 0.0);
        glVertex3f(-2.16, 0.48, 0.0);
        glVertex3f(-2.26, 0.68, 0.0);
        glVertex3f(-2.84, 0.68, 0.0);
        glVertex3f(-2.94, 0.45, 0.0);
        glVertex3f(-2.94, 0.20, 0.0);
        glVertex3f(-2.96, 0.20, 0.0);
        glVertex3f(-2.96, 0.18, 0.0);
        glVertex3f(-2.88, 0.15, 0.0);
        glEnd();
        glPopMatrix();

        ///leftbody another portion
        glPushMatrix();
        glTranslatef(-1.0, 0.32, 0.0);
        glBegin(GL_POLYGON);
        glColor3ub(0, 51, 0);
        glVertex3f(-2.16, 0.48, 0.0);
        glVertex3f(-2.26, 0.40, 0.0);
        glVertex3f(-1.83, 0.40, 0.0);
        glVertex3f(-1.84, 0.48, 0.0);
        glEnd();
        glPopMatrix();
        glPopMatrix();
        ///Black-white car end



        ///LightPost 1 From Left
        glPushMatrix();
        glTranslatef(-1.80, -2.5, 0);
        glColor3ub(0, 0, 0);
        ///Lower_portion
        glBegin(GL_POLYGON);
        glVertex3f(-2, .5, 0);
        glVertex3f(-2.05, .5, 0);
        glVertex3f(-2.05, 2, 0);
        glVertex3f(-2, 2, 0);
        glEnd();
        ///Higher_portion
        glBegin(GL_POLYGON);
        glVertex3f(-2, 1.95, 0);
        glVertex3f(-2, 1.9, 0);
        glVertex3f(-1.8, 1.6, 0);
        glVertex3f(-1.8, 1.65, 0);
        glEnd();
        ///light 1 cone
        glBegin(GL_POLYGON);
        glVertex3f(-1.8, 1.65, 0);
        glVertex3f(-1.87, 1.50, 0);
        glVertex3f(-1.73, 1.50, 0);
        glEnd();
        glPopMatrix();

        ///LightPost 2 From Left
        glPushMatrix();
        glTranslatef(1.5, -2.5, 0);
        glColor3ub(0, 0, 0);
        ///Lower_portion
        glBegin(GL_POLYGON);
        glVertex3f(-2, .5, 0);
        glVertex3f(-2.05, .5, 0);
        glVertex3f(-2.05, 2, 0);
        glVertex3f(-2, 2, 0);
        glEnd();
        ///Higher_portion
        glBegin(GL_POLYGON);
        glVertex3f(-2, 1.95, 0);
        glVertex3f(-2, 1.9, 0);
        glVertex3f(-1.8, 1.6, 0);
        glVertex3f(-1.8, 1.65, 0);
        glEnd();
        ///light 2 cone
        glBegin(GL_POLYGON);
        glVertex3f(-1.8, 1.65, 0);
        glVertex3f(-1.87, 1.50, 0);
        glVertex3f(-1.73, 1.50, 0);
        glEnd();
        glPopMatrix();

        ///LightPost 3 From Left
        glPushMatrix();
        glTranslatef(5.5, -2.5, 0);
        glColor3ub(0, 0, 0);
        ///Lower_portion
        glBegin(GL_POLYGON);
        glVertex3f(-2, .5, 0);
        glVertex3f(-2.05, .5, 0);
        glVertex3f(-2.05, 2, 0);
        glVertex3f(-2, 2, 0);
        glEnd();
        ///Higher_portion
        glBegin(GL_POLYGON);
        glVertex3f(-2, 1.95, 0);
        glVertex3f(-2, 1.9, 0);
        glVertex3f(-1.8, 1.6, 0);
        glVertex3f(-1.8, 1.65, 0);
        glEnd();

        ///light 1 cone
        glBegin(GL_POLYGON);
        glVertex3f(-1.8, 1.65, 0);
        glVertex3f(-1.87, 1.50, 0);
        glVertex3f(-1.73, 1.50, 0);
        glEnd();
        glPopMatrix();


        ///Field Border Front


        ///Border yellow design
        glPushMatrix();
         glColor3ub(0, 255, 0);
        glTranslatef(0.0, -2.0, 0.0);

        glPushMatrix();

        glColor3ub(255, 255, 0);
        glBegin(GL_POLYGON);
        glVertex3f(0.03, 0.0, 0.0);
        glVertex3f(0.0, 0.1, 0.0);
        glVertex3f(-0.05, 0.1, 0.0);
        glVertex3f(-0.02, 0.0, 0.0);
        glEnd();
        glPopMatrix();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(0.4, -2.0, 0.0);
        glPushMatrix();

        glColor3ub(255, 255, 0);
        glBegin(GL_POLYGON);
        glVertex3f(0.03, 0.0, 0.0);
        glVertex3f(0.0, 0.1, 0.0);
        glVertex3f(-0.05, 0.1, 0.0);
        glVertex3f(-0.02, 0.0, 0.0);
        glEnd();
        glPopMatrix();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(0.8, -2.0, 0.0);
        glPushMatrix();

        glColor3ub(255, 255, 0);
        glBegin(GL_POLYGON);
        glVertex3f(0.03, 0.0, 0.0);
        glVertex3f(0.0, 0.1, 0.0);
        glVertex3f(-0.05, 0.1, 0.0);
        glVertex3f(-0.02, 0.0, 0.0);
        glEnd();
        glPopMatrix();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(1.2, -2.0, 0.0);
        glPushMatrix();

        glColor3ub(255, 255, 0);
        glBegin(GL_POLYGON);
        glVertex3f(0.03, 0.0, 0.0);
        glVertex3f(0.0, 0.1, 0.0);
        glVertex3f(-0.05, 0.1, 0.0);
        glVertex3f(-0.02, 0.0, 0.0);
        glEnd();
        glPopMatrix();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(1.6, -2.0, 0.0);
        glPushMatrix();

        glColor3ub(255, 255, 0);
        glBegin(GL_POLYGON);
        glVertex3f(0.03, 0.0, 0.0);
        glVertex3f(0.0, 0.1, 0.0);
        glVertex3f(-0.05, 0.1, 0.0);
        glVertex3f(-0.02, 0.0, 0.0);
        glEnd();
        glPopMatrix();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(2.0, -2.0, 0.0);
        glPushMatrix();

        glColor3ub(255, 255, 0);
        glBegin(GL_POLYGON);
        glVertex3f(0.03, 0.0, 0.0);
        glVertex3f(0.0, 0.1, 0.0);
        glVertex3f(-0.05, 0.1, 0.0);
        glVertex3f(-0.02, 0.0, 0.0);
        glEnd();
        glPopMatrix();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(2.4, -2.0, 0.0);
        glPushMatrix();

        glColor3ub(255, 255, 0);
        glBegin(GL_POLYGON);
        glVertex3f(0.03, 0.0, 0.0);
        glVertex3f(0.0, 0.1, 0.0);
        glVertex3f(-0.05, 0.1, 0.0);
        glVertex3f(-0.02, 0.0, 0.0);
        glEnd();
        glPopMatrix();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(2.8, -2.0, 0.0);
        glPushMatrix();

        glColor3ub(255, 255, 0);
        glBegin(GL_POLYGON);
        glVertex3f(0.03, 0.0, 0.0);
        glVertex3f(0.0, 0.1, 0.0);
        glVertex3f(-0.05, 0.1, 0.0);
        glVertex3f(-0.02, 0.0, 0.0);
        glEnd();
        glPopMatrix();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(3.2, -2.0, 0.0);
        glPushMatrix();

        glColor3ub(255, 255, 0);
        glBegin(GL_POLYGON);
        glVertex3f(0.03, 0.0, 0.0);
        glVertex3f(0.0, 0.1, 0.0);
        glVertex3f(-0.05, 0.1, 0.0);
        glVertex3f(-0.02, 0.0, 0.0);
        glEnd();
        glPopMatrix();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(3.6, -2.0, 0.0);
        glPushMatrix();

        glColor3ub(255, 255, 0);
        glBegin(GL_POLYGON);
        glVertex3f(0.03, 0.0, 0.0);
        glVertex3f(0.0, 0.1, 0.0);
        glVertex3f(-0.05, 0.1, 0.0);
        glVertex3f(-0.02, 0.0, 0.0);
        glEnd();
        glPopMatrix();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(4.0, -2.0, 0.0);
        glPushMatrix();

        glColor3ub(255, 255, 0);
        glBegin(GL_POLYGON);
        glVertex3f(0.03, 0.0, 0.0);
        glVertex3f(0.0, 0.1, 0.0);
        glVertex3f(-0.05, 0.1, 0.0);
        glVertex3f(-0.02, 0.0, 0.0);
        glEnd();
        glPopMatrix();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(4.4, -2.0, 0.0);
        glPushMatrix();

        glColor3ub(255, 255, 0);
        glBegin(GL_POLYGON);
        glVertex3f(0.03, 0.0, 0.0);
        glVertex3f(0.0, 0.1, 0.0);
        glVertex3f(-0.05, 0.1, 0.0);
        glVertex3f(-0.02, 0.0, 0.0);
        glEnd();
        glPopMatrix();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(4.8, -2.0, 0.0);
        glPushMatrix();

        glColor3ub(255, 255, 0);
        glBegin(GL_POLYGON);
        glVertex3f(0.03, 0.0, 0.0);
        glVertex3f(0.0, 0.1, 0.0);
        glVertex3f(-0.05, 0.1, 0.0);
        glVertex3f(-0.02, 0.0, 0.0);
        glEnd();
        glPopMatrix();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(5.2, -2.0, 0.0);
        glPushMatrix();

        glColor3ub(255, 255, 0);
        glBegin(GL_POLYGON);
        glVertex3f(0.03, 0.0, 0.0);
        glVertex3f(0.0, 0.1, 0.0);
        glVertex3f(-0.05, 0.1, 0.0);
        glVertex3f(-0.02, 0.0, 0.0);
        glEnd();
        glPopMatrix();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(5.6, -2.0, 0.0);
        glPushMatrix();

        glColor3ub(255, 255, 0);
        glBegin(GL_POLYGON);
        glVertex3f(0.03, 0.0, 0.0);
        glVertex3f(0.0, 0.1, 0.0);
        glVertex3f(-0.05, 0.1, 0.0);
        glVertex3f(-0.02, 0.0, 0.0);
        glEnd();
        glPopMatrix();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-0.4, -2.0, 0.0);
        glPushMatrix();

        glColor3ub(255, 255, 0);
        glBegin(GL_POLYGON);
        glVertex3f(0.03, 0.0, 0.0);
        glVertex3f(0.0, 0.1, 0.0);
        glVertex3f(-0.05, 0.1, 0.0);
        glVertex3f(-0.02, 0.0, 0.0);
        glEnd();
        glPopMatrix();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-0.8, -2.0, 0.0);
        glPushMatrix();

        glColor3ub(255, 255, 0);
        glBegin(GL_POLYGON);
        glVertex3f(0.03, 0.0, 0.0);
        glVertex3f(0.0, 0.1, 0.0);
        glVertex3f(-0.05, 0.1, 0.0);
        glVertex3f(-0.02, 0.0, 0.0);
        glEnd();
        glPopMatrix();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-1.2, -2.0, 0.0);
        glPushMatrix();

        glColor3ub(255, 255, 0);
        glBegin(GL_POLYGON);
        glVertex3f(0.03, 0.0, 0.0);
        glVertex3f(0.0, 0.1, 0.0);
        glVertex3f(-0.05, 0.1, 0.0);
        glVertex3f(-0.02, 0.0, 0.0);
        glEnd();
        glPopMatrix();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-1.6, -2.0, 0.0);
        glPushMatrix();

        glColor3ub(255, 255, 0);
        glBegin(GL_POLYGON);
        glVertex3f(0.03, 0.0, 0.0);
        glVertex3f(0.0, 0.1, 0.0);
        glVertex3f(-0.05, 0.1, 0.0);
        glVertex3f(-0.02, 0.0, 0.0);
        glEnd();
        glPopMatrix();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-2.0, -2.0, 0.0);
        glPushMatrix();

        glColor3ub(255, 255, 0);
        glBegin(GL_POLYGON);
        glVertex3f(0.03, 0.0, 0.0);
        glVertex3f(0.0, 0.1, 0.0);
        glVertex3f(-0.05, 0.1, 0.0);
        glVertex3f(-0.02, 0.0, 0.0);
        glEnd();
        glPopMatrix();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-2.4, -2.0, 0.0);
        glPushMatrix();

        glColor3ub(255, 255, 0);
        glBegin(GL_POLYGON);
        glVertex3f(0.03, 0.0, 0.0);
        glVertex3f(0.0, 0.1, 0.0);
        glVertex3f(-0.05, 0.1, 0.0);
        glVertex3f(-0.02, 0.0, 0.0);
        glEnd();
        glPopMatrix();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-2.8, -2.0, 0.0);
        glPushMatrix();

        glColor3ub(255, 255, 0);
        glBegin(GL_POLYGON);
        glVertex3f(0.03, 0.0, 0.0);
        glVertex3f(0.0, 0.1, 0.0);
        glVertex3f(-0.05, 0.1, 0.0);
        glVertex3f(-0.02, 0.0, 0.0);
        glEnd();
        glPopMatrix();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-3.2, -2.0, 0.0);
        glPushMatrix();

        glColor3ub(255, 255, 0);
        glBegin(GL_POLYGON);
        glVertex3f(0.03, 0.0, 0.0);
        glVertex3f(0.0, 0.1, 0.0);
        glVertex3f(-0.05, 0.1, 0.0);
        glVertex3f(-0.02, 0.0, 0.0);
        glEnd();
        glPopMatrix();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-3.6, -2.0, 0.0);
        glPushMatrix();

        glColor3ub(255, 255, 0);
        glBegin(GL_POLYGON);
        glVertex3f(0.03, 0.0, 0.0);
        glVertex3f(0.0, 0.1, 0.0);
        glVertex3f(-0.05, 0.1, 0.0);
        glVertex3f(-0.02, 0.0, 0.0);
        glEnd();
        glPopMatrix();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-4.0, -2.0, 0.0);
        glPushMatrix();

        glColor3ub(255, 255, 0);
        glBegin(GL_POLYGON);
        glVertex3f(0.03, 0.0, 0.0);
        glVertex3f(0.0, 0.1, 0.0);
        glVertex3f(-0.05, 0.1, 0.0);
        glVertex3f(-0.02, 0.0, 0.0);
        glEnd();
        glPopMatrix();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-4.4, -2.0, 0.0);
        glPushMatrix();

        glColor3ub(255, 255, 0);
        glBegin(GL_POLYGON);
        glVertex3f(0.03, 0.0, 0.0);
        glVertex3f(0.0, 0.1, 0.0);
        glVertex3f(-0.05, 0.1, 0.0);
        glVertex3f(-0.02, 0.0, 0.0);
        glEnd();
        glPopMatrix();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-4.8, -2.0, 0.0);
        glPushMatrix();

        glColor3ub(255, 255, 0);
        glBegin(GL_POLYGON);
        glVertex3f(0.03, 0.0, 0.0);
        glVertex3f(0.0, 0.1, 0.0);
        glVertex3f(-0.05, 0.1, 0.0);
        glVertex3f(-0.02, 0.0, 0.0);
        glEnd();
        glPopMatrix();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-5.2, -2.0, 0.0);
        glPushMatrix();

        glColor3ub(255, 255, 0);
        glBegin(GL_POLYGON);
        glVertex3f(0.03, 0.0, 0.0);
        glVertex3f(0.0, 0.1, 0.0);
        glVertex3f(-0.05, 0.1, 0.0);
        glVertex3f(-0.02, 0.0, 0.0);
        glEnd();
        glPopMatrix();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-5.6, -2.0, 0.0);
        glPushMatrix();

        glColor3ub(255, 255, 0);
        glBegin(GL_POLYGON);
        glVertex3f(0.03, 0.0, 0.0);
        glVertex3f(0.0, 0.1, 0.0);
        glVertex3f(-0.05, 0.1, 0.0);
        glVertex3f(-0.02, 0.0, 0.0);
        glEnd();
        glPopMatrix();
        glPopMatrix();

        ///Border yellow design END

        glPushMatrix();
        glTranslatef(0.0, -2.0, 0.0);
        glPushMatrix();

        ///Border Line Lower
        glColor3ub(0, 0, 0);
        glBegin(GL_POLYGON);
        glVertex3f(5.2, 0.0, 0.0);
        glVertex3f(5.2, 0.1, 0.0);
        glVertex3f(-5.2, 0.1, 0.0);
        glVertex3f(-5.2, 0.0, 0.0);

        glEnd();

        ///Border Line Upper
        glColor3ub(139, 69, 19);
        glBegin(GL_POLYGON);
        glVertex3f(5.2, 0.1, 0.0);
        glVertex3f(5.2, 0.15, 0.0);
        glVertex3f(-5.2, 0.15, 0.0);
        glVertex3f(-5.2, 0.1, 0.0);

        glEnd();



        glPopMatrix();
        glPopMatrix();

        ///Field Border Front End

        ///Field Border1 Right

        glPushMatrix();
        glTranslatef(0.1, 0.0, 0.0);
        glPushMatrix();

        ///Border Line Field side
        glColor3ub(0, 0, 0);
        glBegin(GL_POLYGON);
        glVertex3f(3.6, -2, 0);
        glVertex3f(2.5, -.4, 0);
        glVertex3f(2.38, -0.4, 0.0);
        glVertex3f(3.48, -2.0, 0.0);

        glEnd();

        ///Border Line Pool side
        glColor3ub(139, 69, 19);
        glBegin(GL_POLYGON);
        glVertex3f(3.68, -2, 0.0);
        glVertex3f(2.58, -0.4, 0.0);
        glVertex3f(2.5, -0.4, 0.0);
        glVertex3f(3.6, -2.0, 0.0);

        glEnd();




        glPopMatrix();
        glPopMatrix();

        ///Field Border1 Right End


        ///Left Road

        glBegin(GL_POLYGON);  ///left black border entry road
        glColor3ub(0, 51, 0);
        glVertex2f(-4.35, -.4);
        glVertex2f(-4.75, -1.86);
        glVertex2f(-4.807, -1.86);
        glVertex2f(-4.407, -.4);
        glEnd();

        glBegin(GL_POLYGON); ///right black border entry road
        glColor3ub(0, 51, 0);
        glVertex2f(-4.007, -.4);
        glVertex2f(-4.407, -1.86);
        glVertex2f(-4.457, -1.86);
        glVertex2f(-4.057, -.4);
        glEnd();

        glBegin(GL_POLYGON);  ///body of entry road
        glColor3ub(153, 102, 51);
        glVertex2f(-4.007, -.4);
        glVertex2f(-4.407, -1.86);
        glVertex2f(-4.807, -1.86);
        glVertex2f(-4.407, -.4);
        glEnd();





        ///Goal Post Border Line

        glPushMatrix();

        glColor3ub(255, 255, 255);

        glBegin(GL_LINE_LOOP);

        glVertex2f(-3.58, -.58);
        glVertex2f(-4.199, -1.79);
        glVertex2f(2.76, -1.79);
        glVertex2f(2.17, -.58);
        glEnd();

        ///Middle Line
        glBegin(GL_LINES);

        glVertex2f(-0.7, -.58);
        glVertex2f(-0.7, -1.79);
        glEnd();

        glPopMatrix();

        ///Field middle circle
        glPushMatrix();
        glTranslatef(-0.7, -1.1, 0.0);
        glRotatef(40, -1.0, 0.0, 0.0);
        glPushMatrix();
        glColor3ub(255, 255, 255);
        //glPointSize(2);
        glBegin(GL_LINES);

        for (int i = 0; i < 200; i++)
        {
            float pi = 3.1416;
            float A = (i * 2 * pi) / 100;
            float r = 0.28;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x, y);
        }
        glEnd();

        glBegin(GL_POLYGON);

        for (int i = 0; i < 200; i++)
        {
            float pi = 3.1416;
            float A = (i * 2 * pi) / 100;
            float r = 0.05;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x, y);
        }
        glEnd();

        glPopMatrix();
        glPopMatrix();

        ///Goal Post Line Border END



        ///Goal Post

        //Goal Post 1111


        glPushMatrix();
        glScalef(0.9, 0.9, 0);
        glTranslatef(2.75, -1.4, 0.0);
        glPushMatrix();
        glColor3ub(255, 255, 255);
        glBegin(GL_POLYGON);
        glVertex3f(0.05, 0.01, 0);
        glVertex3f(0.05, 0.5, 0);
        glVertex3f(0.0, 0.5, 0);
        glVertex3f(0.0, 0.01, 0);
        glEnd();

        glColor3ub(255, 255, 255);
        glBegin(GL_POLYGON);
        glVertex3f(0.05, 0.5, 0);
        glVertex3f(-0.15, 0.85, 0);
        glVertex3f(-0.2, 0.85, 0);
        glVertex3f(0.0, 0.5, 0);
        glEnd();

        glColor3ub(255, 255, 255);
        glBegin(GL_POLYGON);
        glVertex3f(-0.15, 0.4, 0);
        glVertex3f(-0.15, 0.85, 0);
        glVertex3f(-0.2, 0.85, 0);
        glVertex3f(-0.2, 0.4, 0);
        glEnd();

        glPopMatrix();
        glPopMatrix();


        //Goal Post 2222

        glPushMatrix();

        glScalef(0.9, 0.9, 0);
        glTranslatef(-3.93, -1.4, 0.0);
        glPushMatrix();
        glColor3ub(255, 255, 255);
        glBegin(GL_POLYGON);
        glVertex3f(-0.45, 0.01, 0);
        glVertex3f(-0.45, 0.5, 0);
        glVertex3f(-0.4, 0.5, 0);
        glVertex3f(-0.4, 0.01, 0);
        glEnd();

        glColor3ub(255, 255, 255);
        glBegin(GL_POLYGON);
        glVertex3f(-0.2, 0.85, 0);
        glVertex3f(-0.25, 0.85, 0);
        glVertex3f(-0.45, 0.5, 0);
        glVertex3f(-0.4, 0.5, 0);
        glEnd();

        glColor3ub(255, 255, 255);
        glBegin(GL_POLYGON);
        glVertex3f(-0.2, 0.4, 0);
        glVertex3f(-0.2, 0.85, 0);
        glVertex3f(-0.25, 0.85, 0);
        glVertex3f(-0.25, 0.4, 0);
        glEnd();

        glPopMatrix();
        glPopMatrix();

        ///Goal Post End



        ///TREE-1

        glPushMatrix();  /// TREE-0(from left) lower portion  ///////////
        glTranslatef(-2.6, -.7, 0);
        glColor3ub(139, 69, 19);
        glBegin(GL_POLYGON);
        glVertex3f(-1.98, 0.7, 0);
        glVertex3f(-1.98, 0.15, 0);
        glVertex3f(-1.85, 0.15, 0);
        glVertex3f(-1.85, 0.7, 0);
        glEnd();
        circle(-2,.8,0.2,0, 193, 0);
        circle(-1.8,.8,0.2,0, 193, 0);
        circle(-1.9,1,0.2,0, 193, 0);
        glPopMatrix();



        /// TREE-2
        glPushMatrix();
        glTranslatef(1, 0, 0);


        glPushMatrix();  /// TREE-2(from left) lower portion  ///////////
        glTranslatef(-2, -.7, 0);
        glColor3ub(139, 69, 19);
        glBegin(GL_POLYGON);
        glVertex3f(-1.98, 0.7, 0);
        glVertex3f(-1.98, 0.15, 0);
        glVertex3f(-1.85, 0.15, 0);
        glVertex3f(-1.85, 0.7, 0);
        glEnd();
        circle(-2,.8,0.2,0, 193, 0);
        circle(-1.8,.8,0.2,0, 193, 0);
        circle(-1.9,1,0.2,0, 193, 0);
        glPopMatrix();
        glPopMatrix();


        /// TREE-3
        glPushMatrix();
        glTranslatef(2.5, 0, 0);

   glPushMatrix();  /// TREE-3(from left) lower portion  ///////////
        glTranslatef(-2, -.7, 0);
        glColor3ub(139, 69, 19);

        glBegin(GL_POLYGON);
        glVertex3f(-1.98, 0.7, 0);

        glVertex3f(-1.98, 0.15, 0);
        glVertex3f(-1.85, 0.15, 0);
        glVertex3f(-1.85, 0.7, 0);
        glEnd();
        circle(-2,.8,0.2,0, 193, 0);
        circle(-1.8,.8,0.2,0, 193, 0);
        circle(-1.9,1,0.2,0, 193, 0);
        glPopMatrix();
        glPopMatrix();

        /// TREE-4
        glPushMatrix();
        glTranslatef(6, 0, 0);


        glPushMatrix();  /// TREE-4(from left) lower portion  ///////////
        glTranslatef(-2, -.7, 0);
        glColor3ub(139, 69, 19);
       glBegin(GL_POLYGON);
        glVertex3f(-1.98, 0.7, 0);
        glVertex3f(-1.98, 0.15, 0);
        glVertex3f(-1.85, 0.15, 0);
        glVertex3f(-1.85, 0.7, 0);
        glEnd();
        circle(-2,.8,0.2,0, 193, 0);
        circle(-1.8,.8,0.2,0, 193, 0);
        circle(-1.9,1,0.2,0, 193, 0);
        glPopMatrix();
        glPopMatrix();



        ///ROAD SIGN

        glBegin(GL_POLYGON);  ///ROAD SIGN
        glColor3ub(255, 255, 255);
        glVertex2f(-3.5, -2.4);
        glVertex2f(-3.6, -2.45);
        glVertex2f(-4.2, -2.45);
        glVertex2f(-4.1, -2.4);
        glEnd();
        glBegin(GL_POLYGON);  ///ROAD SIGN
        glColor3ub(255, 255, 255);
        glVertex2f(-1.5, -2.4);
        glVertex2f(-1.6, -2.45);
        glVertex2f(-2.2, -2.45);
        glVertex2f(-2.1, -2.4);
        glEnd();
        glBegin(GL_POLYGON);  ///ROAD SIGN
        glColor3ub(255, 255, 255);
        glVertex2f(-0.5, -2.4);
        glVertex2f(-0.6, -2.45);
        glVertex2f(0.1, -2.45);
        glVertex2f(0.2, -2.4);
        glEnd();
        glBegin(GL_POLYGON);  ///ROAD SIGN
        glColor3ub(255, 255, 255);
        glVertex2f(1.5, -2.4);
        glVertex2f(1.4, -2.45);
        glVertex2f(2.1, -2.45);
        glVertex2f(2.2, -2.4);
        glEnd();
        glBegin(GL_POLYGON);  ///ROAD SIGN
        glColor3ub(255, 255, 255);
        glVertex2f(3.5, -2.4);
        glVertex2f(3.4, -2.45);
        glVertex2f(4.1, -2.45);
        glVertex2f(4.2, -2.4);
        glEnd();

        ///ROAD SIGN ENDS HERE



        glBegin(GL_POLYGON);   ///ROAD
        glColor3ub(105, 105, 105);
        glVertex2f(-5, -2);
        glVertex2f(-5, -3);
        glVertex2f(5, -3);
        glVertex2f(5, -2);
        glEnd();



        ///   AIUB LOGO //////////

        if (color == "blue")
        {

            glPushMatrix();

            glScalef(.5, .3, 0);
            glTranslatef(-2.25, 3.5, 0);

            ///AAAAAAA
            if (a == 1)
            {
                //top
                glColor3ub(0, 0, 255);
                glBegin(GL_POLYGON);
                glVertex3f(-1.4, 1, 0);
                glVertex3f(-2, 1, 0);
                glVertex3f(-2, 0.9, 0);
                glVertex3f(-1.4, 0.9, 0);
                glEnd();

                //left
                glColor3ub(0, 0, 255);
                glBegin(GL_POLYGON);
                glVertex3f(-2, 0.9, 0);
                glVertex3f(-2, 0.15, 0);
                glVertex3f(-1.9, 0.15, 0);
                glVertex3f(-1.9, 0.9, 0);
                glEnd();

                //right
                glColor3ub(0, 0, 255);
                glBegin(GL_POLYGON);
                glVertex3f(-1.4, 0.9, 0);
                glVertex3f(-1.5, 0.9, 0);
                glVertex3f(-1.5, 0.15, 0);
                glVertex3f(-1.4, 0.15, 0);
                glEnd();

                //middle
                glColor3ub(0, 0, 255);
                glBegin(GL_POLYGON);
                glVertex3f(-1.9, 0.6, 0);
                glVertex3f(-1.9, 0.5, 0);
                glVertex3f(-1.5, 0.5, 0);
                glVertex3f(-1.5, 0.6, 0);
                glEnd();
            }
            if (i == 1)
            {
                ///IIIIII

                //top
                glColor3ub(0, 0, 255);
                glBegin(GL_POLYGON);
                glVertex3f(-1.0, 1, 0);
                glVertex3f(-1.3, 1, 0);
                glVertex3f(-1.3, 0.9, 0);
                glVertex3f(-1.0, 0.9, 0);
                glEnd();

                //middle
                glColor3ub(0, 0, 255);
                glBegin(GL_POLYGON);
                glVertex3f(-1.2, 0.9, 0);
                glVertex3f(-1.1, 0.9, 0);
                glVertex3f(-1.1, 0.25, 0);
                glVertex3f(-1.2, 0.25, 0);
                glEnd();

                //bottom
                glColor3ub(0, 0, 255);
                glBegin(GL_POLYGON);
                glVertex3f(-1.0, 0.25, 0);
                glVertex3f(-1.3, 0.25, 0);
                glVertex3f(-1.3, 0.15, 0);
                glVertex3f(-1.0, 0.15, 0);
                glEnd();
            }
            if (u == 1)
            {
                ///UUU

                //Left
                glColor3ub(0, 0, 255);
                glBegin(GL_POLYGON);
                glVertex3f(-0.9, 1.0, 0);
                glVertex3f(-0.9, 0.15, 0);
                glVertex3f(-0.8, 0.15, 0);
                glVertex3f(-0.8, 1.0, 0);
                glEnd();

                //Right
                glColor3ub(0, 0, 255);
                glBegin(GL_POLYGON);
                glVertex3f(-0.4, 1.0, 0);
                glVertex3f(-0.4, 0.15, 0);
                glVertex3f(-0.3, 0.15, 0);
                glVertex3f(-0.3, 1.0, 0);
                glEnd();


                //bottom
                glColor3ub(0, 0, 255);
                glBegin(GL_POLYGON);
                glVertex3f(-0.4, 0.25, 0);
                glVertex3f(-0.8, 0.25, 0);
                glVertex3f(-0.8, 0.15, 0);
                glVertex3f(-0.4, 0.15, 0);
                glEnd();
            }

            if (b == 1)
            {
                ///BBBBB

                //top
                glColor3ub(0, 0, 255);
                glBegin(GL_POLYGON);
                glVertex3f(-0.2, 1, 0);
                glVertex3f(0.4, 1, 0);
                glVertex3f(0.4, 0.9, 0);
                glVertex3f(-0.2, 0.9, 0);
                glEnd();

                //left
                glColor3ub(0, 0, 255);
                glBegin(GL_POLYGON);
                glVertex3f(-0.17, 1.0, 0);
                glVertex3f(-0.17, 0.15, 0);
                glVertex3f(-0.07, 0.15, 0);
                glVertex3f(-0.07, 1.0, 0);
                glEnd();

                //right
                glColor3ub(0, 0, 255);
                glBegin(GL_POLYGON);
                glVertex3f(0.4, 1.0, 0);
                glVertex3f(0.4, 0.15, 0);
                glVertex3f(0.3, 0.15, 0);
                glVertex3f(0.3, 1.0, 0);
                glEnd();

                //middle
                glColor3ub(0, 0, 255);
                glBegin(GL_POLYGON);
                glVertex3f(0, 0.6, 0);
                glVertex3f(0.4, 0.6, 0);
                glVertex3f(0.4, 0.5, 0);
                glVertex3f(0, 0.5, 0);
                glEnd();

                //Bottom
                glColor3ub(0, 0, 255);
                glBegin(GL_POLYGON);
                glVertex3f(-0.2, 0.25, 0);
                glVertex3f(0.4, 0.25, 0);
                glVertex3f(0.4, 0.15, 0);
                glVertex3f(-0.2, 0.15, 0);
                glEnd();

            }
            if (m == 1)
            {
                a = 0;
                i = 0;
                u = 0;
                b = 0;
                m = 0;
                count_logo = 0;
            }
            glPopMatrix();
        }

        else if (color == "red")
        {

            glPushMatrix();

            glScalef(.5, .3, 0);
            glTranslatef(-2.25, 3.5, 0);

            ///AAAAAAA
            if (a == 1)
            {
                //top
                glColor3ub(255, 0, 0);
                glBegin(GL_POLYGON);
                glVertex3f(-1.4, 1, 0);
                glVertex3f(-2, 1, 0);
                glVertex3f(-2, 0.9, 0);
                glVertex3f(-1.4, 0.9, 0);
                glEnd();

                //left
                //glColor3ub(255,0,0);
                glBegin(GL_POLYGON);
                glVertex3f(-2, 0.9, 0);
                glVertex3f(-2, 0.15, 0);
                glVertex3f(-1.9, 0.15, 0);
                glVertex3f(-1.9, 0.9, 0);
                glEnd();

                //right
                //glColor3ub(0,0,255);
                glBegin(GL_POLYGON);
                glVertex3f(-1.4, 0.9, 0);
                glVertex3f(-1.5, 0.9, 0);
                glVertex3f(-1.5, 0.15, 0);
                glVertex3f(-1.4, 0.15, 0);
                glEnd();

                //middle
                //glColor3ub(0,0,255);
                glBegin(GL_POLYGON);
                glVertex3f(-1.9, 0.6, 0);
                glVertex3f(-1.9, 0.5, 0);
                glVertex3f(-1.5, 0.5, 0);
                glVertex3f(-1.5, 0.6, 0);
                glEnd();
            }
            if (i == 1)
            {
                ///IIIIII

                //top
                //glColor3ub(0,0,255);
                glBegin(GL_POLYGON);
                glVertex3f(-1.0, 1, 0);
                glVertex3f(-1.3, 1, 0);
                glVertex3f(-1.3, 0.9, 0);
                glVertex3f(-1.0, 0.9, 0);
                glEnd();

                //middle
                //glColor3ub(0,0,255);
                glBegin(GL_POLYGON);
                glVertex3f(-1.2, 0.9, 0);
                glVertex3f(-1.1, 0.9, 0);
                glVertex3f(-1.1, 0.25, 0);
                glVertex3f(-1.2, 0.25, 0);
                glEnd();

                //bottom
                //glColor3ub(0,0,255);
                glBegin(GL_POLYGON);
                glVertex3f(-1.0, 0.25, 0);
                glVertex3f(-1.3, 0.25, 0);
                glVertex3f(-1.3, 0.15, 0);
                glVertex3f(-1.0, 0.15, 0);
                glEnd();
            }
            if (u == 1)
            {
                ///UUU

                //Left
                //glColor3ub(0,0,255);
                glBegin(GL_POLYGON);
                glVertex3f(-0.9, 1.0, 0);
                glVertex3f(-0.9, 0.15, 0);
                glVertex3f(-0.8, 0.15, 0);
                glVertex3f(-0.8, 1.0, 0);
                glEnd();

                //Right
                //glColor3ub(0,0,255);
                glBegin(GL_POLYGON);
                glVertex3f(-0.4, 1.0, 0);
                glVertex3f(-0.4, 0.15, 0);
                glVertex3f(-0.3, 0.15, 0);
                glVertex3f(-0.3, 1.0, 0);
                glEnd();


                //bottom
                //glColor3ub(0,0,255);
                glBegin(GL_POLYGON);
                glVertex3f(-0.4, 0.25, 0);
                glVertex3f(-0.8, 0.25, 0);
                glVertex3f(-0.8, 0.15, 0);
                glVertex3f(-0.4, 0.15, 0);
                glEnd();
            }

            if (b == 1)
            {
                ///BBBBB

                //top
                //glColor3ub(0,0,255);
                glBegin(GL_POLYGON);
                glVertex3f(-0.2, 1, 0);
                glVertex3f(0.4, 1, 0);
                glVertex3f(0.4, 0.9, 0);
                glVertex3f(-0.2, 0.9, 0);
                glEnd();

                //left
                //glColor3ub(0,0,255);
                glBegin(GL_POLYGON);
                glVertex3f(-0.17, 1.0, 0);
                glVertex3f(-0.17, 0.15, 0);
                glVertex3f(-0.07, 0.15, 0);
                glVertex3f(-0.07, 1.0, 0);
                glEnd();

                //right
                //glColor3ub(0,0,255);
                glBegin(GL_POLYGON);
                glVertex3f(0.4, 1.0, 0);
                glVertex3f(0.4, 0.15, 0);
                glVertex3f(0.3, 0.15, 0);
                glVertex3f(0.3, 1.0, 0);
                glEnd();

                //middle
                //glColor3ub(0,0,255);
                glBegin(GL_POLYGON);
                glVertex3f(0, 0.6, 0);
                glVertex3f(0.4, 0.6, 0);
                glVertex3f(0.4, 0.5, 0);
                glVertex3f(0, 0.5, 0);
                glEnd();

                //Bottom
                //glColor3ub(0,0,255);
                glBegin(GL_POLYGON);
                glVertex3f(-0.2, 0.25, 0);
                glVertex3f(0.4, 0.25, 0);
                glVertex3f(0.4, 0.15, 0);
                glVertex3f(-0.2, 0.15, 0);
                glEnd();

            }
            if (m == 1)
            {
                a = 0;
                i = 0;
                u = 0;
                b = 0;
                m = 0;
                count_logo = 0;
            }
            glPopMatrix();
        }
        /// AIUB LOGO END

        ///window design starts from here

        glPushMatrix();
        glTranslatef(-4.57, -.07, 0);
        glBegin(GL_POLYGON);    /// inside Window of Annex-1 From Left-1
        glColor3ub(0, 0, 0);
        glVertex2f(.2, .2);
        glVertex2f(.2, 0);
        glVertex2f(0, 0);
        glVertex2f(0, .2);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-4.33, -.07, 0);
        glBegin(GL_POLYGON);    /// inside Window of Annex-1 From Left-1
        glColor3ub(0, 0, 0);
        glVertex2f(.2, .2);
        glVertex2f(.2, 0);
        glVertex2f(0, 0);
        glVertex2f(0, .2);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-4.57, .16, 0);
        glBegin(GL_POLYGON);    /// inside Window of Annex-1 From Left-1
        glColor3ub(0, 0, 0);
        glVertex2f(.2, .2);
        glVertex2f(.2, 0);
        glVertex2f(0, 0);
        glVertex2f(0, .2);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-4.33, .16, 0);
        glBegin(GL_POLYGON);    /// inside Window of Annex-1 From Left-1
        glColor3ub(0, 0, 0);
        glVertex2f(.2, .2);
        glVertex2f(.2, 0);
        glVertex2f(0, 0);
        glVertex2f(0, .2);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-4.6, -.1, 0);
        glBegin(GL_POLYGON);    /// Window of Annex-2 From Left-1
        glColor3ub(255, 255, 224);
        glVertex2f(.5, .5);
        glVertex2f(.5, 0);
        glVertex2f(0, 0);
        glVertex2f(0, .5);
        glEnd();
        glPopMatrix();

        ///
        glPushMatrix();
        glTranslatef(-3.37, -.07, 0);
        glBegin(GL_POLYGON);     /// inside Window of Annex-1 From Left-2
        glColor3ub(0, 0, 0);
        glVertex2f(.2, .2);
        glVertex2f(.2, 0);
        glVertex2f(0, 0);
        glVertex2f(0, .2);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-3.13, -.07, 0);
        glBegin(GL_POLYGON);     /// inside Window of Annex-1 From Left-2
        glColor3ub(0, 0, 0);
        glVertex2f(.2, .2);
        glVertex2f(.2, 0);
        glVertex2f(0, 0);
        glVertex2f(0, .2);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-3.37, .16, 0);
        glBegin(GL_POLYGON);     /// inside Window of Annex-1 From Left-2
        glColor3ub(0, 0, 0);
        glVertex2f(.2, .2);
        glVertex2f(.2, 0);
        glVertex2f(0, 0);
        glVertex2f(0, .2);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-3.13, .16, 0);
        glBegin(GL_POLYGON);     /// inside Window of Annex-1 From Left-2
        glColor3ub(0, 0, 0);
        glVertex2f(.2, .2);
        glVertex2f(.2, 0);
        glVertex2f(0, 0);
        glVertex2f(0, .2);
        glEnd();
        glPopMatrix();
        ///

        glPushMatrix();
        glTranslatef(-3.4, -.1, 0);
        glBegin(GL_POLYGON);    /// Window of Annex-2 From Left-2
        glColor3ub(255, 255, 224);
        glVertex2f(.5, .5);
        glVertex2f(.5, 0);
        glVertex2f(0, 0);
        glVertex2f(0, .5);
        glEnd();
        glPopMatrix();

        ///
        glPushMatrix();
        glTranslatef(-2.17, -.07, 0);
        glBegin(GL_POLYGON);    /// inside Window of Annex-1 From Left-3
        glColor3ub(0, 0, 0);
        glVertex2f(.2, .2);
        glVertex2f(.2, 0);
        glVertex2f(0, 0);
        glVertex2f(0, .2);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-1.94, -.07, 0);
        glBegin(GL_POLYGON);    /// inside Window of Annex-1 From Left-3
        glColor3ub(0, 0, 0);
        glVertex2f(.2, .2);
        glVertex2f(.2, 0);
        glVertex2f(0, 0);
        glVertex2f(0, .2);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-2.17, .16, 0);
        glBegin(GL_POLYGON);    /// inside Window of Annex-1 From Left-3
        glColor3ub(0, 0, 0);
        glVertex2f(.2, .2);
        glVertex2f(.2, 0);
        glVertex2f(0, 0);
        glVertex2f(0, .2);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-1.94, .16, 0);
        glBegin(GL_POLYGON);    /// inside Window of Annex-1 From Left-3
        glColor3ub(0, 0, 0);
        glVertex2f(.2, .2);
        glVertex2f(.2, 0);
        glVertex2f(0, 0);
        glVertex2f(0, .2);
        glEnd();
        glPopMatrix();
        ///

        glPushMatrix();
        glTranslatef(-2.2, -.1, 0);
        glBegin(GL_POLYGON);    /// Window of Annex-1 From Left-3
        glColor3ub(255, 255, 224);

        glVertex2f(.5, .5);
        glVertex2f(.5, 0);
        glVertex2f(0, 0);
        glVertex2f(0, .5);
        glEnd();
        glPopMatrix();
        ///PUNCH MACHINE
        glPushMatrix();      /// punch machine 1
        glTranslatef(-.8, -.2, 0);
        glBegin(GL_POLYGON);
        glColor3ub(60, 60, 60);

        glVertex2f(.12, .3);
        glVertex2f(.12, 0);
        glVertex2f(0, 0);
        glVertex2f(0, .3);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-.4, -.2, 0);
        glBegin(GL_POLYGON);    /// punch machine 2
        glColor3ub(60, 60, 60);

        glVertex2f(.12, .3);
        glVertex2f(.12, 0);
        glVertex2f(0, 0);
        glVertex2f(0, .3);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-.55, -.2, 0);
        glBegin(GL_POLYGON);    /// moving punch glass 1
        glColor3ub(98, 142, 85);
        glVertex2f(.2, .3);
        glVertex2f(.2, .0);
        //glVertex2f(0,0);
        glVertex2f(0, .15);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-.53, -.2, 0);
        glBegin(GL_POLYGON);    /// moving punch glass 1 left
        glColor3ub(98, 142, 85);
        glVertex2f(-.2, .3);
        glVertex2f(-.2, .0);
        glVertex2f(0, .15);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(0, -.2, 0);
        glBegin(GL_POLYGON);    /// punch machine 3
        glColor3ub(60, 60, 60);
        glVertex2f(.12, .3);
        glVertex2f(.12, 0);
        glVertex2f(0, 0);
        glVertex2f(0, .3);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-.14, -.2, 0);
        glBegin(GL_POLYGON);    /// moving punch glass 2  left
        glColor3ub(98, 142, 85);
        glVertex2f(-.2, .3);
        glVertex2f(-.2, .0);
        glVertex2f(0, .15);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-.15, -.2, 0);
        glBegin(GL_POLYGON);    /// moving punch glass 2 right
        glColor3ub(98, 142, 85);
        glVertex2f(.2, .3);
        glVertex2f(.2, .0);
        //glVertex2f(0,0);
        glVertex2f(0, .15);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(.4, -.2, 0);
        glBegin(GL_POLYGON);    /// punch machine 4
        glColor3ub(60, 60, 60);

        glVertex2f(.12, .3);
        glVertex2f(.12, 0);
        glVertex2f(0, 0);
        glVertex2f(0, .3);
        glEnd();
        glPopMatrix();


        glPushMatrix();
        glTranslatef(.26, -.2, 0);
        glBegin(GL_POLYGON);    /// moving punch glass 3 right
        glColor3ub(98, 142, 85);
        glVertex2f(-.2, .3);
        glVertex2f(-.2, .0);
        glVertex2f(0, .15);
        glEnd();
        glPopMatrix();
        glPushMatrix();
        glTranslatef(.25, -.2, 0);
        glBegin(GL_POLYGON);    /// moving punch glass 3 left
        glColor3ub(98, 142, 85);
        glVertex2f(.2, .3);
        glVertex2f(.2, .0);
        glVertex2f(0, .15);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(0.8, -.2, 0);
        glBegin(GL_POLYGON);    /// punch machine 5
        glColor3ub(60, 60, 60);

        glVertex2f(.12, .3);
        glVertex2f(.12, 0);
        glVertex2f(0, 0);
        glVertex2f(0, .3);
        glEnd();
        glPopMatrix();


        glPushMatrix();
        glTranslatef(.66, -.2, 0);
        glBegin(GL_POLYGON);    /// moving punch glass 4 left
        glColor3ub(98, 142, 85);
        glVertex2f(-.2, .3);
        glVertex2f(-.2, .0);
        glVertex2f(0, .15);
        glEnd();
        glPopMatrix();
        glPushMatrix();
        glTranslatef(.65, -.2, 0);
        glBegin(GL_POLYGON);    /// moving punch glass 4 right
        glColor3ub(98, 142, 85);
        glVertex2f(.2, .3);
        glVertex2f(.2, .0);
        glVertex2f(0, .15);
        glEnd();
        glPopMatrix();


        glPushMatrix();
        glTranslatef(-.9, -.2, 0);
        glBegin(GL_POLYGON);    /// GATE background
        glColor3ub(210, 210, 210);
        glVertex2f(1.9, .7);
        glVertex2f(1.9, 0);
        glVertex2f(0, 0);
        glVertex2f(0, .7);
        glEnd();
        glPopMatrix();
        ///

        ///
        glPushMatrix();
        glTranslatef(1.53, -.07, 0);
        glBegin(GL_POLYGON);    /// inside Window of Annex-2 From Left-4
        glColor3ub(0, 0, 0);
        glVertex2f(.2, .2);
        glVertex2f(.2, 0);
        glVertex2f(0, 0);
        glVertex2f(0, .2);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(1.77, -.07, 0);
        glBegin(GL_POLYGON);    /// inside Window of Annex-2 From Left-4
        glColor3ub(0, 0, 0);
        glVertex2f(.2, .2);
        glVertex2f(.2, 0);
        glVertex2f(0, 0);
        glVertex2f(0, .2);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(1.53, .16, 0);
        glBegin(GL_POLYGON);    /// inside Window of Annex-2 From Left-4
        glColor3ub(0, 0, 0);
        glVertex2f(.2, .2);
        glVertex2f(.2, 0);
        glVertex2f(0, 0);
        glVertex2f(0, .2);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(1.77, .16, 0);
        glBegin(GL_POLYGON);    /// inside Window of Annex-2 From Left-4
        glColor3ub(0, 0, 0);
        glVertex2f(.2, .2);
        glVertex2f(.2, 0);
        glVertex2f(0, 0);
        glVertex2f(0, .2);
        glEnd();
        glPopMatrix();
        ///
        glPushMatrix();
        glTranslatef(1.5, -.1, 0);
        glBegin(GL_POLYGON);    /// Window of Annex-2 From Left-4
        glColor3ub(255, 255, 255);

        glVertex2f(.5, .5);
        glVertex2f(.5, 0);
        glVertex2f(0, 0);
        glVertex2f(0, .5);
        glEnd();
        glPopMatrix();

        ///
        glPushMatrix();
        glTranslatef(2.73, -.07, 0);
        glBegin(GL_POLYGON);    /// inside Window of Annex-2 From Left-5
        glColor3ub(0, 0, 0);
        glVertex2f(.2, .2);
        glVertex2f(.2, 0);
        glVertex2f(0, 0);
        glVertex2f(0, .2);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(2.97, -.07, 0);
        glBegin(GL_POLYGON);    /// inside Window of Annex-2 From Left-5
        glColor3ub(0, 0, 0);
        glVertex2f(.2, .2);
        glVertex2f(.2, 0);
        glVertex2f(0, 0);
        glVertex2f(0, .2);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(2.73, .16, 0);
        glBegin(GL_POLYGON);    /// inside Window of Annex-2 From Left-5
        glColor3ub(0, 0, 0);
        glVertex2f(.2, .2);
        glVertex2f(.2, 0);
        glVertex2f(0, 0);
        glVertex2f(0, .2);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(2.97, .16, 0);
        glBegin(GL_POLYGON);    /// inside Window of Annex-2 From Left-5
        glColor3ub(0, 0, 0);
        glVertex2f(.2, .2);
        glVertex2f(.2, 0);
        glVertex2f(0, 0);
        glVertex2f(0, .2);
        glEnd();
        glPopMatrix();
        ///

        glPushMatrix();
        glTranslatef(2.7, -.1, 0);
        glBegin(GL_POLYGON);    /// Window of Annex-2 From Left-5
        glColor3ub(255, 255, 224);

        glVertex2f(.5, .5);
        glVertex2f(.5, 0);
        glVertex2f(0, 0);
        glVertex2f(0, .5);
        glEnd();
        glPopMatrix();

        ///
        glPushMatrix();
        glTranslatef(3.93, -.07, 0);
        glBegin(GL_POLYGON);    /// inside Window of Annex-2 From Left-6
        glColor3ub(0, 0, 0);
        glVertex2f(.2, .2);
        glVertex2f(.2, 0);
        glVertex2f(0, 0);
        glVertex2f(0, .2);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(4.17, -.07, 0);
        glBegin(GL_POLYGON);    /// inside Window of Annex-2 From Left-6
        glColor3ub(0, 0, 0);
        glVertex2f(.2, .2);
        glVertex2f(.2, 0);
        glVertex2f(0, 0);
        glVertex2f(0, .2);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(3.93, .16, 0);
        glBegin(GL_POLYGON);    /// inside Window of Annex-2 From Left-6
        glColor3ub(0, 0, 0);
        glVertex2f(.2, .2);
        glVertex2f(.2, 0);
        glVertex2f(0, 0);
        glVertex2f(0, .2);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(4.17, .16, 0);
        glBegin(GL_POLYGON);    /// inside Window of Annex-2 From Left-6
        glColor3ub(0, 0, 0);
        glVertex2f(.2, .2);
        glVertex2f(.2, 0);
        glVertex2f(0, 0);
        glVertex2f(0, .2);
        glEnd();
        glPopMatrix();
        ///

        glPushMatrix();
        glTranslatef(3.9, -.1, 0);
        glBegin(GL_POLYGON);    /// Window of Annex-2 From Left-6
        glColor3ub(255, 255, 224);

        glVertex2f(.5, .5);
        glVertex2f(.5, 0);
        glVertex2f(0, 0);
        glVertex2f(0, .5);
        glEnd();
        glPopMatrix();

        glBegin(GL_POLYGON);   /// Red portion of Annex-2
        glColor3ub(203,65,84);
        glVertex2f(-5, -.2);
        glVertex2f(5, -.2);
        glVertex2f(5, .55);
        glVertex2f(-5, .55);
        glEnd();

        glBegin(GL_POLYGON); /// white portion of Annex-2
        glColor3f(1, 1, 1);

        glVertex2f(5, .5);
        glVertex2f(5, .6);
        glVertex2f(-5, .6);
        glVertex2f(-5, .5);
        glEnd();

        glBegin(GL_POLYGON);    /// Grey upper Board A2
        glColor3f(.5, .5, .5);

        glVertex2f(-2.9, .65);
        glVertex2f(-.1, .65);
        glVertex2f(-.1, .85);
        glVertex2f(-2.9, .85);
        glEnd();

        glBegin(GL_POLYGON);  /// Red upper board A2
        glColor3f(.6, 0, 0);

        glVertex2f(-3, .6);
        glVertex2f(0, .6);
        glVertex2f(0, .9);
        glVertex2f(-3, .9);
        glEnd();

        circle(-1.53,1.75,0.2,255, 51, 0);/// BD Flag background
        glBegin(GL_POLYGON);
        glColor3ub(0, 153, 0);

        glVertex2f(-2.1, 2);
        glVertex2f(-.9, 2);
        glVertex2f(-.9, 1.5);
        glVertex2f(-2.1, 1.5);
        glEnd();


        glBegin(GL_POLYGON);   /// AIUB Logo background
        glColor3ub(211, 211, 211);

        glVertex2f(-2.3, .85);
        glVertex2f(-.7, .85);
        glVertex2f(-.7, 1.5);
        glVertex2f(-2.3, 1.5);
        glEnd();

                glPushMatrix();         /// Circle Window upper
        glTranslatef(1, 1.6, 0);
        glBegin(GL_POLYGON);
        glColor3ub(205, 192, 176);

        glVertex2f(-.2, .5);
        glVertex2f(2.2, .5);
        glVertex2f(2, .8);
        glVertex2f(0, .8);
        glEnd();
        glPopMatrix();

        glPushMatrix();         /// Circle Window middle
        glTranslatef(1, 1, 0);
        glBegin(GL_POLYGON);
        glColor3ub(205, 192, 176);

        glVertex2f(-.36, .5);
        glVertex2f(2.36, .5);
        glVertex2f(2.3, .8);
        glVertex2f(-.3, .8);
        glEnd();
        glPopMatrix();

        glPushMatrix();         /// Circle Window Lower
        glTranslatef(1, 0.4, 0);
        glBegin(GL_POLYGON);
        glColor3ub(205, 192, 176);

        glVertex2f(-.32, .5);
        glVertex2f(2.32, .5);
        glVertex2f(2.37, .8);
        glVertex2f(-.37, .8);
        glEnd();
        glPopMatrix();

        circle(2,1.3,1.5,128, 128, 128); /// AIUB Circle

        glBegin(GL_POLYGON);   /// Field Street
        glColor3ub(84, 84, 84);
        glVertex2f(-5, -.2);
        glVertex2f(-5, -.4);
        glVertex2f(5, -.4);
        glVertex2f(5, -.2);
        glEnd();

        glBegin(GL_POLYGON);   /// Field Street
        glColor3ub( 0, 128, 0);
        glVertex2f(-5, -.2);
        glVertex2f(-4.7, -.4);
        glVertex2f(-5, -.6);
        glEnd();

        glBegin(GL_POLYGON);   /// Field Lower
      //  glColor3f(0,.6,0);
        glVertex2f(-5, -.4);
        glVertex2f(-5, -2);
        glVertex2f(3.6, -2);
        glVertex2f(2.5, -.4);
        glEnd();

        glBegin(GL_POLYGON);   /// Tennis Court / Pool
        glColor3ub(0, 153, 255);
        glColor3ub(0, 153, 255);
        glVertex2f(3.6, -2);
        glVertex2f(5, -2);
        glVertex2f(5, -.4);
        glVertex2f(2.5, -.4);
        glEnd();



        ///Building 1 Begin

        glPushMatrix();
        glTranslatef(-4.31,0.46,0);
        glScalef(2.7,2.5,0);
        glPushMatrix();

        glBegin(GL_QUADS);//building 1 bar 1
        glColor3ub(47,79,79);
        glVertex2f(-0.020,.5);
        glVertex2f(-0.020,-.14);
        glVertex2f(.030,-.14);
        glVertex2f(.030,.5);
        glEnd();

        glBegin(GL_QUADS);//building 1 glass1
        glColor3ub(156, 229, 227);
        glVertex2f(-.105,.5);
        glVertex2f(-.105,.44);
        glVertex2f(.115,.44);
        glVertex2f(.115,.5);
        glEnd();

        glBegin(GL_QUADS);//building 1 glass2
        glColor3ub(156, 229, 227);
        glVertex2f(-.105,.38);
        glVertex2f(-.105,.32);
        glVertex2f(.115,.32);
        glVertex2f(.115,.38);
        glEnd();

        glBegin(GL_QUADS);//building 1 glass3
        glColor3ub(156, 229, 227);
        glVertex2f(-.105,.26);
        glVertex2f(-.105,.2);
        glVertex2f(.115,.2);
        glVertex2f(.115,.26);
        glEnd();

        glBegin(GL_QUADS);//building 1 glass4
        glColor3ub(156, 229, 227);
        glVertex2f(-.105,.14);
        glVertex2f(-.105,.08);
        glVertex2f(.115,.08);
        glVertex2f(.115,.14);
        glEnd();

        glBegin(GL_QUADS);//building 1 glass5
        glColor3ub(156, 229, 227);
        glVertex2f(-.105,.02);
        glVertex2f(-.105,.04);
        glVertex2f(.115,.04);
        glVertex2f(.115,.02);
        glEnd();

        glBegin(GL_QUADS);//building 1 glass6
        glColor3ub(156, 229, 227);
        glVertex2f(-.105,-.1);
        glVertex2f(-.105,-.16);
        glVertex2f(.115,-.16);
        glVertex2f(.115,-.1);
        glEnd();


        glBegin(GL_QUADS);//building 1
        glColor3ub(47,79,79);
        glVertex2f(-.12,-.2);
        glVertex2f(-.12,.5);
        glVertex2f(.13,.5);
        glVertex2f(.13,-.2);
        glEnd();

        circle(.005,.5,.125,47,79,79);//building 1 dome



        glPopMatrix();
        glPopMatrix();

        //Building 1 End


        ///Building 2 Begin

        glPushMatrix();
        glTranslatef(-4.25,0.46,0);
        glScalef(2.7,2.5,0);
        glPushMatrix();



        glBegin(GL_QUADS);//building 2 bar1
        glColor3ub(33,84,104);
        glVertex2f(.22,-.09);
        glVertex2f(.22,.6);
        glVertex2f(.24,.6);
        glVertex2f(.24,-.09);
        glEnd();

        glBegin(GL_QUADS);//building 2 bar2
        glColor3ub(33,84,104);
        glVertex2f(.31,-.09);
        glVertex2f(.31,.6);
        glVertex2f(.33,.6);
        glVertex2f(.33,-.09);
        glEnd();


        glBegin(GL_QUADS);//building 2 glass 1
        glColor3ub(156, 229, 227);
        glVertex2f(0.16,.57);
        glVertex2f(0.16,.51);
        glVertex2f(.39,.51);
        glVertex2f(.39,.57);
        glEnd();

        glBegin(GL_QUADS);//building 2 glass 2
        glColor3ub(156, 229, 227);
        glVertex2f(0.16,.45);
        glVertex2f(0.16,.39);
        glVertex2f(.39,.39);
        glVertex2f(.39,.45);
        glEnd();

        glBegin(GL_QUADS);//building 2 glass 3
        glColor3ub(156, 229, 227);
        glVertex2f(0.16,.33);
        glVertex2f(0.16,.27);
        glVertex2f(.39,.27);
        glVertex2f(.39,.33);
        glEnd();

        glBegin(GL_QUADS);//building 2 glass 4
        glColor3ub(156, 229, 227);
        glVertex2f(0.16,.21);
        glVertex2f(0.16,.15);
        glVertex2f(.39,.15);
        glVertex2f(.39,.21);
        glEnd();

        glBegin(GL_QUADS);//building 2 glass 5
        glColor3ub(156, 229, 227);
        glVertex2f(0.16,.09);
        glVertex2f(0.16,.03);
        glVertex2f(.39,.03);
        glVertex2f(.39,.09);
        glEnd();


        glBegin(GL_TRIANGLES);//building2 triangle
        glColor3ub(158, 178, 76);
        glVertex2f(0.275,.7);
        glVertex2f(0.15,.6);
        glVertex2f(.4,.6);
        glEnd();



        glBegin(GL_QUADS);//building 2
        glColor3ub(33,84,104);
        glVertex2f(0.15,-.2);
        glVertex2f(0.15,.6);
        glVertex2f(.4,.6);
        glVertex2f(.4,-.2);
        glEnd();


        glPopMatrix();
        glPopMatrix();

        //Building 2 End



        ///Helicopter

        glPushMatrix();
        glTranslatef(helimove, 0, 0);

        glPushMatrix();
        glTranslatef(.8, 2.35, 0);
        glScalef(.3, .3, .2);

        glPushMatrix();

        /// Start Upper Fan
        glPushMatrix();
        glTranslatef(.8, .9, 0);

        glPushMatrix();   /// 14
        glRotatef(_helifan, 0.0, 1, 0);
        glColor3ub(0, 0, 0);
        glScalef(15, .2, .3);
        glutSolidCube(.3);
        glPopMatrix();

        glPopMatrix();
        //glPopMatrix();

        glPushMatrix();   /// 17
        glTranslatef(.8, .9, 0);
        glColor3ub(255, 255, 0);
        glScalef(.3, .4, .2);
        glutSolidCube(.3);
        glPopMatrix();

        /// End Upper Fan

        glPushMatrix();
        //glColor3ub(210,105,30);
        glColor3ub(25, 25, 112);
        glBegin(GL_POLYGON);  /// 9
        glColor3ub(255,0,255);
        glVertex3f(-1.8, .25, 0);
        glVertex3f(-1.9, .01, 0);
        glVertex3f(-1.6, .01, 0);
        glVertex3f(-1.5, .2, 0);
        glEnd();

        glBegin(GL_POLYGON);  /// 8
        glColor3ub(255,255,0);
        glVertex3f(-2, .75, 0);
        glVertex3f(-1.8, .25, 0);
        glVertex3f(-1.5, .2, 0);
        glVertex3f(-1.5, .35, 0);
        glVertex3f(-1.8, .85, 0);
        glEnd();

        glBegin(GL_POLYGON);  /// 7
        glColor3ub(0,255,0);
        glVertex3f(-1.5, .35, 0);
        glVertex3f(-1.5, .2, 0);
        glVertex3f(-.43, .13, 0);
        glVertex3f(-.6, .4, 0);
        glEnd();

        glBegin(GL_POLYGON);  /// 6
        glColor3ub(255,0,0);
        glVertex3f(.3, 0, 0);
        glVertex3f(.5, -.12, 0);
        glVertex3f(2, 0, 0);
        glEnd();

        glBegin(GL_POLYGON);  /// 5
        glColor3ub(255,0,0);
        glVertex3f(1.9, .6, 0);
        glVertex3f(2, 0, 0);
        glVertex3f(2.3, .25, 0);
        //      glVertex2f(2,.5);
        //      glVertex2f(2,0);
        //      glVertex2f(2.5,.25);
        glEnd();

        glBegin(GL_POLYGON);  /// 4
        glColor3ub(255,0,0);
        glVertex3f(-0.6, .4, 0);
        glVertex3f(-.4, .05, 0);
        glVertex3f(0, 0, 0);
        glVertex3f(0, .5, 0);
        glEnd();

        glBegin(GL_POLYGON);  /// 3
        glColor3ub(255,0,0);
        glVertex3f(0.2, .7, 0);
        glVertex3f(1.4, .7, 0);
        glVertex3f(1.4, .85, 0);
        glVertex3f(.35, .85, 0);
        glEnd();

        glBegin(GL_POLYGON);    /// 2
        glColor3ub(0,255,0);
        glVertex3f(0, .5, 0);
        glVertex3f(1.9, .5, 0);
        glVertex3f(1.9, .7, 0);
        glVertex3f(0.2, .7, 0);
        glEnd();

        glBegin(GL_POLYGON);   /// 1
        glColor3ub(0,0,255);
        glVertex3f(0, 0, 0);
        glVertex3f(2, 0, 0);
        glVertex3f(2, .5, 0);
        glVertex3f(0, .5, 0);
        glEnd();

        glPopMatrix();

        glPopMatrix();
        glPopMatrix();

        /// End Helicopter

        glPushMatrix();   ///  Cloud A  ///////////////
        glTranslatef(x, 0, 0);
        glTranslatef(2, -.3, 0);
        if (cl % 2 == 1)
        {
            glScalef(1.5, 1.3, 0);
        }
        else
        {
            glScalef(1, 1.2, 0);
        }

        glPushMatrix();    /// Cloud-A-1
        glTranslatef(-3, 2, 0.0);
        glColor3f(1.0, 1.0, 1);
        glBegin(GL_POLYGON);
        for (int i = 0; i < 400; i++)
        {
            float pi = 3.1416;
            float A = (i * 2 * pi) / 100;
            float r = .19;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x, y);
        }
        glEnd();
        glPopMatrix();

        glPushMatrix();    /// Cloud-A-2
        glTranslatef(-2.75, 2.15, 0.0);
        glColor3f(1.0, 1.0, 1);
        glBegin(GL_POLYGON);
        for (int i = 0; i < 400; i++)
        {
            float pi = 3.1416;
            float A = (i * 2 * pi) / 100;
            float r = .19;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x, y);
        }
        glEnd();
        glPopMatrix();

        glPushMatrix();    /// Cloud-A-3
        glTranslatef(-2.5, 2.15, 0.0);
        glColor3f(1.0, 1.0, 1);
        glBegin(GL_POLYGON);
        for (int i = 0; i < 400; i++)
        {
            float pi = 3.1416;
            float A = (i * 2 * pi) / 100;
            float r = .19;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x, y);
        }
        glEnd();
        glPopMatrix();

        glPushMatrix();    /// Cloud-A-4
        glTranslatef(-2.75, 1.9, 0.0);
        glColor3f(1.0, 1.0, 1);
        glBegin(GL_POLYGON);
        for (int i = 0; i < 400; i++)
        {
            float pi = 3.1416;
            float A = (i * 2 * pi) / 100;
            float r = .19;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x, y);
        }
        glEnd();
        glPopMatrix();

        glPushMatrix();    /// Cloud-A-5
        glTranslatef(-2.5, 1.9, 0.0);
        glColor3f(1.0, 1.0, 1);
        glBegin(GL_POLYGON);
        for (int i = 0; i < 400; i++)
        {
            float pi = 3.1416;
            float A = (i * 2 * pi) / 100;
            float r = .19;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x, y);
        }
        glEnd();
        glPopMatrix();

        glPushMatrix();    /// Cloud-A-6
        glTranslatef(-2.25, 2, 0.0);
        glColor3f(1.0, 1.0, 1);
        glBegin(GL_POLYGON);
        for (int i = 0; i < 400; i++)
        {
            float pi = 3.1416;
            float A = (i * 2 * pi) / 100;
            float r = .19;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x, y);
        }
        glEnd();
        glPopMatrix();

        glPopMatrix();

        glPushMatrix();   ///  Cloud B  ///////////////
        glTranslatef(x, -.3, 0);
        //glScalef(1,1.2,0);

        glPushMatrix();    /// Cloud-B-1
        glTranslatef(-3, 2, 0.0);
        glColor3f(1.0, 1.0, 1);
        glBegin(GL_POLYGON);
        for (int i = 0; i < 400; i++)
        {
            float pi = 3.1416;
            float A = (i * 2 * pi) / 100;
            float r = .19;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x, y);
        }
        glEnd();
        glPopMatrix();

        glPushMatrix();    /// Cloud-B-2
        glTranslatef(-2.75, 2.15, 0.0);
        glColor3f(1.0, 1.0, 1);
        glBegin(GL_POLYGON);
        for (int i = 0; i < 400; i++)
        {
            float pi = 3.1416;
            float A = (i * 2 * pi) / 100;
            float r = .19;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x, y);
        }
        glEnd();
        glPopMatrix();

        glPushMatrix();    /// Cloud-B-3
        glTranslatef(-2.5, 2.15, 0.0);
        glColor3f(1.0, 1.0, 1);
        glBegin(GL_POLYGON);
        for (int i = 0; i < 400; i++)
        {
            float pi = 3.1416;
            float A = (i * 2 * pi) / 100;
            float r = .19;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x, y);
        }
        glEnd();
        glPopMatrix();

        glPushMatrix();    /// Cloud-B-4
        glTranslatef(-2.75, 1.9, 0.0);
        glColor3f(1.0, 1.0, 1);
        glBegin(GL_POLYGON);
        for (int i = 0; i < 400; i++)
        {
            float pi = 3.1416;
            float A = (i * 2 * pi) / 100;
            float r = .19;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x, y);
        }
        glEnd();
        glPopMatrix();

        glPushMatrix();    /// Cloud-B-5
        glTranslatef(-2.5, 1.9, 0.0);
        glColor3f(1.0, 1.0, 1);
        glBegin(GL_POLYGON);
        for (int i = 0; i < 400; i++)
        {
            float pi = 3.1416;
            float A = (i * 2 * pi) / 100;
            float r = .19;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x, y);
        }
        glEnd();
        glPopMatrix();

        glPushMatrix();    /// Cloud-B-6
        glTranslatef(-2.25, 2, 0.0);
        glColor3f(1.0, 1.0, 1);
        glBegin(GL_POLYGON);
        for (int i = 0; i < 400; i++)
        {
            float pi = 3.1416;
            float A = (i * 2 * pi) / 100;
            float r = .19;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x, y);
        }
        glEnd();
        glPopMatrix();

        glPopMatrix();

        glPushMatrix();  /// Sun
        glTranslatef(sun, 0, 0);
        glPushMatrix();
        glTranslatef(-4.5, 2.5, 0.0);
        glColor3f(1.0, 1.0, 0);
        glBegin(GL_POLYGON);
        for (int i = 0; i < 400; i++)
        {
            float pi = 3.1416;
            float A = (i * 2 * pi) / 100;
            float r = .3;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x, y);
        }
        glEnd();
        glPopMatrix();
        glPopMatrix();

        glBegin(GL_POLYGON);   /// Sky
        glColor3ub(135, 206, 250);
        glVertex2f(-5, -.2);
        glVertex2f(5, -.2);
        glVertex2f(5, 3);
        glVertex2f(-5, 3);
        glEnd();

        glPopMatrix();
    }
    glPopMatrix();



    ///////////////////////////////////
    glutSwapBuffers();
    glEnd();


    glutTimerFunc(3000, display5, 0);

    glFlush();
    glLoadIdentity();
}

void logoUpdate(int value)
{

    if (count_logo == 0)
    {
        //b=0;
        a = 1;
    }
    else if (count_logo == 1)
    {
        i = 1;
    }
    else if (count_logo == 2)
    {
        u = 1;
    }
    else if (count_logo == 3)
    {
        b = 1;
    }
    else if (count_logo == 4)
    {
        m = 1;
    }
    count_logo++;

    glutPostRedisplay();
    glutTimerFunc(1000, logoUpdate, 0);


}

void handleMouse(int button, int state, int x, int y)
{
    if (button == GLUT_LEFT_BUTTON)
    {
        glutDisplayFunc(display);
    }

    if (button == GLUT_RIGHT_BUTTON)
    {
        glutDisplayFunc(display);
    }


}
void updateHeliFan(int value)
{

    _helifan += hf;
    if (_helifan > 360)
    {
        _helifan -= 360;
    }

    glutPostRedisplay();
    glutTimerFunc(1, updateHeliFan, 0);
}

void update(int value)
{

    ///for Car1
    initialCarPosition -= 0.15f;
    if (initialCarPosition < -8)
    {
        initialCarPosition = 8.0;
    }

    ///for Car2
    initialCarPosi += 0.25f;
    if (initialCarPosi > 8)
    {
        initialCarPosi = -8.0;
    }
    ///for Car R

    RCarPosi += 0.15f;
    if (RCarPosi > 8)
    {
        RCarPosi = -8.0;
    }

    _angle += 3.0f;
    if (_angle > 360)
    {
        _angle -= 360;
    }

    x += 0.01f;

    if (x > 10)
    {
        x = -8.5;
        cl++;
    }

    sun += 0.0009f;

    if (sun > 10)
    {
        sun = -8.5;
    }

    helimove += .2f;

    if (helimove > 10)
    {
        helimove = -8;
    }

    glutPostRedisplay();
    glutTimerFunc(100, update, 0);

}

void updateHeliFan1(int value)
{

    _helifan += hf;
    if (_helifan > 360)
    {
        _helifan -= 360;
    }

    glutPostRedisplay();
    glutTimerFunc(1, updateHeliFan, 0);
}

void update11(int value)
{

    ///for Car1
    initialCarPosition -= 0.15f;
    if (initialCarPosition < -8)
    {
        initialCarPosition = 8.0;
    }

    ///for Car2
    initialCarPosi += 0.25f;
    if (initialCarPosi > 8)
    {
        initialCarPosi = -8.0;
    }
    ///for Car R

    RCarPosi += 0.15f;
    if (RCarPosi > 8)
    {
        RCarPosi = -8.0;
    }



    _angle += 3.0f;
    if (_angle > 360)
    {
        _angle -= 360;
    }

    x += 0.01f;

    if (x > 10)
    {
        x = -8.5;
        cl++;
    }

    sun += 0.0009f;

    if (sun > 10)
    {
        sun = -8.5;
    }

    helimove += .2f;

    if (helimove > 10)
    {
        helimove = -8;
    }

    glutPostRedisplay();
    glutTimerFunc(100, update, 0);


}

void keyboard_for_logo_color_change(int key, int a, int b)
{

    switch (key)
    {

        case GLUT_KEY_UP:
             if (!fullscreen)
            {
                glutFullScreen();
                fullscreen = true;
            }
            else if (fullscreen)
            {
                glutReshapeWindow(1120, 650);
                glutPositionWindow(50, 50);
                fullscreen = false;
            }
            break;


        case GLUT_KEY_DOWN:
            h = 1;
            break;


        case GLUT_KEY_F1:
            h = 0;
            break;

        case GLUT_KEY_RIGHT:
            color = "blue";
            break;

        case GLUT_KEY_LEFT:
            color = "red";
            break;

        default:
            break;
    }





    glutPostRedisplay();

}


void display5(int val)
{

    glutDisplayFunc(display);


}

int main(int argc, char** argv)
{

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(1120, 650);
    glutInitWindowPosition(0, 0);

    glutCreateWindow("AIUB");
    initRendering();

    glutSpecialFunc(keyboard_for_logo_color_change);
    glutDisplayFunc(display);

    glutReshapeFunc(handleResize);
    glutTimerFunc(200, update, 0);
    glutTimerFunc(1, updateHeliFan, 0);
    glutTimerFunc(15, logoUpdate, 0);
    glutTimerFunc(100, update1, 0);
    glutTimerFunc(100, update2, 0);
    glutTimerFunc(100, update5, 0);


    glutMouseFunc(handleMouse);
    glutMainLoop();
    return 0;
}


