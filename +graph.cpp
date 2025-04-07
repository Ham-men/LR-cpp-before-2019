#include <graphics.h>
#include <conio.h>
#include <math.h>
main()
{
initwindow ( 400, 300 );
int const a = 200, b = 200, k = 50;
float const xmin = 0, xmax =2*M_PI;
float x, y, h = 0.01;
int   xe, ye, w;
w = (xmax - xmin)*k;
line(a-200, b, a+w, b);
line(a, 0, a, 2*b);
for (x = 0; x > -1; x -= h) 
  {
  y = x*x;
  xe = a + k*x;
  ye = b - k*y;
  putpixel (xe, ye, 12);
  }
  for (x = 0; x < 1; x += h) 
  {
  y = x*x;
  xe = a + k*x;
  ye = b - k*y;
  putpixel (xe, ye, 12);
  }

getch(); 
closegraph();
}
