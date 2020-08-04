#include<windows.h>
#include<GL/glut.h>

#include<math.h>>
# define PI           3.14159265358979323846
void dayAuto(int value);
void eveningAuto(int value);
void nightAuto(int value);

GLfloat position1=0.0f;
GLfloat speed1=0.1f;
GLfloat position2=0.0f;
GLfloat speed2=0.1f;
GLfloat position3=0.0f;
GLfloat speed3=0.1f;
GLfloat position4=0.0f;
GLfloat speed4=0.1f;
GLfloat position5=0.0f;
GLfloat speed5=0.8f;

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

void day(){
        glClearColor(0.0f,0.0f,0.0f,1.0f);
        glClear(GL_COLOR_BUFFER_BIT);
        //sky//
        glBegin(GL_QUADS);
        glColor3ub(33,166,244);
        glVertex2f(-1,1);
        glVertex2f(-1,-.1);
        glVertex2f(1,-.1);
        glVertex2f(1,1);
        glEnd();

        /*======================p0*/
        glPushMatrix();
        glTranslatef(position3,position3,0.0f);
        glTranslatef(position4,position4,0.0f);
        circle(-.9,.8,.1,255, 255, 102);
        glPopMatrix();


        /*===============snow*/
/*
      glPushMatrix();
      glTranslatef(position5,position5,0.0f);

    glPointSize(3.0);
	glBegin(GL_POINTS);
	glColor3f(250, 248, 247);
	glVertex2f(-.8,.9);
	glVertex2f(-.6,.9);
	glVertex2f(-.4,.9);
	glVertex2f(-.2,.9);
	glVertex2f(0,.9);
	glVertex2f(.2,.9);
	glVertex2f(.4,.9);
    glVertex2f(.6,.9);
	glVertex2f(.8,.9);
	glVertex2f(-.8,.7);
	glVertex2f(-.6,.7);
	glVertex2f(-.4,.7);
	glVertex2f(-.2,.7);
	glVertex2f(0,.7);
	glVertex2f(.2,.7);
	glVertex2f(.4,.7);
    glVertex2f(.6,.7);
	glVertex2f(.8,.7);
	glVertex2f(-.8,.5);
	glVertex2f(-.6,.5);
	glVertex2f(-.4,.5);
	glVertex2f(-.2,.5);
	glVertex2f(0,.5);
	glVertex2f(.2,.5);
	glVertex2f(.4,.5);
    glVertex2f(.6,.5);
	glVertex2f(.8,.5);
  	glEnd();
  	glPopMatrix();
  	glLoadIdentity();
*/
   /*windmil*/

            glTranslated(.7,.5,0);

            glBegin(GL_QUADS);
            glColor3f(1,1,1);
            glVertex2f(-.005,-.050);
            glVertex2f(-.010,-.6);
            glVertex2f(.010,-.6);
            glVertex2f(.005,-.050);
            glEnd();


            glBegin(GL_TRIANGLES);
            glColor3f(1,1,1);
            glVertex2f(-.030,.250);
            glVertex2f(0,.050);
            glVertex2f(.030,.250);
            glEnd();

            glBegin(GL_TRIANGLES);
            glColor3f(1,1,1);
            glVertex2f(.250,.030);
            glVertex2f(.050,0);
            glVertex2f(.250,-.030);
            glEnd();

            glBegin(GL_TRIANGLES);
            glColor3f(1,1,1);
            glVertex2f(-.050,0);
            glVertex2f(-.250,.030);
            glVertex2f(-.250,-.030);
            glEnd();

            glBegin(GL_TRIANGLES);
            glColor3f(1,1,1);
            glVertex2f(0,-.050);
            glVertex2f(-.030,-.250);
            glVertex2f(.030,-.250);
            glEnd();
            circle(0,0,.050,128,128,128);



            glLoadIdentity();

        /* ===============p1*/

        glBegin(GL_QUADS);
        glColor3ub(135,135,135);
        glVertex2f(-1,-.2);
        glVertex2f(-1,-.9);
        glVertex2f(1,-.9);
        glVertex2f(1,-.2);
        glEnd();
       /*===========p2*/
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
        /*=======================p3*/
        glBegin(GL_QUADS);
        glColor3ub(255, 128, 0);
        glVertex2f(-.450,.550);
        glVertex2f(-.450,-.1);
        glVertex2f(-.250,-.1);
        glVertex2f(-.250,.550);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(-.440,.530);
        glVertex2f(-.440,.430);
        glVertex2f(-.260,.430);
        glVertex2f(-.260,.530);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(-.440,.410);
        glVertex2f(-.440,.370);
        glVertex2f(-.260,.370);
        glVertex2f(-.260,.410);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(-.440,.350);
        glVertex2f(-.440,.310);
        glVertex2f(-.260,.310);
        glVertex2f(-.260,.350);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(-.440,.290);
        glVertex2f(-.440,.250);
        glVertex2f(-.260,.250);
        glVertex2f(-.260,.290);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(-.440,.230);
        glVertex2f(-.440,.190);
        glVertex2f(-.260,.190);
        glVertex2f(-.260,.230);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(-.440,.170);
        glVertex2f(-.440,.130);
        glVertex2f(-.260,.130);
        glVertex2f(-.260,.170);
        glEnd();

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
        glColor3ub(255, 128, 255);
        glVertex2f(.260,.630);
        glVertex2f(.260,-.1);
        glVertex2f(.460,-.1);
        glVertex2f(.460,.630);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(.270,.610);
        glVertex2f(.270,.4);
        glVertex2f(.450,.4);
        glVertex2f(.450,.610);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(.270,.380);
        glVertex2f(.270,.320);
        glVertex2f(.450,.320);
        glVertex2f(.450,.380);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(.270,.3);
        glVertex2f(.270,.240);
        glVertex2f(.450,.240);
        glVertex2f(.450,.3);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(.270,.220);
        glVertex2f(.270,.160);
        glVertex2f(.450,.160);
        glVertex2f(.450,.220);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 0, 0);
        glVertex2f(.040,.570);
        glVertex2f(.040,-.1);
        glVertex2f(.280,-.1);
        glVertex2f(.280,.570);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(128,128,128);
        glVertex2f(.050,.550);
        glVertex2f(.050,.320);
        glVertex2f(.270,.320);
        glVertex2f(.270,.550);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(128,128,128);
        glVertex2f(.050,.3);
        glVertex2f(.050,.2);
        glVertex2f(.270,.2);
        glVertex2f(.270,.3);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(128,128,128);
        glVertex2f(.050,.180);
        glVertex2f(.050,.130);
        glVertex2f(.270,.130);
        glVertex2f(.270,.180);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(128,128,128);
        glVertex2f(.050,.380);
        glVertex2f(.050,.320);
        glVertex2f(.270,.320);
        glVertex2f(.270,.380);
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
        /*====*/




        /*==========p4*/
        glBegin(GL_QUADS);
        glColor3ub(34,139,34);
        glVertex2f(-1,-.1);
        glVertex2f(-1,-.2);
        glVertex2f(1,-.2);
        glVertex2f(1,-.1);
        glEnd();

        /*==============p5 car moving*/
        glPushMatrix();
        glTranslatef(position1,0.0f,0.0f);
        glBegin(GL_QUADS);
        glColor3ub(0,0,205);
        glVertex2f(-.7,-.220);
        glVertex2f(-.7,-.380);
        glVertex2f(-.4,-.380);
        glVertex2f(-.4,-.220);
        glEnd();



        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(-.680,-.240);
        glVertex2f(-.680,-.3);
        glVertex2f(-.410,-.3);
        glVertex2f(-.410,-.240);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 191, 0);
        glVertex2f(-.420,-.360);
        glVertex2f(-.420,-.380);
        glVertex2f(-.4,-.380);
        glVertex2f(-.4,-.360);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255,0,0);
        glVertex2f(-.7,-.360);
        glVertex2f(-.7,-.380);
        glVertex2f(-.680,-.380);
        glVertex2f(-.680,-.360);
        glEnd();
        circle(-.650,-.410,.04,0,0,0);
        circle(-.475,-.410,.04,0,0,0);
        glPopMatrix();

        /*=============*/
        glPushMatrix();
        glTranslatef(position2,0.0f,0.0f);

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 128);
        glVertex2f(.4,-.620);
        glVertex2f(.4,-.780);
        glVertex2f(.7,-.780);
        glVertex2f(.7,-.620);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(0, 255, 255);
        glVertex2f(.410,-.640);
        glVertex2f(.410,-.7);
        glVertex2f(.680,-.7);
        glVertex2f(.680,-.640);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255,191,0);
        glVertex2f(.4,-.760);
        glVertex2f(.4,-.780);
        glVertex2f(.420,-.780);
        glVertex2f(.420,-.760);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255,0,0);
        glVertex2f(.680,-.760);
        glVertex2f(.680,-.780);
        glVertex2f(.7,-.780);
        glVertex2f(.7,-.760);
        glEnd();

        circle(.650,-.810,.04,0,0,0);
        circle(.475,-.810,.04,0,0,0);
        glPopMatrix();
        /*===============================p6*/
        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(-.590,.280);
        glVertex2f(-.590,.210);
        glVertex2f(-.410,.210);
        glVertex2f(-.410,.280);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(-.590,.190);
        glVertex2f(-.590,.150);
        glVertex2f(-.410,.150);
        glVertex2f(-.410,.190);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(-.590,.130);
        glVertex2f(-.590,.090);
        glVertex2f(-.410,.090);
        glVertex2f(-.410,.130);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(-.590,.070);
        glVertex2f(-.590,.030);
        glVertex2f(-.410,.030);
        glVertex2f(-.410,.070);
        glEnd();
        /*============*/
        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(-.340,.380);
        glVertex2f(-.340,.270);
        glVertex2f(-.160,.270);
        glVertex2f(-.160,.380);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(-.340,.250);
        glVertex2f(-.340,.210);
        glVertex2f(-.160,.210);
        glVertex2f(-.160,.250);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(-.340,.190);
        glVertex2f(-.340,.150);
        glVertex2f(-.160,.150);
        glVertex2f(-.160,.190);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(-.340,.130);
        glVertex2f(-.340,.090);
        glVertex2f(-.160,.090);
        glVertex2f(-.160,.130);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(-.340,.070);
        glVertex2f(-.340,.030);
        glVertex2f(-.160,.030);
        glVertex2f(-.160,.070);
        glEnd();
        /*==========*/
        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(-.090,.480);
        glVertex2f(-.090,.330);
        glVertex2f(.090,.330);
        glVertex2f(.090,.480);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(-.090,.310);
        glVertex2f(-.090,.270);
        glVertex2f(.090,.270);
        glVertex2f(.090,.310);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(-.090,.250);
        glVertex2f(-.090,.210);
        glVertex2f(.090,.210);
        glVertex2f(.090,.250);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(-.090,.190);
        glVertex2f(-.090,.150);
        glVertex2f(.090,.150);
        glVertex2f(.090,.190);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(-.090,.130);
        glVertex2f(-.090,.090);
        glVertex2f(.090,.090);
        glVertex2f(.090,.130);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(-.090,.070);
        glVertex2f(-.090,.030);
        glVertex2f(.090,.030);
        glVertex2f(.090,.070);
        glEnd();
        /*============*/
        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(.160,.280);
        glVertex2f(.160,.210);
        glVertex2f(.340,.210);
        glVertex2f(.340,.280);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(.160,.190);
        glVertex2f(.160,.150);
        glVertex2f(.340,.150);
        glVertex2f(.340,.190);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(.160,.130);
        glVertex2f(.160,.090);
        glVertex2f(.340,.090);
        glVertex2f(.340,.130);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(.160,.070);
        glVertex2f(.160,.030);
        glVertex2f(.340,.030);
        glVertex2f(.340,.070);
        glEnd();

        /*================*/
        glBegin(GL_QUADS);
        glColor3ub(123,104,238);
        glVertex2f(.4,.6);
        glVertex2f(.4,-.1);
        glVertex2f(.6,-.1);
        glVertex2f(.6,.6);
        glEnd();
        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(.410,.580);
        glVertex2f(.410,.450);
        glVertex2f(.590,.450);
        glVertex2f(.590,.580);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(.410,.430);
        glVertex2f(.410,.390);
        glVertex2f(.590,.390);
        glVertex2f(.590,.430);
        glEnd();


        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(.410,.370);
        glVertex2f(.410,.330);
        glVertex2f(.590,.330);
        glVertex2f(.590,.370);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(.410,.310);
        glVertex2f(.410,.270);
        glVertex2f(.590,.270);
        glVertex2f(.590,.310);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(.410,.250);
        glVertex2f(.410,.210);
        glVertex2f(.590,.210);
        glVertex2f(.590,.250);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(.410,.190);
        glVertex2f(.4100,.150);
        glVertex2f(.590,.150);
        glVertex2f(.590,.190);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(.410,.130);
        glVertex2f(.410,.090);
        glVertex2f(.590,.090);
        glVertex2f(.590,.130);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(.410,.070);
        glVertex2f(.4100,.030);
        glVertex2f(.590,.030);
        glVertex2f(.590,.070);
        glEnd();
        /*==========*/



        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(.660,.180);
        glVertex2f(.660,.090);
        glVertex2f(.840,.090);
        glVertex2f(.840,.180);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(.660,.070);
        glVertex2f(.660,.030);
        glVertex2f(.840,.030);
        glVertex2f(.840,.070);
        glEnd();
        glLoadIdentity();

       glutTimerFunc(1500,eveningAuto,0);

        glFlush();
}
void evening(){
        glClearColor(0.0f,0.0f,0.0f,1.0f);
        glClear(GL_COLOR_BUFFER_BIT);
        glEnable(GL_LIGHTING);
        GLfloat global_ambient[]={1.9,0.0,0.0,0.1};
        glLightModelfv(GL_LIGHT_MODEL_AMBIENT,global_ambient);
        //sky//
        glBegin(GL_QUADS);
        glColor3ub(33,166,244);
        glVertex2f(-1,1);
        glVertex2f(-1,-.1);
        glVertex2f(1,-.1);
        glVertex2f(1,1);
        glEnd();

        glDisable(GL_LIGHTING);

        /*======================p0*/
        glPushMatrix();
        glTranslatef(position3,position3,0.0f);
        glTranslatef(position4,position4,0.0f);
        circle(-.9,.8,.1,255, 153, 51);
        glPopMatrix();


        /*===============snow*/
/*
      glPushMatrix();
      glTranslatef(position5,position5,0.0f);

    glPointSize(3.0);
	glBegin(GL_POINTS);
	glColor3f(250, 248, 247);
	glVertex2f(-.8,.9);
	glVertex2f(-.6,.9);
	glVertex2f(-.4,.9);
	glVertex2f(-.2,.9);
	glVertex2f(0,.9);
	glVertex2f(.2,.9);
	glVertex2f(.4,.9);
    glVertex2f(.6,.9);
	glVertex2f(.8,.9);
	glVertex2f(-.8,.7);
	glVertex2f(-.6,.7);
	glVertex2f(-.4,.7);
	glVertex2f(-.2,.7);
	glVertex2f(0,.7);
	glVertex2f(.2,.7);
	glVertex2f(.4,.7);
    glVertex2f(.6,.7);
	glVertex2f(.8,.7);
	glVertex2f(-.8,.5);
	glVertex2f(-.6,.5);
	glVertex2f(-.4,.5);
	glVertex2f(-.2,.5);
	glVertex2f(0,.5);
	glVertex2f(.2,.5);
	glVertex2f(.4,.5);
    glVertex2f(.6,.5);
	glVertex2f(.8,.5);
  	glEnd();
  	glPopMatrix();
  	glLoadIdentity();
*/
   /*windmil*/

            glTranslated(.7,.5,0);

            glBegin(GL_QUADS);
            glColor3f(1,1,1);
            glVertex2f(-.005,-.050);
            glVertex2f(-.010,-.6);
            glVertex2f(.010,-.6);
            glVertex2f(.005,-.050);
            glEnd();


            glBegin(GL_TRIANGLES);
            glColor3f(1,1,1);
            glVertex2f(-.030,.250);
            glVertex2f(0,.050);
            glVertex2f(.030,.250);
            glEnd();

            glBegin(GL_TRIANGLES);
            glColor3f(1,1,1);
            glVertex2f(.250,.030);
            glVertex2f(.050,0);
            glVertex2f(.250,-.030);
            glEnd();

            glBegin(GL_TRIANGLES);
            glColor3f(1,1,1);
            glVertex2f(-.050,0);
            glVertex2f(-.250,.030);
            glVertex2f(-.250,-.030);
            glEnd();

            glBegin(GL_TRIANGLES);
            glColor3f(1,1,1);
            glVertex2f(0,-.050);
            glVertex2f(-.030,-.250);
            glVertex2f(.030,-.250);
            glEnd();
            circle(0,0,.050,128,128,128);



            glLoadIdentity();

        /* ===============p1*/

        glBegin(GL_QUADS);
        glColor3ub(135,135,135);
        glVertex2f(-1,-.2);
        glVertex2f(-1,-.9);
        glVertex2f(1,-.9);
        glVertex2f(1,-.2);
        glEnd();
       /*===========p2*/
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
        /*=======================p3*/
        glBegin(GL_QUADS);
        glColor3ub(255, 128, 0);
        glVertex2f(-.450,.550);
        glVertex2f(-.450,-.1);
        glVertex2f(-.250,-.1);
        glVertex2f(-.250,.550);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 153);
        glVertex2f(-.440,.530);
        glVertex2f(-.440,.430);
        glVertex2f(-.260,.430);
        glVertex2f(-.260,.530);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 153);
        glVertex2f(-.440,.410);
        glVertex2f(-.440,.370);
        glVertex2f(-.260,.370);
        glVertex2f(-.260,.410);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(-.440,.350);
        glVertex2f(-.440,.310);
        glVertex2f(-.260,.310);
        glVertex2f(-.260,.350);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(-.440,.290);
        glVertex2f(-.440,.250);
        glVertex2f(-.260,.250);
        glVertex2f(-.260,.290);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(-.440,.230);
        glVertex2f(-.440,.190);
        glVertex2f(-.260,.190);
        glVertex2f(-.260,.230);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(-.440,.170);
        glVertex2f(-.440,.130);
        glVertex2f(-.260,.130);
        glVertex2f(-.260,.170);
        glEnd();

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
        glColor3ub(255, 128, 255);
        glVertex2f(.260,.630);
        glVertex2f(.260,-.1);
        glVertex2f(.460,-.1);
        glVertex2f(.460,.630);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 153);
        glVertex2f(.270,.610);
        glVertex2f(.270,.4);
        glVertex2f(.450,.4);
        glVertex2f(.450,.610);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(.270,.380);
        glVertex2f(.270,.320);
        glVertex2f(.450,.320);
        glVertex2f(.450,.380);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 153);
        glVertex2f(.270,.3);
        glVertex2f(.270,.240);
        glVertex2f(.450,.240);
        glVertex2f(.450,.3);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(.270,.220);
        glVertex2f(.270,.160);
        glVertex2f(.450,.160);
        glVertex2f(.450,.220);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 0, 0);
        glVertex2f(.040,.570);
        glVertex2f(.040,-.1);
        glVertex2f(.280,-.1);
        glVertex2f(.280,.570);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 153);
        glVertex2f(.050,.550);
        glVertex2f(.050,.320);
        glVertex2f(.270,.320);
        glVertex2f(.270,.550);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(128,128,128);
        glVertex2f(.050,.3);
        glVertex2f(.050,.2);
        glVertex2f(.270,.2);
        glVertex2f(.270,.3);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 153);
        glVertex2f(.050,.180);
        glVertex2f(.050,.130);
        glVertex2f(.270,.130);
        glVertex2f(.270,.180);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(128,128,128);
        glVertex2f(.050,.380);
        glVertex2f(.050,.320);
        glVertex2f(.270,.320);
        glVertex2f(.270,.380);
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
        /*====*/




        /*==========p4*/
        glBegin(GL_QUADS);
        glColor3ub(34,139,34);
        glVertex2f(-1,-.1);
        glVertex2f(-1,-.2);
        glVertex2f(1,-.2);
        glVertex2f(1,-.1);
        glEnd();

        /*==============p5 car moving*/
        glPushMatrix();
        glTranslatef(position1,0.0f,0.0f);
        glBegin(GL_QUADS);
        glColor3ub(0,0,205);
        glVertex2f(-.7,-.220);
        glVertex2f(-.7,-.380);
        glVertex2f(-.4,-.380);
        glVertex2f(-.4,-.220);
        glEnd();



        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(-.680,-.240);
        glVertex2f(-.680,-.3);
        glVertex2f(-.410,-.3);
        glVertex2f(-.410,-.240);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 191, 0);
        glVertex2f(-.420,-.360);
        glVertex2f(-.420,-.380);
        glVertex2f(-.4,-.380);
        glVertex2f(-.4,-.360);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255,0,0);
        glVertex2f(-.7,-.360);
        glVertex2f(-.7,-.380);
        glVertex2f(-.680,-.380);
        glVertex2f(-.680,-.360);
        glEnd();
        circle(-.650,-.410,.04,0,0,0);
        circle(-.475,-.410,.04,0,0,0);
        glPopMatrix();

        /*=============*/
        glPushMatrix();
        glTranslatef(position2,0.0f,0.0f);

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 128);
        glVertex2f(.4,-.620);
        glVertex2f(.4,-.780);
        glVertex2f(.7,-.780);
        glVertex2f(.7,-.620);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(0, 255, 255);
        glVertex2f(.410,-.640);
        glVertex2f(.410,-.7);
        glVertex2f(.680,-.7);
        glVertex2f(.680,-.640);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255,191,0);
        glVertex2f(.4,-.760);
        glVertex2f(.4,-.780);
        glVertex2f(.420,-.780);
        glVertex2f(.420,-.760);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255,0,0);
        glVertex2f(.680,-.760);
        glVertex2f(.680,-.780);
        glVertex2f(.7,-.780);
        glVertex2f(.7,-.760);
        glEnd();

        circle(.650,-.810,.04,0,0,0);
        circle(.475,-.810,.04,0,0,0);
        glPopMatrix();
        /*===============================p6*/
        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(-.590,.280);
        glVertex2f(-.590,.210);
        glVertex2f(-.410,.210);
        glVertex2f(-.410,.280);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 153);
        glVertex2f(-.590,.190);
        glVertex2f(-.590,.150);
        glVertex2f(-.410,.150);
        glVertex2f(-.410,.190);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(-.590,.130);
        glVertex2f(-.590,.090);
        glVertex2f(-.410,.090);
        glVertex2f(-.410,.130);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 153);
        glVertex2f(-.590,.070);
        glVertex2f(-.590,.030);
        glVertex2f(-.410,.030);
        glVertex2f(-.410,.070);
        glEnd();
        /*============*/
        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(-.340,.380);
        glVertex2f(-.340,.270);
        glVertex2f(-.160,.270);
        glVertex2f(-.160,.380);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(-.340,.250);
        glVertex2f(-.340,.210);
        glVertex2f(-.160,.210);
        glVertex2f(-.160,.250);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(-.340,.190);
        glVertex2f(-.340,.150);
        glVertex2f(-.160,.150);
        glVertex2f(-.160,.190);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 153);
        glVertex2f(-.340,.130);
        glVertex2f(-.340,.090);
        glVertex2f(-.160,.090);
        glVertex2f(-.160,.130);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 153);
        glVertex2f(-.340,.070);
        glVertex2f(-.340,.030);
        glVertex2f(-.160,.030);
        glVertex2f(-.160,.070);
        glEnd();
        /*==========*/
        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(-.090,.480);
        glVertex2f(-.090,.330);
        glVertex2f(.090,.330);
        glVertex2f(.090,.480);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 153);
        glVertex2f(-.090,.310);
        glVertex2f(-.090,.270);
        glVertex2f(.090,.270);
        glVertex2f(.090,.310);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(-.090,.250);
        glVertex2f(-.090,.210);
        glVertex2f(.090,.210);
        glVertex2f(.090,.250);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 153);
        glVertex2f(-.090,.190);
        glVertex2f(-.090,.150);
        glVertex2f(.090,.150);
        glVertex2f(.090,.190);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(-.090,.130);
        glVertex2f(-.090,.090);
        glVertex2f(.090,.090);
        glVertex2f(.090,.130);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(-.090,.070);
        glVertex2f(-.090,.030);
        glVertex2f(.090,.030);
        glVertex2f(.090,.070);
        glEnd();
        /*============*/
        glBegin(GL_QUADS);
        glColor3ub(255, 255, 153);
        glVertex2f(.160,.280);
        glVertex2f(.160,.210);
        glVertex2f(.340,.210);
        glVertex2f(.340,.280);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 153);
        glVertex2f(.160,.190);
        glVertex2f(.160,.150);
        glVertex2f(.340,.150);
        glVertex2f(.340,.190);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(.160,.130);
        glVertex2f(.160,.090);
        glVertex2f(.340,.090);
        glVertex2f(.340,.130);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(.160,.070);
        glVertex2f(.160,.030);
        glVertex2f(.340,.030);
        glVertex2f(.340,.070);
        glEnd();

        /*================*/
        glBegin(GL_QUADS);
        glColor3ub(123,104,238);
        glVertex2f(.4,.6);
        glVertex2f(.4,-.1);
        glVertex2f(.6,-.1);
        glVertex2f(.6,.6);
        glEnd();
        glBegin(GL_QUADS);
        glColor3ub(255, 255, 153);
        glVertex2f(.410,.580);
        glVertex2f(.410,.450);
        glVertex2f(.590,.450);
        glVertex2f(.590,.580);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 153);
        glVertex2f(.410,.430);
        glVertex2f(.410,.390);
        glVertex2f(.590,.390);
        glVertex2f(.590,.430);
        glEnd();


        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(.410,.370);
        glVertex2f(.410,.330);
        glVertex2f(.590,.330);
        glVertex2f(.590,.370);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 153);
        glVertex2f(.410,.310);
        glVertex2f(.410,.270);
        glVertex2f(.590,.270);
        glVertex2f(.590,.310);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(.410,.250);
        glVertex2f(.410,.210);
        glVertex2f(.590,.210);
        glVertex2f(.590,.250);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 153);
        glVertex2f(.410,.190);
        glVertex2f(.4100,.150);
        glVertex2f(.590,.150);
        glVertex2f(.590,.190);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(.410,.130);
        glVertex2f(.410,.090);
        glVertex2f(.590,.090);
        glVertex2f(.590,.130);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(.410,.070);
        glVertex2f(.4100,.030);
        glVertex2f(.590,.030);
        glVertex2f(.590,.070);
        glEnd();
        /*==========*/



        glBegin(GL_QUADS);
        glColor3ub(255, 255, 153);
        glVertex2f(.660,.180);
        glVertex2f(.660,.090);
        glVertex2f(.840,.090);
        glVertex2f(.840,.180);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(.660,.070);
        glVertex2f(.660,.030);
        glVertex2f(.840,.030);
        glVertex2f(.840,.070);
        glEnd();
        glLoadIdentity();

        glutTimerFunc(1500,nightAuto,0);

        glFlush();
}

void night()
{

        glClearColor(0.0f,0.0f,0.0f,1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        /*======================p0*/
        glPushMatrix();
        glTranslatef(position3,position3,0.0f);
        glTranslatef(position4,position4,0.0f);
        circle(-.9,.8,.1,255,255,255);
        glPopMatrix();


        /*===============*/

      glPushMatrix();
      glTranslatef(position5,position5,0.0f);

    glPointSize(3.0);
	glBegin(GL_POINTS);
	glColor3f(250, 248, 247);
	glVertex2f(-.8,.9);
	glVertex2f(-.6,.9);
	glVertex2f(-.4,.9);
	glVertex2f(-.2,.9);
	glVertex2f(0,.9);
	glVertex2f(.2,.9);
	glVertex2f(.4,.9);
    glVertex2f(.6,.9);
	glVertex2f(.8,.9);
	glVertex2f(-.8,.7);
	glVertex2f(-.6,.7);
	glVertex2f(-.4,.7);
	glVertex2f(-.2,.7);
	glVertex2f(0,.7);
	glVertex2f(.2,.7);
	glVertex2f(.4,.7);
    glVertex2f(.6,.7);
	glVertex2f(.8,.7);
	glVertex2f(-.8,.5);
	glVertex2f(-.6,.5);
	glVertex2f(-.4,.5);
	glVertex2f(-.2,.5);
	glVertex2f(0,.5);
	glVertex2f(.2,.5);
	glVertex2f(.4,.5);
    glVertex2f(.6,.5);
	glVertex2f(.8,.5);
  	glEnd();
  	glPopMatrix();
  	glLoadIdentity();

   /*windmil*/

            glTranslated(.7,.5,0);

            glBegin(GL_QUADS);
            glColor3f(1,1,1);
            glVertex2f(-.005,-.050);
            glVertex2f(-.010,-.6);
            glVertex2f(.010,-.6);
            glVertex2f(.005,-.050);
            glEnd();


            glBegin(GL_TRIANGLES);
            glColor3f(1,1,1);
            glVertex2f(-.030,.250);
            glVertex2f(0,.050);
            glVertex2f(.030,.250);
            glEnd();

            glBegin(GL_TRIANGLES);
            glColor3f(1,1,1);
            glVertex2f(.250,.030);
            glVertex2f(.050,0);
            glVertex2f(.250,-.030);
            glEnd();

            glBegin(GL_TRIANGLES);
            glColor3f(1,1,1);
            glVertex2f(-.050,0);
            glVertex2f(-.250,.030);
            glVertex2f(-.250,-.030);
            glEnd();

            glBegin(GL_TRIANGLES);
            glColor3f(1,1,1);
            glVertex2f(0,-.050);
            glVertex2f(-.030,-.250);
            glVertex2f(.030,-.250);
            glEnd();
            circle(0,0,.050,128,128,128);



            glLoadIdentity();

        /* ===============p1*/

        glBegin(GL_QUADS);
        glColor3ub(135,135,135);
        glVertex2f(-1,-.2);
        glVertex2f(-1,-.9);
        glVertex2f(1,-.9);
        glVertex2f(1,-.2);
        glEnd();
       /*===========p2*/
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
        /*=======================p3*/
        glBegin(GL_QUADS);
        glColor3ub(255, 128, 0);
        glVertex2f(-.450,.550);
        glVertex2f(-.450,-.1);
        glVertex2f(-.250,-.1);
        glVertex2f(-.250,.550);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 153);
        glVertex2f(-.440,.530);
        glVertex2f(-.440,.430);
        glVertex2f(-.260,.430);
        glVertex2f(-.260,.530);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 153);
        glVertex2f(-.440,.410);
        glVertex2f(-.440,.370);
        glVertex2f(-.260,.370);
        glVertex2f(-.260,.410);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 153);
        glVertex2f(-.440,.350);
        glVertex2f(-.440,.310);
        glVertex2f(-.260,.310);
        glVertex2f(-.260,.350);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 153);
        glVertex2f(-.440,.290);
        glVertex2f(-.440,.250);
        glVertex2f(-.260,.250);
        glVertex2f(-.260,.290);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 153);
        glVertex2f(-.440,.230);
        glVertex2f(-.440,.190);
        glVertex2f(-.260,.190);
        glVertex2f(-.260,.230);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 153);
        glVertex2f(-.440,.170);
        glVertex2f(-.440,.130);
        glVertex2f(-.260,.130);
        glVertex2f(-.260,.170);
        glEnd();

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
        glColor3ub(255, 128, 255);
        glVertex2f(.260,.630);
        glVertex2f(.260,-.1);
        glVertex2f(.460,-.1);
        glVertex2f(.460,.630);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 153);
        glVertex2f(.270,.610);
        glVertex2f(.270,.4);
        glVertex2f(.450,.4);
        glVertex2f(.450,.610);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 153);
        glVertex2f(.270,.380);
        glVertex2f(.270,.320);
        glVertex2f(.450,.320);
        glVertex2f(.450,.380);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 153);
        glVertex2f(.270,.3);
        glVertex2f(.270,.240);
        glVertex2f(.450,.240);
        glVertex2f(.450,.3);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 153);
        glVertex2f(.270,.220);
        glVertex2f(.270,.160);
        glVertex2f(.450,.160);
        glVertex2f(.450,.220);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 0, 0);
        glVertex2f(.040,.570);
        glVertex2f(.040,-.1);
        glVertex2f(.280,-.1);
        glVertex2f(.280,.570);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 153);
        glVertex2f(.050,.550);
        glVertex2f(.050,.320);
        glVertex2f(.270,.320);
        glVertex2f(.270,.550);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 153);
        glVertex2f(.050,.3);
        glVertex2f(.050,.2);
        glVertex2f(.270,.2);
        glVertex2f(.270,.3);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 153);
        glVertex2f(.050,.180);
        glVertex2f(.050,.130);
        glVertex2f(.270,.130);
        glVertex2f(.270,.180);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 153);
        glVertex2f(.050,.380);
        glVertex2f(.050,.320);
        glVertex2f(.270,.320);
        glVertex2f(.270,.380);
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
        /*====*/




        /*==========p4*/
        glBegin(GL_QUADS);
        glColor3ub(34,139,34);
        glVertex2f(-1,-.1);
        glVertex2f(-1,-.2);
        glVertex2f(1,-.2);
        glVertex2f(1,-.1);
        glEnd();

        /*==============p5 car moving*/
        glPushMatrix();
        glTranslatef(position1,0.0f,0.0f);
        glBegin(GL_QUADS);
        glColor3ub(0,0,205);
        glVertex2f(-.7,-.220);
        glVertex2f(-.7,-.380);
        glVertex2f(-.4,-.380);
        glVertex2f(-.4,-.220);
        glEnd();



        glBegin(GL_QUADS);
        glColor3ub(128, 128, 128);
        glVertex2f(-.680,-.240);
        glVertex2f(-.680,-.3);
        glVertex2f(-.410,-.3);
        glVertex2f(-.410,-.240);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 191, 0);
        glVertex2f(-.420,-.360);
        glVertex2f(-.420,-.380);
        glVertex2f(-.4,-.380);
        glVertex2f(-.4,-.360);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255,0,0);
        glVertex2f(-.7,-.360);
        glVertex2f(-.7,-.380);
        glVertex2f(-.680,-.380);
        glVertex2f(-.680,-.360);
        glEnd();
        circle(-.650,-.410,.04,0,0,0);
        circle(-.475,-.410,.04,0,0,0);
        glPopMatrix();

        /*=============*/
        glPushMatrix();
        glTranslatef(position2,0.0f,0.0f);

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 128);
        glVertex2f(.4,-.620);
        glVertex2f(.4,-.780);
        glVertex2f(.7,-.780);
        glVertex2f(.7,-.620);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(0, 255, 255);
        glVertex2f(.410,-.640);
        glVertex2f(.410,-.7);
        glVertex2f(.680,-.7);
        glVertex2f(.680,-.640);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255,191,0);
        glVertex2f(.4,-.760);
        glVertex2f(.4,-.780);
        glVertex2f(.420,-.780);
        glVertex2f(.420,-.760);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255,0,0);
        glVertex2f(.680,-.760);
        glVertex2f(.680,-.780);
        glVertex2f(.7,-.780);
        glVertex2f(.7,-.760);
        glEnd();

        circle(.650,-.810,.04,0,0,0);
        circle(.475,-.810,.04,0,0,0);
        glPopMatrix();
        /*===============================p6*/
        glBegin(GL_QUADS);
        glColor3ub(255, 255, 153);
        glVertex2f(-.590,.280);
        glVertex2f(-.590,.210);
        glVertex2f(-.410,.210);
        glVertex2f(-.410,.280);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 153);
        glVertex2f(-.590,.190);
        glVertex2f(-.590,.150);
        glVertex2f(-.410,.150);
        glVertex2f(-.410,.190);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 153);
        glVertex2f(-.590,.130);
        glVertex2f(-.590,.090);
        glVertex2f(-.410,.090);
        glVertex2f(-.410,.130);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 153);
        glVertex2f(-.590,.070);
        glVertex2f(-.590,.030);
        glVertex2f(-.410,.030);
        glVertex2f(-.410,.070);
        glEnd();
        /*============*/
        glBegin(GL_QUADS);
        glColor3ub(255, 255, 153);
        glVertex2f(-.340,.380);
        glVertex2f(-.340,.270);
        glVertex2f(-.160,.270);
        glVertex2f(-.160,.380);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 153);
        glVertex2f(-.340,.250);
        glVertex2f(-.340,.210);
        glVertex2f(-.160,.210);
        glVertex2f(-.160,.250);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 153);
        glVertex2f(-.340,.190);
        glVertex2f(-.340,.150);
        glVertex2f(-.160,.150);
        glVertex2f(-.160,.190);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 153);
        glVertex2f(-.340,.130);
        glVertex2f(-.340,.090);
        glVertex2f(-.160,.090);
        glVertex2f(-.160,.130);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 153);
        glVertex2f(-.340,.070);
        glVertex2f(-.340,.030);
        glVertex2f(-.160,.030);
        glVertex2f(-.160,.070);
        glEnd();
        /*==========*/
        glBegin(GL_QUADS);
        glColor3ub(255, 255, 153);
        glVertex2f(-.090,.480);
        glVertex2f(-.090,.330);
        glVertex2f(.090,.330);
        glVertex2f(.090,.480);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 153);
        glVertex2f(-.090,.310);
        glVertex2f(-.090,.270);
        glVertex2f(.090,.270);
        glVertex2f(.090,.310);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 153);
        glVertex2f(-.090,.250);
        glVertex2f(-.090,.210);
        glVertex2f(.090,.210);
        glVertex2f(.090,.250);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 153);
        glVertex2f(-.090,.190);
        glVertex2f(-.090,.150);
        glVertex2f(.090,.150);
        glVertex2f(.090,.190);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 153);
        glVertex2f(-.090,.130);
        glVertex2f(-.090,.090);
        glVertex2f(.090,.090);
        glVertex2f(.090,.130);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 153);
        glVertex2f(-.090,.070);
        glVertex2f(-.090,.030);
        glVertex2f(.090,.030);
        glVertex2f(.090,.070);
        glEnd();
        /*============*/
        glBegin(GL_QUADS);
        glColor3ub(255, 255, 153);
        glVertex2f(.160,.280);
        glVertex2f(.160,.210);
        glVertex2f(.340,.210);
        glVertex2f(.340,.280);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 153);
        glVertex2f(.160,.190);
        glVertex2f(.160,.150);
        glVertex2f(.340,.150);
        glVertex2f(.340,.190);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 153);
        glVertex2f(.160,.130);
        glVertex2f(.160,.090);
        glVertex2f(.340,.090);
        glVertex2f(.340,.130);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 153);
        glVertex2f(.160,.070);
        glVertex2f(.160,.030);
        glVertex2f(.340,.030);
        glVertex2f(.340,.070);
        glEnd();

        /*================*/
        glBegin(GL_QUADS);
        glColor3ub(123,104,238);
        glVertex2f(.4,.6);
        glVertex2f(.4,-.1);
        glVertex2f(.6,-.1);
        glVertex2f(.6,.6);
        glEnd();
        glBegin(GL_QUADS);
        glColor3ub(255, 255, 153);
        glVertex2f(.410,.580);
        glVertex2f(.410,.450);
        glVertex2f(.590,.450);
        glVertex2f(.590,.580);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 153);
        glVertex2f(.410,.430);
        glVertex2f(.410,.390);
        glVertex2f(.590,.390);
        glVertex2f(.590,.430);
        glEnd();


        glBegin(GL_QUADS);
        glColor3ub(255, 255, 153);
        glVertex2f(.410,.370);
        glVertex2f(.410,.330);
        glVertex2f(.590,.330);
        glVertex2f(.590,.370);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 153);
        glVertex2f(.410,.310);
        glVertex2f(.410,.270);
        glVertex2f(.590,.270);
        glVertex2f(.590,.310);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 153);
        glVertex2f(.410,.250);
        glVertex2f(.410,.210);
        glVertex2f(.590,.210);
        glVertex2f(.590,.250);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 153);
        glVertex2f(.410,.190);
        glVertex2f(.4100,.150);
        glVertex2f(.590,.150);
        glVertex2f(.590,.190);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 153);
        glVertex2f(.410,.130);
        glVertex2f(.410,.090);
        glVertex2f(.590,.090);
        glVertex2f(.590,.130);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 153);
        glVertex2f(.410,.070);
        glVertex2f(.4100,.030);
        glVertex2f(.590,.030);
        glVertex2f(.590,.070);
        glEnd();
        /*==========*/



        glBegin(GL_QUADS);
        glColor3ub(255, 255, 153);
        glVertex2f(.660,.180);
        glVertex2f(.660,.090);
        glVertex2f(.840,.090);
        glVertex2f(.840,.180);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 255, 153);
        glVertex2f(.660,.070);
        glVertex2f(.660,.030);
        glVertex2f(.840,.030);
        glVertex2f(.840,.070);
        glEnd();
        glLoadIdentity();

        glutTimerFunc(1500,dayAuto,0);


        glFlush();

}

  //====moving car x axis?//

           void update1(int value){
        if(position1>1.5)
            position1=-1.0f;
            position1+=speed1;
            glutPostRedisplay();
            glutTimerFunc(100,update1,0);


        }
        void update2(int value){
        if(position2<-1.5)
            position2=1.0f;
            position2-=speed2;
            glutPostRedisplay();
            glutTimerFunc(100,update2,0);


        }
        //=========moving moon y axis//
       void update3(int value){
        if(position3>.05)
            position3=-1.0f;
            position3+=speed3;
            glutPostRedisplay();
            glutTimerFunc(100,update3,0);


        }
        void update4(int value){
        if(position4<-.05)
            position4=1.0f;
            position4-=speed4;
            glutPostRedisplay();
            glutTimerFunc(100,update4,0);


        }
                void update5(int value)
        {
        if(position5<-1.5)
            position5=1.0f;
            position5-=speed5;
            glutPostRedisplay();
            glutTimerFunc(100,update5,0);


        }


        void init() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

//car moon controlling by arrow //

void SpecialInput(int key, int x, int y)
{  switch(key)
{
case GLUT_KEY_UP:
    glutTimerFunc(150, update3, 0);
break;
case GLUT_KEY_DOWN:
    glutTimerFunc(150, update4, 0);
break;
case GLUT_KEY_LEFT:
    glutTimerFunc(100, update2, 0);
break;
case GLUT_KEY_RIGHT:
    glutTimerFunc(100, update1, 0);
break;
}
glutPostRedisplay();}



//car moon controlling by key t,g,f,h//day night evening cortrolling by d,n,e//
void handleKeyPress(unsigned char key, int x, int y)
{  switch(key)
{
case 't':
    glutTimerFunc(150, update3, 0);
break;
case 'g':
    glutTimerFunc(150, update4, 0);
break;
case 'f':
    glutTimerFunc(100, update2, 0);
break;
case 'h':
    glutTimerFunc(100, update1, 0);
break;
case 'd':
            glutDisplayFunc(day);//
            break;

case 'e':
            glutDisplayFunc(evening);//
            break;
case 'n':
            glutDisplayFunc(night);//
            break;


}
glutPostRedisplay();}

//car speed by mouse//

void handleMouse(int button, int state,int x,int y)
{
     switch(button)
    {
        case GLUT_LEFT_BUTTON:
            //glutTimerFunc(100, updateSunUP, 0);
            glutTimerFunc(100, update1, 0);
        break;
        case GLUT_RIGHT_BUTTON:
            //glutTimerFunc(100, updateSunDown, 0);
            glutTimerFunc(100, update1, 0);
        break;
    }
    glutPostRedisplay();

}
/*
//snow mouse handle//
void handleMouse1(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON)
	{
			speed5 += 0.1f;
			}

			if (button == GLUT_RIGHT_BUTTON)
	{
			speed5 -= 0.1f;
			}
	glutPostRedisplay();

}
*/


/* Auto day night evening view */
void dayAuto(int value)
{
    glutDisplayFunc(day);
}
void eveningAuto(int value)
{
    glutDisplayFunc(evening);
}
void nightAuto(int value)
{
    glutDisplayFunc(night);
}


int main(int argc, char**argv)
{
    glutInit(&argc,argv);
    glutCreateWindow("OpenGL Setup Test");
    glutInitWindowSize(320,320);
    glutDisplayFunc(day);
    //glutDisplayFunc(evening);
    //glutDisplayFunc(night);
    glutTimerFunc(100,update1,0);
    glutTimerFunc(100,update2,0);
    //glutTimerFunc(100,update3,0);
    //glutTimerFunc(100,update4,0);
     glutTimerFunc(100,update5,0);
     /*
     glutTimerFunc(1500,dayAuto,0);
     glutTimerFunc(1500,eveningAuto,0);
     glutTimerFunc(1500,nightAuto,0);

*/    init();
    glutSpecialFunc(SpecialInput);
    glutKeyboardFunc(handleKeyPress);
    glutMouseFunc(handleMouse);
    //glutMouseFunc(handleMouse1);
    glutMainLoop();
    return 0;
}
