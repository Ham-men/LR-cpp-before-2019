#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <graphics.h>
void Tr( int x, int y, int c )
{
   moveto ( x, y );
   lineto ( x+40, y+60 );
   lineto ( x+80, y );
   lineto ( x, y );
   setfillstyle ( 1, c );
   floodfill ( x+20, y+20, 15);
}

main()
{
      initwindow (400, 300);
 Tr(120,100,12);   
 Tr(80,160,10);  
 Tr(40,100,9);    
 getch();
}




