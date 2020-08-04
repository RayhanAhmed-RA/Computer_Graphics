#include<windows.h>
#include<GL/glut.h>

# define PI           3.14159265358979323846
GLfloat position1=0.0f;
GLfloat speed1=0.1f;
void display()
{
        glClearColor(1.0f,1.0f,1.0f,1.0f);
        glClear(GL_COLOR_BUFFER_BIT);



        //=========== Plane body//
        glPushMatrix();
        glTranslatef(position1,0.0f,position1);
        glBegin(GL_POLYGON);
        glColor3ub(255, 204, 102);
        glVertex2f(-.1,.2);
        glVertex2f(-.160,.210);
        glVertex2f(-.2,.2);
        glVertex2f(-.240,.180);
        glVertex2f(-.255,.160);
        glVertex2f(-.260,.140);
        glVertex2f(-.260,.120);
        glVertex2f(-.245,.075);
        glVertex2f(-.210,.020);
        glVertex2f(-.185,0);
        glVertex2f(.2,-.2);
        glVertex2f(.3,-.2);
        glVertex2f(.360,-.180);
        glVertex2f(.380,-.140);
        glVertex2f(.360,-.080);
        glVertex2f(.3,0);
        glEnd();

        //============= first wings//

        glBegin(GL_QUADS);
        glColor3ub(204, 204, 204);
        glVertex2f(-.060,.180);
        glVertex2f(.080,.110);
        glVertex2f(.160,.280);
        glVertex2f(.060,.280);
        glEnd();
        //==//

        glBegin(GL_QUADS);
        glColor3ub(204, 204, 204);
        glVertex2f(-.140,.010);
        glVertex2f(-.080,-.320);
        glVertex2f(.020,-.220);
        glVertex2f(0,-.070);
        glEnd();

        //============= last wings//

        glBegin(GL_QUADS);
        glColor3ub(204, 204, 204);
        glVertex2f(.2,-.2);
        glVertex2f(.280,-.4);
        glVertex2f(.320,-.320);
        glVertex2f(.3,-.2);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(204, 204, 204);
        glVertex2f(.260,.020);
        glVertex2f(.360,-.080);
        glVertex2f(.480,.120);
        glVertex2f(.360,.120);
        glEnd();


        glBegin(GL_QUADS);
        glColor3ub(204, 204, 204);
        glVertex2f(.230,-.070);
        glVertex2f(.360,-.180);
        glVertex2f(.5,.080);
        glVertex2f(.420,.1);
        glEnd();


        //===============door//

        glBegin(GL_QUADS);
        glColor3ub(204, 255, 255);
        glVertex2f(-.090,.020);
        glVertex2f(-.040,-.010);
        glVertex2f(0,.090);
        glVertex2f(-.050,.120);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(204, 255, 255);
        glVertex2f(0,.020);
        glVertex2f(.030,0);
        glVertex2f(.050,.055);
        glVertex2f(.020,.070);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(204, 255, 255);
        glVertex2f(.060,-.0150);
        glVertex2f(.090,-.035);
        glVertex2f(.110,.020);
        glVertex2f(.080,.040);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(204, 255, 255);
        glVertex2f(.140,.010);
        glVertex2f(.120,-.050);
        glVertex2f(.145,-.065);
        glVertex2f(.165,-.005);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(204, 255, 255);
        glVertex2f(.2,-.020);
        glVertex2f(.170,-.120);
        glVertex2f(.2,-.140);
        glVertex2f(.230,-.0400);
        glEnd();

        //=====================Front Glass//
        glBegin(GL_POLYGON);
        glColor3ub(153, 204, 255);
        glVertex2f(-.1,.2);
        glVertex2f(-.160,.210);
        glVertex2f(-.2,.2);
        glVertex2f(-.240,.180);
        glVertex2f(-.255,.160);
        glVertex2f(-.260,.140);
        glVertex2f(-.260,.120);
        glVertex2f(-.150,.140);
        glEnd();
        glPopMatrix();

        glFlush();
}

void update1(int value){
            if(position1<-1.5)
            position1=1.0f;
            position1-=speed1;
            glutPostRedisplay();
            glutTimerFunc(100,update1,0);


        }



int main(int argc, char**argv)
{
    glutInit(&argc,argv);
    glutCreateWindow("OpenGL Setup Test");
    glutInitWindowSize(320,320);
    glutDisplayFunc(display);
    glutTimerFunc(100,update1,0);
    glutMainLoop();
    return 0;
}
