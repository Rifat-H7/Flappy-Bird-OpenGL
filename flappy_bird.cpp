#include<windows.h>
#include<stdio.h>
#include <GL/glut.h>
#include <iostream>
#include <string>
#include<math.h>
using namespace std;
int birdIndex = 0, barUp1=0,barUp2=0,barUp3=0,barUp4=0,barUp5=0, barDown1=0,barDown2=0,barDown3=0,barDown4=0,barDown5=0, barUp_y1=0, barUp_y2=0, barUp_y3=0, barUp_y4=0, barUp_y5=0;
int FPS = 60, score=0, gameover_flag=0, start_flag=0;
float x,y,i;
float PI=3.1416;
const int font1=(int)GLUT_BITMAP_TIMES_ROMAN_24;
const int font2=(int)GLUT_BITMAP_HELVETICA_18 ;
const int font3=(int)GLUT_BITMAP_8_BY_13;

void renderBitmapString(float x, float y, void *font,const char *string)
{
    const char *c;
    glRasterPos2f(x, y);
    for (c=string; *c != '\0'; c++) {
        glutBitmapCharacter(font, *c);
    }
}
void bg(void){
    glBegin(GL_QUADS);
	glColor3ub(7, 178, 245);
	glVertex2i(0,0);
	glVertex2i(0,480);
	glVertex2i(640,480);
	glVertex2i(640,0);

    glEnd();

//cloud1
glBegin(GL_TRIANGLE_FAN);

		glColor3ub(194, 188, 188);
		float xb1=100;
		float yb1=350;

		for(i=0;i<=(2*3.14)/2;i+=0.0001)
		{

			x=50*sin(i);
			y=35*cos(-i);
			glVertex2f(y+xb1,x+yb1);

		}

	glEnd();
	glBegin(GL_TRIANGLE_FAN);

		glColor3ub(194, 188, 188);
		float xb2=170;
		float yb2=350;

		for(i=0;i<=(2*3.14)/2;i+=0.0001)
		{

			x=50*sin(i);
			y=35*cos(-i);
			glVertex2f(y+xb2,x+yb2);

		}

	glEnd();
	glBegin(GL_TRIANGLE_FAN);

		glColor3ub(194, 188, 188);
		float xb3=135;
		float yb3=350;

		for(i=0;i<=(2*3.14)/2;i+=0.0001)
		{

			x=60*sin(i);
			y=35*cos(-i);
			glVertex2f(y+xb3,x+yb3);

		}

	glEnd();
	glBegin(GL_TRIANGLE_FAN);

		glColor3ub(194, 188, 188);
		float xbx=135;
		float yby=351;

		for(i=0;i<=(2*3.14)/2;i+=0.0001)
		{

			x=15*sin(-i);
			y=70*cos(i);
			glVertex2f(y+xbx,x+yby);

		}

	glEnd();

	//sun
	glBegin(GL_TRIANGLE_FAN);

		glColor3ub(242, 159, 7);
		float sbx=355;
		float sby=360;

		for(i=0;i<=(2*3.14);i+=0.0001)
		{

			x=35*sin(i);
			y=35*cos(i);
			glVertex2f(x+sbx,y+sby);

		}

	glEnd();
	//cloud

	glBegin(GL_TRIANGLE_FAN);

		glColor3ub(194, 188, 188);
		float xb4=300;
		float yb4=300;

		for(i=0;i<=(2*3.14)/2;i+=0.0001)
		{

			x=50*sin(i);
			y=35*cos(-i);
			glVertex2f(y+xb4,x+yb4);

		}

	glEnd();
	glBegin(GL_TRIANGLE_FAN);

		glColor3ub(194, 188, 188);
		float xb5=370;
		float yb5=300;

		for(i=0;i<=(2*3.14)/2;i+=0.0001)
		{

			x=50*sin(i);
			y=35*cos(-i);
			glVertex2f(y+xb5,x+yb5);

		}

	glEnd();
	glBegin(GL_TRIANGLE_FAN);

		glColor3ub(194, 188, 188);
		float xb6=335;
		float yb6=300;

		for(i=0;i<=(2*3.14)/2;i+=0.0001)
		{

			x=60*sin(i);
			y=35*cos(-i);
			glVertex2f(y+xb6,x+yb6);

		}

	glEnd();
	glBegin(GL_TRIANGLE_FAN);

		glColor3ub(194, 188, 188);
		float xx1=335;
		float yy1=300;

		for(i=0;i<=(2*3.14)/2;i+=0.0001)
		{

			x=15*sin(-i);
			y=70*cos(i);
			glVertex2f(y+xx1,x+yy1);

		}

	glEnd();

	//cloud3
	glBegin(GL_TRIANGLE_FAN);

		glColor3ub(194, 188, 188);
		float xb7=500;
		float yb7=420;

		for(i=0;i<=(2*3.14)/2;i+=0.0001)
		{

			x=50*sin(i);
			y=35*cos(-i);
			glVertex2f(y+xb7,x+yb7);

		}

	glEnd();
	glBegin(GL_TRIANGLE_FAN);

		glColor3ub(194, 188, 188);
		float xb8=570;
		float yb8=420;

		for(i=0;i<=(2*3.14)/2;i+=0.0001)
		{

			x=50*sin(i);
			y=35*cos(-i);
			glVertex2f(y+xb8,x+yb8);

		}

	glEnd();
	glBegin(GL_TRIANGLE_FAN);

		glColor3ub(194, 188, 188);
		float xb9=535;
		float yb9=420;

		for(i=0;i<=(2*3.14)/2;i+=0.0001)
		{

			x=60*sin(i);
			y=35*cos(-i);
			glVertex2f(y+xb9,x+yb9);

		}

	glEnd();



	glBegin(GL_TRIANGLE_FAN);

		glColor3ub(194, 188, 188);
		float xx2=535;
		float yy2=420;

		for(i=0;i<=(2*3.14)/2;i+=0.0001)
		{

			x=15*sin(-i);
			y=70*cos(i);
			glVertex2f(y+xx2,x+yy2);

		}

	glEnd();
	//grass
	glBegin(GL_TRIANGLE_FAN);

		glColor3ub(9, 150, 5);
		float a2=320;
		float b2=0;

		for(i=0;i<=(2*3.14)/2;i+=0.0001)
		{

			x=170*sin(i);
			y=320*cos(i);
			glVertex2f(y+a2,x+b2);

		}

	glEnd();

	glBegin(GL_TRIANGLE_FAN);

		glColor3ub(55, 191, 52);
		float a=0;
		float b=0;

		for(i=0;i<=(2*3.14)/2;i+=0.0001)
		{

			x=300*sin(i);
			y=200*cos(i);
			glVertex2f(x+a,y+b);

		}

	glEnd();

	glBegin(GL_TRIANGLE_FAN);

		glColor3ub(55, 191, 52);
		float a1=640;
		float b1=0;

		for(i=0;i<=(2*3.14)/2;i+=0.0001)
		{

			x=200*sin(-i);
			y=150*cos(i);
			glVertex2f(x+a1,y+b1);

		}

	glEnd();
}
void startGame(void)
{
    //Gap= 140 [Y]
////////////////
////background


//bird
    glBegin(GL_TRIANGLE_FAN);

        glColor3ub(224, 202, 0);
        float x1=57;
        float y1=430;

        for(i=0;i<=(2*3.14);i+=0.0001)
        {

            x=22*sin(i);
            y=17*cos(i);
            glVertex2f(x+x1,y+birdIndex+y1);

        }

    glEnd();

     glBegin(GL_TRIANGLE_FAN);
        glColor3ub(255, 255, 255);
        float x3=66;
        float y3=435;
        for(i=0;i<=(2*3.14);i+=0.0001)
        {
            x=6*sin(i);
            y=6*cos(i);
            glVertex2f(y+x3,x+birdIndex+y3);
        }
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
        glColor3ub(0, 0, 0);
        float x4=66;
        float y4=435;
        for(i=0;i<=(23.14)/2;i+=0.0001)
        {
            x=3*sin(i);
            y=3*cos(i);
            glVertex2f(y+x4,x+birdIndex+y4);
        }
    glEnd();

    //tail
    glBegin(GL_POLYGON);
    glColor3ub(255, 0, 0);
    glVertex2i(38, birdIndex+438);
    glVertex2i(23, birdIndex+443);
    glVertex2i(23, birdIndex+435);
    glVertex2i(37, birdIndex+430);

    glVertex2i(27, birdIndex+435);
    glVertex2i(27, birdIndex+425);
    glVertex2i(37, birdIndex+423);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2i(23, birdIndex+435);
    glVertex2i(37, birdIndex+430);
    glEnd();

    //feather
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2i(57, birdIndex+430);
    glVertex2i(41, birdIndex+440);

    glVertex2i(41, birdIndex+440);
    glVertex2i(41, birdIndex+427);

    glVertex2i(40, birdIndex+427);
    glVertex2i(57, birdIndex+422);
    glEnd();


    //lips
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 0, 0);
    glVertex2i(79, birdIndex+430);
    glVertex2i(93, birdIndex+430);
    glVertex2i(75, birdIndex+440);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 0, 0);
    glVertex2i(74, birdIndex+420);
    glVertex2i(90, birdIndex+427);
    glVertex2i(79, birdIndex+427);


    glEnd();
//glBegin(GL_QUAD_STRIP);
//glLineWidth(100);
//glColor3ub (252, 232, 3);
//glVertex2i(5, birdIndex+460);
//glVertex2i(20, birdIndex+470);
//glVertex2i(50, birdIndex+470);
//glVertex2i(60, birdIndex+450);
//glVertex2i(75, birdIndex+470);
//glVertex2i(70, birdIndex+475);
//glVertex2i(85, birdIndex+475);
//glVertex2i(60, birdIndex+440);
//glVertex2i(50, birdIndex+455);
//glVertex2i(30, birdIndex+435);
//glVertex2i(15, birdIndex+435);
//glVertex2i(30, birdIndex+460);
//glVertex2i(5, birdIndex+460);
//cout<<birdIndex;
//glEnd();

//scoreboard
char buffer [50];
    sprintf (buffer, "SCORE: %d", score);

    glColor3ub(0, 0, 0);
    renderBitmapString(320,410,(void *)font3,buffer);
//bar1
glColor3ub(47, 55, 130);
glBegin(GL_QUADS);
glVertex2i(barUp1+480, barUp_y1+480);
glVertex2i(barUp1+480, barUp_y1+310);
glVertex2i(barUp1+520, barUp_y1+310);
glVertex2i(barUp1+520, barUp_y1+480);
//cout<<barUp1;
glEnd();
barUp1--;
//collision
if(birdIndex>-150 && (barUp1<=-385 && barUp1>=-480)){

    start_flag=0;
    gameover_flag=1;

}
else if(barUp1<-520){
    score++;
    cout<<score;
}

glBegin(GL_QUADS);
glVertex2i(barDown1+480, barUp_y1+0);
glVertex2i(barDown1+480, barUp_y1+170);
glVertex2i(barDown1+520, barUp_y1+170);
glVertex2i(barDown1+520, barUp_y1+0);

glEnd();
barDown1--;
if(birdIndex<-230 && (barDown1<=-385 && barDown1>=-480)){

         start_flag=0;
         gameover_flag=1;

}
//bar2
glBegin(GL_QUADS);
glVertex2i(barUp2+620, barUp_y2+480);
glVertex2i(barUp2+620, barUp_y2+350);
glVertex2i(barUp2+660, barUp_y2+350);
glVertex2i(barUp2+660, barUp_y2+480);

glEnd();
barUp2--;
if(birdIndex>-120 && (barUp2<=-525 && barUp2>=-620)){

    start_flag=0;
    gameover_flag=1;

}
else if(barUp2<-660){
    score++;
    cout<<score;
}

glBegin(GL_QUADS);
glVertex2i(barDown2+620, barUp_y2+0);
glVertex2i(barDown2+620, barUp_y2+210);
glVertex2i(barDown2+660, barUp_y2+210);
glVertex2i(barDown2+660, barUp_y2+0);

glEnd();
barDown2--;
if(birdIndex<-190 && (barUp2<=-525 && barUp2>=-620)){

    start_flag=0;
    gameover_flag=1;

}

//bar3
glBegin(GL_QUADS);
glVertex2i(barUp3+760, barUp_y3+480);
glVertex2i(barUp3+760, barUp_y3+250);
glVertex2i(barUp3+800, barUp_y3+250);
glVertex2i(barUp3+800, barUp_y3+480);

glEnd();
barUp3--;
if(birdIndex>-200 && (barUp3<=-665 && barUp3>=-760)){

    start_flag=0;
    gameover_flag=1;

}
else if(barUp3<-800){
    score++;
    cout<<score;
}

glBegin(GL_QUADS);
glVertex2i(barDown3+760, barUp_y3+0);
glVertex2i(barDown3+760, barUp_y3+110);
glVertex2i(barDown3+800, barUp_y3+110);
glVertex2i(barDown3+800, barUp_y3+0);
glEnd();
barDown3--;
if(birdIndex<-290 && (barUp3<=-665 && barUp3>=-760)){

    start_flag=0;
    gameover_flag=1;

}

//bar4
glBegin(GL_QUADS);
glVertex2i(barUp4+900, barUp_y4+480);
glVertex2i(barUp4+900, barUp_y4+390);
glVertex2i(barUp4+940, barUp_y4+390);
glVertex2i(barUp4+940, barUp_y4+480);

glEnd();
barUp4--;
if(birdIndex>-60 && (barUp4<=-805 && barUp4>=-900)){

    start_flag=0;
    gameover_flag=1;

}
else if(barUp4<-940){
    score++;
    cout<<score;
}

glBegin(GL_QUADS);
glVertex2i(barDown4+900, barUp_y4+0);
glVertex2i(barDown4+900, barUp_y4+250);
glVertex2i(barDown4+940, barUp_y4+250);
glVertex2i(barDown4+940, barUp_y4+0);
glEnd();
barDown4--;
if(birdIndex<-150 && (barUp4<=-805 && barUp4>=-900)){

    start_flag=0;
    gameover_flag=1;

}


//bar5
glBegin(GL_QUADS);
glVertex2i(barUp5+1040, barUp_y5+480);
glVertex2i(barUp5+1040, barUp_y5+230);
glVertex2i(barUp5+1080, barUp_y5+230);
glVertex2i(barUp5+1080, barUp_y5+480);
glEnd();
barUp5--;
if(birdIndex>-220 && (barUp5<=-945 && barUp5>=-1040)){

    start_flag=0;
    gameover_flag=1;

}
else if(barUp5<-1080){
    score++;
    cout<<score;
}

glBegin(GL_QUADS);
glVertex2i(barDown5+1040, barUp_y5+0);
glVertex2i(barDown5+1040, barUp_y5+90);
glVertex2i(barDown5+1080, barUp_y5+90);
glVertex2i(barDown5+1080, barUp_y5+0);

glEnd();
barDown5--;
if(birdIndex<-310 && (barUp5<=-945 && barUp5>=-1040)){

    start_flag=0;
    gameover_flag=1;

}

}
void homesc(){
        bg();
     ///menu
        glColor3ub(0,0,0);
        glBegin(GL_POLYGON);
        glVertex2i(150,380);
        glVertex2i(500,380);
        glVertex2i(500,250);
        glVertex2i(150,250);
        glEnd();

        ///text info
        if(gameover_flag==1){

        glColor3ub(0,0,0);
        glBegin(GL_POLYGON);
        glVertex2i(150,215);
        glVertex2i(500,215);
        glVertex2i(500,85);
        glVertex2i(150,85);
        glEnd();

            glColor3ub(255, 0, 0);
            renderBitmapString(280,160,(void *)font1,"GAME OVER");
            glColor3ub(255, 0, 0);
            char buffer2 [50];
            sprintf (buffer2, "Your Score is : %d", score);
            renderBitmapString(275,130,(void *)font1,buffer2);

        }

        glColor3ub(179, 0, 0);
        renderBitmapString(290,350,(void *)font1,"Flappy Bird");

        glColor3ub(0, 179, 0);
        renderBitmapString(280,320,(void *)font1,"Press S to play");
        renderBitmapString(260,300,(void *)font1,"Press Space to fly up");

}

void bird_up(void){
    glutPostRedisplay();
    if(birdIndex<=-30){
        birdIndex+=50;
    }
}
void display(){
    glClear (GL_COLOR_BUFFER_BIT);

    if(start_flag==1){
        //
        bg();
        startGame();

    }
    else{
        homesc();

    }
    glFlush();
    glutSwapBuffers();
}

void my_keyboard(unsigned char key, int x, int y){
    switch (key) {
        case 's':
            start_flag=1;
            gameover_flag=0;
            birdIndex=0;
            barUp1=0;
            barUp_y1=0;
            barDown1=0;
            barUp2=0;
            barUp_y2=0;
            barDown2=0;
            barUp3=0;
            barUp_y3=0;
            barDown3=0;
            barUp4=0;
            barUp_y4=0;
            barDown4=0;
            barUp5=0;
            barUp_y5=0;
            barDown5=0;
            score=0;

            break;

        case ' ':
            bird_up();
            break;

}
}
void timer(int){
    glutPostRedisplay();
    glutTimerFunc(1000/FPS,timer,0);
    if(birdIndex>=-410){
        birdIndex-=10;
    }
    if(barUp1<-520){
        barUp1=180;
        barDown1=180;
    }
    if(barUp2<-660){
        barUp2=40;
        barDown2=40;
    }
    if(barUp3<-800){
        barUp3=-100;
        barDown3=-100;
    }
    if(barUp4<-940){
        barUp4=-240;
        barDown4=-240;
    }
    if(barUp5<-1080){
        barUp5=-380;
        barDown5=-380;
    }
    barUp1-=5;
    barDown1-=5;
    barUp2-=5;
    barDown2-=5;
    barUp3-=5;
    barDown3-=5;
    barUp4-=5;
    barDown4-=5;
    barUp5-=5;
    barDown5-=5;
}

void myInit (void)
{
glClearColor(10, 245, 185, 1);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0, 640, 0, 480);
}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
glutInitWindowSize (1000, 600);
glutInitWindowPosition (200, 100);
glutCreateWindow ("Flappy Bird");
myInit();
glutDisplayFunc(display);
glutKeyboardFunc(my_keyboard);

glutTimerFunc(1000,timer,0);
glutMainLoop();
}
