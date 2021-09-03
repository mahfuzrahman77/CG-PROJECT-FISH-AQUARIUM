
#include <windows.h>
#include <GL/glut.h>

#include<windows.h>
#include<GL/glut.h>
#include <stdlib.h>
#include<math.h>
#define PI 3.1416

 float BX=0,BY=0,angle=0;
void init(){
    glClearColor(0.0f,0.0f,0.0f,0.0f);//black color
    glOrtho(-10,+10,-10,+10,-10,+10);
}



void circle(float radiusX, float radiusY){
    int i=0;
    float angle = 0.0;
    glBegin(GL_POLYGON);
    for(i=0;i<100;i++){
        angle= (2*PI*i)/100;
        glVertex2d(radiusX*cos(angle),radiusY*sin(angle));
    }
    glEnd();
}

void display() {

   glClear(GL_COLOR_BUFFER_BIT);

  //Accuriam design:

  glBegin(GL_QUADS);
      glColor3f(0,1,1);
      glVertex2d(-4,-5);
      glVertex2d(4,-5);
      glVertex2d(4,3);
      glVertex2d(-4,3);
   glEnd();
   //top part design:
   glBegin(GL_QUADS);
      glColor3f(0.31,0.31,0.81);
      glVertex2d(-4.5,3);    // x, y
      glVertex2d(4.5,3);
      glVertex2d(2,4.5);    // x, y
      glVertex2d(-2,4.5);
   glEnd();
   //top white part design:
   glBegin(GL_POLYGON);
      glColor3f(1,1,1);
      glVertex2d(-4,3);    // x, y
      glVertex2d(4,3);
      glVertex2d(4,2);    // x, y
      glVertex2d(-4,2);
   glEnd();

   //Lower part circles:

   glPushMatrix();
        glTranslated(-3.8,-4.6,0);
        glColor3f(0.41,0.41,0.41);
        circle(0.2,0.4);
    glPopMatrix();

     glPushMatrix();

        glTranslated(-3.5,-4.6,0);
        glColor3f(0.41,0.41,0.41);
        circle(0.2,0.4);
    glPopMatrix();


     glPushMatrix();
        glTranslated(-3.2,-4.6,0);
        glColor3f(0.41,0.41,0.41);
        circle(0.2,0.4);
    glPopMatrix();


     glPushMatrix();
        glTranslated(-2.9,-4.6,0);
        glColor3f(0.41,0.41,0.41);
        circle(0.2,0.4);
    glPopMatrix();


     glPushMatrix();
        glTranslated(-2.6,-4.6,0);
        glColor3f(0.41,0.41,0.41);
        circle(0.2,0.4);
    glPopMatrix();


    glPushMatrix();
        glTranslated(-2.3,-4.6,0);
        glColor3f(0.41,0.41,0.41);
        circle(0.2,0.4);
    glPopMatrix();


    glPushMatrix();
        glTranslated(-2,-4.6,0);
        glColor3f(0.41,0.41,0.41);
        circle(0.2,0.4);
    glPopMatrix();


glPushMatrix();
        glTranslated(-1.7,-4.6,0);
        glColor3f(0.41,0.41,0.41);
        circle(0.2,0.4);
    glPopMatrix();


glPushMatrix();
        glTranslated(-1.4,-4.6,0);
        glColor3f(0.41,0.41,0.41);
        circle(0.2,0.4);
    glPopMatrix();


    glPushMatrix();
        glTranslated(-1.1,-4.6,0);
        glColor3f(0.41,0.41,0.41);
        circle(0.2,0.4);
    glPopMatrix();


    glPushMatrix();
        glTranslated(-0.8,-4.6,0);
        glColor3f(0.41,0.41,0.41);
        circle(0.2,0.4);
    glPopMatrix();


    glPushMatrix();
        glTranslated(-0.5,-4.6,0);
        glColor3f(0.41,0.41,0.41);
        circle(0.2,0.4);
    glPopMatrix();


    glPushMatrix();
        glTranslated(-0.2,-4.6,0);
        glColor3f(0.41,0.41,0.41);
        circle(0.2,0.4);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0.1,-4.6,0);
        glColor3f(0.41,0.41,0.41);
        circle(0.2,0.4);
    glPopMatrix();



    glPushMatrix();
        glTranslated(0.4,-4.6,0);
        glColor3f(0.41,0.41,0.41);
        circle(0.2,0.4);
    glPopMatrix();


    glPushMatrix();
        glTranslated(0.7,-4.6,0);
        glColor3f(0.41,0.41,0.41);
        circle(0.2,0.4);
    glPopMatrix();


    glPushMatrix();
        glTranslated(1,-4.6,0);
        glColor3f(0.41,0.41,0.41);
        circle(0.2,0.4);
    glPopMatrix();


    glPushMatrix();
        glTranslated(1.3,-4.6,0);
        glColor3f(0.41,0.41,0.41);
        circle(0.2,0.4);
    glPopMatrix();


    glPushMatrix();
        glTranslated(1.6,-4.6,0);
        glColor3f(0.41,0.41,0.41);
        circle(0.2,0.4);
    glPopMatrix();

    glPushMatrix();
        glTranslated(1.9,-4.6,0);
        glColor3f(0.41,0.41,0.41);
        circle(0.2,0.4);
    glPopMatrix();


    glPushMatrix();
        glTranslated(2.2,-4.6,0);
        glColor3f(0.41,0.41,0.41);
        circle(0.2,0.4);
    glPopMatrix();


    glPushMatrix();
        glTranslated(2.5,-4.6,0);
        glColor3f(0.41,0.41,0.41);
        circle(0.2,0.4);
    glPopMatrix();


    glPushMatrix();
        glTranslated(2.8,-4.6,0);
        glColor3f(0.41,0.41,0.41);
        circle(0.2,0.4);
    glPopMatrix();


    glPushMatrix();
        glTranslated(3.1,-4.6,0);
        glColor3f(0.41,0.41,0.41);
        circle(0.2,0.4);
    glPopMatrix();


    glPushMatrix();
        glTranslated(3.4,-4.6,0);
        glColor3f(0.41,0.41,0.41);
        circle(0.2,0.4);
    glPopMatrix();


    glPushMatrix();
        glTranslated(3.7,-4.6,0);
        glColor3f(0.41,0.41,0.41);
        circle(0.2,0.4);
    glPopMatrix();


    glPushMatrix();
        glTranslated(3.8,-4.6,0);
        glColor3f(0.41,0.41,0.41);
        circle(0.2,0.4);
    glPopMatrix();



    //Fish Design............................:


//first fish
glPushMatrix();
glTranslated(-1,1,0);
glPushMatrix();
glTranslated(BX,BY,0);
glRotated(angle,0,0,-1);

glBegin(GL_POLYGON);
      glColor3f(1,0,0);
      glVertex2d(0.3,0);    // x, y
      glVertex2d(1,-0.7);
      glVertex2d(2,0);    // x, y
      glVertex2d(1,0.7);
      glVertex2d(0.3,0);
   glEnd();

 glBegin(GL_TRIANGLES);
      glColor3f(1,1,1);
      glVertex2d(2,0);    // x, y
      glVertex2d(2.3,-0.3);
      glVertex2d(2.3,0.3);
   glEnd();

   //Eye

   glPushMatrix();
        glTranslated(0.7,0,0);
        glColor3f(0,0,0);
        circle(0.1,0.2);
    glPopMatrix();

//wings

 glPushMatrix();
   glTranslated(5.3,-3,0);
    glBegin(GL_LINES);
      glColor3f(1,1,1);
      glVertex2d(-2,0.2);
      glVertex2d(-2,1.8);    // x, y

   glEnd();
glPopMatrix();


 glPushMatrix();
   glTranslated(3,-1,0);
    glBegin(GL_LINES);
      glColor3f(1,1,1);
      glVertex2d(-2,0.2);
      glVertex2d(-2,1.8);    // x, y

   glEnd();
glPopMatrix();


glPushMatrix();
   glTranslated(5.7,-5,0);
    glBegin(GL_LINES);
      glColor3f(1,0,1);
      glVertex2d(-2,0.2);
      glVertex2d(-2,1.8);    // x, y

   glEnd();
glPopMatrix();

 glPopMatrix();

glPopMatrix();


//second fish:
glPushMatrix();
glTranslated(1.3,-1,0);
glPushMatrix();
glTranslated(BX,BY,0);
glRotated(angle,0,0,-1);

glBegin(GL_POLYGON);
      glColor3f(0.41,0.41,0.41);
      glVertex2d(0.3,0);    // x, y
      glVertex2d(1,-0.7);
      glVertex2d(2,0);    // x, y
      glVertex2d(1,0.7);
      glVertex2d(0.3,0);
   glEnd();

 glBegin(GL_TRIANGLES);
      glColor3f(1,1,1);
      glVertex2d(2,0);    // x, y
      glVertex2d(2.3,-0.3);
      glVertex2d(2.3,0.3);
   glEnd();

   //Eye

   glPushMatrix();
        glTranslated(0.7,0,0);
        glColor3f(0,0,0);
        circle(0.1,0.2);
    glPopMatrix();



 glPopMatrix();

glPopMatrix();


//Third fish:

glPushMatrix();
glTranslated(1.7,-3,0);
glPushMatrix();
glTranslated(BX,BY,0);
glRotated(angle,0,0,-1);

glBegin(GL_POLYGON);
      glColor3f(1,1,0);
      glVertex2d(0.3,0);    // x, y
      glVertex2d(1,-0.7);
      glVertex2d(2,0);    // x, y
      glVertex2d(1,0.7);
      glVertex2d(0.3,0);
   glEnd();

 glBegin(GL_TRIANGLES);
      glColor3f(1,0,1);
      glVertex2d(2,0);    // x, y
      glVertex2d(2.3,-0.3);
      glVertex2d(2.3,0.3);
   glEnd();

   //Eye

   glPushMatrix();
        glTranslated(0.7,0,0);
        glColor3f(0,0,0);
        circle(0.1,0.2);
    glPopMatrix();



 glPopMatrix();

glPopMatrix();




//small tress:


  glBegin(GL_LINES);
      glColor3f(0.2,0.80,0.2);
      glVertex2d(-4,-4.3);    // x, y
      glVertex2d(-3.8,-3.6);

   glEnd();


glBegin(GL_LINES);
      glColor3f(0.2,0.80,0.2);
      glVertex2d(-3.5,-4.3);    // x, y
      glVertex2d(-2.5,-3.6);

   glEnd();


glBegin(GL_LINES);
      glColor3f(0.2,0.80,0.2);
      glVertex2d(-2.5,-4.3);    // x, y
      glVertex2d(-1.5,-3.6);

   glEnd();



glBegin(GL_LINES);
      glColor3f(0.2,0.80,0.2);
      glVertex2d(-1.5,-4.3);    // x, y
      glVertex2d(-0.5,-3.6);

   glEnd();



   glBegin(GL_LINES);
      glColor3f(0.2,0.80,0.2);
      glVertex2d(-1,-4.3);    // x, y
      glVertex2d(-0.6,-3.6);

   glEnd();



glBegin(GL_LINES);
      glColor3f(0.2,0.80,0.2);
      glVertex2d(-0.7,-4.3);    // x, y
      glVertex2d(-0.3,-3.6);

   glEnd();



   glBegin(GL_LINES);
      glColor3f(0.2,0.80,0.2);
      glVertex2d(-0.3,-4.3);    // x, y
      glVertex2d(-0.1,-3.6);

   glEnd();


glBegin(GL_LINES);
      glColor3f(0.2,0.80,0.2);
      glVertex2d(0.5,-4.3);    // x, y
      glVertex2d(1,-3.6);

   glEnd();


glBegin(GL_LINES);
      glColor3f(0.2,0.80,0.2);
      glVertex2d(0,-4.3);    // x, y
      glVertex2d(0.5,-3.6);

   glEnd();


   glBegin(GL_LINES);
      glColor3f(0.2,0.80,0.2);
      glVertex2d(2,-4.3);    // x, y
      glVertex2d(1,-3.6);

   glEnd();


    glBegin(GL_LINES);
      glColor3f(0.2,0.80,0.2);
      glVertex2d(3,-4.3);    // x, y
      glVertex2d(2,-3.6);

   glEnd();


    glBegin(GL_LINES);
      glColor3f(0.2,0.80,0.2);
      glVertex2d(4,-4.3);    // x, y
      glVertex2d(3,-3.6);

   glEnd();

   glFlush();  // Render now
}



void fish1(){

    BY=BY-0.0006;
    //BX=BX-0.001;
    glutPostRedisplay();
}




void specialKey(int key, int x, int y){


    switch(key){
    case GLUT_KEY_DOWN:
    break;

    case GLUT_KEY_UP:
        if(BY<=-1)
              BY++;

    glutIdleFunc(fish1);
    break;

    case GLUT_KEY_LEFT:
        if(BX>=-2.9)
            BX--;
    glutIdleFunc(fish1);


    break;

    case GLUT_KEY_RIGHT:

    break;

    default:
    break;

    }

}




/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(1300,775);
  glutInitWindowPosition(10, 5);

   glutCreateWindow(" Ibrahim & Mahfuz Acuriam");
    init();

    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);

   glutDisplayFunc(display);
   glutSpecialFunc(specialKey);
   glutMainLoop();

   return 0;
}
