# include <stdio.h>
# include <conio.h>
# include <dos.h>

int initmouse();
void showmouseptr();

//union REGS i,o;

int main()
{
	int flag;

	flag = initmouse();

	if (flag == 0)
		printf("nao habilitado");
	else
		printf("mouse habilitado");
	getch();
	return 0;
}

/*int initmouse()
{
	i.x.ax = 0;
	int86(0X33,&i,&o);
	return(o.x.ax );
}*/
