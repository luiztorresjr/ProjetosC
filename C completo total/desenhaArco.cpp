#include<graph.h>
#include<conio.h>

int main(void){
	_setvideomode(_VRES16COLOR);
	
	_arc(100, 100, 200, 200, 100, 100, 200, 200);
	getch();
	
	_setvideomode(_DEFAULTMODE);
}
