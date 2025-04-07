#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <graphics.h>
void Tr( int x, int y, int c,int a,int b )
{
   moveto ( x, y );
   lineto ( x+a*20, y+80 );
   lineto ( x+a*b, y+80 );
   lineto ( x, y );
   setfillstyle ( 1, c );
   setcolor ( 15 );
   circle ( x, y, 15 );

   floodfill ( x, y-2, 15);
}
main()
{
      initwindow (400, 300);
 Tr(120,100,9,1,100);   
 Tr(290,100,10,-1,100);  
 Tr(205,100,12,1,-20);    
 getch();
}
