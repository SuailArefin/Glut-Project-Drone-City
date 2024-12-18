#include <windows.h>
#include <GL/glut.h>
#include<cstdio>
#include <GL/gl.h>
#include <math.h>
#include<windows.h>
#include <GL/gl.h>
#include<GL/glut.h>
#include<math.h>
#include <stdlib.h>
#include<stdio.h>
#define PI 3.1416
#include <iostream>
#include <mmsystem.h>
#include<stdio.h>
#include<conio.h>
#include <cstdio>
using namespace std;
static GLfloat spin = 0.0;
static GLfloat spin_speed = 17.0;
//static GLfloat spin = 0.0;
//static GLfloat spin_speed = 17.0;
GLfloat spin_x = 0;
GLfloat spin_y = 1;
GLfloat spin_z = 0;
GLfloat position = 0.0f;
GLfloat speed = 0.0f;
GLfloat position2 = 0.0f;
GLfloat speed2 = 0.0f;
GLfloat position3 = 0.0f;
GLfloat speed3 = 0.0f;
GLfloat position4 = 0.0f;
GLfloat speed4 = 0.0f;
//cloud move
GLfloat position5 = 0.0f;
GLfloat speed5 = 0.0f;
GLfloat position6 = 0.0f;
GLfloat speed6 = 0.0f;
GLfloat position7 = 0.0f;
GLfloat speed7 = 0.0f;
GLfloat position8 = 0.0f;
GLfloat speed8 = 0.0f;
bool rainday = false;
float rain = 0.0;
void update(int value) {

    if(position <-1.0)
        position = 1.0f;
position -= speed;

if(position2 >1.0)
        position2 = -1.0f;
        position2 += speed2;

if(position3 <-0.12)
        position3 = 0.15f;
        position3 += speed3;
if(position4 >0.0)
        position4 = -0.35f;
        position4 += speed4;
if(position5 >1.0)
        position5 = -1.0f;
        position5 += speed5;

        if(position6 <-1.0)
        position6 = 1.0f;
        position6 += speed6;

        if(position7 >0.5)
        position7 = -1.0f;
        position7 += speed7;

        if(position8 >1.0)
        position8 = -1.0f;
        position8 += speed8;


glutPostRedisplay();


glutTimerFunc(100, update, 0);
}

void display()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(.5);


//land
    glBegin(GL_QUADS);
    glColor3f(0.47f, 0.56f, 0.02f); // Dark Gray
    glVertex2f(-1.0f, -1.0f);
    glColor3f(0.47f, 0.56f, 0.02f); // White
    glVertex2f(1.0f, -1.0f);
    glColor3f(0.47f, 0.56f, 0.02f); // Dark Gray
    glVertex2f(1.0f, -0.4f);
    glColor3f(0.87f, 0.76f, 0.13f); // White
    glVertex2f(-1.0f, -0.4f);
    glEnd();
//back
    glBegin(GL_QUADS);
    glColor3f(0.45f, 0.65f, 0.8f); // Dark Gray
    glVertex2f(-1.0f, 0.4f);
    glColor3f(0.45f, 0.65f, 0.8f); // White
    glVertex2f(1.0f, 0.4f);
    glColor3f(0.79f, 0.91f, 0.94f);
    glVertex2f(1.0f, -0.4f);
    glColor3f(0.79f, 0.91f, 0.94f);
    glVertex2f(-1.0f, -0.4f);
    glEnd();










//sky

    glBegin(GL_QUADS);
    glColor3f(0.36f, 0.86f, 0.99f); // Dark Gray
    glVertex2f(1.0f, 1.0f);
    glColor3f(0.36f, 0.86f, 0.99f); // Dark Gray
    glVertex2f(-1.0f, 1.0f);
    //
    glColor3f(1.0f, 1.0f, 1.0f); // White
    glVertex2f(-1.0f, 0.2f);
    glColor3f(1.0f, 1.0f, 1.0f); // White
    glVertex2f(1.0f, 0.2f);
    glEnd();


    //sun
        GLfloat p60 = -0.65f;
    GLfloat q60 = 0.6f;
    GLfloat r60 = 0.09f;
    int tringle60 = 40;



   GLfloat tp60 =2.0f * 3.1416  ;



   glBegin (GL_TRIANGLE_FAN);
    glColor3ub(235,180,66);
    glVertex2f (p60,q60);
    for(int i= 0; i<=tringle60; i++)
    {
        glColor3ub(251, 103, 71);
        glVertex2f (
            p60+(r60*cos(i*tp60/tringle60)),
            q60+(r60*sin(i*tp60/tringle60))
        );
    }
    glEnd ();

//Mountain dark
    glBegin(GL_QUADS);
    glColor3f(0.45f, 0.65f, 0.8f); // Dark Gray
    glVertex2f(-0.79f, 0.4f);
    //glColor3f(1.0f, 1.0f, 1.0f); // White
    glVertex2f(-0.8f, 0.5f);
    // glColor3f(0.2f, 0.2f, 0.2f); // Dark Gray
    glVertex2f(-1.0f, 0.2f);
    // glColor3f(1.0f, 1.0f, 1.0f); // White
    glVertex2f(-0.6f, 0.2f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.45f, 0.65f, 0.8f); // Dark Gray
    glVertex2f(-0.2f, 0.2f);
    //glColor3f(1.0f, 1.0f, 1.0f); // White
    glVertex2f(-0.4f, 0.5f);
    // glColor3f(0.2f, 0.2f, 0.2f); // Dark Gray
    glVertex2f(-0.7f, 0.2f);
    // glColor3f(1.0f, 1.0f, 1.0f); // White
    glVertex2f(-0.65f, 0.1f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(0.45f, 0.65f, 0.8f); // Dark Gray
    glVertex2f(0.79f, 0.4f);
    //glColor3f(1.0f, 1.0f, 1.0f); // White
    glVertex2f(0.8f, 0.5f);
    // glColor3f(0.2f, 0.2f, 0.2f); // Dark Gray
    glVertex2f(1.0f, 0.2f);
    // glColor3f(1.0f, 1.0f, 1.0f); // White
    glVertex2f(0.6f, 0.2f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.45f, 0.65f, 0.8f); // Dark Gray
    glVertex2f(0.2f, 0.2f);
    //glColor3f(1.0f, 1.0f, 1.0f); // White
    glVertex2f(0.4f, 0.5f);
    // glColor3f(0.2f, 0.2f, 0.2f); // Dark Gray
    glVertex2f(0.7f, 0.2f);
    // glColor3f(1.0f, 1.0f, 1.0f); // White
    glVertex2f(0.65f, 0.1f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.45f, 0.65f, 0.8f); // Dark Gray
    glVertex2f(0.3f, 0.2f);
    //glColor3f(1.0f, 1.0f, 1.0f); // White
    glVertex2f(-0.05f, 0.4f);
    // glColor3f(0.2f, 0.2f, 0.2f); // Dark Gray
    glVertex2f(-0.3f, 0.2f);
    // glColor3f(1.0f, 1.0f, 1.0f); // White
    glVertex2f(0.15f, 0.1f);
    glEnd();

//Mount loght
    glBegin(GL_QUADS);
    glColor3f(0.57f, 0.73f, 0.87f); // Dark Gray
    glVertex2f(-0.7f, 0.2f);
    //glColor3f(1.0f, 1.0f, 1.0f); // White
    glVertex2f(-0.72f, 0.45f);
    // glColor3f(0.2f, 0.2f, 0.2f); // Dark Gray
    glVertex2f(-0.8f, 0.5f);
    // glColor3f(1.0f, 1.0f, 1.0f); // White
    glVertex2f(-0.65f, 0.35f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.57f, 0.73f, 0.87f); // Dark Gray
    glVertex2f(-0.4f, 0.5f);
    //glColor3f(1.0f, 1.0f, 1.0f); // White
    glVertex2f(-0.45f, 0.45f);
    // glColor3f(0.2f, 0.2f, 0.2f); // Dark Gray
    glVertex2f(-0.65f, 0.26f);
    // glColor3f(1.0f, 1.0f, 1.0f); // White
    glVertex2f(-0.45f, 0.35f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.57f, 0.73f, 0.87f); // Dark Gray
    glVertex2f(-0.4f, 0.4f);
    //glColor3f(1.0f, 1.0f, 1.0f); // White
    glVertex2f(-0.45f, 0.35f);
    // glColor3f(0.2f, 0.2f, 0.2f); // Dark Gray
    glVertex2f(-0.65f, 0.26f);
    // glColor3f(1.0f, 1.0f, 1.0f); // White
    glVertex2f(-0.45f, 0.35f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.57f, 0.73f, 0.87f); // Dark Gray
    glVertex2f(-0.4f, 0.5f);
    //glColor3f(1.0f, 1.0f, 1.0f); // White
    glVertex2f(-0.45f, 0.30f);
    // glColor3f(0.2f, 0.2f, 0.2f); // Dark Gray
    glVertex2f(-0.65f, 0.2f);
    // glColor3f(1.0f, 1.0f, 1.0f); // White
    glVertex2f(-0.45f, 0.35f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.57f, 0.73f, 0.87f); // Dark Gray
    glVertex2f(0.4f, 0.5f);
    //glColor3f(1.0f, 1.0f, 1.0f); // White
    glVertex2f(0.35f, 0.35f);
    // glColor3f(0.2f, 0.2f, 0.2f); // Dark Gray
    glVertex2f(0.19f, 0.3f);
    // glColor3f(1.0f, 1.0f, 1.0f); // White
    glVertex2f(0.2f, 0.2f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.57f, 0.73f, 0.87f); // Dark Gray
    glVertex2f(0.8f, 0.5f);
    //glColor3f(1.0f, 1.0f, 1.0f); // White
    glVertex2f(0.7f, 0.25f);
    // glColor3f(0.2f, 0.2f, 0.2f); // Dark Gray
    glVertex2f(0.65f, 0.3f);
    // glColor3f(1.0f, 1.0f, 1.0f); // White
    glVertex2f(0.75f, 0.3f);
    glEnd();



    glBegin(GL_TRIANGLES);
    glColor3f(0.57f, 0.73f, 0.87f);
    glVertex2f(-0.65f, 0.35f);
    glVertex2f(-0.8f, 0.5f);
    glVertex2f(-0.8f, 0.37f);


    glEnd();



    glBegin(GL_TRIANGLES);
    glColor3f(0.57f, 0.73f, 0.87f);
    glVertex2f(0.75f, 0.35f);
    glVertex2f(0.8f, 0.5f);
    glVertex2f(0.8f, 0.37f);


    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.57f, 0.73f, 0.87f);

    glVertex2f(-0.75f, 0.35f);
    glVertex2f(-0.75f, 0.2f);
    glVertex2f(-0.6f, 0.15f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.57f, 0.73f, 0.87f);

    glVertex2f(0.3f, 0.4f);
    glVertex2f(0.1f, 0.1f);
    glVertex2f(0.3f, 0.2f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.57f, 0.73f, 0.87f);

    glVertex2f(0.75f, 0.4f);
    glVertex2f(0.45f, 0.1f);
    glVertex2f(0.65f, 0.2f);

    glEnd();



    glBegin(GL_TRIANGLES);
    glColor3f(0.57f, 0.73f, 0.87f);

    glVertex2f(-0.75f, 0.4f);
    glVertex2f(-0.6f, 0.15f);
    glVertex2f(-0.55f, 0.3f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.57f, 0.73f, 0.87f);
    glVertex2f(-0.65f, 0.2f);
    glVertex2f(-0.55f, 0.3f);
    glVertex2f(-0.5f, 0.35f);
    glVertex2f(-0.65f, 0.3f);
    glVertex2f(-0.52f, 0.2f);
    glVertex2f(-0.45f, 0.3f);

    glEnd();





    glBegin(GL_POLYGON);
    glColor3f(0.57f, 0.73f, 0.87f);
    glVertex2f(0.75f, 0.3f);
    glVertex2f(0.685f, 0.3f);
    //glVertex2f(0.7f, 0.3f);
    glVertex2f(0.72f, 0.2f);
    glVertex2f(0.75f, 0.24f);
    glVertex2f(0.77f, 0.2f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.57f, 0.73f, 0.87f);
    glVertex2f(-0.75f, 0.3f);
    glVertex2f(-0.685f, 0.3f);
    //glVertex2f(0.7f, 0.3f);
    glVertex2f(-0.72f, 0.2f);
    glVertex2f(-0.75f, 0.24f);
    glVertex2f(-0.77f, 0.2f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.57f, 0.73f, 0.87f);
    glVertex2f(-0.75f, 0.35f);
    glVertex2f(-0.685f, 0.35f);
    //glVertex2f(0.7f, 0.3f);
    glVertex2f(-0.72f, 0.25f);
    glVertex2f(-0.75f, 0.28f);
    glVertex2f(-0.77f, 0.25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.57f, 0.73f, 0.87f);
    glVertex2f(-0.78f, 0.4f);
    glVertex2f(-0.715f, 0.4f);
    //glVertex2f(0.7f, 0.3f);
    glVertex2f(-0.75f, 0.3f);
    glVertex2f(-0.78f, 0.33f);
    glVertex2f(-0.81f, 0.3f);

    glEnd();
//
    glBegin(GL_POLYGON);
    glColor3f(0.57f, 0.73f, 0.87f);
    glVertex2f(0.75f, 0.3f);
    glVertex2f(0.685f, 0.3f);
    //glVertex2f(0.7f, 0.3f);
    glVertex2f(0.72f, 0.2f);
    glVertex2f(0.75f, 0.24f);
    glVertex2f(0.77f, 0.2f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.57f, 0.73f, 0.87f);
    glVertex2f(0.75f, 0.35f);
    glVertex2f(0.685f, 0.35f);
    //glVertex2f(0.7f, 0.3f);
    glVertex2f(0.72f, 0.25f);
    glVertex2f(0.75f, 0.28f);
    glVertex2f(0.77f, 0.25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.57f, 0.73f, 0.87f);
    glVertex2f(0.78f, 0.4f);
    glVertex2f(0.725f, 0.4f);
    //glVertex2f(0.7f, 0.3f);
    glVertex2f(0.75f, 0.3f);
    glVertex2f(0.78f, 0.33f);
    glVertex2f(0.81f, 0.3f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.57f, 0.73f, 0.87f);
    glVertex2f(0.30f, 0.3f);
    glVertex2f(0.28f, 0.3f);
    //glVertex2f(0.7f, 0.3f);
    glVertex2f(0.27f, 0.2f);
    glVertex2f(0.30f, 0.24f);
    glVertex2f(0.34f, 0.2f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.57f, 0.73f, 0.87f);
    glVertex2f(0.30f, 0.35f);
    glVertex2f(0.28f, 0.35f);
    //glVertex2f(0.7f, 0.3f);
    glVertex2f(0.28f, 0.25f);
    glVertex2f(0.30f, 0.28f);
    glVertex2f(0.34f, 0.25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.57f, 0.73f, 0.87f);
    glVertex2f(0.36f, 0.4f);
    glVertex2f(0.31f, 0.4f);
    //glVertex2f(0.7f, 0.3f);
    glVertex2f(0.31f, 0.3f);
    glVertex2f(0.34f, 0.33f);
    glVertex2f(0.39f, 0.3f);

    glEnd();
//////////////////////////////////////////////////////////////
//CLOUD
//////////////////////////////////////////////////////////////

    glPushMatrix();
glTranslatef(position5,0.0f, 0.0f);
    int i;

    GLfloat p4=0.0f;
    GLfloat q4= 0.85f;
    GLfloat r4 = 0.07f;
    int tringle3=40;

    GLfloat tp5 =2.0f * 3.1416  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub (255, 255, 255);
    glVertex2f (p4,q4);
    for(i= 0; i<=tringle3; i++)
    {
        glVertex2f (
            p4+(r4*cos(i*tp5/tringle3)),
            q4+(r4*sin(i*tp5/tringle3))
        );


    }
    glEnd ();


    //int k;

    GLfloat p5=-0.1f;
    GLfloat q5= 0.85f;
    GLfloat r5 = 0.03f;
    int tringle4=40;

    GLfloat tp4 =2.0f * 3.1416  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub (255, 255, 255);
    glVertex2f (p5,q5);
    for(i= 0; i<=tringle4; i++)
    {
        glVertex2f (
            p5+(r5*cos(i*tp4/tringle4)),
            q5+(r5*sin(i*tp4/tringle4))
        );


    }
    glEnd ();


    //int j;

    GLfloat p6=0.1f;
    GLfloat q6= 0.84f;
    GLfloat r6 = 0.04f;
    int tringle5=40;

    //GLfloat tp7 =2.0f * 3.1416  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub (255, 255, 255);
    glVertex2f (p6,q6);
    for(i= 0; i<=tringle4; i++)
    {
        glVertex2f (
            p6+(r6*cos(i*tp5/tringle5)),
            q6+(r6*sin(i*tp5/tringle5))
        );


    }
    glEnd ();


    //int h;

    GLfloat p7=-0.07f;
    GLfloat q7= 0.87f;
    GLfloat r7 = 0.03f;
    int tringle6=40;

    GLfloat tp8 =2.0f * 3.1416  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub (255, 255, 255);
    glVertex2f (p7,q7);
    for(i= 0; i<=tringle5; i++)
    {
        glVertex2f (
            p7+(r7*cos(i*tp8/tringle6)),
            q7+(r7*sin(i*tp8/tringle6))
        );


    }
    glEnd ();

    //int l;

    GLfloat p0=0.055f;
    GLfloat q0= 0.87f;
    GLfloat r0 = 0.03f;
    int tringle0=40;

    GLfloat tp0 =2.0f * 3.1416  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub (255, 255, 255);
    glVertex2f (p0,q0);
    for(i= 0; i<=tringle0; i++)
    {
        glVertex2f (
            p0+(r0*cos(i*tp0/tringle0)),
            q0+(r0*sin(i*tp0/tringle0))
        );


    }
    glEnd ();


/////////////////cloud dark1
    //int m;

    GLfloat p11=-0.01f;
    GLfloat q11= 0.81f;
    GLfloat r11 = 0.05f;
    int tringle11=40;

    GLfloat tp11 =2.0f * 3.1416  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub (188, 218, 233);
    glVertex2f (p11,q11);
    for(i= 0; i<=tringle3; i++)
    {
        glVertex2f (
            p11+(r11*cos(i*tp11/tringle11)),
            q11+(r11*sin(i*tp11/tringle11))
        );


    }
    glEnd ();


    //int n;

    GLfloat p12=-0.1f;
    GLfloat q12= 0.83f;
    GLfloat r12 = 0.03f;
    int tringle12=40;

    GLfloat tp12 =2.0f * 3.1416  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub (188, 218, 233);
    glVertex2f (p12,q12);
    for(i= 0; i<=tringle4; i++)
    {
        glVertex2f (
            p12+(r12*cos(i*tp12/tringle12)),
            q12+(r12*sin(i*tp12/tringle12))
        );


    }
    glEnd ();


    //int o;

    GLfloat p13=0.10f;
    GLfloat q13= 0.83f;
    GLfloat r13 = 0.035f;
    int tringle13=40;

    GLfloat tp13 =2.0f * 3.1416  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub (188, 218, 233);
    glVertex2f (p13,q13);
    for(i= 0; i<=tringle4; i++)
    {
        glVertex2f (
            p13+(r13*cos(i*tp13/tringle13)),
            q13+(r13*sin(i*tp13/tringle13))
        );


    }
    glEnd ();


    //int p;

    GLfloat p14=-0.06f;
    GLfloat q14= 0.82f;
    GLfloat r14 = 0.03f;
    int tringle14=40;

    GLfloat tp14 =2.0f * 3.1416  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub (188, 218, 233);
    glVertex2f (p14,q14);
    for(i= 0; i<=tringle5; i++)
    {
        glVertex2f (
            p14+(r14*cos(i*tp14/tringle14)),
            q14+(r14*sin(i*tp14/tringle14))
        );


    }
    glEnd ();


    //int q;

    GLfloat p1=0.05f;
    GLfloat q1= 0.82f;
    GLfloat r1 = 0.03f;
    int tringle1=40;

    GLfloat tp1 =2.0f * 3.1416  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub (188, 218, 233);
    glVertex2f (p1,q1);
    for(i= 0; i<=tringle0; i++)
    {
        glVertex2f (
            p1+(r1*cos(i*tp1/tringle1)),
            q1+(r1*sin(i*tp1/tringle1))
        );


    }
    glEnd ();
    glPopMatrix();
    //cloud2 light

    glPushMatrix();
glTranslatef(position6,0.0f, 0.0f);
        GLfloat p75=0.2f;
    GLfloat q75= 0.72f;
    GLfloat r75 = 0.03f;
    int tringle75=40;

    GLfloat tp75 =2.0f * 3.1416  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub (255, 255, 255);
    glVertex2f (p75,q75);
    for(i= 0; i<=tringle75; i++)
    {
        glVertex2f (
            p75+(r75*cos(i*tp75/tringle75)),
            q75+(r75*sin(i*tp75/tringle75))
        );


    }
    glEnd ();
            GLfloat p76=0.3f;
    GLfloat q76= 0.72f;
    GLfloat r76 = 0.03f;
    int tringle76=40;

    GLfloat tp76 =2.0f * 3.1416  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub (255, 255, 255);
    glVertex2f (p76,q76);
    for(i= 0; i<=tringle76; i++)
    {
        glVertex2f (
            p76+(r76*cos(i*tp76/tringle76)),
            q76+(r76*sin(i*tp76/tringle76))
        );


    }
    glEnd ();
                GLfloat p77=0.25f;
    GLfloat q77= 0.73f;
    GLfloat r77 = 0.04f;
    int tringle77=40;

    GLfloat tp77 =2.0f * 3.1416  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub (255, 255, 255);
    glVertex2f (p77,q77);
    for(i= 0; i<=tringle77; i++)
    {
        glVertex2f (
            p77+(r77*cos(i*tp77/tringle77)),
            q77+(r77*sin(i*tp77/tringle77))
        );


    }

        glEnd ();
                GLfloat p78=0.34f;
    GLfloat q78= 0.71f;
    GLfloat r78 = 0.02f;
    int tringle78=40;

    GLfloat tp78 =2.0f * 3.1416  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub (255, 255, 255);
    glVertex2f (p78,q78);
    for(i= 0; i<=tringle78; i++)
    {
        glVertex2f (
            p78+(r78*cos(i*tp78/tringle78)),
            q78+(r78*sin(i*tp78/tringle78))
        );


    }
    glEnd ();
     GLfloat p79=0.17f;
    GLfloat q79= 0.70f;
    GLfloat r79 = 0.02f;
    int tringle79=40;

    GLfloat tp79 =2.0f * 3.1416  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub (188, 218, 233);
    glVertex2f (p79,q79);
    for(i= 0; i<=tringle79; i++)
    {
        glVertex2f (
            p79+(r79*cos(i*tp79/tringle79)),
            q79+(r79*sin(i*tp79/tringle79))
        );


    }
    glEnd ();

//cloud 2nd dark
        GLfloat p70=0.2f;
    GLfloat q70= 0.69f;
    GLfloat r70 = 0.03f;
    int tringle70=40;

    GLfloat tp70 =2.0f * 3.1416  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub (188, 218, 233);
    glVertex2f (p70,q70);
    for(i= 0; i<=tringle70; i++)
    {
        glVertex2f (
            p70+(r70*cos(i*tp70/tringle70)),
            q70+(r70*sin(i*tp70/tringle70))
        );


    }
    glEnd ();
            GLfloat p71=0.3f;
    GLfloat q71= 0.69f;
    GLfloat r71 = 0.03f;
    int tringle71=40;

    GLfloat tp71 =2.0f * 3.1416  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub (188, 218, 233);
    glVertex2f (p71,q71);
    for(i= 0; i<=tringle71; i++)
    {
        glVertex2f (
            p71+(r71*cos(i*tp71/tringle71)),
            q71+(r71*sin(i*tp71/tringle71))
        );


    }
    glEnd ();
                GLfloat p72=0.25f;
    GLfloat q72= 0.67f;
    GLfloat r72 = 0.04f;
    int tringle72=40;

    GLfloat tp72 =2.0f * 3.1416  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub (188, 218, 233);
    glVertex2f (p72,q72);
    for(i= 0; i<=tringle72; i++)
    {
        glVertex2f (
            p72+(r72*cos(i*tp72/tringle72)),
            q72+(r72*sin(i*tp72/tringle72))
        );


    }

        glEnd ();
                GLfloat p73=0.34f;
    GLfloat q73= 0.69f;
    GLfloat r73 = 0.02f;
    int tringle73=40;

    GLfloat tp73 =2.0f * 3.1416  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub (188, 218, 233);
    glVertex2f (p73,q73);
    for(i= 0; i<=tringle73; i++)
    {
        glVertex2f (
            p73+(r73*cos(i*tp73/tringle73)),
            q73+(r73*sin(i*tp73/tringle73))
        );


    }
    glEnd ();
       glPopMatrix();
//cloud3 light

    glPushMatrix();
glTranslatef(position7,0.0f, 0.0f);
                GLfloat p84=0.7f;
    GLfloat q84= 0.82f;
    GLfloat r84 = 0.02f;
    int tringle84=40;

    GLfloat tp84 =2.0f * 3.1416  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub (255, 255, 255);
    glVertex2f (p84,q84);
    for(i= 0; i<=tringle84; i++)
    {
        glVertex2f (
            p84+(r84*cos(i*tp84/tringle84)),
            q84+(r84*sin(i*tp84/tringle84))
        );


    }
    glEnd ();


                GLfloat p85=0.74f;
    GLfloat q85= 0.83f;
    GLfloat r85 = 0.03f;
    int tringle85=40;

    GLfloat tp85 =2.0f * 3.1416  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub (255, 255, 255);
    glVertex2f (p85,q85);
    for(i= 0; i<=tringle85; i++)
    {
        glVertex2f (
            p85+(r85*cos(i*tp85/tringle85)),
            q85+(r85*sin(i*tp85/tringle85))
        );


    }
    glEnd ();

                GLfloat p86=0.78f;
    GLfloat q86= 0.82f;
    GLfloat r86 = 0.02f;
    int tringle86=40;

    GLfloat tp86 =2.0f * 3.1416  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub (255, 255, 255);
    glVertex2f (p86,q86);
    for(i= 0; i<=tringle86; i++)
    {
        glVertex2f (
            p86+(r86*cos(i*tp86/tringle86)),
            q86+(r86*sin(i*tp86/tringle86))
        );


    }
    glEnd ();
//cloud 3 dark
                GLfloat p80=0.7f;
    GLfloat q80= 0.8f;
    GLfloat r80 = 0.02f;
    int tringle80=40;

    GLfloat tp80 =2.0f * 3.1416  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub (188, 218, 233);
    glVertex2f (p80,q80);
    for(i= 0; i<=tringle80; i++)
    {
        glVertex2f (
            p80+(r80*cos(i*tp80/tringle80)),
            q80+(r80*sin(i*tp80/tringle80))
        );


    }
    glEnd ();


                GLfloat p81=0.74f;
    GLfloat q81= 0.79f;
    GLfloat r81 = 0.03f;
    int tringle81=40;

    GLfloat tp81 =2.0f * 3.1416  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub (188, 218, 233);
    glVertex2f (p81,q81);
    for(i= 0; i<=tringle81; i++)
    {
        glVertex2f (
            p81+(r81*cos(i*tp81/tringle81)),
            q81+(r81*sin(i*tp81/tringle81))
        );


    }
    glEnd ();

                GLfloat p82=0.78f;
    GLfloat q82= 0.8f;
    GLfloat r82 = 0.02f;
    int tringle82=40;

    GLfloat tp82 =2.0f * 3.1416  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub (188, 218, 233);
    glVertex2f (p82,q82);
    for(i= 0; i<=tringle82; i++)
    {
        glVertex2f (
            p82+(r82*cos(i*tp82/tringle82)),
            q82+(r82*sin(i*tp82/tringle82))
        );


    }
    glEnd ();

    glPopMatrix();
    //////////////////////////////////////shadow building

       glBegin(GL_QUADS);        //shadow behind 2nd building on top top
      glColor3ub(114,226,242);
    glVertex2f(-0.55f, 0.25f);
    glVertex2f(-0.39f, 0.25f);
    glVertex2f(-0.39f, 0.4f);
    glVertex2f(-0.55f, 0.4f);
    glEnd();
    glBegin(GL_QUADS);        //shadow behind 2nd building top mid layer
      glColor3ub(114,226,242);
    glVertex2f(-0.45f, 0.270f);
    glVertex2f(-0.57f, 0.270f);
    glVertex2f(-0.57f, 0.3f);
    glVertex2f(-0.45f, 0.3f);
    glEnd();



        glBegin(GL_QUADS);
    glColor3ub(100,203,217);   //body bam er building shadow top top//
    glVertex2f(-0.71f, 0.05f);
    glVertex2f(-0.65f, 0.05f);
    glVertex2f(-0.65f, -0.08f);
    glVertex2f(-0.71f, -0.08f);
    glEnd();

      glBegin(GL_QUADS);
    glColor3ub(95, 193, 206);   //body bam er building shadow top//
    glVertex2f(-0.69f, -0.02f);
    glVertex2f(-0.75f, -0.02f);
    glVertex2f(-0.75f, -0.0f);
    glVertex2f(-0.69f, -0.0f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(95, 193, 206);   //body bam er building shadow body//
    glVertex2f(-0.67f, -0.4f);
    glVertex2f(-0.77f, -0.4f);
    glVertex2f(-0.77f, -0.02f);
    glVertex2f(-0.67f, -0.02f);
    glEnd();


       glBegin(GL_QUADS);  //4th building pipe
    glColor3ub(97,182,219);
    glVertex2f(0.601f, 0.25f);
    glVertex2f(0.63f, 0.25f);
    glVertex2f(0.63f, 0.1f);
    glVertex2f(0.60f, 0.1f);
    glEnd();
        glBegin(GL_QUADS);  //4th building 2nd top
    glColor3ub(86,161,194);
    glVertex2f(0.47f, 0.2f);
    glVertex2f(0.67f, 0.2f);
    glVertex2f(0.67f, 0.0f);
    glVertex2f(0.47f, 0.0f);
    glEnd();




    glBegin(GL_QUADS);  //4th building shadow
    glColor3ub(76,142,171);
    glVertex2f(0.68f, 0.15f);
    glVertex2f(0.48f, 0.15f);
    glVertex2f(0.48f, -0.4f);
    glVertex2f(0.68f, -0.4f);
    glEnd();

      glBegin(GL_QUADS);  //4th building er paser shadow top top
    glColor3ub(55,84,105);
    glVertex2f(0.74f, 0.09f);
    glVertex2f(0.70, 0.09f);
    glVertex2f(0.70f, -0.4f);
    glVertex2f(0.72f, -0.4f);
    glEnd();
     glBegin(GL_QUADS);  //4th building er paser shadow top
    glColor3ub(80,120,150);
    glVertex2f(0.76f, 0.05f);
    glVertex2f(0.69, 0.05f);
    glVertex2f(0.69f, -0.4f);
    glVertex2f(0.76f, -0.4f);
    glEnd();

     glBegin(GL_QUADS);  //4th building er paser shadow
    glColor3ub(104,157,196);
    glVertex2f(0.78f, 0.015f);
    glVertex2f(0.68f, 0.015f);
    glVertex2f(0.68f, -0.4f);
    glVertex2f(0.78f, -0.4f);
    glEnd();


      glBegin(GL_QUADS);        //shadow behind 2nd building
      glColor3ub(114,226,242);
    glVertex2f(-0.45f, 0.27f);
    glVertex2f(-0.61f, 0.27f);
    glVertex2f(-0.61f, 0.0f);
    glVertex2f(-0.45f, 0.0f);
    glEnd();


    //building side tree line
    // /*




//waterfall
    glBegin(GL_QUADS);
    glColor3ub(0 ,191 ,255);
    glVertex2f(-0.11f, -0.4f);
    glVertex2f(-0.07f, -0.4f);
    glVertex2f(-0.07f, 0.145f);
    glVertex2f(-0.11f, 0.155f);
    glEnd();






   //waterfall bubbles
    GLfloat p50 = -0.1f;
    GLfloat q50 = -0.390f;
    GLfloat r50 = 0.009f;

    glPushMatrix();
    glRotatef(spin,0,1,0);

   glBegin (GL_TRIANGLE_FAN);
    glColor3ub (230, 230, 230);
    glVertex2f (p50,q50);
    for(i= 0; i<=tringle0; i++)
    {
        glVertex2f (
            p50+(r50*cos(i*tp1/tringle1)),
            q50+(r50*sin(i*tp1/tringle1))
        );
    }
    glEnd ();

  glPopMatrix();

    glPushMatrix();
    glRotatef(spin,0,1,0);

   GLfloat p51 = -0.09f;
    GLfloat q51 = -0.388f;
    GLfloat r51 = 0.015f;



   glBegin (GL_TRIANGLE_FAN);
    glColor3ub (230, 230, 230);
    glVertex2f (p51,q51);
    for(i= 0; i<=tringle0; i++)
    {
        glVertex2f (
            p51+(r51*cos(i*tp1/tringle1)),
            q51+(r51*sin(i*tp1/tringle1))
        );
    }
    glEnd ();

  glPopMatrix();

    glPushMatrix();
    glRotatef(spin,0,1,0);

   GLfloat p52 = -0.07f;
    GLfloat q52 = -0.393f;
    GLfloat r52 = 0.004f;



   glBegin (GL_TRIANGLE_FAN);
    glColor3ub (230, 230, 230);
    glVertex2f (p52,q52);
    for(i= 0; i<=tringle0; i++)
    {
        glVertex2f (
            p52+(r52*cos(i*tp1/tringle1)),
            q52+(r52*sin(i*tp1/tringle1))
        );
    }
    glEnd ();
  glPopMatrix();

    glPushMatrix();
    glRotatef(spin,0,1,0);


   GLfloat p53 = -0.08f;
    GLfloat q53 = -0.393f;
    GLfloat r53 = 0.01f;



   glBegin (GL_TRIANGLE_FAN);
    glColor3ub (230, 230, 230);
    glVertex2f (p53,q53);
    for(i= 0; i<=tringle0; i++)
    {
        glVertex2f (
            p53+(r53*cos(i*tp1/tringle1)),
            q53+(r53*sin(i*tp1/tringle1))
        );
    }
    glEnd ();

  glPopMatrix();


//1st building
    glBegin(GL_QUADS);
    glColor3f(0.15f, 0.4f, 0.69f);

    glVertex2f(-0.15f, 0.65f);
    glVertex2f(-0.20f, 0.65f);
    glVertex2f(-0.20f, -0.3f);
    glVertex2f(-0.15f, -0.3f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.35f, 0.68f, 0.99f);

    glVertex2f(-0.20f, 0.65f);
    glVertex2f(-0.3f, 0.5f);
    glVertex2f(-0.3f, -0.3f);
    glVertex2f(-0.20f, -0.3f);

    glEnd();


    /////

    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.15f, 0.6f);
    glVertex2f(-0.20f, 0.6f);
    glVertex2f(-0.20f, 0.6f);
    glVertex2f(-0.3f, 0.47f);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.15f, 0.55f);
    glVertex2f(-0.20f, 0.55f);
    glVertex2f(-0.20f, 0.55f);
    glVertex2f(-0.3f, 0.42f);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.15f, 0.5f);
    glVertex2f(-0.20f, 0.5f);
    glVertex2f(-0.20f, 0.5f);
    glVertex2f(-0.3f, 0.38f);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.15f, 0.45f);
    glVertex2f(-0.20f, 0.45f);
    glVertex2f(-0.20f, 0.45f);
    glVertex2f(-0.3f, 0.34f);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.15f, 0.4f);
    glVertex2f(-0.20f, 0.4f);
    glVertex2f(-0.20f, 0.4f);
    glVertex2f(-0.3f, 0.3f);

    glEnd();


    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.15f, 0.35f);
    glVertex2f(-0.20f, 0.35f);
    glVertex2f(-0.20f, 0.35f);
    glVertex2f(-0.3f, 0.26f);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.15f, 0.3f);
    glVertex2f(-0.20f, 0.3f);
    glVertex2f(-0.20f, 0.3f);
    glVertex2f(-0.3f, 0.22f);

    glEnd();


    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.15f, 0.25f);
    glVertex2f(-0.20f, 0.25f);
    glVertex2f(-0.20f, 0.25f);
    glVertex2f(-0.3f, 0.18f);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.15f, 0.2f);
    glVertex2f(-0.20f, 0.2f);
    glVertex2f(-0.20f, 0.2f);
    glVertex2f(-0.3f, 0.12f);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.15f, 0.15f);
    glVertex2f(-0.20f, 0.15f);
    glVertex2f(-0.20f, 0.15f);
    glVertex2f(-0.3f, 0.08f);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.15f, 0.1f);
    glVertex2f(-0.20f, 0.1f);
    glVertex2f(-0.20f, 0.1f);
    glVertex2f(-0.3f, 0.04f);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.15f, 0.05f);
    glVertex2f(-0.20f, 0.05f);
    glVertex2f(-0.20f, 0.05f);
    glVertex2f(-0.3f, 0.00f);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.15f, 0.0f);
    glVertex2f(-0.20f, 0.0f);
    glVertex2f(-0.20f, 0.0f);
    glVertex2f(-0.3f, -0.04f);

    glEnd();


    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.15f, -0.05f);
    glVertex2f(-0.20f, -0.05f);
    glVertex2f(-0.20f, -0.05f);
    glVertex2f(-0.3f, -0.08f);

    glEnd();



    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.15f, -0.1f);
    glVertex2f(-0.20f, -0.1f);
    glVertex2f(-0.20f,-0.1f);
    glVertex2f(-0.3f, -0.12f);

    glEnd();


    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.15f, -0.15f);
    glVertex2f(-0.20f, -0.15f);
    glVertex2f(-0.20f, -0.15f);
    glVertex2f(-0.3f, -0.16f);

    glEnd();



    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.15f, -0.05f);
    glVertex2f(-0.20f, -0.05f);
    glVertex2f(-0.20f, -0.05f);
    glVertex2f(-0.3f, -0.08f);

    glEnd();



    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.15f, -0.1f);
    glVertex2f(-0.20f, -0.1f);
    glVertex2f(-0.20f,-0.1f);
    glVertex2f(-0.3f, -0.12f);

    glEnd();


    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.15f, -0.15f);
    glVertex2f(-0.20f, -0.15f);
    glVertex2f(-0.20f, -0.15f);
    glVertex2f(-0.3f, -0.16f);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.15f, -0.2f);
    glVertex2f(-0.20f, -0.2f);
    glVertex2f(-0.20f, -0.2f);
    glVertex2f(-0.3f, -0.2f);

    glEnd();



    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.15f, -0.25f);
    glVertex2f(-0.20f, -0.25f);
    glVertex2f(-0.20f,-0.25f);
    glVertex2f(-0.3f, -0.24f);

    glEnd();


    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.15f, -0.3f);
    glVertex2f(-0.20f, -0.3f);
    glVertex2f(-0.20f, -0.3f);
    glVertex2f(-0.3f, -0.28f);

    glEnd();


//2nd Building

    glBegin(GL_QUADS);
    glColor3f(0.15f, 0.4f, 0.69f);

    glVertex2f(0.23f, 0.55f);
    glVertex2f(0.17f, 0.59f);
    glVertex2f(0.17f, 0.54f);
    glVertex2f(0.23f, 0.50f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.21f, 0.52f, 0.88f);

    glVertex2f(0.05f, 0.50f);
    glVertex2f(0.20f, 0.55f);
    glVertex2f(0.20f, -0.4f);
    glVertex2f(0.05f, -0.4f);

    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.15f, 0.4f, 0.69f);

    glVertex2f(0.25f, 0.50f);
    glVertex2f(0.20f, 0.55f);
    glVertex2f(0.20f, -0.4f);
    glVertex2f(0.25f, -0.4f);

    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.77f, 0.1f);

    glVertex2f(0.07f, 0.54f);
    glVertex2f(0.17f, 0.59f);
    glVertex2f(0.17f, 0.54f);
    glVertex2f(0.07f, 0.50f);

    glEnd();






    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.77f, 0.1f);

    glVertex2f(0.05f, 0.50f);
    glVertex2f(0.20f, 0.55f);
    glVertex2f(0.20f, 0.35f);
    glVertex2f(0.05f, 0.45f);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.1f, 0.5f);
    glVertex2f(0.1f, -0.4f);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.08f, 0.49f);
    glVertex2f(0.08f, -0.4f);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.12f, 0.505f);
    glVertex2f(0.12f, -0.4f);

    glEnd();


    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.14f, 0.515f);
    glVertex2f(0.14f, -0.4f);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.16f, 0.520f);
    glVertex2f(0.16f, -0.4f);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.18f, 0.525f);
    glVertex2f(0.18f, -0.4f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.05f, 0.497f);
    glVertex2f(0.20f, 0.55f);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.05f, 0.48);
    glVertex2f(0.20f, 0.53f);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.251f, 0.48);
    glVertex2f(0.20f, 0.53f);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.251f, 0.497f);
    glVertex2f(0.20f, 0.55f);

    glEnd();


    //sml


    glBegin(GL_QUADS);
    glColor3f(0.15f, 0.4f, 0.69f);

    glVertex2f(-0.05f, 0.0f);
    glVertex2f(0.05f, 0.01f);
    glVertex2f(0.05f, -0.4f);
    glVertex2f(-0.05f, -0.4f);

    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f(0.2f, 0.52f, 0.88f);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(0.05f, 0.01f);
    glVertex2f(0.05f, -0.1f);


    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.35f, 0.68f, 0.99f);

    glVertex2f(0.0f, 0.14f);
    glVertex2f(0.05f, 0.16f);
    glVertex2f(0.05f, 0.01f);
    glVertex2f(-0.05f, 0.0f);

    glEnd();













    //4th  building


    glBegin(GL_QUADS);
    glColor3f(0.2f, 0.52f, 0.88f);

    glVertex2f(0.51f, 0.36f);
    glVertex2f(0.39f, 0.38f);
    glVertex2f(0.39f, -0.4f);
    glVertex2f(0.51f, -0.4f);

    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.77f, 0.1f);

    glVertex2f(0.34f, 0.36f);
    glVertex2f(0.39f, 0.38f);
    glVertex2f(0.39f, -0.4f);
    glVertex2f(0.34f, -0.4f);

    glEnd();
        glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.51f, -0.35f);
    glVertex2f(0.39f, -0.35f);

    glEnd();
            glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.51f, -0.3f);
    glVertex2f(0.39f, -0.3f);

    glEnd();
            glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.51f, -0.25f);
    glVertex2f(0.39f, -0.25f);

    glEnd();
            glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.51f, -0.2f);
    glVertex2f(0.39f, -0.2f);

    glEnd();
            glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.51f, -0.15f);
    glVertex2f(0.39f, -0.15f);

    glEnd();
            glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.51f, -0.1f);
    glVertex2f(0.39f, -0.1f);

    glEnd();
                glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.51f, -0.05f);
    glVertex2f(0.39f, -0.05f);

    glEnd();
            glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.51f, -0.0f);
    glVertex2f(0.39f, -0.001f);

    glEnd();
            glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.51f, 0.05f);
    glVertex2f(0.39f, 0.06f);

    glEnd();
            glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.51f, 0.1f);
    glVertex2f(0.39f, 0.115f);

    glEnd();
            glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.51f, 0.15f);
    glVertex2f(0.39f, 0.165f);

    glEnd();
                glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.51f, 0.2f);
    glVertex2f(0.39f, 0.215f);

    glEnd();
            glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.51f, 0.25f);
    glVertex2f(0.39f, 0.265f);

    glEnd();
            glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.51f, 0.3f);
    glVertex2f(0.39f, 0.315f);

    glEnd();
//5th

    glBegin(GL_QUADS);
    glColor3f(0.2f, 0.52f, 0.88f);

    glVertex2f(0.59f, 0.05f);
    glVertex2f(0.51f, 0.05f);
    glVertex2f(0.51f, -0.4f);
    glVertex2f(0.59f, -0.4f);

    glEnd();


    glBegin(GL_QUADS);
    glColor3f(0.35f, 0.68f, 0.99f);

    glVertex2f(0.51f, 0.1f);
    glVertex2f(0.49f, 0.13f);
    glVertex2f(0.49f, -0.4f);
    glVertex2f(0.51f, -0.4f);

    glEnd();


    glBegin(GL_QUADS);
    glColor3f(0.35f, 0.68f, 0.99f);

    glVertex2f(0.49f, 0.13f);
    glVertex2f(0.57f, 0.13f);
    glVertex2f(0.59f, 0.05f);
    glVertex2f(0.49f, 0.05f);

    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.2f, 0.52f, 0.88f);

    glVertex2f(0.5f, 0.12f);
    glVertex2f(0.56f, 0.12f);
    glVertex2f(0.58f, 0.06f);
    glVertex2f(0.52f, 0.06f);

    glEnd();




//3rd building

    glBegin(GL_QUADS);
    glColor3f(0.34f, 0.68f, 0.98f);

    glVertex2f(0.18f, 0.17f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, -0.4f);
    glVertex2f(0.18f, -0.4f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.15f, 0.4f, 0.7f);

    glVertex2f(0.41f, 0.16f);
    glVertex2f(0.32f, 0.19f);
    glVertex2f(0.32f, -0.4f);
    glVertex2f(0.41f, -0.4f);

    glEnd();

//left building
    glBegin(GL_QUADS);
    glColor3f(0.21f, 0.52f, 0.88f);

    glVertex2f(-0.25f, 0.21f);
    glVertex2f(-0.45f, 0.22f);
    glVertex2f(-0.45f, -0.4f);
    glVertex2f(-0.25f, -0.4f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.77f, 0.1f);

    glVertex2f(-0.45f, 0.22f);
    glVertex2f(-0.5f, 0.20f);
    glVertex2f(-0.5f, -0.4f);
    glVertex2f(-0.45f, -0.4f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.21f, 0.52f, 0.88f);

    glVertex2f(-0.25f, 0.35f);
    glVertex2f(-0.4f, 0.37f);
    glVertex2f(-0.4f, 0.22f);
    glVertex2f(-0.25f, 0.21f);

    glEnd();


    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.77f, 0.1f);

    glVertex2f(-0.45f, 0.35f);
    glVertex2f(-0.4f, 0.37f);
    glVertex2f(-0.4f, 0.22f);
    glVertex2f(-0.45f, 0.21f);

    glEnd();

//last
    glBegin(GL_QUADS);
    glColor3f(0.15f, 0.4f, 0.69f);

    glVertex2f(-0.57f, 0.05f);
    glVertex2f(-0.5f, 0.02f);
    glVertex2f(-0.5f, -0.4f);
    glVertex2f(-0.57f, -0.4f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.35f, 0.68f, 0.99f);

    glVertex2f(-0.57f, 0.05f);
    glVertex2f(-0.67f, 0.02f);
    glVertex2f(-0.67f, -0.4f);
    glVertex2f(-0.57f, -0.4f);

    glEnd();
                glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.65f, 0.028f);
    glVertex2f(-0.65f, -0.4f);

    glEnd();
                    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.62f, 0.03f);
    glVertex2f(-0.62f, -0.4f);

    glEnd();
                        glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.59f, 0.04f);
    glVertex2f(-0.59f, -0.4f);

    glEnd();

    //tringle building

    glBegin(GL_TRIANGLES);
    glColor3f(0.15f, 0.4f, 0.69f);
    glVertex2f(-0.15f, -0.3f);
    glVertex2f(-0.1f, -0.4f);
    glVertex2f(-0.2f, -0.4f);


    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.35f, 0.68f, 0.99f);

    glVertex2f(-0.15f, -0.3f);
    glVertex2f(-0.35f, -0.3f);
    glVertex2f(-0.4f, -0.4f);
    glVertex2f(-0.2f, -0.4f);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.18f, -0.35f);
    glVertex2f(-0.375f, -0.35f);

    glEnd();
        glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.165f, -0.33f);
    glVertex2f(-0.365f, -0.33f);

    glEnd();
//windows
    glBegin(GL_QUADS);
    glColor3ub(38,102,182);
    glVertex2f(0.53f, -0.3f);
    glVertex2f(0.54f, -0.3f);
    glVertex2f(0.54f, -0.27f);
    glVertex2f(0.53f, -0.27f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(221,196,76);
    glVertex2f(0.53f, -0.21f);
    glVertex2f(0.54f, -0.21f);
    glVertex2f(0.54f, -0.18f);
    glVertex2f(0.53f, -0.18f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(221,196,76);
    glVertex2f(0.55f, -0.21f);
    glVertex2f(0.56f, -0.21f);
    glVertex2f(0.56f, -0.18f);
    glVertex2f(0.55f, -0.18f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(221,196,76);
    glVertex2f(0.53f, -0.17f);
    glVertex2f(0.54f, -0.17f);
    glVertex2f(0.54f, -0.14f);
    glVertex2f(0.53f, -0.14f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(38,102,182);
    glVertex2f(0.53f, -0.1f);
    glVertex2f(0.54f, -0.1f);
    glVertex2f(0.54f, -0.07f);
    glVertex2f(0.53f, -0.07f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(38,102,182);
    glVertex2f(0.53f, -0.05f);
    glVertex2f(0.54f, -0.05f);
    glVertex2f(0.54f, -0.02f);
    glVertex2f(0.53f, -0.02f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(38,102,182);
    glVertex2f(0.53f, -0.05f);
    glVertex2f(0.54f, -0.05f);
    glVertex2f(0.54f, -0.02f);
    glVertex2f(0.53f, -0.02f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(38,102,182);
    glVertex2f(0.56f, -0.05f);
    glVertex2f(0.57f, -0.05f);
    glVertex2f(0.57f, -0.02f);
    glVertex2f(0.56f, -0.02f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(38,102,182);
    glVertex2f(0.2f, -0.07f);
    glVertex2f(0.22f, -0.07f);
    glVertex2f(0.22f, -0.01f);
    glVertex2f(0.2f, -0.01f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(38,102,182);
    glVertex2f(0.25f, -0.07f);
    glVertex2f(0.27f, -0.07f);
    glVertex2f(0.27f, -0.01f);
    glVertex2f(0.25f, -0.01f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(232,198,59);
    glVertex2f(0.25f, -0.17f);
    glVertex2f(0.27f, -0.17f);
    glVertex2f(0.27f, -0.11f);
    glVertex2f(0.25f, -0.11f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(232,198,59);
    glVertex2f(0.22f, -0.17f);
    glVertex2f(0.24f, -0.17f);
    glVertex2f(0.24f, -0.11f);
    glVertex2f(0.22f, -0.11f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(232,198,59);
    glVertex2f(0.25f, 0.01f);
    glVertex2f(0.27f, 0.01f);
    glVertex2f(0.27f, 0.07f);
    glVertex2f(0.25f, 0.07f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(237, 250, 254);
    glVertex2f(0.22f, 0.07f);
    glVertex2f(0.24f, 0.07f);
    glVertex2f(0.24f, 0.13f);
    glVertex2f(0.22f, 0.13f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(38,102,182);
    glVertex2f(0.28f, 0.07f);
    glVertex2f(0.3f, 0.07f);
    glVertex2f(0.3f, 0.13f);
    glVertex2f(0.28f, 0.13f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(38,102,182);
    glVertex2f(0.22f, 0.07f);
    glVertex2f(0.24f, 0.07f);
    glVertex2f(0.24f, 0.13f);
    glVertex2f(0.22f, 0.13f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(38,102,182);
    glVertex2f(0.2f, -0.25f);
    glVertex2f(0.22f, -0.25f);
    glVertex2f(0.22f, -0.19f);
    glVertex2f(0.2f, -0.19f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(237, 250, 254);
    glVertex2f(0.22f, -0.32f);
    glVertex2f(0.24f, -0.32f);
    glVertex2f(0.24f, -0.26f);
    glVertex2f(0.22f, -0.26f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(232,198,59);
    glVertex2f(0.25f, -0.32f);
    glVertex2f(0.27f, -0.32f);
    glVertex2f(0.27f, -0.26f);
    glVertex2f(0.25f, -0.26f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(232,198,59);
    glVertex2f(-0.38f, -0.32f);
    glVertex2f(-0.4f, -0.32f);
    glVertex2f(-0.4f, -0.26f);
    glVertex2f(-0.38f, -0.26f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(237, 250, 254);
    glVertex2f(-0.38f, -0.25f);
    glVertex2f(-0.4f, -0.25f);
    glVertex2f(-0.4f, -0.19f);
    glVertex2f(-0.38f, -0.19f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(232,198,59);
    glVertex2f(-0.34f, -0.16f);
    glVertex2f(-0.36f, -0.16f);
    glVertex2f(-0.36f, -0.1f);
    glVertex2f(-0.34f, -0.1f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(232, 198, 59);
    glVertex2f(-0.38f, -0.07f);
    glVertex2f(-0.4f, -0.07f);
    glVertex2f(-0.4f, -0.01f);
    glVertex2f(-0.38f, -0.01f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(36, 102, 183);
    glVertex2f(-0.26f, -0.07f);
    glVertex2f(-0.28f, -0.07f);
    glVertex2f(-0.28f, -0.01f);
    glVertex2f(-0.26f, -0.01f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(82, 160, 236);
    glVertex2f(-0.3f, -0.16f);
    glVertex2f(-0.32f, -0.16f);
    glVertex2f(-0.32f, -0.1f);
    glVertex2f(-0.3f, -0.1f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(237, 250, 254);
    glVertex2f(-0.26f, -0.0f);
    glVertex2f(-0.28f, -0.0f);
    glVertex2f(-0.28f, 0.06f);
    glVertex2f(-0.26f, 0.06f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(36, 102, 183);
    glVertex2f(-0.3f, -0.0f);
    glVertex2f(-0.32f, -0.0f);
    glVertex2f(-0.32f, 0.06f);
    glVertex2f(-0.3f, 0.06f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(82, 160, 236);
    glVertex2f(-0.38f, 0.07f);
    glVertex2f(-0.4f, 0.07f);
    glVertex2f(-0.4f, 0.13f);
    glVertex2f(-0.38f, 0.13f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(36, 102, 183);
    glVertex2f(-0.26f, 0.14f);
    glVertex2f(-0.28f, 0.14f);
    glVertex2f(-0.28f, 0.20f);
    glVertex2f(-0.26f, 0.20f);
    glEnd();

            glBegin(GL_QUADS);
    glColor3ub(82, 160, 236);
    glVertex2f(-0.015f, -0.28f);
    glVertex2f(-0.03f, -0.28f);
    glVertex2f(-0.03f, -0.25f);
    glVertex2f(-0.015f, -0.25f);
    glEnd();
            glBegin(GL_QUADS);
    glColor3ub(189, 221, 242);
    glVertex2f(-0.015f, -0.23f);
    glVertex2f(-0.03f, -0.23f);
    glVertex2f(-0.03f, -0.2f);
    glVertex2f(-0.015f, -0.2f);
    glEnd();
                glBegin(GL_QUADS);
    glColor3ub(189, 221, 242);
    glVertex2f(-0.015f, -0.18f);
    glVertex2f(-0.03f, -0.18f);
    glVertex2f(-0.03f, -0.15f);
    glVertex2f(-0.015f, -0.15f);
    glEnd();
            glBegin(GL_QUADS);
    glColor3ub(189, 221, 242);
    glVertex2f(-0.015f, -0.33f);
    glVertex2f(-0.03f, -0.33f);
    glVertex2f(-0.03f, -0.3f);
    glVertex2f(-0.015f, -0.3f);
    glEnd();
            glBegin(GL_QUADS);
    glColor3ub(189, 221, 242);
    glVertex2f(0.02f, -0.33f);
    glVertex2f(0.035f, -0.33f);
    glVertex2f(0.035f, -0.3f);
    glVertex2f(0.02f, -0.3f);
    glEnd();
                glBegin(GL_QUADS);
    glColor3ub(82, 160, 236);
    glVertex2f(0.02f, -0.28f);
    glVertex2f(0.035f, -0.28f);
    glVertex2f(0.035f, -0.25f);
    glVertex2f(0.02f, -0.25f);
    glEnd();
                glBegin(GL_QUADS);
    glColor3ub(189, 221, 242);
    glVertex2f(0.02f, -0.23f);
    glVertex2f(0.035f, -0.23f);
    glVertex2f(0.035f, -0.2f);
    glVertex2f(0.02f, -0.2f);
    glEnd();
                glBegin(GL_QUADS);
    glColor3ub(82, 160, 236);
    glVertex2f(0.02f, -0.18f);
    glVertex2f(0.035f, -0.18f);
    glVertex2f(0.035f, -0.15f);
    glVertex2f(0.02f, -0.15f);
    glEnd();

    //back
////////////////////////Lower part road //////////////////////

glBegin(GL_QUADS);



   glColor3ub(0 ,191 ,255);// White
    glVertex2f(-0.06f, -0.4f);



   glColor3ub(255,255,255);//glColor3ub(30, 144, 255);
    glVertex2f(-0.8f, -1.0f);



   glColor3ub(255,255,255);
    glVertex2f(0.8f, -1.0f);



   //glColor3ub(135 ,206 ,235);




    glColor3ub(30 ,144 ,255);
    glVertex2f(0.06f, -0.4f);
    //glColor3f(0.2f, 0.2f, 0.2f); // Dark Gray




    //glColor3f(0.2f, 0.2f, 0.2f); // Dark Gray



   glEnd();


    //building side trees
    //1st tree
  glBegin(GL_QUADS);
    glColor3ub(113, 75, 64);
    glVertex2f(0.77f, -0.4f);
    glVertex2f(0.79f, -0.4f);
    glVertex2f(0.79f, -0.25f);
    glVertex2f(0.77f, -0.25f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(113, 75, 64);
    glVertex2f(0.79f, -0.3f);
    glVertex2f(0.79f, -0.32f);
    glVertex2f(0.82f, -0.26f);
    glVertex2f(0.81f, -0.26f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(113, 75, 64);
    glVertex2f(0.77f, -0.3f);
    glVertex2f(0.77f, -0.32f);
    glVertex2f(0.74f, -0.25f);
    glVertex2f(0.75f, -0.25f);
    glEnd();



    //left side leafs
    /*
    GLfloat p40=0.71f;
    GLfloat q40= -0.08f;
    GLfloat r40 = 0.09f;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub (79, 180, 80);
    glVertex2f (p40,q40);
    for(i= 0; i<=tringle0; i++)
    {
        glVertex2f (
            p40+(r40*cos(i*tp1/tringle1)),
            q40+(r40*sin(i*tp1/tringle1))
        );
    }
    glEnd ();

    //left side leaf style
    GLfloat p41=0.712f;
    GLfloat q41= -0.165f;
    GLfloat r41 = 0.08f;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub (79, 190, 80);
    glVertex2f (p41,q41);
    for(i= 0; i<=tringle0; i++)
    {
        glVertex2f (
            p41+(r41*cos(i*tp1/tringle1)),
            q41+(r41*sin(i*tp1/tringle1))
        );
    }
    glEnd ();

    */


    // middle leafs
    GLfloat p42=0.78f;
    GLfloat q42= -0.15f;
    GLfloat r42 = 0.1f;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub (79, 180, 80);
    glVertex2f (p42,q42);
    for(i= 0; i<=tringle0; i++)
    {
        glVertex2f (
            p42+(r42*cos(i*tp1/tringle1)),
            q42+(r42*sin(i*tp1/tringle1))
        );
    }
    glEnd ();

    //middle leaf style
    GLfloat p43=0.79f;
    GLfloat q43= -0.16f;
    GLfloat r43 = 0.08f;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub (79, 190, 80);
    glVertex2f (p43,q43);
    for(i= 0; i<=tringle0; i++)
    {
        glVertex2f (
            p43+(r43*cos(i*tp1/tringle1)),
            q43+(r43*sin(i*tp1/tringle1))
        );
    }
    glEnd ();

    GLfloat p44=0.8f;
    GLfloat q44= -0.17f;
    GLfloat r44 = 0.06f;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub (79, 200, 80);
    glVertex2f (p44,q44);
    for(i= 0; i<=tringle0; i++)
    {
        glVertex2f (
            p44+(r44*cos(i*tp1/tringle1)),
            q44+(r44*sin(i*tp1/tringle1))
        );
    }
    glEnd ();

    //right side leaf
    GLfloat p45 = 0.83f;
    GLfloat q45 = -0.24f;
    GLfloat r45 = 0.04f;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub (79, 210, 80);
    glVertex2f (p45,q45);
    for(i= 0; i<=tringle0; i++)
    {
        glVertex2f (
            p45+(r45*cos(i*tp1/tringle1)),
            q45+(r45*sin(i*tp1/tringle1))
        );
    }
    glEnd ();

    //right leaf style
    GLfloat p46 = 0.835f;
    GLfloat q46 = -0.24f;
    GLfloat r46 = 0.03f;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub (79, 220, 80);
    glVertex2f (p46,q46);
    for(i= 0; i<=tringle0; i++)
    {
        glVertex2f (
            p46+(r46*cos(i*tp1/tringle1)),
            q46+(r46*sin(i*tp1/tringle1))
        );
    }
    glEnd ();

    GLfloat p47 = 0.839f;
    GLfloat q47 = -0.24f;
    GLfloat r47 = 0.022f;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub (79, 230, 80);
    glVertex2f (p47,q47);
    for(i= 0; i<=tringle0; i++)
    {
        glVertex2f (
            p47+(r47*cos(i*tp1/tringle1)),
            q47+(r47*sin(i*tp1/tringle1))
        );
    }
    glEnd ();


    //2nd tree

    glBegin(GL_QUADS);
    glColor3ub(113, 75, 64);
    glVertex2f(0.67f, -0.4f);
    glVertex2f(0.69f, -0.4f);
    glVertex2f(0.69f, -0.2f);
    glVertex2f(0.67f, -0.2f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(113, 75, 64);
    glVertex2f(0.69f, -0.28f);
    glVertex2f(0.69f, -0.29f);
    glVertex2f(0.72f, -0.25f);
    glVertex2f(0.71f, -0.25f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(113, 75, 64);
    glVertex2f(0.67f, -0.3f);
    glVertex2f(0.67f, -0.29f);
    glVertex2f(0.62f, -0.25f);
    glVertex2f(0.61f, -0.25f);
    glEnd();


    //left side leafs
    GLfloat p20=0.61f;
    GLfloat q20= -0.21f;
    GLfloat r20 = 0.06f;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub (79, 155, 80);
    glVertex2f (p20,q20);
    for(i= 0; i<=tringle0; i++)
    {
        glVertex2f (
            p20+(r20*cos(i*tp1/tringle1)),
            q20+(r20*sin(i*tp1/tringle1))
        );
    }
    glEnd ();

    //left side leaf style
    GLfloat p32=0.612f;
    GLfloat q32= -0.215f;
    GLfloat r32 = 0.05f;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub (79, 165, 80);
    glVertex2f (p32,q32);
    for(i= 0; i<=tringle0; i++)
    {
        glVertex2f (
            p32+(r32*cos(i*tp1/tringle1)),
            q32+(r32*sin(i*tp1/tringle1))
        );
    }
    glEnd ();



    // middle leafs
    GLfloat p24=0.68f;
    GLfloat q24= -0.13f;
    GLfloat r24 = 0.12f;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub (79, 180, 80);
    glVertex2f (p24,q24);
    for(i= 0; i<=tringle0; i++)
    {
        glVertex2f (
            p24+(r24*cos(i*tp1/tringle1)),
            q24+(r24*sin(i*tp1/tringle1))
        );
    }
    glEnd ();

    //middle leaf style
    GLfloat p25=0.69f;
    GLfloat q25= -0.14f;
    GLfloat r25 = 0.1f;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub (79, 190, 80);
    glVertex2f (p25,q25);
    for(i= 0; i<=tringle0; i++)
    {
        glVertex2f (
            p25+(r25*cos(i*tp1/tringle1)),
            q25+(r25*sin(i*tp1/tringle1))
        );
    }
    glEnd ();

    GLfloat p26=0.7f;
    GLfloat q26= -0.15f;
    GLfloat r26 = 0.08f;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub (79, 200, 80);
    glVertex2f (p24,q24);
    for(i= 0; i<=tringle0; i++)
    {
        glVertex2f (
            p26+(r26*cos(i*tp1/tringle1)),
            q26+(r26*sin(i*tp1/tringle1))
        );
    }
    glEnd ();

    //right side leaf
    GLfloat p21 = 0.74f;
    GLfloat q21 = -0.2f;
    GLfloat r21 = 0.06f;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub (79, 210, 80);
    glVertex2f (p21,q21);
    for(i= 0; i<=tringle0; i++)
    {
        glVertex2f (
            p21+(r21*cos(i*tp1/tringle1)),
            q21+(r21*sin(i*tp1/tringle1))
        );
    }
    glEnd ();

    //right leaf style
    GLfloat p30 = 0.745f;
    GLfloat q30 = -0.2f;
    GLfloat r30 = 0.05f;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub (79, 220, 80);
    glVertex2f (p30,q30);
    for(i= 0; i<=tringle0; i++)
    {
        glVertex2f (
            p30+(r30*cos(i*tp1/tringle1)),
            q30+(r30*sin(i*tp1/tringle1))
        );
    }
    glEnd ();

    GLfloat p31 = 0.75f;
    GLfloat q31 = -0.2f;
    GLfloat r31 = 0.04f;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub (79, 230, 80);
    glVertex2f (p31,q31);
    for(i= 0; i<=tringle0; i++)
    {
        glVertex2f (
            p31+(r31*cos(i*tp1/tringle1)),
            q31+(r31*sin(i*tp1/tringle1))
        );
    }
    glEnd ();

     //boat
         glPushMatrix();
glTranslatef(0.0f,position4, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(8, 119, 147);
    glVertex2f(-0.06f, -0.7f);
    glVertex2f(0.06f, -0.7f);
    glVertex2f(0.08f, -0.65f);
    glVertex2f(-0.08f, -0.65f);
    glEnd();



   glBegin(GL_QUADS);
    glColor3ub(217, 208, 209);
    glVertex2f(-0.08f, -0.65f);
    glVertex2f(0.08f, -0.65f);
    glVertex2f(0.06f, -0.55f);
    glVertex2f(-0.06f, -0.55f);
    glEnd();



   glBegin(GL_TRIANGLES);
    glColor3ub(217, 208, 209);
    glVertex2f(0.06f, -0.55f);
    glVertex2f(-0.06f, -0.55f);
    glVertex2f(0.0f, -0.45f);
    glEnd();



   glBegin(GL_QUADS);
    glColor3ub(91,120,138);
    glVertex2f(-0.052f, -0.63f);
    glVertex2f(0.052f, -0.63f);
    glVertex2f(0.032f, -0.53f);
    glVertex2f(-0.032f, -0.53f);
    glEnd();



   glBegin(GL_QUADS);
    glColor3ub(3,77,116);
    glVertex2f(0.032f, -0.53f);
    glVertex2f(-0.032f, -0.53f);
    glVertex2f(-0.015f, -0.5f);
    glVertex2f(0.015f, -0.5f);
    glEnd();



   glBegin(GL_QUADS);
    glColor3ub(123, 222, 254);
    glVertex2f(0.015f, -0.5f);
    glVertex2f(-0.015f, -0.5f);
    glVertex2f(-0.015f, -0.52f);
    glVertex2f(0.015f, -0.52f);
    glEnd();



   glBegin(GL_LINES);
    glColor3ub(212,0,212);
    glVertex2f(-0.012f, -0.51f);
    glColor3ub(121,0,121);
    glVertex2f(0.012f, -0.51f);
    glEnd();



   //seat
    glBegin(GL_QUADS);
    glColor3ub(199, 122, 44);
    glVertex2f(-0.03f, -0.54f);
    glVertex2f(-0.01f, -0.54f);
    glVertex2f(-0.01f, -0.55f);
    glVertex2f(-0.03f, -0.55f);
    glEnd();



   glBegin(GL_LINES);
    glColor3ub(212,212,212);
    glVertex2f(-0.015f, -0.55f);
    glVertex2f(-0.015f, -0.565f);
    glVertex2f(-0.025f, -0.55f);
    glVertex2f(-0.025f, -0.565f);
    glEnd();



   glBegin(GL_QUADS);
    glColor3ub(199, 122, 44);
    glVertex2f(-0.035f, -0.56f);
    glVertex2f(-0.005f, -0.56f);
    glVertex2f(-0.005f, -0.6f);
    glVertex2f(-0.035f, -0.6f);
    glEnd();



   glBegin(GL_TRIANGLES);
    glColor3ub(199, 122, 44);
    glVertex2f(-0.005f, -0.6f);
    glVertex2f(-0.005f, -0.58f);
    glVertex2f(-0.001f, -0.58f);
    glEnd();



   //2nd seat
    glBegin(GL_QUADS);
    glColor3ub(199, 122, 44);
    glVertex2f(0.03f, -0.54f);
    glVertex2f(0.01f, -0.54f);
    glVertex2f(0.01f, -0.55f);
    glVertex2f(0.03f, -0.55f);
    glEnd();



   glBegin(GL_LINES);
    glColor3ub(212,212,212);
    glVertex2f(0.015f, -0.55f);
    glVertex2f(0.015f, -0.565f);
    glVertex2f(0.025f, -0.55f);
    glVertex2f(0.025f, -0.565f);
    glEnd();



   glBegin(GL_QUADS);
    glColor3ub(199, 122, 44);
    glVertex2f(0.035f, -0.56f);
    glVertex2f(0.005f, -0.56f);
    glVertex2f(0.005f, -0.6f);
    glVertex2f(0.035f, -0.6f);
    glEnd();



   glBegin(GL_TRIANGLES);
    glColor3ub(199, 122, 44);
    glVertex2f(0.005f, -0.6f);
    glVertex2f(0.005f, -0.58f);
    glVertex2f(0.001f, -0.58f);
    glEnd();
    glPopMatrix();
    ////////////////////////////////////////////////////////////////////////////////
    //////////////////Train////////////////
    //Train Body

    //Body
        glPushMatrix();
glTranslatef(position8,0.0f, 0.0f);



    //Train wheel 1
    GLfloat p810 = -0.69f;
    GLfloat q810 = -0.6f;
    GLfloat r810 = 0.016f;
    int triangle810 = 40;

    GLfloat tp810 =2.0f * 3.1416  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor4f(0.15f, 0.07f, 0.05f, 1.0f);
    glVertex2f (p810,q810);
    for(int i= 0; i<=triangle810; i++)
    {
        glColor4f(0.15f, 0.07f, 0.05f, 1.0f);
        glVertex2f (
            p810+(r810*cos(i*tp810/triangle810)),
            q810+(r810*sin(i*tp810/triangle810))
        );
    }
    glEnd ();

    //Train wheel 2
    GLfloat p820 = -0.63f;
    GLfloat q820 = -0.6f;
    GLfloat r820 = 0.016f;
    int triangle820 = 41;

    GLfloat tp820 =2.0f * 3.1416  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor4f(0.15f, 0.07f, 0.05f, 1.0f);
    glVertex2f (p820,q820);
    for(int i= 0; i<=triangle820; i++)
    {
        glColor4f(0.15f, 0.07f, 0.05f, 1.0f);
        glVertex2f (
            p820+(r820*cos(i*tp820/triangle820)),
            q820+(r820*sin(i*tp820/triangle820))
        );
    }
    glEnd ();

    //Train wheel 3
    GLfloat p830 = -0.55f;
    GLfloat q830 = -0.6f;
    GLfloat r830 = 0.016f;
    int triangle830 = 41;

    GLfloat tp830 =2.0f * 3.1416  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor4f(0.15f, 0.07f, 0.05f, 1.0f);
    glVertex2f (p830,q830);
    for(int i= 0; i<=triangle830; i++)
    {
        glColor4f(0.15f, 0.07f, 0.05f, 1.0f);
        glVertex2f (
            p830+(r830*cos(i*tp830/triangle830)),
            q830+(r830*sin(i*tp830/triangle830))
        );
    }
    glEnd ();

    //Train wheel 4
    GLfloat p840 = -0.49f;
    GLfloat q840 = -0.6f;
    GLfloat r840 = 0.016f;
    int triangle840 = 41;

    GLfloat tp840 =2.0f * 3.1416  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor4f(0.15f, 0.07f, 0.05f, 1.0f);
    glVertex2f (p840,q840);
    for(int i= 0; i<=triangle840; i++)
    {
        glColor4f(0.15f, 0.07f, 0.05f, 1.0f);
        glVertex2f (
            p840+(r840*cos(i*tp840/triangle840)),
            q840+(r840*sin(i*tp840/triangle840))
        );
    }
    glEnd ();

    //Train wheel 5
    GLfloat p850 = -0.41f;
    GLfloat q850 = -0.6f;
    GLfloat r850 = 0.016f;
    int triangle850 = 41;

    GLfloat tp850 =2.0f * 3.1416  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor4f(0.15f, 0.07f, 0.05f, 1.0f);
    glVertex2f (p850,q850);
    for(int i= 0; i<=triangle840; i++)
    {
        glColor4f(0.15f, 0.07f, 0.05f, 1.0f);
        glVertex2f (
            p850+(r850*cos(i*tp850/triangle850)),
            q850+(r850*sin(i*tp850/triangle850))
        );
    }
    glEnd ();

    //Train wheel 6
    GLfloat p860 = -0.36f;
    GLfloat q860 = -0.6f;
    GLfloat r860 = 0.016f;
    int triangle860 = 41;

    GLfloat tp860 =2.0f * 3.1416  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor4f(0.15f, 0.07f, 0.05f, 1.0f);
    glVertex2f (p860,q860);
    for(int i= 0; i<=triangle860; i++)
    {
        glColor4f(0.15f, 0.07f, 0.05f, 1.0f);
        glVertex2f (
            p860+(r860*cos(i*tp860/triangle860)),
            q860+(r860*sin(i*tp860/triangle860))
        );
    }
    glEnd ();

    //Train wheel 7
    GLfloat p870 = -0.22f;
    GLfloat q870 = -0.6f;
    GLfloat r870 = 0.016f;
    int triangle870 = 41;

    GLfloat tp870 =2.0f * 3.1416  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor4f(0.15f, 0.07f, 0.05f, 1.0f);
    glVertex2f (p870,q870);
    for(int i= 0; i<=triangle870; i++)
    {
        glColor4f(0.15f, 0.07f, 0.05f, 1.0f);
        glVertex2f (
            p870+(r870*cos(i*tp870/triangle870)),
            q870+(r870*sin(i*tp870/triangle870))
        );
    }
    glEnd ();

    //Train wheel 8
    GLfloat p880 = -0.17f;
    GLfloat q880 = -0.6f;
    GLfloat r880 = 0.016f;
    int triangle880 = 41;

    GLfloat tp880 =2.0f * 3.1416  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor4f(0.15f, 0.07f, 0.05f, 1.0f);
    glVertex2f (p880,q880);
    for(int i= 0; i<=triangle880; i++)
    {
        glColor4f(0.15f, 0.07f, 0.05f, 1.0f);
        glVertex2f (
            p880+(r880*cos(i*tp880/triangle880)),
            q880+(r880*sin(i*tp880/triangle880))
        );
    }
    glEnd ();


    //Train wheel 9
    GLfloat p890 = -0.11f;
    GLfloat q890 = -0.6f;
    GLfloat r890 = 0.016f;
    int triangle890 = 41;

    GLfloat tp890 =2.0f * 3.1416  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor4f(0.15f, 0.07f, 0.05f, 1.0f);
    glVertex2f (p890,q890);
    for(int i= 0; i<=triangle890; i++)
    {
        glColor4f(0.15f, 0.07f, 0.05f, 1.0f);
        glVertex2f (
            p890+(r890*cos(i*tp890/triangle890)),
            q890+(r890*sin(i*tp890/triangle890))
        );
    }
    glEnd ();

    //Train wheel 10
    GLfloat p90 = -0.06f;
    GLfloat q90 = -0.6f;
    GLfloat r90 = 0.016f;
    int triangle90 = 41;

    GLfloat tp90 =2.0f * 3.1416  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor4f(0.15f, 0.07f, 0.05f, 1.0f);
    glVertex2f (p90,q90);
    for(int i= 0; i<=triangle90; i++)
    {
        glColor4f(0.15f, 0.07f, 0.05f, 1.0f);
        glVertex2f (
            p90+(r90*cos(i*tp90/triangle90)),
            q90+(r90*sin(i*tp90/triangle90))
        );
    }
    glEnd ();

    //Train wheel 11
    GLfloat p91 = 0.08f;
    GLfloat q91 = -0.6f;
    GLfloat r91 = 0.016f;
    int triangle91 = 41;

    GLfloat tp91 =2.0f * 3.1416  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor4f(0.15f, 0.07f, 0.05f, 1.0f);
    glVertex2f (p91,q91);
    for(int i= 0; i<=triangle91; i++)
    {
        glColor4f(0.15f, 0.07f, 0.05f, 1.0f);
        glVertex2f (
            p91+(r91*cos(i*tp91/triangle91)),
            q91+(r91*sin(i*tp91/triangle91))
        );
    }
    glEnd ();

    //Train wheel 12
    GLfloat p92 = 0.13f;
    GLfloat q92 = -0.6f;
    GLfloat r92 = 0.016f;
    int triangle92 = 41;

    GLfloat tp92 =2.0f * 3.1416  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor4f(0.15f, 0.07f, 0.05f, 1.0f);
    glVertex2f (p92,q92);
    for(int i= 0; i<=triangle92; i++)
    {
        glColor4f(0.15f, 0.07f, 0.05f, 1.0f);
        glVertex2f (
            p92+(r92*cos(i*tp92/triangle92)),
            q92+(r92*sin(i*tp92/triangle92))
        );
    }
    glEnd ();

    //Train wheel 13
    GLfloat p93 = 0.19f;
    GLfloat q93 = -0.6f;
    GLfloat r93 = 0.016f;
    int triangle93 = 41;

    GLfloat tp93 =2.0f * 3.1416  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor4f(0.15f, 0.07f, 0.05f, 1.0f);
    glVertex2f (p93,q93);
    for(int i= 0; i<=triangle93; i++)
    {
        glColor4f(0.15f, 0.07f, 0.05f, 1.0f);
        glVertex2f (
            p93+(r93*cos(i*tp93/triangle93)),
            q93+(r93*sin(i*tp93/triangle93))
        );
    }
    glEnd ();

    //Train wheel 14
    GLfloat p94 = 0.24f;
    GLfloat q94 = -0.6f;
    GLfloat r94 = 0.016f;
    int triangle94 = 41;

    GLfloat tp94 =2.0f * 3.1416  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor4f(0.15f, 0.07f, 0.05f, 1.0f);
    glVertex2f (p94,q94);
    for(int i= 0; i<=triangle94; i++)
    {
        glColor4f(0.15f, 0.07f, 0.05f, 1.0f);
        glVertex2f (
            p94+(r94*cos(i*tp94/triangle94)),
            q94+(r94*sin(i*tp94/triangle94))
        );
    }
    glEnd ();

    //Train wheel 15
    GLfloat p96 = 0.36f;
    GLfloat q96 = -0.6f;
    GLfloat r96 = 0.016f;
    int triangle96 = 41;

    GLfloat tp96 =2.0f * 3.1416  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor4f(0.15f, 0.07f, 0.05f, 1.0f);
    glVertex2f (p96,q96);
    for(int i= 0; i<=triangle96; i++)
    {
        glColor4f(0.15f, 0.07f, 0.05f, 1.0f);
        glVertex2f (
            p96+(r96*cos(i*tp96/triangle96)),
            q96+(r96*sin(i*tp96/triangle96))
        );
    }
    glEnd ();

    //Train wheel 16
    GLfloat p97 = 0.41f;
    GLfloat q97 = -0.6f;
    GLfloat r97 = 0.016f;
    int triangle97 = 41;

    GLfloat tp97 =2.0f * 3.1416  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor4f(0.15f, 0.07f, 0.05f, 1.0f);
    glVertex2f (p97,q97);
    for(int i= 0; i<=triangle97; i++)
    {
        glColor4f(0.15f, 0.07f, 0.05f, 1.0f);
        glVertex2f (
            p97+(r97*cos(i*tp97/triangle97)),
            q97+(r97*sin(i*tp97/triangle97))
        );
    }
    glEnd ();

    //Train wheel 17
    GLfloat p98 = 0.48f;
    GLfloat q98 = -0.6f;
    GLfloat r98 = 0.016f;
    int triangle98 = 41;

    GLfloat tp98 =2.0f * 3.1416  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor4f(0.15f, 0.07f, 0.05f, 1.0f);
    glVertex2f (p98,q98);
    for(int i= 0; i<=triangle98; i++)
    {
        glColor4f(0.15f, 0.07f, 0.05f, 1.0f);
        glVertex2f (
            p98+(r98*cos(i*tp98/triangle98)),
            q98+(r98*sin(i*tp98/triangle98))
        );
    }
    glEnd ();

    //Train wheel 18
    GLfloat p99 = 0.54f;
    GLfloat q99 = -0.6f;
    GLfloat r99 = 0.016f;
    int triangle99 = 41;

    GLfloat tp99 =2.0f * 3.1416  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor4f(0.15f, 0.07f, 0.05f, 1.0f);
    glVertex2f (p99,q99);
    for(int i= 0; i<=triangle99; i++)
    {
        glColor4f(0.15f, 0.07f, 0.05f, 1.0f);
        glVertex2f (
            p99+(r99*cos(i*tp99/triangle99)),
            q99+(r99*sin(i*tp99/triangle99))
        );
    }
    glEnd ();

    //Train wheel 19
    GLfloat p100 = 0.63f;
    GLfloat q100 = -0.6f;
    GLfloat r100 = 0.016f;
    int triangle100 = 41;

    GLfloat tp100 =2.0f * 3.1416  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor4f(0.15f, 0.07f, 0.05f, 1.0f);
    glVertex2f (p100,q100);
    for(int i= 0; i<=triangle100; i++)
    {
        glColor4f(0.15f, 0.07f, 0.05f, 1.0f);
        glVertex2f (
            p100+(r100*cos(i*tp100/triangle100)),
            q100+(r100*sin(i*tp100/triangle100))
        );
    }
    glEnd ();

    //Train wheel 20
    GLfloat p101 = 0.69f;
    GLfloat q101 = -0.6f;
    GLfloat r101 = 0.016f;
    int triangle101 = 41;

    GLfloat tp101 =2.0f * 3.1416  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor4f(0.15f, 0.07f, 0.05f, 1.0f);
    glVertex2f (p101,q101);
    for(int i= 0; i<=triangle101; i++)
    {
        glColor4f(0.15f, 0.07f, 0.05f, 1.0f);
        glVertex2f (
            p101+(r101*cos(i*tp101/triangle101)),
            q101+(r101*sin(i*tp101/triangle101))
        );
    }
    glEnd ();
    //body2
      glBegin(GL_QUADS);
    glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
    glVertex2f(0.7f, -0.52f);
    glVertex2f(0.75f, -0.6f);
    glVertex2f(-0.75f, -0.6f);
    glVertex2f(-0.7f, -0.52);
    glEnd();

    //Border Line 1
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.7f, -0.59f);
    glVertex2f(0.75f, -0.6f);
    glVertex2f(-0.75f, -0.6f);
    glVertex2f(-0.7f, -0.59);
    glEnd();

    //Border Line 2
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(0.7f, -0.58f);
    glVertex2f(0.74f, -0.59f);
    glVertex2f(-0.74f, -0.59f);
    glVertex2f(-0.7f, -0.58);
    glEnd();

    //Border Triangle 1
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(0.725f, -0.56f);
    glVertex2f(0.745f, -0.59f);
    glVertex2f(0.7f, -0.59);
    glEnd();

    //Border Triangle 2
    glBegin(GL_TRIANGLES);
    glColor4f(0.26f, 0.27f, 0.27f, 1.0f);
    glVertex2f(-0.725f, -0.56f);
    glVertex2f(-0.745f, -0.59f);
    glVertex2f(-0.7f, -0.59);
    glEnd();

    //Train Front Glass
    glBegin(GL_QUADS);
    glColor4f(0.26f, 0.27f, 0.27f, 1.0f);
    glVertex2f(0.71f, -0.528f);
    glVertex2f(0.72f, -0.55f);
    glVertex2f(0.6f, -0.55f);
    glVertex2f(0.6f, -0.528);
    glEnd();

    //Train Back Glass
    glBegin(GL_QUADS);
    glColor4f(0.26f, 0.27f, 0.27f, 1.0f);
    glVertex2f(-0.71f, -0.528f);
    glVertex2f(-0.72f, -0.55f);
    glVertex2f(-0.6f, -0.55f);
    glVertex2f(-0.6f, -0.528);
    glEnd();


    //Border Line 3
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(0.69f, -0.57f);
    glVertex2f(0.69f, -0.58f);
    glVertex2f(-0.69f, -0.58f);
    glVertex2f(-0.69f, -0.57);
    glEnd();


    //Border Line 4
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(0.67f, -0.56f);
    glVertex2f(0.67f, -0.57f);
    glVertex2f(-0.67f, -0.57f);
    glVertex2f(-0.67f, -0.56);
    glEnd();


    //Body Divider 1
    glBegin(GL_QUADS);
    glColor4f(0.26f, 0.27f, 0.27f, 1.0f);
    glVertex2f(0.4425f, -0.52f);
    glVertex2f(0.4425f, -0.6f);
    glVertex2f(0.44f, -0.6f);
    glVertex2f(0.44f, -0.52);
    glEnd();

    //Body Divider 2
    glBegin(GL_QUADS);
    glColor4f(0.26f, 0.27f, 0.27f, 1.0f);
    glVertex2f(0.16f, -0.52f);
    glVertex2f(0.16f, -0.6f);
    glVertex2f(0.1625f, -0.6f);
    glVertex2f(0.1625f, -0.52);
    glEnd();

    //Body Divider 3
    glBegin(GL_QUADS);
    glColor4f(0.26f, 0.27f, 0.27f, 1.0f);
    glVertex2f(-0.14f, -0.52f);
    glVertex2f(-0.14f, -0.6f);
    glVertex2f(-0.1425f, -0.6f);
    glVertex2f(-0.1425f, -0.52);
    glEnd();

    //Body Divider 4
    glBegin(GL_QUADS);
    glColor4f(0.26f, 0.27f, 0.27f, 1.0f);
    glVertex2f(-0.4425f, -0.52f);
    glVertex2f(-0.4425f, -0.6f);
    glVertex2f(-0.44f, -0.6f);
    glVertex2f(-0.44f, -0.52);
    glEnd();


    //Train Gate 1
    glBegin(GL_QUADS);
    glColor4f(0.26f, 0.27f, 0.27f, 1.0f);
    glVertex2f(0.32f, -0.53f);
    glVertex2f(0.32f, -0.59);
    glVertex2f(0.28f, -0.59f);
    glVertex2f(0.28f, -0.53);
    glEnd();

    //Train Gate 2
    glBegin(GL_QUADS);
    glColor4f(0.26f, 0.27f, 0.27f, 1.0f);
    glVertex2f(0.03f, -0.53f);
    glVertex2f(0.03f, -0.59f);
    glVertex2f(-0.01f, -0.59f);
    glVertex2f(-0.01f, -0.53f);
    glEnd();

    //Train Gate 3
    glBegin(GL_QUADS);
    glColor4f(0.26f, 0.27f, 0.27f, 1.0f);
    glVertex2f(-0.27f, -0.53f);
    glVertex2f(-0.27f, -0.59);
    glVertex2f(-0.31f, -0.59f);
    glVertex2f(-0.31f, -0.53);
    glEnd();

    //Train Window 1
    glBegin(GL_QUADS);
    glColor4f(0.26f, 0.27f, 0.27f, 1.0f);
    glVertex2f(-0.27f, -0.53f);
    glVertex2f(-0.27f, -0.59);
    glVertex2f(-0.31f, -0.59f);
    glVertex2f(-0.31f, -0.53);
    glEnd();


   glPopMatrix();

////////Bridge///////////////////////////////////////////

    //Bridge Cloudy Shade on River



    //Bridge Line
    glBegin(GL_QUADS);
    glColor4f(0.37f, 0.45f, 0.50f, 1.0f);
    glVertex2f(1.0f, -0.45f);
    glVertex2f(1.0f, -0.46f);
    glVertex2f(-1.0f, -0.46f);
    glVertex2f(-1.0f, -0.45f);
    glEnd();

    //Bridge 2nd Line
    glBegin(GL_QUADS);
    glColor4f(0.37f, 0.45f, 0.50f, 1.0f);
    glVertex2f(1.0f, -0.48f);
    glVertex2f(1.0f, -0.51f);
    glVertex2f(-1.0f, -0.51f);
    glVertex2f(-1.0f, -0.48);
    glEnd();

    //Shade
    glBegin(GL_QUADS);
    glColor4f(0.76f, 0.83f, 0.87f, 1.0f);
    glVertex2f(-0.33f, -0.48f);
    glVertex2f(-0.35f, -0.49f);
    glVertex2f(-0.85f, -0.49f);
    glVertex2f(-0.83f, -0.48);
    glEnd();

    //Triangle Handles 1
    glBegin(GL_QUADS);
    glColor4f(0.37f, 0.45f, 0.50f, 1.0f);
    glVertex2f(-1.05f, -0.51f);
    glVertex2f(-0.95f, -0.62f);
    glVertex2f(-0.97f, -0.62f);
    glVertex2f(-1.07f, -0.51f);
    glEnd();

    //Triangle Handles 1
    glBegin(GL_QUADS);
    glVertex2f(-0.85f, -0.51f);
    glVertex2f(-0.95f, -0.62f);
    glVertex2f(-0.97f, -0.62f);
    glVertex2f(-0.87f, -0.51f);
    glEnd();

    //Triangle Handles 2
    glBegin(GL_QUADS);
    glVertex2f(-0.85f, -0.51f);
    glVertex2f(-0.75f, -0.62f);
    glVertex2f(-0.77f, -0.62f);
    glVertex2f(-0.87f, -0.51f);
    glEnd();

    //Triangle Handles 3
    glBegin(GL_QUADS);
    glVertex2f(-0.65f, -0.51f);
    glVertex2f(-0.77f, -0.62f);
    glVertex2f(-0.75f, -0.62f);
    glVertex2f(-0.63f, -0.51f);
    glEnd();

    //Triangle Handles 4
    glBegin(GL_QUADS);
    glVertex2f(-0.65f, -0.51f);
    glVertex2f(-0.55f, -0.62f);
    glVertex2f(-0.53f, -0.62f);
    glVertex2f(-0.63f, -0.51f);
    glEnd();

    //Triangle Handles 5
    glBegin(GL_QUADS);
    glVertex2f(-0.45f, -0.51f);
    glVertex2f(-0.55f, -0.62f);
    glVertex2f(-0.53f, -0.62f);
    glVertex2f(-0.43f, -0.51f);
    glEnd();

    //Triangle Handles 6
    glBegin(GL_QUADS);
    glVertex2f(-0.45f, -0.51f);
    glVertex2f(-0.35f, -0.62f);
    glVertex2f(-0.33f, -0.62f);
    glVertex2f(-0.43f, -0.51f);
    glEnd();

    //Triangle Handles 7
    glBegin(GL_QUADS);
    glVertex2f(-0.25f, -0.51f);
    glVertex2f(-0.35f, -0.62f);
    glVertex2f(-0.33f, -0.62f);
    glVertex2f(-0.23f, -0.51f);
    glEnd();

    //Triangle Handles 8
    glBegin(GL_QUADS);
    glVertex2f(-0.25f, -0.51f);
    glVertex2f(-0.15f, -0.62f);
    glVertex2f(-0.13f, -0.62f);
    glVertex2f(-0.23f, -0.51f);
    glEnd();

    //Triangle Handles 9
    glBegin(GL_QUADS);
    glVertex2f(-0.05f, -0.51f);
    glVertex2f(-0.15f, -0.62f);
    glVertex2f(-0.13f, -0.62f);
    glVertex2f(-0.03f, -0.51f);
    glEnd();

    //Triangle Handles 10
    glBegin(GL_QUADS);
    glVertex2f(-0.05f, -0.51f);
    glVertex2f(0.05f, -0.62f);
    glVertex2f(0.07f, -0.62f);
    glVertex2f(-0.03f, -0.51f);
    glEnd();

    //Triangle Handles 11
    glBegin(GL_QUADS);
    glVertex2f(0.15f, -0.51f);
    glVertex2f(0.07f, -0.62f);
    glVertex2f(0.05f, -0.62f);
    glVertex2f(0.13f, -0.51f);
    glEnd();

    //Triangle Handles 12
    glBegin(GL_QUADS);
    glVertex2f(0.15f, -0.51f);
    glVertex2f(0.25f, -0.62f);
    glVertex2f(0.23f, -0.62f);
    glVertex2f(0.13f, -0.51f);
    glEnd();

    //Triangle Handles 13
    glBegin(GL_QUADS);
    glVertex2f(0.35f, -0.51f);
    glVertex2f(0.25f, -0.62f);
    glVertex2f(0.23f, -0.62f);
    glVertex2f(0.33f, -0.51f);
    glEnd();

    //Triangle Handles 14
    glBegin(GL_QUADS);
    glVertex2f(0.35f, -0.51f);
    glVertex2f(0.45f, -0.62f);
    glVertex2f(0.43f, -0.62f);
    glVertex2f(0.33f, -0.51f);
    glEnd();

    //Triangle Handles 15
    glBegin(GL_QUADS);
    glVertex2f(0.55f, -0.51f);
    glVertex2f(0.45f, -0.62f);
    glVertex2f(0.43f, -0.62f);
    glVertex2f(0.53f, -0.51f);
    glEnd();

    //Triangle Handles 16
    glBegin(GL_QUADS);
    glVertex2f(0.55f, -0.51f);
    glVertex2f(0.65f, -0.62f);
    glVertex2f(0.63f, -0.62f);
    glVertex2f(0.53f, -0.51f);
    glEnd();

    //Triangle Handles 17
    glBegin(GL_QUADS);
    glVertex2f(0.75f, -0.51f);
    glVertex2f(0.65f, -0.62f);
    glVertex2f(0.63f, -0.62f);
    glVertex2f(0.73f, -0.51f);
    glEnd();

    //Triangle Handles 18
    glBegin(GL_QUADS);
    glVertex2f(0.75f, -0.51f);
    glVertex2f(0.85f, -0.62f);
    glVertex2f(0.83f, -0.62f);
    glVertex2f(0.73f, -0.51f);
    glEnd();

    //Triangle Handles 19
    glBegin(GL_QUADS);
    glVertex2f(0.95f, -0.51f);
    glVertex2f(0.85f, -0.62f);
    glVertex2f(0.83f, -0.62f);
    glVertex2f(0.93f, -0.51f);
    glEnd();

    //Triangle Handles 20
    glBegin(GL_QUADS);
    glVertex2f(0.95f, -0.51f);
    glVertex2f(1.05f, -0.62f);
    glVertex2f(1.03f, -0.62f);
    glVertex2f(0.93f, -0.51f);
    glEnd();

    //Bridge 3rd Line
    glBegin(GL_QUADS);
    glColor4f(0.37f, 0.45f, 0.50f, 1.0f);
    glVertex2f(1.0f, -0.62f);
    glVertex2f(1.0f, -0.67f);
    glVertex2f(-1.0f, -0.67f);
    glVertex2f(-1.0f, -0.62f);
    glEnd();

    //Shady Line
    glBegin(GL_QUADS);
    glColor4f(0.33f, 0.40f, 0.45f, 1.0f);
    glVertex2f(1.0f, -0.64f);
    glVertex2f(1.0f, -0.67f);
    glVertex2f(-1.0f, -0.67f);
    glVertex2f(-1.0f, -0.64f);
    glEnd();

    //Shade
    glBegin(GL_QUADS);
    glColor4f(0.76f, 0.83f, 0.87f, 1.0f);
    glVertex2f(-0.37f, -0.62f);
    glVertex2f(-0.39f, -0.63f);
    glVertex2f(-0.83f, -0.63f);
    glVertex2f(-0.81f, -0.62);
    glEnd();

    //Bridge Pillar 1
    glBegin(GL_QUADS);
    glColor4f(0.37f, 0.45f, 0.50f, 1.0f);
    glVertex2f(-0.6f, -0.67f);
    glVertex2f(-0.6f, -0.83f);
    glVertex2f(-0.7f, -0.83f);
    glVertex2f(-0.7f, -0.67f);
    glEnd();

    //Shade 1
    glBegin(GL_QUADS);
    glColor4f(0.47f, 0.58f, 0.62f, 1.0f);
    glVertex2f(-0.67f, -0.69f);
    glVertex2f(-0.67f, -0.83f);
    glVertex2f(-0.685f, -0.83f);
    glVertex2f(-0.685f, -0.69f);
    glEnd();

    //Extra Shade Below 1
    glBegin(GL_TRIANGLES);
    glColor4f(0.33f, 0.40f, 0.45f, 1.0f);
    glVertex2f(-0.6f, -0.64f);
    glVertex2f(-0.6f, -0.79f);
    glVertex2f(-0.68f, -0.64f);
    glEnd();

    //Extra Shade 1
    glBegin(GL_TRIANGLES);
    glColor4f(0.46f, 0.53f, 0.02f, 1.0f);
    glVertex2f(-0.6f, -0.67f);
    glVertex2f(-0.6f, -0.83f);
    glVertex2f(-0.55f, -0.79f);
    glEnd();


    //Bridge Pillar 2
    glBegin(GL_QUADS);
    glColor4f(0.37f, 0.45f, 0.50f, 1.0f);
    glVertex2f(-0.8f, -0.67f);
    glVertex2f(-0.8f, -0.83f);
    glVertex2f(-0.9f, -0.83f);
    glVertex2f(-0.9f, -0.67f);
    glEnd();

    //Shade 2
    glBegin(GL_QUADS);
    glColor4f(0.47f, 0.58f, 0.62f, 1.0f);
    glVertex2f(-0.87f, -0.69f);
    glVertex2f(-0.87f, -0.83f);
    glVertex2f(-0.885f, -0.83f);
    glVertex2f(-0.885f, -0.69f);
    glEnd();

    //Extra Shade Below 2
    glBegin(GL_TRIANGLES);
    glColor4f(0.33f, 0.40f, 0.45f, 1.0f);
    glVertex2f(-0.8f, -0.64f);
    glVertex2f(-0.8f, -0.79f);
    glVertex2f(-0.88f, -0.64f);
    glEnd();

    //Extra Shade 2
    glBegin(GL_TRIANGLES);
    glColor4f(0.46f, 0.53f, 0.02f, 1.0f);
    glVertex2f(-0.8f, -0.67f);
    glVertex2f(-0.8f, -0.83f);
    glVertex2f(-0.75f, -0.79f);
    glEnd();


    //Bridge Pillar 3
    glBegin(GL_QUADS);
    glColor4f(0.37f, 0.45f, 0.50f, 1.0f);
    glVertex2f(0.6f, -0.67f);
    glVertex2f(0.6f, -0.83f);
    glVertex2f(0.7f, -0.83f);
    glVertex2f(0.7f, -0.67f);
    glEnd();

    //Shade 3
    glBegin(GL_QUADS);
    glColor4f(0.47f, 0.58f, 0.62f, 1.0f);
    glVertex2f(0.615f, -0.69f);
    glVertex2f(0.615f, -0.83f);
    glVertex2f(0.63f, -0.83f);
    glVertex2f(0.63f, -0.69f);
    glEnd();

    //Extra Shade Below 3
    glBegin(GL_TRIANGLES);
    glColor4f(0.33f, 0.40f, 0.45f, 1.0f);
    glVertex2f(0.7f, -0.64f);
    glVertex2f(0.7f, -0.79f);
    glVertex2f(0.62f, -0.64f);
    glEnd();

    //Extra Shade 3
    glBegin(GL_TRIANGLES);
    glColor4f(0.38f, 0.41f, 0.03f, 1.0f);
    glVertex2f(0.7f, -0.67f);
    glVertex2f(0.7f, -0.83f);
    glVertex2f(0.75f, -0.79f);
    glEnd();

    //Bridge Pillar 4
    glBegin(GL_QUADS);
    glColor4f(0.37f, 0.45f, 0.50f, 1.0f);
    glVertex2f(0.8f, -0.67f);
    glVertex2f(0.8f, -0.83f);
    glVertex2f(0.9f, -0.83f);
    glVertex2f(0.9f, -0.67f);
    glEnd();

    //Shade 4
    glBegin(GL_QUADS);
    glColor4f(0.47f, 0.58f, 0.62f, 1.0f);
    glVertex2f(0.815f, -0.69f);
    glVertex2f(0.815f, -0.83f);
    glVertex2f(0.83f, -0.83f);
    glVertex2f(0.83f, -0.69f);
    glEnd();

    //Extra Shade Below 4
    glBegin(GL_TRIANGLES);
    glColor4f(0.33f, 0.40f, 0.45f, 1.0f);
    glVertex2f(0.9f, -0.64f);
    glVertex2f(0.9f, -0.79f);
    glVertex2f(0.82f, -0.64f);
    glEnd();

    //Extra Shade 3
    glBegin(GL_TRIANGLES);
    glColor4f(0.38f, 0.41f, 0.03f, 1.0f);
    glVertex2f(0.9f, -0.67f);
    glVertex2f(0.9f, -0.83f);
    glVertex2f(0.95f, -0.79f);
    glEnd();

////////////////////waterfall animation


    glPushMatrix();
glTranslatef(0.0f,position3, 0.0f);


glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.1f, 0.03f);
    glVertex2f(-0.1, 0.05f);
    glVertex2f(-0.09f, 0.02f);
    glVertex2f(-0.09f, 0.06f);
    glVertex2f(-0.08f, 0.03f);
    glVertex2f(-0.08f, 0.05f);
    glEnd();




   glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.1f, -0.02f);
    glVertex2f(-0.1, 0.01f);
    glVertex2f(-0.09f, -0.03f);
    glVertex2f(-0.09f, 0.05f);
    glVertex2f(-0.08f, -0.02f);
    glVertex2f(-0.08f, 0.01f);
    glEnd();




    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.1f, -0.13f);
    glVertex2f(-0.1, -0.15f);
    glVertex2f(-0.09f, -0.12f);
    glVertex2f(-0.09f, -0.16f);
    glVertex2f(-0.08f, -0.13f);
    glVertex2f(-0.08f, -0.15f);
    glEnd();




    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.1f, -0.12f);
    glVertex2f(-0.1f, -0.11f);
    glVertex2f(-0.09f, -0.13f);
    glVertex2f(-0.09f, -0.15f);
    glVertex2f(-0.08f, -0.12f);
    glVertex2f(-0.08f, -0.11f);
    glEnd();




    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.1f, -0.23f);
    glVertex2f(-0.1, -0.25f);
    glVertex2f(-0.09f, -0.22f);
    glVertex2f(-0.09f, -0.26f);
    glVertex2f(-0.08f, -0.23f);
    glVertex2f(-0.08f, -0.25f);
    glEnd();




    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.1f, -0.22f);
    glVertex2f(-0.1f, -0.21f);
    glVertex2f(-0.09f, -0.23f);
    glVertex2f(-0.09f, -0.25f);
    glVertex2f(-0.08f, -0.22f);
    glVertex2f(-0.08f, -0.21f);
    glEnd();




    glPopMatrix();




///////////////////////////////////
//DRONE

   //drone stand


       glBegin(GL_QUADS);
    glColor3f(0.12f, 0.63f, 0.89f);
    glVertex2f(-0.045f, -0.02f);
    glVertex2f(0.045f, -0.02f);
    glVertex2f(0.045f, -0.03f);
    glVertex2f(-0.045f, -0.03f);
    glEnd();
    glBegin(GL_TRIANGLES);

    glColor3f(0.89f, 0.92f, 0.91f);

    glVertex2f(-0.045f, -0.03f);
    glVertex2f(-0.035f, -0.03f);
    glVertex2f(-0.03f, -0.055f);

    glEnd();
        glBegin(GL_TRIANGLES);

    glColor3f(0.89f, 0.92f, 0.91f);

    glVertex2f(-0.025f, -0.03f);
    glVertex2f(-0.015f, -0.03f);
    glVertex2f(-0.014f, -0.055f);

    glEnd();
        glBegin(GL_TRIANGLES);

    glColor3f(0.89f, 0.92f, 0.91f);

    glVertex2f(0.045f, -0.03f);
    glVertex2f(0.035f, -0.03f);
    glVertex2f(0.03f, -0.055f);

    glEnd();
        glBegin(GL_TRIANGLES);

    glColor3f(0.89f, 0.92f, 0.91f);

    glVertex2f(0.025f, -0.03f);
    glVertex2f(0.015f, -0.03f);
    glVertex2f(0.014f, -0.055f);

    glEnd();
    //dronee
glPushMatrix();
glTranslatef(position,0.0f, 0.0f);

    glPushMatrix();
glTranslatef(0.0f,position2, 0.0f);




  //  glBegin(GL_TRIANGLES);

   // glColor3f(0.0f, 0.0f, 0.87f);

   // glVertex2f(0.0f, 0.05f);
   // glVertex2f(-0.05f, 0.0f);
   // glVertex2f(0.05f, 0.0f);

   // glEnd();



   //body drone

    GLfloat p990=0.0f;
    GLfloat q990= 0.0f;
    GLfloat r990 = 0.01f;
    int tringle990=40;

    GLfloat tp990 =2.0f * 3.1416  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub (76, 94, 96);
    glVertex2f (p990,q990);
    for(i= 0; i<=tringle990; i++)
    {
        glVertex2f (
            p990+(r990*cos(i*tp990/tringle990)),
            q990+(r990*sin(i*tp990/tringle990))
        );


    }
    glEnd ();


        GLfloat p980=0.0f;
    GLfloat q980= -0.007f;
    GLfloat r980 = 0.004f;
    int tringle980=40;

    GLfloat tp980 =2.0f * 3.1416  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub (102, 254, 231);
    glVertex2f (p980,q980);
    for(i= 0; i<=tringle980; i++)
    {
        glVertex2f (
            p980+(r980*cos(i*tp980/tringle980)),
            q980+(r980*sin(i*tp980/tringle980))
        );


    }
    glEnd ();
    glBegin(GL_QUADS);
    glColor3f(0.65f, 0.73f, 0.72f);
    glVertex2f(-0.02f, 0.02f);
    glVertex2f(0.02f, 0.02f);
    glVertex2f(0.02f, 0.0f);
    glVertex2f(-0.02f, 0.0f);
    glEnd();
    glBegin(GL_TRIANGLES);

    glColor3f(0.89f, 0.92f, 0.91f);

    glVertex2f(-0.043f, 0.028f);
    glVertex2f(-0.02f, 0.02f);
    glVertex2f(-0.02f, 0.0f);

    glEnd();


    glBegin(GL_TRIANGLES);

    glColor3f(0.89f, 0.92f, 0.91f);

    glVertex2f(0.043f, 0.028f);
    glVertex2f(0.02f, 0.02f);
    glVertex2f(0.02f, 0.0f);

    glEnd();

        glBegin(GL_QUADS);
    glColor3f(0.65f, 0.73f, 0.72f);
    glVertex2f(-0.044f, 0.024f);
    glVertex2f(-0.037f, 0.024f);
        glVertex2f(-0.037f, 0.012f);
    glVertex2f(-0.044f, 0.012f);

    glEnd();

        glBegin(GL_QUADS);
    glColor3f(0.65f, 0.73f, 0.72f);
    glVertex2f(0.044f, 0.024f);
    glVertex2f(0.037f, 0.024f);
        glVertex2f(0.037f, 0.012f);
    glVertex2f(0.044f, 0.012f);

    glEnd();



//wing
    glPushMatrix();
    glRotatef(spin,0,1,0);
      glBegin(GL_TRIANGLES);

    glColor3f(0.27f, 0.34f, 0.34f);

    glVertex2f(-0.063f, 0.025f);
    glVertex2f(-0.035f, 0.025f);
    glVertex2f(-0.045f, 0.031f);

    glEnd();
  glPopMatrix();
      glPushMatrix();
    glRotatef(spin,0,1,0);
    glBegin(GL_TRIANGLES);
    glColor3f(0.27f, 0.34f, 0.34f);

    glVertex2f(-0.035f, 0.025f);
    glVertex2f(-0.005f, 0.025f);
    glVertex2f(-0.022f, 0.031f);

    glEnd();
      glPopMatrix();
    glPushMatrix();
    glRotatef(spin,0,1,0);
    glBegin(GL_TRIANGLES);

    glColor3f(0.27f, 0.34f, 0.34f);

    glVertex2f(0.063f, 0.025f);
    glVertex2f(0.035f, 0.025f);
    glVertex2f(0.045f, 0.031f);

    glEnd();
      glPopMatrix();
    glPushMatrix();
    glRotatef(spin,0,1,0);
    glBegin(GL_TRIANGLES);
    glColor3f(0.27f, 0.34f, 0.34f);

    glVertex2f(0.035f, 0.025f);
    glVertex2f(0.005f, 0.025f);
    glVertex2f(0.022f, 0.031f);

    glEnd();
      glPopMatrix();

//leg drone
 glBegin(GL_LINES);
    glColor3f(0.27f, 0.34f, 0.34f);
    glVertex2f(-0.02f, 0.0f);
    glVertex2f(-0.03f, -0.01f);

    glEnd();
 glBegin(GL_LINES);
    glColor3f(0.27f, 0.34f, 0.34f);
    glVertex2f(-0.03f, -0.01f);
    glVertex2f(-0.035f, -0.02f);
    glEnd();

 glBegin(GL_LINES);
    glColor3f(0.27f, 0.34f, 0.34f);
    glVertex2f(-0.01f, 0.0f);
    glVertex2f(-0.02f, -0.01f);

    glEnd();
 glBegin(GL_LINES);
    glColor3f(0.27f, 0.34f, 0.34f);
    glVertex2f(-0.02f, -0.01f);
    glVertex2f(-0.02f, -0.02f);
    glEnd();

 glBegin(GL_LINES);
    glColor3f(0.27f, 0.34f, 0.34f);
    glVertex2f(0.02f, 0.0f);
    glVertex2f(0.03f, -0.01f);

    glEnd();
 glBegin(GL_LINES);
    glColor3f(0.27f, 0.34f, 0.34f);
    glVertex2f(0.03f, -0.01f);
    glVertex2f(0.035f, -0.02f);
    glEnd();

 glBegin(GL_LINES);
    glColor3f(0.27f, 0.34f, 0.34f);
    glVertex2f(0.01f, 0.0f);
    glVertex2f(0.02f, -0.01f);

    glEnd();
 glBegin(GL_LINES);
    glColor3f(0.27f, 0.34f, 0.34f);
    glVertex2f(0.02f, -0.01f);
    glVertex2f(0.02f, -0.02f);
    glEnd();





    glPopMatrix();




glPopMatrix();
     glutSwapBuffers();

   glEnd();
////////////////////////////////////
    glFlush();
}
void Rain(int value){                                            ///Rain

if(rainday){

    rain += 0.01f;

    glBegin(GL_POINTS);
    for(int i=1;i<=1000;i++)
    {
        int x=rand(),y=rand();
        x%=1300; y%=1050;
        glBegin(GL_LINES);
        glColor3f(1.0, 1.0, 1.0);
        glVertex2d(x,y);
        glVertex2d(x+5,y+5);
        glEnd();
    }

	glutPostRedisplay();
	glutTimerFunc(6, Rain, 0);

    glFlush();

    }
}



void setSpin(GLfloat x, GLfloat y, GLfloat z)
{
    spin_x = x;
    spin_y = y;
    spin_z = z;
}
void reset()
{
    spin_x = 0;
    spin_y = 1;
    spin_z = 0;

}
void spinDisplay(void)
{
    spin=spin+spin_speed;
    if(spin>360.0)
    {
        spin=spin-360.0;
    }
    glutPostRedisplay();
}



void spinDisplayReverse(void)
{
    spin=spin-spin_speed;
    if(spin<360.0)
    {
        spin=spin+360.0;
    }
    glutPostRedisplay();
}







void handleMouse(int button, int state, int x, int y) {
    switch(button)
    {
        case GLUT_LEFT_BUTTON:
            if(state==GLUT_DOWN)
                glutIdleFunc(spinDisplay);
            break;



        case GLUT_MIDDLE_BUTTON:
            if(state==GLUT_DOWN)
            {
                glutIdleFunc(reset);
            }
            break;







        default:
            break;



    }
}

void handleKeypress(unsigned char key, int x, int y) {
switch (key) {



case 'a':
    speed = 0.02f;
    break;
case 'd':
    speed = -0.02f;
    break;
////////////

///////////
case 'q':
    speed = 0.0f;
    break;

case 'e':
    speed2 = 0.0f;
    break;

case '1':
    speed3 = -0.1f;

    speed4 = 0.001f;

    speed5 = 0.006f;

    speed6 = -0.006f;

    speed7 = 0.001f;
     speed8 = 0.01f;

    break;
///////////
     case 'b':
        rainday = true;
        Rain(rain);
        break;

     case 'n':
        rainday = false;
        break;

////////////
    case 'w':
    speed2 = 0.02f;
    break;
case 's':
    speed2 = -0.02f;
    break;
glutPostRedisplay();
}

}


int main(int argc, char** argv)
{

    cout << "Press d : To Forward Flying Drone" << endl << endl;
    cout << "Press a : To Backward Flying Drone" << endl << endl;
    cout << "Press 1 : To start animation" << endl << endl;
    cout << "Press w : To Upward the Drone" << endl << endl;
    cout << "Press s : To Downward the Drone" << endl << endl;


    cout << "Click on mouse  middle button : To  Stop Flying Drone" << endl << endl;
    cout << "Click on mouse  right button : To  Start Flying Drone" << endl << endl;
    glutInit(&argc, argv);
        glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(1440, 1080);
    glutInitWindowPosition(0,0);
    glutCreateWindow("Translation Animation");
    glutDisplayFunc(display);
  glutTimerFunc(100, update, 0);
glutKeyboardFunc(handleKeypress);
 glutMouseFunc(handleMouse);

    glutMainLoop();
    return 0;
}

