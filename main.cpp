#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
#include <math.h>

void init()
{
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 34.0, 0.0, 30.0);
}

void circle(double e, double f, double g)
{
    float theta;
    int i;
    glBegin(GL_POLYGON);
    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(e+g*cos(theta),f+g*sin(theta));
    }
    glEnd();
}

void Draw()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0.0, 0.0, 0.0);
    circle(20,18,2.9);

    glColor3f(1.0, 0.0, 0.0);
    circle(20,18,2.5);


    //handle
    glColor3f(0.94, 0.54, 0.20);
    glBegin(GL_POLYGON);
    glVertex2f(9.8, 18);
    glVertex2f(22, 22);
    glVertex2f(22.2, 21.2);
    glVertex2f(10, 17.2);
    glEnd();

    glFlush();
    glutSwapBuffers();
}

int main(int argc,char **argv)
{


    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(250,240);
    glutInitWindowSize(650,550);
    glutCreateWindow("Hand_Fan_Adnan_182-15-2093");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}
