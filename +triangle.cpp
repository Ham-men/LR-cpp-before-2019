#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <graphics.h>
void Tr( int x, int y, int c )
{
   moveto ( x, y );
   lineto ( x, y+60 );
   lineto ( x+100, y );
   lineto ( x, y );
   setfillstyle ( 1, c );
   floodfill ( x+20, y+20, 15);
}

main()
{
      initwindow (400, 300);
 Tr(120,100,12);   
 Tr(120,160,10);  
 Tr(20,160,9);    
 getch();
}
