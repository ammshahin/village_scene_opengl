
#include<GL/gl.h>
#include <GL/glut.h>


///tree

void tree()
{
///tree1
    glColor3f(0.6156863,0,0);

    glBegin(GL_QUADS);

    glVertex3i(50, 350, 0);
    glVertex3i(70, 350, 0);

    glVertex3i(70, 500, 0);
    glVertex3i(50, 500, 0);

    glEnd();

    glColor3f(0.0, 0.5, 0.0);

    glBegin(GL_POLYGON);

    glVertex3i(10, 500, 0);
    glVertex3i(110, 500, 0);


    glVertex3i(60, 600, 0);

    glEnd();
    glBegin(GL_POLYGON);


    glVertex3i(15, 550, 0);
    glVertex3i(105, 550, 0);


    glVertex3i(60, 650, 0);



    glEnd();

///tree2
    glColor3f(0.6156863,0,0);

    glBegin(GL_POLYGON);


    glVertex3i(50+100, 350, 0);
    glVertex3i(70+100, 350, 0);


    glVertex3i(70+100, 500, 0);
    glVertex3i(50+100, 500, 0);


    glEnd();

    glColor3f(0.0, 0.5, 0.0);

    glBegin(GL_POLYGON);


    glVertex3i(10+100, 500, 0);
    glVertex3i(110+100, 500, 0);


    glVertex3i(60+100, 600, 0);



    glEnd();
    glBegin(GL_POLYGON);


    glVertex3i(15+100, 550, 0);
    glVertex3i(105+100, 550, 0);


    glVertex3i(60+100, 650, 0);



    glEnd();
///tree3
    glColor3f(0.6156863,0,0);

    glBegin(GL_POLYGON);


    glVertex3i(50+1000, 350+100, 0);
    glVertex3i(70+1000, 350+100, 0);


    glVertex3i(70+1000, 500+100, 0);
    glVertex3i(50+1000, 500+100, 0);


    glEnd();

    glColor3f(0.0, 0.5, 0.0);

    glBegin(GL_POLYGON);


    glVertex3i(10+1000, 500+100, 0);
    glVertex3i(110+1000, 500+100, 0);


    glVertex3i(60+1000, 600+100, 0);



    glEnd();
    glBegin(GL_POLYGON);


    glVertex3i(15+1000, 550+100, 0);
    glVertex3i(105+1000, 550+100, 0);


    glVertex3i(60+1000, 650+100, 0);



    glEnd();
///tree4
    glColor3f(0.6156863,0,0);

    glBegin(GL_POLYGON);


    glVertex3i(50+1100, 350+200, 0);
    glVertex3i(70+1100, 350+200, 0);


    glVertex3i(70+1100, 500+200, 0);
    glVertex3i(50+1100, 500+200, 0);


    glEnd();

    glColor3f(0.0, 0.5, 0.0);

    glBegin(GL_POLYGON);


    glVertex3i(10+1100, 500+200, 0);
    glVertex3i(110+1100, 500+200, 0);


    glVertex3i(60+1100, 600+200, 0);



    glEnd();
    glBegin(GL_POLYGON);


    glVertex3i(15+1100, 550+200, 0);
    glVertex3i(105+1100, 550+200, 0);


    glVertex3i(60+1100, 650+200, 0);



    glEnd();
///tree5
    glColor3f(0.6156863,0,0);

    glBegin(GL_POLYGON);


    glVertex3i(50+900, 350+200, 0);
    glVertex3i(70+900, 350+200, 0);


    glVertex3i(70+900, 500+200, 0);
    glVertex3i(50+900, 500+200, 0);


    glEnd();

    glColor3f(0.0, 0.5, 0.0);

    glBegin(GL_POLYGON);


    glVertex3i(10+900, 500+200, 0);
    glVertex3i(110+900, 500+200, 0);


    glVertex3i(60+900, 600+200, 0);



    glEnd();
    glBegin(GL_POLYGON);


    glVertex3i(15+900, 550+200, 0);
    glVertex3i(105+900, 550+200, 0);


    glVertex3i(60+900, 650+200, 0);

    glEnd();


}
///river
void river()
{
    glColor3f(0.0352941176470588, 0.5098039215686275, 0.9568627450980392);
    glBegin(GL_POLYGON);

    glVertex3i(0, 0, 0);
    glVertex3i(1200, 0, 0);
    glVertex3i(1200, 300, 0);
    glVertex3i(0, 300, 0);


    glEnd();



}
//land
void land()
{
    glColor3f(0.5 ,1.0 ,0.5);
    glBegin(GL_POLYGON);

    glVertex3i(0, 300, 0);
    glVertex3i(1200, 300, 0);
    glVertex3i(1200, 600, 0);
    glVertex3i(0, 600, 0);


    glEnd();

}
///hill
void hill()
{
    glColor3f(0.50196, 0.25098, 0.0);
    glBegin(GL_POLYGON);

    glVertex3i(600, 600, 0);
    glVertex3i(800, 900, 0);
    glVertex3i(900, 650, 0);
    //glVertex3i(600, 600, 0);

    glColor3f(0.50196, 0.25098, 0.0);
    glBegin(GL_POLYGON);

    //glVertex3i(600, 600, 0);
    glVertex3i(900, 650, 0);
    glVertex3i(1000, 800, 0);
    glVertex3i(1100, 620, 0);

    glColor3f(0.50196, 0.25098, 0.0);
    glBegin(GL_POLYGON);

    glVertex3i(1050, 620, 0);
    glVertex3i(1200, 800, 0);
    glVertex3i(1200, 600, 0);
    //glVertex3i(1100, 620, 0);




    glEnd();

}


///house

void house()
{

///house1
    glColor3f(0.5411764705882353, 0.0, 0.5411764705882353);

    glBegin(GL_POLYGON);

    glVertex3i(220, 350, 0);
    glVertex3i(380, 350, 0);
    glVertex3i(380, 450, 0);
    glVertex3i(220, 450, 0);


    glEnd();

    glColor3f(0, 0, 1);
    glBegin(GL_POLYGON);

    glVertex3i(200, 450, 0);
    glVertex3i(400, 450, 0);
    glVertex3i(300, 650, 0);



    glEnd();


    glColor3f(1,1,0);
    glBegin(GL_POLYGON);

    glVertex3i(280, 350, 0);
    glVertex3i(320, 350, 0);
    glVertex3i(320, 450, 0);
    glVertex3i(280, 450, 0);


    glEnd();
///house2
    glColor3f(0.5411764705882353, 0.0, 0.5411764705882353);

    glBegin(GL_POLYGON);

    glVertex3i(220+200, 350+50, 0);
    glVertex3i(380+200, 350+50, 0);
    glVertex3i(380+200, 450+50, 0);
    glVertex3i(220+200, 450+50, 0);


    glEnd();

    glColor3f(1.444, .5, 0);
    glBegin(GL_POLYGON);

    glVertex3i(200+200, 450+50, 0);
    glVertex3i(400+200, 450+50, 0);
    glVertex3i(300+200, 650+50, 0);



    glEnd();


    glColor3f(1,1,0);
    glBegin(GL_POLYGON);

    glVertex3i(280+200, 350+50, 0);
    glVertex3i(320+200, 350+50, 0);
    glVertex3i(320+200, 450+50, 0);
    glVertex3i(280+200, 450+50, 0);


    glEnd();

}





int rad,x,y,a,b,h;
bool SE,E;

void sun()
{

    glColor3f(0.9764705882352941, 0.4705882352941176, 0.0196078431372549);
    a=1000;
    b=1000;
    x=0;
    rad=50;
    y=rad;
    h=1-rad;
    glBegin(GL_POLYGON);

    glVertex3i(x+b,y+b,0);


    if(h>=0)
    {
        SE=true;
        E=false;
    }
    else

    {
        E=true;
        SE=false;

    }

    while(y>=x)
    {

        if(SE)
        {

            h=h+5+2*(x-y);


            if(h>=0)
            {
                SE=true;
                E=false;
            }
            else

            {
                E=true;
                SE=false;

            }

            x++;
            y--;
            glVertex3f(x+a, y+b ,0.0);

            glVertex3f(y+a, x+b, 0.0);
            glVertex3f(-y+a, x+b, 0.0);
            glVertex3f(-x+a, -y+b, 0.0);
            glVertex3f(-y+a, -x+b, 0.0);
            glVertex3f(y+a,-x+b , 0.0);
            glVertex3f(x+a, -y+b, 0.0);
            glVertex3f(x+a, y+b, 0.0);
            glVertex3f(-x+a, y+b, 0.0);
        }



        if(E)
        {

            h=h+3+2*x;
            if(h>=0)
            {
                SE=true;
                E=false;
            }
            else

            {
                E=true;
                SE=false;

            }
            x++;
            glVertex3f(x+a, y+b,0.0);

            glVertex3i(y+a, x+b, 0.0);
            glVertex3i(-y+a, x+b, 0.0);
            glVertex3i(-x+a, -y+b, 0.0);
            glVertex3i(-y+a, -x+b, 0.0);
            glVertex3i(y+a,-x+b , 0.0);
            glVertex3i(x+a, -y+b, 0.0);
            glVertex3i(x+a, y+b, 0.0);
            glVertex3i(-x+a, y+b, 0.0);
        }




    }




    glEnd();

    glColor3f(0.9764705882352941, 0.4705882352941176, 0.0196078431372549);
    glBegin(GL_LINES);
    glVertex3i(1000,1000,0);
    glVertex3i(1000,950,0);


    glEnd();



}

///boat


void boat()
{
    ///boat1
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);


    glVertex3i(10,150,0);
    glVertex3i(150+50,150,0);
    glVertex3i(120+50,100,0);
    glVertex3i(30,100,0);
    glEnd();
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);


    glVertex3i(50,150,0);
    glVertex3i(150,150,0);
    glVertex3i(150,220,0);
    glVertex3i(50,220,0);
    glEnd();
    ///boat2
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);


    glVertex3i(10+200,150+50,0);
    glVertex3i(150+50+200,150+50,0);
    glVertex3i(120+50+200,100+50,0);
    glVertex3i(30+200,100+50,0);
    glEnd();
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);


    glVertex3i(50+200,150+50,0);
    glVertex3i(150+200,150+50,0);
    glVertex3i(150+200,220+50,0);
    glVertex3i(50+200,220+50,0);
    glEnd();



}






void display(void)
{

    glClear(GL_COLOR_BUFFER_BIT);



    land();
    hill();
    tree();
    river();
    house();

    sun();
    boat();


    glFlush();
}

void init(void)
{

    glClearColor(0.6196078431372549,0.9333333333333333, 0.996078431372549, 1.0);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 1200.0, 0, 1200.0);


}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1000, 600);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Nabanita");


    glutDisplayFunc(display);


    init();

    glutMainLoop();
    return 0;
}


