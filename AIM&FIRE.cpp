#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
#include<iostream.h>

void fractal(int l,double a,int x,int y);
void draw1(int,int,int);
void draw2(int,int,int);
void bezier(int *,int *);
void midpoint(int,int,int);
void bresenham(int,int,int,int);

void main(){
    
clrscr();
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");
//setbkcolor(9);
setfillstyle(SOLID_FILL,LIGHTBLUE);
floodfill(0,0,WHITE);
setcolor(WHITE);
/*clouds*/
setlinestyle(0,0,1);
//setfillstyle(SOLID_FILL,WHITE);
//floodfill(200,51,WHITE);
//floodfill(298,69,WHITE);
//floodfill(505,51,WHITE);
setcolor(YELLOW);
//midpoint(20,100,70);
circle(100,70,20);
//for(int m=19;m>=0;m--){
//    midpoint(m,100,70);
//}
setfillstyle(SOLID_FILL,YELLOW);
floodfill(100,70,YELLOW);
/*ellipse(200,50,60,240,10,15);
ellipse(225,40,345,165,20,15);
ellipse(262,47,340,160,20,15);
ellipse(268,66,230,50,20,15);
ellipse(226,71,163,340,31,15);
ellipse(300,41,20,182,21,19);
ellipse(325,50,290,100,21,15);
ellipse(299,70,228,20,33,15);
//another clouds
ellipse(200+300,50,60,240,10,15);
ellipse(225+300,40,345,165,20,15);
ellipse(262+300,47,340,160,20,15);
ellipse(268+300,66,230,50,20,15);
ellipse(226+300,71,163,340,31,15);*/
setcolor(WHITE);
arc(220,50,0,180,17);
arc(250,50,0,180,17);
arc(255,57,250,110,17);
arc(220,65,180,0,17);
arc(250,65,180,0,17);
arc(205,57,70,290,17);
setfillstyle(SOLID_FILL,WHITE);
floodfill(230,53,WHITE);
arc(220+270,50+5,0,180,17);
arc(250+270,50+5,0,180,17);
arc(255+270,57+5,250,110,17);
arc(220+270,65+5,180,0,17);
arc(250+270,65+5,180,0,17);
arc(205+270,57+5,70,290,17);
setfillstyle(SOLID_FILL,WHITE);
floodfill(495,56,WHITE);
setcolor(0);
arc(270,100,0,130,7);
arc(284,100,50,180,7);
arc(180,170,0,130,7);
arc(194,170,50,180,7);
arc(370,150,0,130,7);
arc(384,150,50,180,7);
arc(360,70,0,130,7);
arc(374,70,50,180,7);


float p,q;
setcolor(8);
ellipse(470,310,180,0,15,8);
ellipse(470,310,180,0,15,3);
setfillstyle(SOLID_FILL,3);
floodfill(470,315,8);
setcolor(WHITE);
line(0,(getmaxy()/2+100),getmaxx(),(getmaxy()/2+100));
setfillstyle(SOLID_FILL,BROWN);
floodfill(400,400,WHITE);
for(int i=0;i<=getmaxx();i+=4){
for(int j=(getmaxy()/2+100);j<=getmaxy();j+=4)  {
setcolor(GREEN);
line(i,j,(i),(j-1));}}
setcolor(BROWN);
line(440,350,440,320);
line(490,350,490,320);
line(440,320,490,320);
line(440,325,490,325);
setfillstyle(SOLID_FILL,0);
floodfill(441,324,BROWN);

   setcolor(WHITE);
  ellipse(65,205,270,0,15,15);
  ellipse(135,205,180,270,15,15);
  line(80,205,120,205);
  line(65,220,135,220);
setfillstyle(SOLID_FILL,0);
//floodfill(70,206,WHITE);
floodfill(100,218,WHITE);
fractal(70,270*3.14/180,510,200);
 int x[4], y[4];

//setcolor(BROWN);
   // printf ("Enter the x- and y-coordinates of the four control points.\n");
   // for (i=0; i<4; i++)
	//scanf ("%d%d", &x[i], &y[i]);
for(int k=0;k<=2;k++){
     x[0]=540+k,y[0]=345,x[1]=515+k,y[1]=300,x[2]=520+k,y[2]=255,x[3]=508+k,y[3]=200;
bezier (x, y);}
    // x[0]=545,y[0]=345,x[1]=520,y[1]=300,x[2]=530,y[2]=255,x[3]=512,y[3]=200;
  //  bezier (x, y);

 //   putpixel(530,344,BROWN);
for( i=0;i>=-78;i--){

    if(i<40){
	delay(40);
    float a=3.14*(i-5)/180;
  //  setbkcolor(9);
     p=(10*(cos(a))-30*(sin(a)));
     q=(10*(sin(a))+30*(cos(a)));
    line(100,270,100+(10*(cos(a))-30*(sin(a))),270+(10*(sin(a))+30*(cos(a))));
   // setcolor(0);
   // line(100+(10*(cos(a))-30*(sin(a))),270+(10*(sin(a))+30*(cos(a))),100+(9*(cos(a))-27*(sin(a))),270+(9*(sin(a))+27*(cos(a))));


setcolor(9);
a=3.14*(i)/180;
line(100,270,100+(10*(cos(a))-30*(sin(a))),270+(10*(sin(a))+30*(cos(a))));
setcolor(WHITE);

    //draw1(15,165,-100);
//draw2(15,216,-100);
//curve tree
line(100,300,100,250);
line(100,295,100,330);
line(100,330,120,350);
line(100,330,80,350);
circle(100,230,20);
setfillstyle(SOLID_FILL,7);
floodfill(100,230,WHITE);
//line(100,250,120,280);
setcolor(0);
ellipse(100,230,35,145,20,20);
setcolor(WHITE);
line(100,270,90,295);
//setfillstyle(SOLID_FILL,BROWN);
    //floodfill(530,340,BROWN);
//man
/*setcolor(BROWN);
line(508,345,508,200);
line(512,345,512,200);
    //circle(510,150,50);
    //setfillstyle(SOLID_FILL,GREEN);
//floodfill(510,150,WHITE);
    setcolor(BROWN);
    line(470,180,470,200);
    setcolor(BROWN);
  //  line(490,350,530,350);
    line(508,200,512,200);
    setfillstyle(SOLID_FILL,BROWN);
floodfill(510,210,BROWN);*/

    setcolor(BROWN);
  //  line(490,350,530,350);
    line(470,180,470,200);
setcolor(RED);
    circle(470,210,10);
    setfillstyle(SOLID_FILL,RED);
floodfill(470,210,RED);
      setcolor(WHITE);
   // delay(70);
    //cleardevice();
    }
//tree
}
for( i=4;i<=4000;i++){
setcolor(0);
delay(1);
//float m=(370-p)/(60+q);
float slope=sqrt((380-p)*(380-p)+(80+q)*(80+q));
float temp1=p/slope;float temp2=q/slope;
circle(100+p+i*temp1,270+q+i*temp2,2);
setfillstyle(SOLID_FILL,0);
floodfill(100+p+i*temp1,270+q+i*temp2,0);
setcolor(9);
circle(100+p+(i-2)*temp1,270+q+(i-2)*temp2,2);
setfillstyle(SOLID_FILL,9);
floodfill(100+p+(i-1)*temp1,270+q+(i-1)*temp2,0);
if(i>=20){
setcolor(LIGHTBLUE);
circle(100+p+(i-20)*temp1,270+q+(i-20)*temp2,2);
setfillstyle(SOLID_FILL,LIGHTBLUE);
floodfill(100+p+(i-1)*temp1,270+q+(i-1)*temp2,LIGHTBLUE); }
}
for(i=1;i<=95;i++)
{
delay(20);
setcolor(9);
circle(470,209+i,10);
setfillstyle(SOLID_FILL,LIGHTBLUE);
floodfill(470,209+i,9);
setcolor(RED);
circle(470,210+i,10);
setfillstyle(SOLID_FILL,RED);
floodfill(470,210+i,RED);
}

for( k=1;k<=15;k++){
    delay(5);
    i=k-1;
    setcolor(LIGHTBLUE);
    line(440,350,440+i,320);
line(490,350,490+i,320);
line(440+i,320,490+i,320);
line(440+(5*i)/6,325,490+(5*i)/6,325);
setfillstyle(SOLID_FILL,LIGHTBLUE);
floodfill(441+i,324,LIGHTBLUE);
    setcolor(BROWN);
    line(440,350,440+k,320);
line(490,350,490+k,320);
line(440+k,320,490+k,320);
line(440+(5*k)/6,325,490+(5*k)/6,325);
setfillstyle(SOLID_FILL,0);
floodfill(441+k,324,BROWN);

}
//closegraph();
    getch();
    cleardevice();

//char *fname[] = {  "TRIPLEX SCRIPT font"}


   int midx = getmaxx() / 2;

  int midy = getmaxy() / 2;
  int style;
     settextjustify(CENTER_TEXT, CENTER_TEXT);
    // for (style=DEFAULT_FONT; style<=BOLD_FONT; style++) {

     // cleardevice();
	int size;
      if (style == TRIPLEX_FONT)

	 size = 4;
	 else size=1;

      /* select the text style */

      settextstyle(4, HORIZ_DIR, 4);

      setcolor(RED);

      /* output a message */

      outtextxy(midx, midy-100, "AIM & FIRE");

      settextstyle(TRIPLEX_SCR_FONT, HORIZ_DIR, size);
      outtextxy(midx, midy-20, "PROJECT MADE BY:");

      outtextxy(midx, midy+20, "VISHESH SHARMA - 145");
	while(!kbhit()){}
      //getch();

   //}
   closegraph();
}
int count=0;
void fractal(int l,double a,int x,int y)
{

int i=0;
double angle=(150*3.14)/180;
if(l!=0)
{
double a1=a+angle-(10*3.14)/180;
double a2=a-angle+(10*3.14)/180;
int x1=x+l*cos(a1);
int y1=y-l*sin(a1);
setcolor(10+i);
i=3;
line(x,y,x1,y1);
fractal(l/2,a1,x1,y1);
x1=x+l*cos(a2);
y1=y-l*sin(a2);
line(x,y,x1,y1);
fractal(l/2,a2,x1,y1);
a1=a1+angle;
a2=a2-angle;
x1=x+l*cos(a1);
y1=y-l*sin(a1);
//line(x,y,x1,y1);
//fractal(l/2,a1,x1,y1);
x1=x+l*cos(a2);
y1=y+l*sin(a2);
line(x,y,x1,y1);
fractal(l/2,a1,x1,y1);
a1=a1+angle;
a2=a2-angle;
x1=x+l*cos(a1);
y1=y-l*sin(a1);
line(x,y,x1,y1);
fractal(l/2,a2,x1,y1);
x1=x+l*cos(a2);
    y1=y-l*sin(a2);}

}
void draw1(int r,int a,int b)
{
int x,e,y;
int midx,midy;
//cin>>r;
//cout<<"Enter the Center";
//cin>>a;
//cin>>b;

midx=getmaxx()/2;
midy=getmaxy()/2;
a=midx+a;
b=midy-b;


//line(midx,0,midx,getmaxy());
//line(0,midy,getmaxx(),midy);
x=0;
y=r;
e=1-r;
do
{
if(e<0)
{
x=x+1;
e=e+(2*x)+1;
}
else{
x=x+1;
y=y-1;
e=e+2*x-2*y+1;
}
putpixel(a+x,b+y,WHITE);
//putpixel(a+x,b-y,RED);
//putpixel(a-x,b+y,RED);
//putpixel(a-x,b-y,RED);
putpixel(a+y,b+x,WHITE);
//putpixel(a+y,b-x,RED);
//putpixel(a-y,b+x,RED);
//putpixel(a-y,b-x,RED);
}while(x<y);
}
void draw2(int r,int a,int b)
{
int x,e,y;
int midx,midy;
//cin>>r;
//cout<<"Enter the Center";
//cin>>a;
//cin>>b;

midx=getmaxx()/2;
midy=getmaxy()/2;
a=midx+a;
b=midy-b;


//line(midx,0,midx,getmaxy());
//line(0,midy,getmaxx(),midy);
x=0;
y=r;
e=1-r;
do
{
if(e<0)
{
x=x+1;
e=e+(2*x)+1;
}
else{
x=x+1;
y=y-1;
e=e+2*x-2*y+1;
}
//putpixel(a+x,b+y,RED);
//putpixel(a+x,b-y,RED);
putpixel(a-x,b+y,WHITE);
//putpixel(a-x,b-y,RED);
//putpixel(a+y,b+x,RED);
//putpixel(a+y,b-x,RED);
putpixel(a-y,b+x,WHITE);
//putpixel(a-y,b-x,RED);
}while(x<y);
}
void bezier (int x[4], int y[4])
{
    setcolor(BROWN);
    int i;
    double t;

    for (t = 0.0; t < 1.0; t += 0.0005)
    {
	double xt = pow (1-t, 3) * x[0] + 3 * t * pow (1-t, 2) * x[1] +
		    3 * pow (t, 2) * (1-t) * x[2] + pow (t, 3) * x[3];

	double yt = pow (1-t, 3) * y[0] + 3 * t * pow (1-t, 2) * y[1] +
		    3 * pow (t, 2) * (1-t) * y[2] + pow (t, 3) * y[3];

	putpixel (xt, yt, BROWN);
    }

    for (i=0; i<4; i++)
	putpixel (x[i], y[i],LIGHTBLUE);


    return;
}
void midpoint(int r,int a,int b)
{
int x,e,y;
int midx,midy;
//cin>>r;
//cout<<"Enter the Center";
//cin>>a;
//cin>>b;

///midx=getmaxx()/2;
//midy=getmaxy()/2;
//a=midx+a;
//b=midy-b;


//line(midx,0,midx,getmaxy());
//line(0,midy,getmaxx(),midy);
x=0;
y=r;
e=1-r;
do
{
if(e<0)
{
x=x+1;
e=e+(2*x)+1;
}
else{
x=x+1;
y=y-1;
e=e+2*x-2*y+1;
}
putpixel(a+x,b+y,YELLOW);
putpixel(a+x,b-y,YELLOW);
putpixel(a-x,b+y,YELLOW);
putpixel(a-x,b-y,YELLOW);
putpixel(a+y,b+x,YELLOW);
putpixel(a+y,b-x,YELLOW);
putpixel(a-y,b+x,YELLOW);
putpixel(a-y,b-x,YELLOW);
}while(x<y);
}

void bresenham(int x1,int y1,int x2,int y2){
 x1=0; y1=0; x2=getmaxx(); y2=getmaxy();
      printf("%d\t\t\t\t\t\t\t\t\t\t",x2);
      printf("%d",y2);
      int x,y,end;
     int  dx = abs(x1 - x2);
     int dy = abs(y1 - y2);
     int  p = 2 * dy - dx;
      if(x1 > x2)
      {
	    x = x2;
	    y = y2;
	    end = x1;
      }
      else
      {
	    x = x1;
	    y = y1;
	    end = x2;
      }
      putpixel(x, y, 10);
      while(x < end)
      {
	    x = x + 1;
	    if(p < 0)
	    {
		  p = p + 2 * dy;
	    }
	    else
	    {
		  y = y + 1;
		  p = p + 2 * (dy - dx);
	    }
	    putpixel(x, y, 10);
      }
}
  