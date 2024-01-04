#include <iostream>
#include <windows.h>
using namespace std;

void printmaze();
void gotoxy(int x,int y);
void move(int x,int y);
void clear(int x,int y);
char getCharAtxy(short int x,short int y);



main(){
system("cls");
printmaze();
int x=4;
int y=16;
bool gamerunning;
gamerunning=true;
while( gamerunning)
{


	if(GetAsyncKeyState(VK_RIGHT))
	{clear(x,y);
	x=x+1;
	move(x,y);}
	
	if(GetAsyncKeyState(VK_LEFT))
	{clear(x,y);
	x=x-1;
	move(x,y);
	}


	if(GetAsyncKeyState(VK_UP))
	{clear(x,y);
	y=y-1;
	move(x,y);}

	if(GetAsyncKeyState(VK_DOWN))
	{clear(x,y);
	y=y+1;
	move(x,y);}


	if(GetAsyncKeyState(VK_ESCAPE))
	{gamerunning=false;}



	
Sleep (200);
}
gotoxy (0,30);
}







void clear(int x,int y)
{
gotoxy(x,y);
cout << " ";
}








void move(int x,int y)
{

gotoxy(x,y);
cout <<"p";


}





void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
} 









char getCharAtxy(short int x,short int y)
{
CHAR_INFO ci;
COORD xy={0,0};
SMALL_RECT rect={x,y,x,y};
COORD coordBufSize;
coordBufSize.Y=1;
return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize,xy, &rect) ? ci.Char.AsciiChar : ' ';
}








void printmaze ()
{cout << "####################################################################################################################################### " << endl;
cout << "||..  ......................................................................................................................   ....  || " << endl;
cout << "||..  %%%%%%%%%%%%%%%%%%%%%%                     ...              %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%   |%|..                   %%%%  ||" << endl;  
cout << "||..        |%|           |%|                 |%|...              |%|                            |%|   |%|..                    |%|  ||" << endl;
cout << "||..        |%|           |%|                 |%|...              |%|                            |%|   |%|..                    |%|  ||"<<endl;
cout << "||..        %%%%%%%%%%%%%%%%%     .      .    |%|...              %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%      ..                   %%%%  ||" <<endl;
cout << "||..        |%|                   .      .    |%|...              .................................. |%|  ..                        .||"<<endl;
cout << "||..        %%%%%%%%%%%%%%%%%     .      .    |%|...              %%%%%%%%%%%%%%%%%%%%%%%%%%%%%      |%|  ..                   %%%%  ||"<<endl;
cout << "||..                      |%|     .                               |%|................                |%|  ..                    |%| .||"<< endl;
cout << "||..       ............   |%|     .                 p             |%|................ |%|                 ..                    |%| .||" <<endl;
cout << "||..|%|    |%|%%%%%%|%|.  |%|     .        |%|                       ................ |%|                 ..|%|                 |%| .||"<<endl;
cout << "||..|%|    |%|      |%|...                 %%%%%%%%%%%%%%%%%%%%%%%   .................|%|                  .|%| .                    ||"<<endl;
cout << "||..|%|    |%|      |%|...                                 ....|%|              %%%%%%%%%                  .|%|                      ||"<<endl;
cout << "||..|%|                  .                                 ....|%|                                  |%|  ...|%|.                     ||"<< endl;
cout<<  "||..|%|    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%                 ....|%|%%%%%%%%%%%%%%%%%%%%%%            |%|  ...|%|%%%%%%%%%%%           ||"<<endl;
cout<<  "||......................................................................................            |%|  ................            ||" <<endl;
cout<<  "||      ................................................................................                  .......................    ||" <<endl;
cout << "||..|%|   |%|       |%| ..               %%%%%%%%%%%%%%%%%%%%%%%     .................|%|           |%|  ...|%|.                     ||"<<endl;
cout << "||..|%|   |%|..                                        ......|%|                %%%%%%%%%           |%|  ...|%|.                     ||"<<endl;
cout << "||.......................................................................................                   .....................    ||" <<endl;
cout << "||          .............................................................................                   .....................    ||" <<endl;
cout << "#######################################################################################################################################" <<endl;
}