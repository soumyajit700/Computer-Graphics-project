#include<stdio.h>
#include<stdlib.h>
#include<GL/glut.h>
#include<math.h>
#include<string.h>



const float DEG2RAD = 3.14 / 180;
const float radius1 = 100;
const float radius2 = 99.5;
const float radius3 = 8;
const float radius4 = 12;
const float radius5 = 24;
const float radius6 = 9;
const float radius7 = 14;
const float radius8 = 8;
const float radius9 = 8;
const float radius22 = 30; //Swan
const float radius11 = 50; //Turtle
const float radius33 = 7;  //Eye
const float radius44 = 110;  //Eye
const float radius55 = 80;  //Eye

double radius0 = 40;
double radius01 = 35;
int i, z, a, b, c, d, e, f, k, j, flag = 1;


void drawText(float x, float y, int r, int g, int b, const char *string)
{
	int j = strlen(string);

	glColor3f(r, g, b);
	glRasterPos2f(x, y);
	for (int i = 0; i < j; i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, string[i]);
	}
}



void drawText1(float x, float y, int r, int g, int b, const char *string)
{
	int j = strlen(string);
	glColor3f(r, g, b);
	glRasterPos2f(x, y);
	for (int i = 0; i < j; i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, string[i]);

	}
}




void s1()
{

	glClearColor(0.0, 0.0, 0.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	drawText(550, 670, 0, 191, 255, "THE ANT & THE SWEET");
	drawText(50, 550, 1, 0, 0, "SCENE 1 :");
	drawText(250, 520, 1, 1, 1, "In this scene a hungry ant finds a big sweet on the floor and tries to lift it.");
	drawText(250, 490, 1, 1, 1, "But he soon realises he can't do this alone and has to call his friends for help . ");
	drawText(50, 440, 1, 0, 0, "SCENE 2 :");

	drawText(250, 410, 1, 1, 1, "The ant goes back and brings his friends along with him. All the ants");
	drawText(250, 380, 1, 1, 1, " come together and become successful in lifting the sweet.");
	drawText(50, 340, 1, 0, 0, "SCENE 3 :");
	drawText(250, 310, 1, 1, 1, "The ants then carry the sweet together and take it away for everybody to eat.");

	drawText(300, 180, 0, 0, 1, "The moral is :");
	drawText(540, 180, 0, 1, 0, "::::  UNITY IS STRENTH  ::::");
	drawText(1100, 50, 255, 215, 0, "Press 2 for the next page");
	glFlush();

} //story explain 1

void back()
{

	glClear(GL_COLOR_BUFFER_BIT);
	glColor3d(.753, .753, .753);
	glBegin(GL_POLYGON);
	glVertex2d(0, 0);
	glVertex2d(1500, 0);
	glVertex2d(1300, 400);
	glVertex2d(200, 400);
	glEnd();//room base


	glColor3d(.663, .663, .663);
	glBegin(GL_POLYGON);
	glVertex2d(0, 750);
	glVertex2d(200, 750);
	glVertex2d(200, 400);
	glVertex2d(0, 0);
	glEnd();//l wall


	glColor3d(.663, .663, .663);
	glBegin(GL_POLYGON);
	glVertex2d(1500, 0);
	glVertex2d(1500, 750);
	glVertex2d(1300, 750);
	glVertex2d(1300, 400);
	glEnd();//r wall



	glColor3f(0, 0, 0);

	glBegin(GL_POLYGON);
	glVertex2f(1070, 520);
	glVertex2f(1070, 534);
	glVertex2f(1290, 534);
	glVertex2f(1290, 520);
	glEnd();//tablebase

	glColor3f(1, 0, 0);

	glBegin(GL_POLYGON);
	glVertex2f(1072, 522);
	glVertex2f(1072, 532);
	glVertex2f(1288, 532);
	glVertex2f(1288, 522);
	glEnd();//tablebase

	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(1090, 520);
	glVertex2f(1100, 520);
	glVertex2f(1100, 400);
	glVertex2f(1090, 400);
	glEnd();//l table

	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(1275, 520);
	glVertex2f(1265, 520);
	glVertex2f(1265, 400);
	glVertex2f(1275, 400);
	glEnd();//l table

	//bed

	glColor3f(0.6, 0.4, 0.12);
	glBegin(GL_POLYGON);
	glVertex2d(250, 450);
	glVertex2d(650, 450);
	glVertex2d(650, 480);
	glVertex2d(250, 480);
	glEnd(); //mattress

	glColor3f(0.6, 0.4, 0.12);
	glBegin(GL_POLYGON);
	glVertex2d(220, 450);
	glVertex2d(250, 450);
	glVertex2d(250, 550);
	glVertex2d(220, 550);
	glEnd(); //headrest

	glColor3f(0.6, 0.4, 0.12);
	glBegin(GL_POLYGON);
	glVertex2d(280, 450);
	glVertex2d(280, 380);
	glVertex2d(300, 380);
	glVertex2d(300, 450);
	glEnd(); //leg1

	glColor3f(0.6, 0.4, 0.12);
	glBegin(GL_POLYGON);
	glVertex2d(590, 450);
	glVertex2d(590, 380);
	glVertex2d(610, 380);
	glVertex2d(610, 450);
	glEnd(); //leg2

	glColor3f(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2d(250, 450);
	glVertex2d(650, 450);
	glVertex2d(650, 480);
	glVertex2d(250, 480);
	glEnd(); //mattress

	glColor3f(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2d(220, 450);
	glVertex2d(250, 450);
	glVertex2d(250, 550);
	glVertex2d(220, 550);
	glEnd(); //headrest1

	glColor3f(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2d(280, 450);
	glVertex2d(280, 380);
	glVertex2d(300, 380);
	glVertex2d(300, 450);
	glEnd(); //leg1

	glColor3f(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2d(590, 450);
	glVertex2d(590, 380);
	glVertex2d(610, 380);
	glVertex2d(610, 450);
	glEnd(); //leg2

	//chair


	glColor3f(0.6, 0.4, 0.12);
	glBegin(GL_POLYGON);
	glVertex2d(1130, 470);
	glVertex2d(1240, 470);
	glVertex2d(1240, 600);
	glVertex2d(1130, 600);
	glEnd(); //backrest

	glColor3f(0.6, 0.4, 0.12);
	glBegin(GL_POLYGON);
	glVertex2d(1140, 470);
	glVertex2d(1140, 380);
	glVertex2d(1150, 380);
	glVertex2d(1150, 470);
	glEnd(); //leg1

	glColor3f(0.6, 0.4, 0.12);
	glBegin(GL_POLYGON);
	glVertex2d(1230, 470);
	glVertex2d(1230, 380);
	glVertex2d(1220, 380);
	glVertex2d(1220, 470);
	glEnd(); //leg2

	glColor3f(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2d(1130, 470);
	glVertex2d(1240, 470);
	glVertex2d(1240, 600);
	glVertex2d(1130, 600);
	glEnd(); //backrest

	glColor3f(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2d(1140, 470);
	glVertex2d(1140, 380);
	glVertex2d(1150, 380);
	glVertex2d(1150, 470);
	glEnd(); //leg1

	glColor3f(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2d(1230, 470);
	glVertex2d(1230, 380);
	glVertex2d(1220, 380);
	glVertex2d(1220, 470);
	glEnd(); //leg2


	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);
	for (i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad)*radius0 + 1180 + z, sin(DegInRad)*radius0 + 700);
	}
	glEnd();//clock

	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);
	for (i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad)*radius01 + 1180 + z, sin(DegInRad)*radius01 + 700);
	}
	glEnd();//clock

	glColor3f(1, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(1180, 700);
	glVertex2f(1180, 732);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(1180, 700);
	glVertex2f(1205, 700);
	glEnd();


	glColor3d(0.690, 0.878, 0.90);
	glBegin(GL_POLYGON);
	glVertex2d(600, 750);
	glVertex2d(900, 750);
	glVertex2d(900, 600);
	glVertex2d(600, 600);
	glEnd();//window


	glColor3d(0, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2d(600, 750);
	glVertex2d(604, 750);
	glVertex2d(604, 600);
	glVertex2d(600, 600);
	glEnd();//window


	glColor3d(0, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2d(900, 750);
	glVertex2d(907, 750);
	glVertex2d(907, 600);
	glVertex2d(900, 600);
	glEnd();//window

	glColor3d(0, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2d(600, 600);
	glVertex2d(900, 600);
	glVertex2d(900, 605);
	glVertex2d(600, 605);
	glEnd();//window


	glColor3d(0, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2d(700, 750);
	glVertex2d(704, 750);
	glVertex2d(704, 600);
	glVertex2d(700, 600);
	glEnd();//window

	glColor3d(0, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2d(800, 750);
	glVertex2d(805, 750);
	glVertex2d(805, 600);
	glVertex2d(800, 600);
	glEnd();//window



	glColor3d(.753, .753, .753);
	glBegin(GL_POLYGON);
	glVertex2d(20, 20);
	glVertex2d(20, 20);
	glVertex2d(20, 20);
	glVertex2d(20, 20);//bk1
	glEnd();
	//glFlush();
}

void laddu1()
{

	glBegin(GL_LINE_LOOP);
	glColor3f(1, 0.271, 0);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad)*radius1 + 250, sin(DegInRad)*radius1 + 250);
	}

	glEnd();//circle border

	glBegin(GL_POLYGON);
	glColor3f(1, 0.647, 0);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad)*radius2 + 250, sin(DegInRad)*radius2 + 250);
	}
	glEnd();//circle

	glBegin(GL_POLYGON);
	glColor3f(1, 0.843, 0);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad)*radius3 + 180, sin(DegInRad)*radius3 + 250);
	}
	glEnd();//circle dots

	glBegin(GL_POLYGON);
	glColor3f(1, 0.843, 0);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad)*radius3 + 260, sin(DegInRad)*radius3 + 220);
	}
	glEnd();//circle dots

	glBegin(GL_POLYGON);
	glColor3f(1, 0.843, 0);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad)*radius3 + 250, sin(DegInRad)*radius3 + 265);
	}
	glEnd();//circle dots

	glBegin(GL_POLYGON);
	glColor3f(1, 0.843, 0);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad)*radius3 + 210, sin(DegInRad)*radius3 + 200);
	}
	glEnd();//circle dots

	glBegin(GL_POLYGON);
	glColor3f(1, 0.843, 0);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad)*radius3 + 240, sin(DegInRad)*radius3 + 320);
	}
	glEnd();//circle dots

	glBegin(GL_POLYGON);
	glColor3f(1, 0.843, 0);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad)*radius3 + 300, sin(DegInRad)*radius3 + 200);
	}
	glEnd();//circle dots

	glBegin(GL_POLYGON);
	glColor3f(1, 0.843, 0);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad)*radius3 + 310, sin(DegInRad)*radius3 + 280);
	}
	glEnd();//circle dots

	glBegin(GL_POLYGON);
	glColor3f(1, 0.843, 0);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad)*radius3 + 195, sin(DegInRad)*radius3 + 300);
	}
	glEnd();//circle dots

	glBegin(GL_POLYGON);
	glColor3f(1, 0.843, 0);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad)*radius3 + 250, sin(DegInRad)*radius3 + 170);
	}
	glEnd();//circle dots

	glBegin(GL_POLYGON);
	glColor3f(1, 0.843, 0);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad)*radius3 + 320, sin(DegInRad)*radius3 + 240);
	}
	glEnd();//circle dots

	glBegin(GL_POLYGON);
	glColor3f(1, 0.843, 0);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad)*radius3 + 290, sin(DegInRad)*radius3 + 320);
	}
	glEnd();//circle dots

}

void s2ant(int j)
{
	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2d(1160 - j, 240);
	glVertex2d(1144 - j, 225);
	glEnd();
	glColor3f(0, 0, 0);
	glBegin(GL_LINES);

	glVertex2d(1144 - j, 225);
	glVertex2d(1154 - j, 215);
	glEnd();//leg3


	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2d(1126 - j, 225);
	glVertex2d(1137 - j, 215);
	glEnd();//leg1
	glColor3f(0, 0, 0);
	glBegin(GL_LINES);

	glVertex2d(1151 - j, 240);
	glVertex2d(1135 - j, 225);
	glEnd();
	glColor3f(0, 0, 0);
	glBegin(GL_LINES);

	glVertex2d(1135 - j, 225);
	glVertex2d(1145 - j, 215);
	glEnd();//leg2
	glColor3f(0, 0, 0);
	glBegin(GL_LINES);

	glVertex2d(1169 - j, 241);
	glVertex2d(1153 - j, 225);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_LINES);

	glVertex2d(1153 - j, 225);
	glVertex2d(1161 - j, 215);
	glEnd();//leg4

	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);

	for (int i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad)*radius7 + 1144 - j, sin(DegInRad)*radius6 + 240);
	}
	glEnd();//oval2 

	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);

	for (int i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad)*radius5 + 1180 - j, sin(DegInRad)*radius4 + 240);
	}
	glEnd();//oval1


	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);

	for (int i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad)*radius9 + 1124 - j, sin(DegInRad)*radius8 + 244);
	}
	glEnd();//oval3
	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);

	for (int i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad) * 2 + 1122 - j, sin(DegInRad) * 2 + 244);
	}
	glEnd();//eye
	glColor3f(0, 0, 0);
	glBegin(GL_LINES);

	glVertex2d(1109 - j, 272);
	glVertex2d(1125 - j, 245);
	glEnd();//antenna1
	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);

	for (int i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad) * 3 + 1108 - j, sin(DegInRad) * 3 + 272);
	}
	glEnd();//antenna1 bulb
	glColor3d(0, 0, 0);
	glBegin(GL_LINES);

	glVertex2d(1108 - j, 265);
	glVertex2d(1124 - j, 245);
	glEnd();//antenna2
	glColor3d(0, 0, 0);
	glBegin(GL_POLYGON);

	for (int i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad) * 3 + 1105 - j, sin(DegInRad) * 3 + 264);
	}
	glEnd();//antenna2 bulb
	glColor3d(0, 0, 0);
	glBegin(GL_LINES);

	glVertex2d(1142 - j, 240);
	glVertex2d(1126 - j, 225);
	glEnd();
	//	glFlush();

}

void s2ant2(int j)
{
	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2d(151 + j, 240);
	glVertex2d(167 + j, 225);
	glEnd();
	glColor3f(0, 0, 0);
	glBegin(GL_LINES);

	glVertex2d(167 + j, 225);
	glVertex2d(157 + j, 215);
	glEnd();//leg3


	glColor3f(0, 0, 0);
	glBegin(GL_LINES);

	glVertex2d(140 + j, 240);
	glVertex2d(156 + j, 225);
	glEnd();
	glColor3f(0, 0, 0);
	glBegin(GL_LINES);

	glVertex2d(156 + j, 225);
	glVertex2d(146 + j, 215);
	glEnd();//leg2
	glColor3f(0, 0, 0);
	glBegin(GL_LINES);

	glVertex2d(129 + j, 241);
	glVertex2d(145 + j, 225);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_LINES);

	glVertex2d(145 + j, 225);
	glVertex2d(135 + j, 215);
	glEnd();//leg4



	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2d(118 + j, 241);
	glVertex2d(134 + j, 225);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2d(134 + j, 225);
	glVertex2d(124 + j, 215);
	glEnd();//leg1
	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);

	for (i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad)*radius7 + 153 + j, sin(DegInRad)*radius6 + 240);
	}
	glEnd();//oval2 

	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);

	for (i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad)*radius5 + 120 + j, sin(DegInRad)*radius4 + 240);
	}
	glEnd();//oval1


	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);

	for (i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad)*radius9 + 171 + j, sin(DegInRad)*radius8 + 244);
	}
	glEnd();//oval3
	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);

	for (i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad) * 2 + 173 + j, sin(DegInRad) * 2 + 244);
	}
	glEnd();//eye
	glColor3f(0, 0, 0);
	glBegin(GL_LINES);

	glVertex2d(179 + j, 272);
	glVertex2d(171 + j, 245);
	glEnd();//antenna1
	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);

	for (i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad) * 3 + 180 + j, sin(DegInRad) * 3 + 272);
	}
	glEnd();//antenna1 bulb
	glColor3d(0, 0, 0);
	glBegin(GL_LINES);

	glVertex2d(182 + j, 265);
	glVertex2d(172 + j, 245);
	glEnd();//antenna2
	glColor3d(0, 0, 0);
	glBegin(GL_POLYGON);

	for (i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad) * 3 + 183 + j, sin(DegInRad) * 3 + 264);
	}
	glEnd();//antenna2 bulb
	//glFlush();
}

void s2(void)
{

	glClearColor(0.827, 0.827, 0.827, 1.0);
	glColor3f(1.0, 1.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 1500, 0, 750);

	//if (flag == 1)


	for (int j = -92; j < 765; j += 3)
	{
		glClear(GL_COLOR_BUFFER_BIT);
		for (GLint m = 0; m < 9500; m++)
			for (GLint h = 0; h < 1000; h++);
		back();
		laddu1();
		s2ant(j);
		glutSwapBuffers();
		glFlush();
	}


	for (j = 230; j < 1200; j++)
	{
		glClear(GL_COLOR_BUFFER_BIT);
		for (GLint m = 0; m < 9500; m++)
			for (GLint h = 0; h < 1000; h++);
		back();
		laddu1();
		s2ant2(j);
		glutSwapBuffers();
		glFlush();
	}

	//flag++;


	glFlush();
}



void s3ant(int a)
{
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad)*radius5 + 550 - a, sin(DegInRad)*radius4 + 200);
	}
	glEnd();//oval1

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad)*radius7 + 513 - a, sin(DegInRad)*radius6 + 200);
	}
	glEnd();//oval2

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad)*radius9 + 492 - a, sin(DegInRad)*radius8 + 204);
	}
	glEnd();//oval3

	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad) * 2 + 492 - a, sin(DegInRad) * 2 + 204);
	}
	glEnd();//eye

	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(491 - a, 206);
	glVertex2f(475 - a, 223);
	glEnd();//antenna1

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad) * 3 + 474 - a, sin(DegInRad) * 3 + 222);
	}
	glEnd();//antenna1 bulb

	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(492 - a, 206);
	glVertex2f(481 - a, 230);
	glEnd();//antenna2

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad) * 3 + 479 - a, sin(DegInRad) * 3 + 229);
	}
	glEnd();//antenna2 bulb

	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(510 - a, 200);
	glVertex2f(494 - a, 185);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(494 - a, 185);
	glVertex2f(508 - a, 172);
	glEnd();//leg1

	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(517 - a, 200);
	glVertex2f(501 - a, 185);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(501 - a, 185);
	glVertex2f(515 - a, 172);
	glEnd();//leg2

	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(530 - a, 200);
	glVertex2f(514 - a, 185);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(514 - a, 185);
	glVertex2f(528 - a, 172);
	glEnd();//leg3

	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(537 - a, 200);
	glVertex2f(521 - a, 185);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(521 - a, 185);
	glVertex2f(535 - a, 172);
	glEnd();//leg4 
	//	glFlush();
}


void s3ant2(int a)
{
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad)*radius5 + 650 - a, sin(DegInRad)*radius4 + 250);
	}
	glEnd();//oval1

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad)*radius7 + 613 - a, sin(DegInRad)*radius6 + 250);
	}
	glEnd();//oval2

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad)*radius9 + 592 - a, sin(DegInRad)*radius8 + 254);
	}
	glEnd();//oval3

	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad) * 2 + 592 - a, sin(DegInRad) * 2 + 254);
	}
	glEnd();//eye

	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(591 - a, 256);
	glVertex2f(575 - a, 273);
	glEnd();//antenna1

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad) * 3 + 574 - a, sin(DegInRad) * 3 + 272);
	}
	glEnd();//antenna1 bulb

	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(592 - a, 256);
	glVertex2f(581 - a, 280);
	glEnd();//antenna2

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad) * 3 + 579 - a, sin(DegInRad) * 3 + 279);
	}
	glEnd();//antenna2 bulb

	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(610 - a, 250);
	glVertex2f(594 - a, 235);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(594 - a, 235);
	glVertex2f(608 - a, 222);
	glEnd();//leg1

	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(617 - a, 250);
	glVertex2f(601 - a, 235);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(601 - a, 235);
	glVertex2f(615 - a, 222);
	glEnd();//leg2

	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(630 - a, 250);
	glVertex2f(614 - a, 235);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(614 - a, 235);
	glVertex2f(628 - a, 222);
	glEnd();//leg3

	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(637 - a, 250);
	glVertex2f(621 - a, 235);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(621 - a, 235);
	glVertex2f(635 - a, 222);
	glEnd();//leg4 
	//glFlush();
}


//ant3

void s3ant3(int a)
{
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad)*radius5 + 750 - a, sin(DegInRad)*radius4 + 300);
	}
	glEnd();//oval1

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad)*radius7 + 713 - a, sin(DegInRad)*radius6 + 300);
	}
	glEnd();//oval2

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad)*radius9 + 692 - a, sin(DegInRad)*radius8 + 304);
	}
	glEnd();//oval3

	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad) * 2 + 692 - a, sin(DegInRad) * 2 + 304);
	}
	glEnd();//eye

	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(691 - a, 306);
	glVertex2f(675 - a, 323);
	glEnd();//antenna1

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad) * 3 + 674 - a, sin(DegInRad) * 3 + 322);
	}
	glEnd();//antenna1 bulb

	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(692 - a, 306);
	glVertex2f(681 - a, 330);
	glEnd();//antenna2

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad) * 3 + 679 - a, sin(DegInRad) * 3 + 329);
	}
	glEnd();//antenna2 bulb

	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(710 - a, 300);
	glVertex2f(694 - a, 285);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(694 - a, 285);
	glVertex2f(708 - a, 272);
	glEnd();//leg1

	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(717 - a, 300);
	glVertex2f(701 - a, 285);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(701 - a, 285);
	glVertex2f(715 - a, 272);
	glEnd();//leg2

	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(730 - a, 300);
	glVertex2f(714 - a, 285);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(714 - a, 285);
	glVertex2f(728 - a, 272);
	glEnd();//leg3

	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(737 - a, 300);
	glVertex2f(721 - a, 285);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(721 - a, 285);
	glVertex2f(735 - a, 272);
	glEnd();//leg4 
	//glFlush();
}
//ant4
void s3ant4(int a)
{

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad)*radius5 + 850 - a, sin(DegInRad)*radius4 + 200);
	}
	glEnd();//oval1

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad)*radius7 + 813 - a, sin(DegInRad)*radius6 + 200);
	}
	glEnd();//oval2

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad)*radius9 + 792 - a, sin(DegInRad)*radius8 + 204);
	}
	glEnd();//oval3

	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad) * 2 + 792 - a, sin(DegInRad) * 2 + 204);
	}
	glEnd();//eye

	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(791 - a, 206);
	glVertex2f(775 - a, 223);
	glEnd();//antenna1

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad) * 3 + 774 - a, sin(DegInRad) * 3 + 222);
	}
	glEnd();//antenna1 bulb

	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(792 - a, 206);
	glVertex2f(781 - a, 230);
	glEnd();//antenna2

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad) * 3 + 779 - a, sin(DegInRad) * 3 + 229);
	}
	glEnd();//antenna2 bulb

	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(810 - a, 200);
	glVertex2f(794 - a, 185);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(794 - a, 185);
	glVertex2f(808 - a, 172);
	glEnd();//leg1

	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(817 - a, 200);
	glVertex2f(801 - a, 185);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(801 - a, 185);
	glVertex2f(815 - a, 172);
	glEnd();//leg2

	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(830 - a, 200);
	glVertex2f(814 - a, 185);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(814 - a, 185);
	glVertex2f(828 - a, 172);
	glEnd();//leg3

	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(837 - a, 200);
	glVertex2f(821 - a, 185);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(821 - a, 185);
	glVertex2f(835 - a, 172);
	glEnd();//leg4 
	//glFlush();
}
//ant5

void s3ant5(int a)
{

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad)*radius5 + 750 - a, sin(DegInRad)*radius4 + 250);
	}
	glEnd();//oval1

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad)*radius7 + 713 - a, sin(DegInRad)*radius6 + 250);
	}
	glEnd();//oval2

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad)*radius9 + 692 - a, sin(DegInRad)*radius8 + 254);
	}
	glEnd();//oval3

	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad) * 2 + 692 - a, sin(DegInRad) * 2 + 254);
	}
	glEnd();//eye

	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(691 - a, 256);
	glVertex2f(675 - a, 273);
	glEnd();//antenna1

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad) * 3 + 674 - a, sin(DegInRad) * 3 + 272);
	}
	glEnd();//antenna1 bulb

	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(692 - a, 256);
	glVertex2f(681 - a, 280);
	glEnd();//antenna2

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad) * 3 + 679 - a, sin(DegInRad) * 3 + 279);
	}
	glEnd();//antenna2 bulb

	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(710 - a, 250);
	glVertex2f(694 - a, 235);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(694 - a, 235);
	glVertex2f(708 - a, 222);
	glEnd();//leg1

	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(717 - a, 250);
	glVertex2f(701 - a, 235);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(701 - a, 235);
	glVertex2f(715 - a, 222);
	glEnd();//leg2

	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(730 - a, 250);
	glVertex2f(714 - a, 235);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(714 - a, 235);
	glVertex2f(728 - a, 222);
	glEnd();//leg3

	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(737 - a, 250);
	glVertex2f(721 - a, 235);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(721 - a, 235);
	glVertex2f(735 - a, 222);
	glEnd();//leg4
	//glFlush();
}


//ant6
void s3ant6(int a)
{
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad)*radius5 + 750 - a, sin(DegInRad)*radius4 + 150);
	}
	glEnd();//oval1

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad)*radius7 + 713 - a, sin(DegInRad)*radius6 + 150);
	}
	glEnd();//oval2

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad)*radius9 + 692 - a, sin(DegInRad)*radius8 + 154);
	}
	glEnd();//oval3

	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad) * 2 + 692 - a, sin(DegInRad) * 2 + 154);
	}
	glEnd();//eye

	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(691 - a, 156);
	glVertex2f(675 - a, 173);
	glEnd();//antenna1

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad) * 3 + 674 - a, sin(DegInRad) * 3 + 172);
	}
	glEnd();//antenna1 bulb

	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(692 - a, 156);
	glVertex2f(681 - a, 180);
	glEnd();//antenna2

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad) * 3 + 679 - a, sin(DegInRad) * 3 + 179);
	}
	glEnd();//antenna2 bulb

	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(710 - a, 150);
	glVertex2f(694 - a, 135);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(694 - a, 135);
	glVertex2f(708 - a, 122);
	glEnd();//leg1

	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(717 - a, 150);
	glVertex2f(701 - a, 135);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(701 - a, 135);
	glVertex2f(715 - a, 122);
	glEnd();//leg2

	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(730 - a, 150);
	glVertex2f(714 - a, 135);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(714 - a, 135);
	glVertex2f(728 - a, 122);
	glEnd();//leg3

	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(737 - a, 150);
	glVertex2f(721 - a, 135);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(721 - a, 135);
	glVertex2f(735 - a, 122);
	glEnd();//leg4
	//glFlush();

}
//ant7

void s3ant7(int a)
{
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad)*radius5 + 950 - a, sin(DegInRad)*radius4 + 150);
	}
	glEnd();//oval1

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad)*radius7 + 913 - a, sin(DegInRad)*radius6 + 150);
	}
	glEnd();//oval2

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad)*radius9 + 892 - a, sin(DegInRad)*radius8 + 154);
	}
	glEnd();//oval3

	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad) * 2 + 892 - a, sin(DegInRad) * 2 + 154);
	}
	glEnd();//eye

	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(891 - a, 156);
	glVertex2f(875 - a, 173);
	glEnd();//antenna1

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad) * 3 + 874 - a, sin(DegInRad) * 3 + 172);
	}
	glEnd();//antenna1 bulb

	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(892 - a, 156);
	glVertex2f(881 - a, 180);
	glEnd();//antenna2

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad) * 3 + 879 - a, sin(DegInRad) * 3 + 179);
	}
	glEnd();//antenna2 bulb

	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(910 - a, 150);
	glVertex2f(894 - a, 135);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(894 - a, 135);
	glVertex2f(908 - a, 122);
	glEnd();//leg1

	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(917 - a, 150);
	glVertex2f(901 - a, 135);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(901 - a, 135);
	glVertex2f(915 - a, 122);
	glEnd();//leg2

	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(930 - a, 150);
	glVertex2f(914 - a, 135);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(914 - a, 135);
	glVertex2f(928 - a, 122);
	glEnd();//leg3

	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(937 - a, 150);
	glVertex2f(921 - a, 135);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(921 - a, 135);
	glVertex2f(935 - a, 122);
	glEnd();//leg4
	//glFlush();
}

void s3(void)
{
	glClearColor(.827, .827, .827, 1.0);
	glColor3f(1.0, 1.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 1500, 0, 750);
	for (a = -460; a <= 125; a += 3)
	{
		glClear(GL_COLOR_BUFFER_BIT);
		for (GLint m = 0; m < 10000; m++)
			for (GLint h = 0; h < 1000; h++);
		back();
		laddu1();
		s3ant(a);
		s3ant2(a);
		s3ant3(a);
		s3ant4(a);
		s3ant5(a);
		s3ant7(a);
		s3ant6(a);
		glutSwapBuffers();
	}


	glFlush();
}


void s4ant1(int j)
{
	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2d(161 + j, 240);
	glVertex2d(177 + j, 225);
	glEnd();
	glColor3f(0, 0, 0);
	glBegin(GL_LINES);

	glVertex2d(177 + j, 225);
	glVertex2d(167 + j, 215);
	glEnd();//leg3


	glColor3f(0, 0, 0);
	glBegin(GL_LINES);

	glVertex2d(150 + j, 240);
	glVertex2d(166 + j, 225);
	glEnd();
	glColor3f(0, 0, 0);
	glBegin(GL_LINES);

	glVertex2d(166 + j, 225);
	glVertex2d(156 + j, 215);
	glEnd();//leg2
	glColor3f(0, 0, 0);
	glBegin(GL_LINES);

	glVertex2d(139 + j, 241);
	glVertex2d(155 + j, 225);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_LINES);

	glVertex2d(155 + j, 225);
	glVertex2d(145 + j, 215);
	glEnd();//leg4



	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2d(128 + j, 241);
	glVertex2d(144 + j, 225);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2d(144 + j, 225);
	glVertex2d(134 + j, 215);
	glEnd();//leg1
	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);

	for (i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad)*radius7 + 163 + j, sin(DegInRad)*radius6 + 240);
	}
	glEnd();//oval2 

	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);

	for (i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad)*radius5 + 130 + j, sin(DegInRad)*radius4 + 240);
	}
	glEnd();//oval1


	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);

	for (i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad)*radius9 + 181 + j, sin(DegInRad)*radius8 + 244);
	}
	glEnd();//oval3
	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);

	for (i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad) * 2 + 183 + j, sin(DegInRad) * 2 + 244);
	}
	glEnd();//eye
	glColor3f(0, 0, 0);
	glBegin(GL_LINES);

	glVertex2d(189 + j, 272);
	glVertex2d(181 + j, 245);
	glEnd();//antenna1
	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);

	for (i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad) * 3 + 190 + j, sin(DegInRad) * 3 + 272);
	}
	glEnd();//antenna1 bulb
	glColor3d(0, 0, 0);
	glBegin(GL_LINES);

	glVertex2d(192 + j, 265);
	glVertex2d(182 + j, 245);
	glEnd();//antenna2
	glColor3d(0, 0, 0);
	glBegin(GL_POLYGON);

	for (i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad) * 3 + 193 + j, sin(DegInRad) * 3 + 264);
	}
	glEnd();//antenna2 bulb
	//glFlush();
}

void s4ant2(int j)
{
	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2d(166 + j, 300);
	glVertex2d(182 + j, 285);
	glEnd();
	glColor3f(0, 0, 0);
	glBegin(GL_LINES);

	glVertex2d(182 + j, 285);
	glVertex2d(172 + j, 275);
	glEnd();//leg3


	glColor3f(0, 0, 0);
	glBegin(GL_LINES);

	glVertex2d(155 + j, 300);
	glVertex2d(171 + j, 285);
	glEnd();
	glColor3f(0, 0, 0);
	glBegin(GL_LINES);

	glVertex2d(171 + j, 285);
	glVertex2d(161 + j, 275);
	glEnd();//leg2
	glColor3f(0, 0, 0);
	glBegin(GL_LINES);

	glVertex2d(144 + j, 301);
	glVertex2d(160 + j, 285);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_LINES);

	glVertex2d(160 + j, 285);
	glVertex2d(150 + j, 275);
	glEnd();//leg4



	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2d(133 + j, 301);
	glVertex2d(149 + j, 285);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2d(149 + j, 285);
	glVertex2d(139 + j, 275);
	glEnd();//leg1
	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);

	for (i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad)*radius7 + 168 + j, sin(DegInRad)*radius6 + 300);
	}
	glEnd();//oval2 

	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);

	for (i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad)*radius5 + 135 + j, sin(DegInRad)*radius4 + 300);
	}
	glEnd();//oval1


	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);

	for (i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad)*radius9 + 186 + j, sin(DegInRad)*radius8 + 304);
	}
	glEnd();//oval3
	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);

	for (i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad) * 2 + 188 + j, sin(DegInRad) * 2 + 304);
	}
	glEnd();//eye
	glColor3f(0, 0, 0);
	glBegin(GL_LINES);

	glVertex2d(194 + j, 332);
	glVertex2d(186 + j, 305);
	glEnd();//antenna1
	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);

	for (i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad) * 3 + 195 + j, sin(DegInRad) * 3 + 332);
	}
	glEnd();//antenna1 bulb
	glColor3d(0, 0, 0);
	glBegin(GL_LINES);

	glVertex2d(197 + j, 325);
	glVertex2d(187 + j, 305);
	glEnd();//antenna2
	glColor3d(0, 0, 0);
	glBegin(GL_POLYGON);

	for (i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad) * 3 + 198 + j, sin(DegInRad) * 3 + 324);
	}
	glEnd();
	//glFlush();
}


void s4ant3(int j)
{
	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2d(181 + j, 190);
	glVertex2d(197 + j, 175);
	glEnd();
	glColor3f(0, 0, 0);
	glBegin(GL_LINES);

	glVertex2d(197 + j, 175);
	glVertex2d(187 + j, 165);
	glEnd();//leg3


	glColor3f(0, 0, 0);
	glBegin(GL_LINES);

	glVertex2d(180 + j, 190);
	glVertex2d(186 + j, 175);
	glEnd();
	glColor3f(0, 0, 0);
	glBegin(GL_LINES);

	glVertex2d(186 + j, 175);
	glVertex2d(176 + j, 165);
	glEnd();//leg2
	glColor3f(0, 0, 0);
	glBegin(GL_LINES);

	glVertex2d(159 + j, 191);
	glVertex2d(175 + j, 175);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_LINES);

	glVertex2d(175 + j, 175);
	glVertex2d(165 + j, 165);
	glEnd();//leg4



	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2d(148 + j, 191);
	glVertex2d(164 + j, 175);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2d(164 + j, 175);
	glVertex2d(154 + j, 165);
	glEnd();//leg1
	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);

	for (i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad)*radius7 + 183 + j, sin(DegInRad)*radius6 + 190);
	}
	glEnd();//oval2 

	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);

	for (i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad)*radius5 + 150 + j, sin(DegInRad)*radius4 + 190);
	}
	glEnd();//oval1


	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);

	for (i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad)*radius9 + 201 + j, sin(DegInRad)*radius8 + 194);
	}
	glEnd();//oval3
	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);

	for (i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad) * 2 + 203 + j, sin(DegInRad) * 2 + 194);
	}
	glEnd();//eye
	glColor3f(0, 0, 0);
	glBegin(GL_LINES);

	glVertex2d(209 + j, 222);
	glVertex2d(201 + j, 195);
	glEnd();//antenna1
	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);

	for (i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad) * 3 + 210 + j, sin(DegInRad) * 3 + 222);
	}
	glEnd();//antenna1 bulb
	glColor3d(0, 0, 0);
	glBegin(GL_LINES);

	glVertex2d(212 + j, 215);
	glVertex2d(202 + j, 195);
	glEnd();//antenna2
	glColor3d(0, 0, 0);
	glBegin(GL_POLYGON);

	for (i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad) * 3 + 213 + j, sin(DegInRad) * 3 + 214);
	}
	glEnd();
	//glFlush();
}


void s4ant4(int j)
{
	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2d(251 + j, 160);
	glVertex2d(267 + j, 145);
	glEnd();
	glColor3f(0, 0, 0);
	glBegin(GL_LINES);

	glVertex2d(267 + j, 145);
	glVertex2d(257 + j, 135);
	glEnd();//leg3


	glColor3f(0, 0, 0);
	glBegin(GL_LINES);

	glVertex2d(240 + j, 160);
	glVertex2d(256 + j, 145);
	glEnd();
	glColor3f(0, 0, 0);
	glBegin(GL_LINES);

	glVertex2d(256 + j, 145);
	glVertex2d(246 + j, 135);
	glEnd();//leg2
	glColor3f(0, 0, 0);
	glBegin(GL_LINES);

	glVertex2d(229 + j, 161);
	glVertex2d(245 + j, 145);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_LINES);

	glVertex2d(245 + j, 145);
	glVertex2d(235 + j, 135);
	glEnd();//leg4



	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2d(218 + j, 161);
	glVertex2d(234 + j, 145);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2d(234 + j, 145);
	glVertex2d(224 + j, 135);
	glEnd();//leg1
	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);

	for (i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad)*radius7 + 253 + j, sin(DegInRad)*radius6 + 160);
	}
	glEnd();//oval2 

	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);

	for (i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad)*radius5 + 220 + j, sin(DegInRad)*radius4 + 160);
	}
	glEnd();//oval1


	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);

	for (i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad)*radius9 + 271 + j, sin(DegInRad)*radius8 + 164);
	}
	glEnd();//oval3
	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);

	for (i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad) * 2 + 273 + j, sin(DegInRad) * 2 + 164);
	}
	glEnd();//eye
	glColor3f(0, 0, 0);
	glBegin(GL_LINES);

	glVertex2d(279 + j, 192);
	glVertex2d(271 + j, 165);
	glEnd();//antenna1
	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);

	for (i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad) * 3 + 280 + j, sin(DegInRad) * 3 + 192);
	}
	glEnd();//antenna1 bulb
	glColor3d(0, 0, 0);
	glBegin(GL_LINES);

	glVertex2d(282 + j, 185);
	glVertex2d(272 + j, 165);
	glEnd();//antenna2
	glColor3d(0, 0, 0);
	glBegin(GL_POLYGON);

	for (i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad) * 3 + 283 + j, sin(DegInRad) * 3 + 184);
	}
	glEnd();
	//glFlush();
}


void s4laddu1(int z)
{
	glColor3d(.753, .753, .753);
	glBegin(GL_LINE_LOOP);

	for (i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad) * 1 + 27 + z, sin(DegInRad) * 1 + 27);
	}
	glEnd();//bk2

	glBegin(GL_LINE_LOOP);
	glColor3d(1, 0.271, 0);
	for (i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad)*radius1 + 270 + z, sin(DegInRad)*radius1 + 270);
	}
	glEnd();//circle border

	glBegin(GL_POLYGON);
	glColor3d(1, 0.647, 0);
	for (i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad)*radius2 + 270 + z, sin(DegInRad)*radius2 + 270);
	}
	glEnd();//circle

	glColor3d(1, 0.843, 0);
	glBegin(GL_POLYGON);

	for (i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad)*radius3 + 240 + z, sin(DegInRad)*radius3 + 235);
	}
	glEnd();//circle dots


	glColor3d(1, 0.843, 0);
	glBegin(GL_POLYGON);
	for (i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad)*radius3 + 323 + z, sin(DegInRad)*radius3 + 257);
	}
	glEnd();//circle dots


	glBegin(GL_POLYGON);
	glColor3d(1, 0.843, 0);
	for (i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad)*radius3 + 290 + z, sin(DegInRad)*radius3 + 320);
	}
	glEnd();//circle dot



	glColor3d(1, 0.843, 0);
	glBegin(GL_POLYGON);

	for (i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad)*radius3 + 266 + z, sin(DegInRad)*radius3 + 210);
	}
	glEnd();//circle dots
	glColor3d(1, 0.843, 0);
	glBegin(GL_POLYGON);

	for (i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad)*radius3 + 330 + z, sin(DegInRad)*radius3 + 300);
	}
	glEnd();//circle dots
	glColor3d(1, 0.843, 0);
	glBegin(GL_POLYGON);

	for (i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad)*radius3 + 277 + z, sin(DegInRad)*radius3 + 275);
	}
	glEnd();//circle dots
	glColor3d(1, 0.843, 0);
	glBegin(GL_POLYGON);

	for (i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad)*radius3 + 210 + z, sin(DegInRad)*radius3 + 250);
	}
	glEnd();//circle dots
	glColor3d(1, 0.843, 0);
	glBegin(GL_POLYGON);

	for (i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad)*radius3 + 232 + z, sin(DegInRad)*radius3 + 320);
	}
	glEnd();//circle dots
	glColor3d(1, 0.843, 0);
	glBegin(GL_POLYGON);

	for (i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad)*radius3 + 287 + z, sin(DegInRad)*radius3 + 240);
	}
	glEnd();//circle dots
	glColor3d(1, 0.843, 0);
	glBegin(GL_POLYGON);

	for (i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad)*radius3 + 205 + z, sin(DegInRad)*radius3 + 285);
	}
	glEnd();//circle dots
	glColor3d(1.0, 0.843, 0);
	glBegin(GL_POLYGON);

	for (i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad)*radius3 + 247 + z, sin(DegInRad)*radius3 + 288);
	}
	glEnd();//circle dots
	//glFlush();

}


void s4(void)
{
	glClearColor(0.827, 0.827, 0.827, 1.0);
	glColor3f(1.0, 1.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 1500, 0, 750);
	for (j = 0; j < 1000; j += 3)
	{
		glClear(GL_COLOR_BUFFER_BIT);
		for (GLint m = 0; m < 10000; m++)
			for (GLint h = 0; h < 1000; h++);
		back();
		s4laddu1(j);
		s4ant1(j);
		s4ant2(j);
		s4ant3(j);
		s4ant4(j);
		glutSwapBuffers();
	}

	glFlush();
}


//story 2

void s5()
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	drawText(550, 670, 0, 191, 255, "THE SWANS & THE TURTLE");
	drawText(50, 590, 1, 0, 0, "SCENE 1 :");
	drawText(250, 560, 1, 1, 1, "In this scene 3 friends, The swans and the turtle talk about a huge lake in");
	drawText(250, 530, 1, 1, 1, "the next village. The swans promise the turtle to take him there. ");
	drawText(50, 490, 1, 0, 0, "SCENE 2 :");

	drawText(250, 460, 1, 1, 1, "The swans fly the turtle by making him bite the centre of a stick and then each holding");
	drawText(250, 430, 1, 1, 1, "the ends of the stick. The swans warn him not to open his mouth, otherwise he would fall.");
	drawText(50, 400, 1, 0, 0, "SCENE 3 :");
	drawText(250, 370, 1, 1, 1, "During the journey the turtle gets distracted by the shouting of people below and open");
	drawText(250, 340, 1, 1, 1, "his mouth to say something. He then loses his grip of the stick and starts falling.");
	drawText(50, 310, 1, 0, 0, "SCENE 4 :");
	drawText(250, 280, 1, 1, 1, "The turtle, because of his stupidity falls to his death while the people");
	drawText(250, 250, 1, 1, 1, "below watch this strange");
	drawText(300, 190, 0, 0, 1, "The moral is :");
	drawText(500, 150, 0, 1, 0, "::::  One should speak only at the right moment  ::::");
	drawText(1100, 50, 255, 215, 0, "Press D for the next page");
	glFlush();
}



void swan()
{

	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);
	glVertex2d(102, 210);
	glVertex2d(135, 250);
	glVertex2d(85, 255);
	glEnd();


	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);

	for (int i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad) * 100 + 205, sin(DegInRad) * 40 + 220);
	}
	glEnd();//swan_belly


	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);

	for (int i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad) * 22 + 310, sin(DegInRad) * 19 + 340);
	}
	glEnd();//swan_head

	glColor3f(1, 0.272, 0);
	glBegin(GL_POLYGON);
	glVertex2d(315, 321);
	glVertex2d(330, 340);
	glVertex2d(350, 323);
	glEnd();//swan_beak
	glColor3f(1, 0.272, 0);
	glBegin(GL_POLYGON);

	for (int i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad) * 12 + 344, sin(DegInRad) * 3.5 + 324);
	}
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_LINE_LOOP);

	for (int i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad) * 6 + 314, sin(DegInRad) * 10 + 341);
	}
	glEnd();//
	glColor3f(0.118, 0.565, 1);
	glBegin(GL_POLYGON);

	for (int i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad) * 5 + 314, sin(DegInRad) * 6 + 338);
	}
	glEnd();//
	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);

	for (int i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad) * 4 + 314, sin(DegInRad) * 4 + 336);
	}
	glEnd();//

	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);
	glVertex2f(305, 225);
	glVertex2f(289, 224);
	glVertex2f(286, 200);
	glVertex2f(296, 203);
	glVertex2f(304, 208);
	glVertex2f(312, 213);
	glVertex2f(315, 217);
	glVertex2f(317, 219);
	glVertex2f(318, 223);
	glVertex2f(318, 229);
	glVertex2f(317, 234);
	glVertex2f(314, 239);
	glVertex2f(310, 244);
	glVertex2f(287, 268);
	glVertex2f(280, 280);
	glVertex2f(274, 289);
	glVertex2f(266, 309);
	glVertex2f(254, 288);
	glEnd();

	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);
	glVertex2f(272, 309);
	glVertex2f(279, 319);
	glVertex2f(284, 325);
	glVertex2f(293, 330);
	glVertex2f(290, 342);

	glVertex2f(290, 349);
	glVertex2f(274, 338);
	glVertex2f(266, 334);
	glVertex2f(260, 328);
	glVertex2f(257, 322);
	glVertex2f(253, 312);
	glVertex2f(252, 303);
	glVertex2f(253, 293);
	glVertex2f(254, 288);
	glVertex2f(259, 278);
	glVertex2f(263, 273);
	glVertex2f(270, 264);
	glVertex2f(281, 253);
	glVertex2f(291, 244);
	glVertex2f(300, 234);
	glVertex2f(305, 225);
	//glVertex2f(273, 309);
	glEnd();//swan_neck


	//swan2

	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);
	glVertex2d(402, 210);
	glVertex2d(435, 250);
	glVertex2d(385, 255);
	glEnd();


	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);

	for (int i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad) * 100 + 505, sin(DegInRad) * 40 + 220);
	}
	glEnd();//swan_belly


	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);

	for (int i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad) * 22 + 610, sin(DegInRad) * 19 + 340);
	}
	glEnd();//swan_head

	glColor3f(1, 0.272, 0);
	glBegin(GL_POLYGON);
	glVertex2d(615, 321);
	glVertex2d(630, 340);
	glVertex2d(650, 323);
	glEnd();//swan_beak
	glColor3f(1, 0.272, 0);
	glBegin(GL_POLYGON);

	for (int i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad) * 12 + 644, sin(DegInRad) * 3.5 + 324);
	}
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_LINE_LOOP);

	for (int i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad) * 6 + 614, sin(DegInRad) * 10 + 341);
	}
	glEnd();//
	glColor3f(0.118, 0.565, 1);
	glBegin(GL_POLYGON);

	for (int i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad) * 5 + 614, sin(DegInRad) * 6 + 338);
	}
	glEnd();//
	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);

	for (int i = 0; i < 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad) * 4 + 614, sin(DegInRad) * 4 + 336);
	}
	glEnd();//

	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);
	glVertex2f(605, 225);
	glVertex2f(589, 224);
	glVertex2f(586, 200);
	glVertex2f(596, 203);
	glVertex2f(604, 208);
	glVertex2f(612, 213);
	glVertex2f(615, 217);
	glVertex2f(617, 219);
	glVertex2f(618, 223);
	glVertex2f(618, 229);
	glVertex2f(617, 234);
	glVertex2f(614, 239);
	glVertex2f(610, 244);
	glVertex2f(587, 268);
	glVertex2f(580, 280);
	glVertex2f(574, 289);
	glVertex2f(566, 309);
	glVertex2f(554, 288);
	glEnd();

	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);
	glVertex2f(572, 309);
	glVertex2f(579, 319);
	glVertex2f(584, 325);
	glVertex2f(593, 330);
	glVertex2f(590, 342);

	glVertex2f(590, 349);
	glVertex2f(574, 338);
	glVertex2f(566, 334);
	glVertex2f(560, 328);
	glVertex2f(557, 322);
	glVertex2f(553, 312);
	glVertex2f(552, 303);
	glVertex2f(553, 293);
	glVertex2f(554, 288);
	glVertex2f(559, 278);
	glVertex2f(563, 273);
	glVertex2f(570, 264);
	glVertex2f(581, 253);
	glVertex2f(591, 244);
	glVertex2f(600, 234);
	glVertex2f(605, 225);
	//glVertex2f(273, 309);
	glEnd();//swan_neck



}

void back1(int x)
{

	glColor3f(0.529, 0.808, 0.922);
	glBegin(GL_POLYGON);
	glVertex2f(0, 270);
	glVertex2f(0, 750);
	glVertex2f(1500, 750);
	glVertex2f(1500, 270);
	glEnd();

	glColor3f(0.545, 0.271, 0.075);
	glBegin(GL_POLYGON);
	glVertex2f(0, 296);
	glVertex2f(190, 510);
	glVertex2f(220, 535);
	glVertex2f(250, 569);
	glVertex2f(290, 590);
	glVertex2f(330, 555);
	glVertex2f(363, 510);
	glVertex2f(410, 460);
	glVertex2f(540, 380);
	glVertex2f(870, 296);
	glEnd();

	glColor3f(0.678, 1.000, 0.184);
	glBegin(GL_POLYGON);
	glVertex2f(0, 0);
	glVertex2f(0, 296);
	glVertex2f(1500, 296);
	glVertex2f(1500, 0);


	glEnd();



	glColor3f(0.133, 0.545, 0.133);
	glBegin(GL_POLYGON);
	glVertex2f(0, 295);
	glVertex2f(0, 320);
	glVertex2f(50, 333);
	glVertex2f(100, 319);
	glVertex2f(150, 330);
	glVertex2f(200, 323);
	glVertex2f(250, 334);
	glVertex2f(300, 320);
	glVertex2f(350, 333);
	glVertex2f(400, 319);
	glVertex2f(450, 330);
	glVertex2f(500, 323);
	glVertex2f(550, 334);
	glVertex2f(600, 320);
	glVertex2f(650, 333);
	glVertex2f(700, 317);
	glVertex2f(750, 335);
	glVertex2f(800, 315);
	glVertex2f(850, 338);
	glVertex2f(900, 328);
	glVertex2f(950, 315);
	glVertex2f(1000, 335);
	glVertex2f(1050, 312);
	glVertex2f(1100, 338);
	glVertex2f(1150, 318);
	glVertex2f(1200, 320);
	glVertex2f(1250, 339);
	glVertex2f(1300, 319);
	glVertex2f(1350, 337);
	glVertex2f(1400, 320);
	glVertex2f(1450, 335);
	glVertex2f(1500, 328);
	glVertex2f(1500, 295);

	glEnd();

	glColor3f(0.255, 0.412, 0.882);
	glBegin(GL_POLYGON);

	for (int i = 0; i <= 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad) * 601.3 + 250, sin(DegInRad) * 140.2 + 155.5);
	}
	glEnd();//lake

	glColor3f(0.118, 0.565, 1.000);
	glBegin(GL_POLYGON);

	for (int i = 0; i <= 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad) * 600 + 250, sin(DegInRad) * 140 + 156);
	}
	glEnd();//lake

	glColor3f(0.118, 0.565, 1.000);
	glBegin(GL_POLYGON);
	glVertex2d(0, 296);
	glVertex2d(200, 296);
	glVertex2d(200, 255);
	glVertex2d(0, 255);
	glEnd();

	glColor3f(1, 1, 0.000);
	glBegin(GL_POLYGON);

	for (int i = 0; i <= 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad) * 60 + 800, sin(DegInRad) * 60 + 540);
	}
	glEnd();//sun

	//cloud1
	glColor3f(0.961, 0.961, 0.961);
	glBegin(GL_POLYGON);

	for (int i = 0; i <= 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad) * 60 + 90 + x, sin(DegInRad) * 30 + 580);
	}
	glEnd();//
	glColor3f(0.961, 0.961, 0.961);
	glBegin(GL_POLYGON);

	for (int i = 0; i <= 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad) * 60 + 150 + x, sin(DegInRad) * 30 + 600);
	}
	glEnd();//
	glColor3f(0.961, 0.961, 0.961);
	glBegin(GL_POLYGON);

	for (int i = 0; i <= 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad) * 40 + 110 + x, sin(DegInRad) * 30 + 610);
	}
	glEnd();//cloud1

	//cloud2
	glColor3f(0.961, 0.961, 0.961);
	glBegin(GL_POLYGON);

	for (int i = 0; i <= 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad) * 60 + 370 + x, sin(DegInRad) * 28 + 530);
	}
	glEnd();//
	glColor3f(0.961, 0.961, 0.961);
	glBegin(GL_POLYGON);

	for (int i = 0; i <= 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad) * 60 + 420 + x, sin(DegInRad) * 30 + 515);
	}
	glEnd();//
	glColor3f(0.961, 0.961, 0.961);
	glBegin(GL_POLYGON);

	for (int i = 0; i <= 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad) * 40 + 390 + x, sin(DegInRad) * 30 + 560);
	}
	glEnd();//cloud2

	if (x > 170)
	{
		glColor3f(1, 1, 1);
		glBegin(GL_POLYGON);

		for (int i = 0; i < 360; i++)
		{
			double DegInRad = i*DEG2RAD;
			glVertex2d(cos(DegInRad) * 104 + 505, sin(DegInRad) * 55 + 433);
		}
		glEnd();
		glColor3f(1, 1, 1);
		glBegin(GL_POLYGON);
		glVertex2d(530, 380);
		glVertex2d(550, 390);
		glVertex2d(580, 360);
		glEnd();//dialogue1

		drawText1(460, 455, 0, 0, 0, "Hey Turtle!");
		drawText1(415, 435, 0, 0, 0, "We've found a huge");
		drawText1(435, 415, 0, 0, 0, "lake in the next");
		drawText1(480, 395, 0, 0, 0, "village!");

	}

	if (x > 270)
	{
		glColor3f(1, 1, 1);
		glBegin(GL_POLYGON);

		for (int i = 0; i < 360; i++)
		{
			double DegInRad = i*DEG2RAD;
			glVertex2d(cos(DegInRad) * 80 + 805, sin(DegInRad) * 45 + 413);
		}
		glEnd();
		glColor3f(1, 1, 1);
		glBegin(GL_POLYGON);
		glVertex2d(797, 380);
		glVertex2d(817, 370);
		glVertex2d(767, 350);
		glEnd();//dialogue2

		drawText(770, 428, 0, 0, 0, "Really??");

	}

	if (x > 350)
	{
		glColor3f(1, 1, 1);
		glBegin(GL_POLYGON);

		for (int i = 0; i < 360; i++)
		{
			double DegInRad = i*DEG2RAD;
			glVertex2d(cos(DegInRad) * 104 + 205, sin(DegInRad) * 55 + 433);
		}
		glEnd();
		glColor3f(1, 1, 1);
		glBegin(GL_POLYGON);
		glVertex2d(230, 380);
		glVertex2d(250, 390);
		glVertex2d(280, 360);
		glEnd();//dialogue3

		drawText1(160, 459, 0, 0, 0, "Yes! If");
		drawText1(135, 439, 0, 0, 0, "you listen to us");
		drawText1(135, 419, 0, 0, 0, "carefully, we can");
		drawText1(142, 399, 0, 0, 0, "take you there!");

	}
	if (x > 450)
	{
		drawText1(790, 412, 0, 0, 0, ". . .");
		drawText1(755, 387, 0, 0, 0, "Okay done!");
	}

	//glFlush();
}





void turtle1(int x)
{

	glColor3f(0.000, 0.0, 0.000);
	glBegin(GL_LINE_LOOP);
	glVertex2d(1041 - x, 275);
	glVertex2d(1056 - x, 295);
	glVertex2d(1020 - x, 320);
	glVertex2d(999.7 - x, 314);
	glEnd();//turtle_neck

	glColor3f(0.000, 0.0, 0.000);
	glBegin(GL_LINE_LOOP);

	for (int i = 0; i <= 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad) * 25.5 + 1010 - x, sin(DegInRad) * 15.5 + 320);
	}
	glEnd();//turtle_head1

	glColor3f(0.000, 0.0, 0.000);
	glBegin(GL_LINE_LOOP);

	for (int i = 0; i <= 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad) * 18.5 + 1016 - x, sin(DegInRad) * 24.4 + 327);
	}
	glEnd();//turtle_head2

	glColor3f(0.000, 0.392, 0.000);
	glBegin(GL_POLYGON);
	glVertex2d(1040 - x, 275);
	glVertex2d(1056 - x, 295);
	glVertex2d(1020 - x, 320);
	glVertex2d(1000 - x, 315);
	glEnd();//turtle_neck

	glColor3f(0.000, 0.392, 0.000);
	glBegin(GL_POLYGON);

	for (int i = 0; i <= 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad) * 25 + 1010 - x, sin(DegInRad) * 15 + 320);
	}
	glEnd();//turtle_head1

	glColor3f(0.000, 0.392, 0.000);
	glBegin(GL_POLYGON);

	for (int i = 0; i <= 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad) * 18 + 1016 - x, sin(DegInRad) * 24 + 327);
	}
	glEnd();//turtle_head2
	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);

	for (int i = 0; i <= 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad) * 7 + 1012 - x, sin(DegInRad) * 9 + 330);
	}
	glEnd();//turtle_eye

	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);

	for (int i = 0; i <= 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad) * 4 + 1012 - x, sin(DegInRad) * 4 + 328);
	}
	glEnd();//turtle_eye_pupil

	glColor3f(0.000, 0.392, 0.000);
	glBegin(GL_POLYGON);
	glVertex2d(1055 - x, 263);
	glVertex2d(1038 - x, 240);
	glVertex2d(1055 - x, 240);
	glVertex2d(1070 - x, 263);
	glEnd();//turtle_leg1

	glColor3f(0.000, 0.392, 0.000);
	glBegin(GL_POLYGON);

	for (int i = 0; i <= 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad) * 11 + 1045 - x, sin(DegInRad) * 8 + 245);
	}
	glEnd();//turtle_leg1_foot

	glColor3f(0.000, 0.392, 0.000);
	glBegin(GL_POLYGON);
	glVertex2d(1073 - x, 263);
	glVertex2d(1085 - x, 240);
	glVertex2d(1097 - x, 242);
	glVertex2d(1088 - x, 263);
	glEnd();//turtle_leg2

	glColor3f(0.000, 0.392, 0.000);
	glBegin(GL_POLYGON);

	for (int i = 0; i <= 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad) * 12 + 1085 - x, sin(DegInRad) * 8 + 244);
	}
	glEnd();//turtle_leg2_foot

	glColor3f(0.000, 0.392, 0.000);
	glBegin(GL_POLYGON);
	glVertex2d(1112 - x, 263);
	glVertex2d(1095 - x, 240);
	glVertex2d(1112 - x, 240);
	glVertex2d(1127 - x, 263);
	glEnd();//turtle_leg3

	glColor3f(0.000, 0.392, 0.000);
	glBegin(GL_POLYGON);

	for (int i = 0; i <= 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad) * 11 + 1102 - x, sin(DegInRad) * 8 + 245);
	}
	glEnd();//turtle_leg3_foot

	glColor3f(0.000, 0.392, 0.000);
	glBegin(GL_POLYGON);
	glVertex2d(1130 - x, 263);
	glVertex2d(1142 - x, 240);
	glVertex2d(1154 - x, 242);
	glVertex2d(1145 - x, 263);
	glEnd();//turtle_leg4

	glColor3f(0.000, 0.392, 0.000);
	glBegin(GL_POLYGON);

	for (int i = 0; i <= 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad) * 12 + 1142 - x, sin(DegInRad) * 8 + 244);
	}
	glEnd();//turtle_leg4_foot

	glColor3f(0.855, 0.647, 0.125);
	glBegin(GL_POLYGON);

	for (int i = 0; i <= 180; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad) * 55.3 + 1100 - x, sin(DegInRad) * 60.2 + 280);
	}
	glEnd();//shell_fill

	glColor3f(0, 0, 0);
	glBegin(GL_LINES);

	for (int i = -1; i <= 180; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad) * 56 + 1100 - x, sin(DegInRad) * 60.3 + 280);
	}
	glEnd();//shell_background

	glBegin(GL_POLYGON);
	glColor3d(0.545, 0.271, 0.075);
	for (int i = -270; i <= -90; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad) * 9 + 1046 - x, sin(DegInRad) * 9 + 271);
	}
	glEnd();
	glColor3d(0.545, 0.271, 0.075);
	glBegin(GL_POLYGON);
	glVertex2d(1045 - x, 280);
	glVertex2d(1155 - x, 280);
	glVertex2d(1155 - x, 262);
	glVertex2d(1045 - x, 262);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3d(0.545, 0.271, 0.075);
	for (int i = -90; i <= 90; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad) * 9 + 1154 - x, sin(DegInRad) * 9 + 271);
	}
	glEnd();//turtle_lower

	glColor3d(0.545, 0.271, 0.075);
	glBegin(GL_POLYGON);
	glVertex2d(1085 - x, 331);
	glVertex2d(1115 - x, 331);
	glVertex2d(1123 - x, 316);
	glVertex2d(1115 - x, 301);
	glVertex2d(1085 - x, 301);
	glVertex2d(1077 - x, 316);
	glEnd();//top shell block

	glColor3d(0.545, 0.271, 0.075);
	glBegin(GL_POLYGON);
	glVertex2d(1073 - x, 284);
	glVertex2d(1082 - x, 297);
	glVertex2d(1073 - x, 311);
	glVertex2d(1060 - x, 310);
	glVertex2d(1051 - x, 297);
	glVertex2d(1058 - x, 284);
	glEnd();//left shell block

	glColor3d(0.545, 0.271, 0.075);
	glBegin(GL_POLYGON);
	glVertex2d(1127 - x, 284);
	glVertex2d(1118 - x, 297);
	glVertex2d(1127 - x, 311);
	glVertex2d(1140 - x, 310);
	glVertex2d(1149 - x, 297);
	glVertex2d(1142 - x, 284);
	glEnd();//right shell block

	glColor3d(0.545, 0.271, 0.075);
	glBegin(GL_POLYGON);
	glVertex2d(1087 - x, 297);
	glVertex2d(1113 - x, 297);
	glVertex2d(1121 - x, 284);
	glVertex2d(1079 - x, 284);
	glEnd();//bottom shell block
	//glFlush();
}



void s6()
{
	glClearColor(0.827, 0.827, 0.827, 1.0);
	glColor3f(1.0, 1.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 1500, 0, 750);


	for (int x = -200, a = 0; x < 270 || a<1000; a += 1)
	{
		glClear(GL_COLOR_BUFFER_BIT);
		for (GLint m = 0; m < 10000; m++)
			for (GLint h = 0; h < 1000; h++);
		back1(a);
		swan();
		if (x < 270)
			x += 3;
		turtle1(x);
		glutSwapBuffers();
	}
	glFlush();
}


void turtle3(int j)
{
	//Turtle

	glBegin(GL_POLYGON);
	glColor3f(0.000, 0.502, 0.000);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad)*radius11 + 750, sin(DegInRad)*radius11 + 420 - j);
	}
	glEnd();//TurtleFace

	glBegin(GL_POLYGON);
	glColor3f(0.196, 0.804, 0.196);
	for (i = 0; i <= 180; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad) * 13 + 750, sin(DegInRad) * 8 + 414 - j);
	}
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.196, 0.804, 0.196);
	for (i = 180; i <= 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad) * 13 + 750, sin(DegInRad) * 8 + 407 - j);
	}
	glEnd();
	//Turtle_mouth

	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad)*radius3 + 725, sin(DegInRad)*radius3 + 440 - j);
	}
	glEnd();//TurtleEye

	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad)*radius3 + 775, sin(DegInRad)*radius3 + 440 - j);
	}
	glEnd();//TurtleEye


	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad) * 5 + 775, sin(DegInRad) * 5 + 437 - j);
	}
	glEnd();//TurtleEyeinsideR


	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad) * 5 + 725, sin(DegInRad) * 5 + 437 - j);
	}
	glEnd();//TurtleEyeinsideL




	glColor3f(0.000, 0.502, 0.000);
	glBegin(GL_POLYGON);
	glVertex2f(730, 390 - j);
	glVertex2f(770, 390 - j);
	glVertex2f(770, 340 - j);
	glVertex2f(730, 340 - j);
	glEnd(); //TurtleNeck



	glColor3f(0.000, 0.502, 0.000);
	glBegin(GL_POLYGON);
	glVertex2f(815, 300 - j);
	glVertex2f(850, 320 - j);
	glVertex2f(915, 270 - j);
	glVertex2f(901, 249 - j);
	glVertex2f(850, 300 - j);
	glVertex2f(820, 275 - j);
	glEnd(); //TurtleLeg1

	glColor3f(0.000, 0.502, 0.000);
	glBegin(GL_POLYGON);
	glVertex2f(819, 220 - j);
	glVertex2f(851, 240 - j);
	glVertex2f(914, 190 - j);
	glVertex2f(901, 169 - j);
	glVertex2f(850, 218 - j);
	glVertex2f(824, 195 - j);
	glEnd(); //TurtleLeg2

	glColor3f(0.000, 0.502, 0.000);
	glBegin(GL_POLYGON);
	glVertex2f(565, 210 - j);
	glVertex2f(625, 230 - j);
	glVertex2f(685, 220 - j);
	glVertex2f(680, 195 - j);
	glVertex2f(625, 205 - j);
	glVertex2f(570, 185 - j);
	glEnd(); //TurtleLeg3


	glColor3f(0.000, 0.502, 0.000);
	glBegin(GL_POLYGON);
	glVertex2f(565, 290 - j);
	glVertex2f(625, 310 - j);
	glVertex2f(685, 300 - j);
	glVertex2f(680, 275 - j);
	glVertex2f(625, 285 - j);
	glVertex2f(570, 265 - j);
	glEnd(); //TurtleLeg4

	glBegin(GL_POLYGON);
	glColor3f(0.545, 0.271, 0.075);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad)*radius55 + 750, sin(DegInRad)*radius44 + 240 - j);
	}
	glEnd();//TurtleBody


	glBegin(GL_POLYGON);
	glColor3f(0.000, 0.502, 0.000);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad) * 60 + 750, sin(DegInRad) * 90 + 240 - j);
	}
	glEnd();//TurtleBody

	//glFlush();

}




void swan3(int h)
{

	//Swan1



	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glVertex2f(438, 475);
	glVertex2f(490, 515);
	glVertex2f(500, 480);
	glVertex2f(438, 440);


	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glVertex2f(490, 515);
	glVertex2f(500, 480);
	glVertex2f(640, 458 + h);
	glEnd();//swan rightwing

	glBegin(GL_LINE_STRIP);
	glColor3f(0, 0, 0);
	glVertex2f(438, 475);
	glVertex2f(490, 515);
	glVertex2f(640, 458 + h);
	glVertex2f(500, 480);
	glVertex2f(438, 440);

	glEnd();



	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glVertex2f(380, 475);
	glVertex2f(330, 515);
	glVertex2f(320, 480);
	glVertex2f(380, 440);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glVertex2f(330, 515);
	glVertex2f(320, 480);
	glVertex2f(180, 458 + h);
	glEnd(); //SwanLeftWing*/



	glBegin(GL_LINE_STRIP);
	glColor3f(0, 0, 0);
	glVertex2f(380, 475);
	glVertex2f(330, 515);
	glVertex2f(180, 458 + h);
	glVertex2f(320, 480);
	glVertex2f(380, 440);
	glEnd();




	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad) * 32 + 410, sin(DegInRad) * 32 + 455);
	}
	glEnd();//SwanFace
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad)*radius22 + 410, sin(DegInRad)*radius22 + 455);
	}
	glEnd();//SwanFace


	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad)*radius33 + 398, sin(DegInRad)*radius33 + 460);
	}
	glEnd();//swanEye
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad) * 6 + 398, sin(DegInRad) * 6 + 460);
	}
	glEnd();//swanEye


	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad) * 3 + 398, sin(DegInRad) * 4 + 458);
	}
	glEnd();//swanEyeinsideR




	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad)*radius33 + 424, sin(DegInRad)*radius33 + 460);
	}
	glEnd();//swanEyeL
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad) * 6 + 424, sin(DegInRad) * 6 + 460);
	}
	glEnd();//swanEyeL


	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad) * 3 + 424, sin(DegInRad) * 4 + 458);
	}
	glEnd();//swanEyeinsideL




	glColor3f(1.000, 0.647, 0.000);
	glBegin(GL_POLYGON);
	glVertex2f(410, 403);
	glVertex2f(420, 440);
	glVertex2f(400, 440);
	glEnd(); //SwanMouth




	//Swan2

	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glVertex2f(1116, 477);
	glVertex2f(1170, 515);
	glVertex2f(1180, 480);
	glVertex2f(1115, 448);

	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glVertex2f(1170, 515);
	glVertex2f(1180, 480);
	glVertex2f(1320, 458 + h);
	glEnd(); //swanrightwing

	glBegin(GL_LINE_STRIP);
	glColor3f(0, 0, 0);
	glVertex2f(1116, 477);
	glVertex2f(1170, 515);
	glVertex2f(1320, 458 + h);
	glVertex2f(1180, 480);
	glVertex2f(1115, 448);

	glEnd(); //swanrightwing

	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);
	glVertex2f(1064, 477);
	glVertex2f(1010, 515);
	glVertex2f(1000, 480);
	glVertex2f(1065, 448);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glVertex2f(1010, 515);
	glVertex2f(1000, 480);
	glVertex2f(860, 458 + h);
	glEnd(); //SwanLeftWing*/

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex2f(1064, 477);
	glVertex2f(1010, 515);
	glVertex2f(860, 458 + h);
	glVertex2f(1000, 480);
	glVertex2f(1065, 448);

	glEnd(); //SwanLeftWingborder

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad) * 32 + 1090, sin(DegInRad) * 32 + 455);
	}
	glEnd();//SwanFace


	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad)*radius22 + 1090, sin(DegInRad)*radius22 + 455);
	}
	glEnd();//SwanFace



	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad)*radius33 + 1078, sin(DegInRad)*radius33 + 460);
	}
	glEnd();//swanEyeL
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad) * 6 + 1078, sin(DegInRad) * 6 + 460);
	}
	glEnd();//swanEyeL


	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad) * 3 + 1078, sin(DegInRad) * 4 + 458);
	}
	glEnd();//swanEyeinsideL


	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad)*radius33 + 1104, sin(DegInRad)*radius33 + 460);
	}
	glEnd();//swanEyeL
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad) * 6 + 1104, sin(DegInRad) * 6 + 460);
	}
	glEnd();//swanEyeL


	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad) * 3 + 1104, sin(DegInRad) * 4 + 458);
	}
	glEnd();//swanEyeinsideL








	glColor3f(1.000, 0.647, 0.000);
	glBegin(GL_POLYGON);
	glVertex2f(1090, 403);
	glVertex2f(1100, 440);
	glVertex2f(1080, 440);
	glEnd(); //SwanMouth
	//glFlush();


}

void stick3()
{

	glColor3f(1.000, 0.843, 0.000);
	glBegin(GL_POLYGON);
	glVertex2f(400, 408);
	glVertex2f(1100, 408);
	glVertex2f(1100, 413);
	glVertex2f(400, 413);
	glEnd(); //Stick
}

void sun3()
{
	glColor3f(1.000, 0.843, 0.000);
	glBegin(GL_POLYGON);

	for (int i = 0; i <= 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad) * 60 + 970, sin(DegInRad) * 60 + 605);
	}
	glEnd();//sun
}


void cloud3(int x)
{
	//cloud1
	glColor3f(0.961, 0.961, 0.961);
	glBegin(GL_POLYGON);

	for (int i = 0; i <= 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad) * 60 + 90 + x, sin(DegInRad) * 30 + 580);
	}
	glEnd();//
	glColor3f(0.961, 0.961, 0.961);
	glBegin(GL_POLYGON);

	for (int i = 0; i <= 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad) * 60 + 150 + x, sin(DegInRad) * 30 + 600);
	}
	glEnd();//
	glColor3f(0.961, 0.961, 0.961);
	glBegin(GL_POLYGON);

	for (int i = 0; i <= 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad) * 40 + 110 + x, sin(DegInRad) * 30 + 610);
	}
	glEnd();//cloud1

	//cloud2
	glColor3f(0.961, 0.961, 0.961);
	glBegin(GL_POLYGON);

	for (int i = 0; i <= 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad) * 60 + 370 + x, sin(DegInRad) * 28 + 530);
	}
	glEnd();//
	glColor3f(0.961, 0.961, 0.961);
	glBegin(GL_POLYGON);

	for (int i = 0; i <= 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad) * 60 + 420 + x, sin(DegInRad) * 30 + 515);
	}
	glEnd();//
	glColor3f(0.961, 0.961, 0.961);
	glBegin(GL_POLYGON);

	for (int i = 0; i <= 360; i++)
	{
		double DegInRad = i*DEG2RAD;
		glVertex2d(cos(DegInRad) * 40 + 390 + x, sin(DegInRad) * 30 + 560);
	}
	glEnd();//cloud2
	//glFlush();

}



void s7(void)
{

	glClearColor(0.690, 0.878, 0.90, 1.0);
	glColor3f(1.0, 1.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 1500, 0, 750);
	for (float p = 0, q = 0; p <= 20 || q<1000; p++, q += 0.3)
	{

		for (int h = 0; h <= 120; h += 3)
		{
			glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
			q += 0.3;
			sun3();
			cloud3(q);
			turtle3(0);
			stick3();
			swan3(h);
			for (GLint m = 0; m < 1000; m++)
				for (GLint r = 0; r < 1400; r++);

			glutSwapBuffers();
		}

		for (int h = 150; h >= -30; h -= 3)
		{
			glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
			q += 0.3;
			sun3();
			cloud3(q);
			turtle3(0);
			stick3();
			swan3(h);
			for (GLint m = 0; m < 1000; m++)
				for (GLint r = 0; r < 1400; r++);
			glutSwapBuffers();
		}
	}

	glFlush();
}



void turtle4(int j)
{
	//Turtle

	glBegin(GL_POLYGON);
	glColor3f(0.000, 0.502, 0.000);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad)*radius11 + 750, sin(DegInRad)*radius11 + 420 - j);
	}
	glEnd();//TrutleFace

	glBegin(GL_POLYGON);
	glColor3f(0.196, 0.804, 0.196);
	for (i = 0; i <= 180; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad) * 13 + 750, sin(DegInRad) * 8 + 414 - j);
	}
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.196, 0.804, 0.196);
	for (i = 180; i <= 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad) * 13 + 750, sin(DegInRad) * 8 + 407 - j);
	}
	glEnd();
	//Turtle_mouth

	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad)*radius33 + 725, sin(DegInRad)*radius33 + 440 - j);
	}
	glEnd();//TrutleEye

	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad)*radius33 + 775, sin(DegInRad)*radius33 + 440 - j);
	}
	glEnd();//TrutleEye


	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad) * 5 + 775, sin(DegInRad) * 5 + 437 - j);
	}
	glEnd();//TrutleEyeinsideR


	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad) * 5 + 725, sin(DegInRad) * 5 + 437 - j);
	}
	glEnd();//TrutleEyeinsideL




	glColor3f(0.000, 0.502, 0.000);
	glBegin(GL_POLYGON);
	glVertex2f(730, 390 - j);
	glVertex2f(770, 390 - j);
	glVertex2f(770, 340 - j);
	glVertex2f(730, 340 - j);
	glEnd(); //TurtleNeck



	glColor3f(0.000, 0.502, 0.000);
	glBegin(GL_POLYGON);
	glVertex2f(815, 300 - j);
	glVertex2f(850, 320 - j);
	glVertex2f(915, 270 - j);
	glVertex2f(901, 249 - j);
	glVertex2f(850, 300 - j);
	glVertex2f(820, 275 - j);
	glEnd(); //TurtleLeg1

	glColor3f(0.000, 0.502, 0.000);
	glBegin(GL_POLYGON);
	glVertex2f(819, 220 - j);
	glVertex2f(851, 240 - j);
	glVertex2f(914, 190 - j);
	glVertex2f(901, 169 - j);
	glVertex2f(850, 218 - j);
	glVertex2f(824, 195 - j);
	glEnd(); //TurtleLeg2

	glColor3f(0.000, 0.502, 0.000);
	glBegin(GL_POLYGON);
	glVertex2f(565, 210 - j);
	glVertex2f(625, 230 - j);
	glVertex2f(685, 220 - j);
	glVertex2f(680, 195 - j);
	glVertex2f(625, 205 - j);
	glVertex2f(570, 185 - j);
	glEnd(); //TurtleLeg3


	glColor3f(0.000, 0.502, 0.000);
	glBegin(GL_POLYGON);
	glVertex2f(565, 290 - j);
	glVertex2f(625, 310 - j);
	glVertex2f(685, 300 - j);
	glVertex2f(680, 275 - j);
	glVertex2f(625, 285 - j);
	glVertex2f(570, 265 - j);
	glEnd(); //TurtleLeg4

	glBegin(GL_POLYGON);
	glColor3f(0.545, 0.271, 0.075);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad)*radius55 + 750, sin(DegInRad)*radius44 + 240 - j);
	}
	glEnd();//TurtleBody


	glBegin(GL_POLYGON);
	glColor3f(0.000, 0.502, 0.000);
	for (i = 0; i < 360; i++)
	{
		float DegInRad = i*DEG2RAD;
		glVertex2f(cos(DegInRad) * 60 + 750, sin(DegInRad) * 90 + 240 - j);
	}
	glEnd();//TurtleBody

	//glFlush();

}


void s8(void)

{

	glClearColor(0.690, 0.878, 0.90, 1.0);
	glColor3f(1.0, 1.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 1500, 0, 750);

	for (float p = 0, q = 0, r = 0; p <= 20 || q<1000; p++, q += 0.3, r += 2)
	{

		for (int h = 0; h <= 120; h += 3)
		{
			glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
			q += 0.3;
			r += 2;
			sun3();
			cloud3(q);
			turtle4(r);
			stick3();
			swan3(h);
			for (GLint m = 0; m < 1000; m++)
				for (GLint r = 0; r < 1400; r++);

			glutSwapBuffers();
		}

		for (int h = 150; h >= -30; h -= 3)
		{
			glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
			q += 0.3;
			r += 2;
			sun3();
			cloud3(q);
			turtle4(r);
			stick3();
			swan3(h);
			for (GLint m = 0; m < 1000; m++)
				for (GLint r = 0; r < 1400; r++);
			glutSwapBuffers();
		}

	}

	glFlush();
}



void display()
{

	glClearColor(0.561, 0.737, 0.561, 0.0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	drawText(580, 720, 0, 0, 0, "PROJECT TITLE:");
	drawText(567, 670, 0, 1, 0, " MORAL STORIES");

	drawText(595, 590, 1, 1, 1, "Developed By:");
	drawText(250, 530, 0, 0, 0, "SOUMYAJIT KUNDU");
	drawText(285, 505, 1, 0, 0, "(1DS14CS747)");
	drawText(890, 530, 0, 0, 0, "SOUMYA BHOWMIK");
	drawText(925, 505, 1, 0, 0, "(1DS14CS746)");
	drawText(560, 435, 0, 0, 0, "KAMAL SHUBHAM YADU");
	drawText(615, 410, 1, 0, 0, "(1DS14CS714)");

	drawText(530.0, 310, 1, 1, 0, "UNDER THE GUIDENCE OF");
	drawText(610.0, 270.0, 0, 1, 1, "Prof.Shasidhar B");
	drawText(530, 130, 0, 0, 1, "PRESS 'x' FOR MANUAL PAGE");
	glFlush();



}


void manual()
{
	//Content Page
	glClearColor(0.596, 0.984, 0.596, 0.0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	drawText(650.0, 650.0, 0, 0, 0, "CONTENTS");
	drawText(500.0, 80.0, 0, 0, 1, "Press 's' to go back to Home Page");
	drawText(90.0, 560.0, 0, 0, 0, "STORY 1 : THE ANT and THE SWEET");
	drawText(150.0, 500.0, 1, 0, 0, "press '1'  Description ");
	drawText(150.0, 450.0, 1, 0, 0, "press '2'  1st scene ");
	drawText(150.0, 400.0, 1, 0, 0, "press '3'  2nd scene");
	drawText(150.0, 350.0, 1, 0, 0, "press '4'  3rd scene");
	drawText(880.0, 560.0, 0, 0, 0, "STORY 2 : THE SWANS and THE TURTLE");
	drawText(940.0, 500.0, 1, 0, 0, "press '5'  Description");
	drawText(940.0, 450.0, 1, 0, 0, "press '6'  1st scene");
	drawText(940.0, 400.0, 1, 0, 0, "press '7'  2nd scene");
	drawText(940.0, 350.0, 1, 0, 0, "press '8'  3rd scene");
	//drawText(940.0, 300.0, 1, 0, 0, "press '9'  4th scene");
	drawText(500.0, 150.0, 0, 0, 1, "press 'q' to Quit from project");
	glFlush();
}

void Normalkey(unsigned char k, int x, int y)
{
	switch (k)
	{
	case 'x': manual();
		break;

	case '1':s1();
		break;

	case '2':s2();
		break;

	case '3':s3();
		break;

	case '4':s4();
		break;

	case '5':s5();
		break;

	case '6':s6();
		break;
	
	case '7':s7();
		break;

	case '8':s8();
		break;
	case 's':display();
		break;

	case 'q': exit(0);

	default:exit(0);
	}
}





void init()
{

	glClearColor(0.60, 0.88, 0.96, 0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 1500, 0, 750);

}
void main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_DEPTH);
	glutInitWindowSize(1500, 750);
	glutCreateWindow("robotics");
	glutDisplayFunc(display);
	glutKeyboardFunc(Normalkey);
	init();
	glutMainLoop();
}