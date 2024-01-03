#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y);
void PrintMaze();
char getCharAtxy(short int x, short int y);
void PrintLogo();
void MoveKillerBee();
void MoveBumblebee();
void MoveMiningBee();
void MoveRabbitLeft();
void MoveRabbitRight();
void MoveRabbitUp();
void MoveRabbitDown();
void EraseRabbit(int x,int y);
void EraseBee(int x, int y);
void IncreaseScore();
void PrintScore();
void header();
void PrintRabbit(int rx,int ry);
void PrintBee(int x,int y);
void PrintBullet(int x,int y);
void EraseBullet(int x, int y);
void GenerateBullet();
void MoveBullet();
void RemoveBullet(int x);
//Function for bullet collision with enemy
void BulletCollision();
//For Rabbit
int rx = 5;
int ry = 5;
//For Bees
int bx = 10;
int by = 10;
int b1x = 20;
int b1y = 20;
int b2x = 30;
int b2y = 20;
//For Firing System
int bulletX[100];
int bulletY[100];
int bulletCount = 0;
//int size = 3;
//char b1[size] = { 'B','B','B' };
int timer = 0;
string direction = "up";
int score = 0;

int main()
{
	//header();
	//PrintLogo();
	system("cls");
	bool gamerunning = true;
	PrintMaze();
	PrintScore();
	PrintRabbit(rx, ry);
	PrintBee(bx, by);
	PrintBee(b1x, b1y);
	PrintBee(b2x, b2y);
	char nextlocation;
	while (gamerunning) {
		if (GetAsyncKeyState(VK_LEFT)) {
			MoveRabbitLeft();
		}
		//if (nextlocation =="BBB") {
			//gamerunning = false;
		//}
		if (GetAsyncKeyState(VK_RIGHT)) {
			MoveRabbitRight();
		}
		//if (nextlocation == "BBB") {
			//gamerunning = false;
		//}
		if (GetAsyncKeyState(VK_UP)) {
			MoveRabbitUp();
		}
		//if (nextlocation == "BBB") {
			//gamerunning = false;
		//}
		if (GetAsyncKeyState(VK_DOWN)) {
			MoveRabbitDown();
		}
		//if (nextlocation == "BBB") {
			//gamerunning = false;
		//}
		if (GetAsyncKeyState(VK_ESCAPE)) {
			gamerunning == false;
		}
		if (GetAsyncKeyState(VK_SPACE)) {
			GenerateBullet();
			//if (nextlocation == "BBB") {
				//IncreaseScore();
				//PrintScore();
			//}
		}
		if (timer == 3) {
			MoveKillerBee();
			MoveBumblebee();
			MoveMiningBee();
			if (nextlocation == '/' || nextlocation == '\\') {
				gamerunning = false;
			}
			timer = 0;
		}
		MoveBullet();
		BulletCollision();
		timer++;
		Sleep(90);
	}
}

	  
void gotoxy(int x, int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
char getCharAtxy(short int x, short int y)
{
	CHAR_INFO ci;
	COORD xy = { 0, 0 };
	SMALL_RECT rect = { x, y, x, y };
	COORD coordBufSize;
	coordBufSize.X = 1;
	coordBufSize.Y = 1;
	return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
		: ' ';
}
void PrintMaze()
{
	cout << "###########################################################################################################" << endl;
	cout << "|                                                                                                         |" << endl;
	cout << "|                                                                                                         |" << endl;
	cout << "|                                                                                                         |" << endl;
	cout << "|                                                                                                         |" << endl;
	cout << "|                                                                                                         |" << endl;
	cout << "|                                                                                                         |" << endl;
	cout << "|                                                                                                         |" << endl;
	cout << "|                                                                                                         |" << endl;
	cout << "|                                                                                                         |" << endl;
	cout << "|                                                                                                         |" << endl;
	cout << "|                                                                                                         |" << endl;
	cout << "|                                                                                                         |" << endl;
	cout << "|                                                                                                         |" << endl;
	cout << "|                                                                                                         |" << endl;
	cout << "|                                                                                                         |" << endl;
	cout << "|                                                                                                         |" << endl;
	cout << "|                                                                                                         |" << endl;
	cout << "|                                                                                                         |" << endl;
	cout << "|                                                                                                         |" << endl;
	cout << "|                                                                                                         |" << endl;
	cout << "|                                                                                                         |" << endl;
	cout << "|                                                                                                         |" << endl;
	cout << "|                                                                                                         |" << endl;
	cout << "|                                                                                                         |" << endl;
	cout << "|                                                                                                         |" << endl;
	cout << "|                                                                                                         |" << endl;
	cout << "###########################################################################################################" << endl;
}
void PrintLogo()
{
	cout << endl;
	cout << "                   .'.                   " << endl;
	cout << "                  /  |                   " << endl;
	cout << "                 /  /                    " << endl;
	cout << "                / ,'                     " << endl;
	cout << "     .-------.---/                       " << endl;
	cout << "    '.___.-/ o. o\\                      " << endl;
	cout << "          (    Y  )                      " << endl;
	cout << "           )     /                       " << endl;
	cout << "          /     (                        " << endl;
	cout << "         /       Y                       " << endl;
	cout << "       .-'       |                       " << endl;
	cout << "      / _        \\                      " << endl;
	cout << "     / `. '. ) /' )                      " << endl;
	cout << "    Y    )(/ /(, /                       " << endl;
	cout << "   ,|      /     )                       " << endl;
	cout << "   (|     /     /                        " << endl;
	cout << "   '\\_  (__   (__       [Bunty]         " << endl;
	cout << "       '-._,)--._,)                      " << endl;
}
void header()
{
	  cout << "********************************************************************************************************* "  << endl;
	  cout<<"  *                               BUNTY-THE HUNGRY RABBIT                                                 * "  <<endl; 
	  cout << "********************************************************************************************************* "  << endl;
}
void PrintRabbit(int rx,int ry)
{
	char box = 153;
	char r1[3] = { '^',' ','^' };
	char r2[3] = { ' ',box,' ' };
	char r3[3] = { '/',' ','\\' };
	gotoxy(rx, ry);
	for (int i = 0;i < 3;i++) {
		cout << r1[i];
	}
	cout << endl;
	gotoxy(rx, ry + 1);
	for (int i = 0;i < 3;i++) {
		cout << r2[i];
	}
	cout << endl;
	gotoxy(rx, ry + 2);
	for (int i = 0;i < 3;i++) {
		cout << r3[i];
	}

	cout << endl;
}
void PrintBee(int x,int y)
{
	gotoxy(x,y);
	int size = 3;
	char b1[size] = { 'B','B','B' };
	for (int i = 0;i < size;i++) {
		cout << b1[i];
	}
	cout << endl;
}


void EraseRabbit(int x, int y)
{
	gotoxy(x, y );
	for (int i = 0;i <3;i++) {
		cout <<" ";
	}
	cout << endl;
	gotoxy(x, y +1);
	for (int i = 0;i < 3;i++) {
		cout << " ";
	}
	cout << endl;
	gotoxy(x, y + 2);
	for (int i = 0;i <3;i++) {
		cout << " ";
	}
}
void EraseBee(int x, int y)
{
	gotoxy(x, y);
	for (int i = 0;i < 3;i++) {
		cout << " ";
	}
	cout << endl;
}
void MoveKillerBee()
{
	char next;
	string direction="up";
	if (direction == "up") {
		 next = getCharAtxy(bx, by - 1);
		if (next == ' ') {
			EraseBee(bx, by);
			by = by - 1;
			PrintBee(bx, by);
		}
		if (next == '#' || next=='|') {
			direction = "down";
		}
	}
	if (direction == "down") {
		 next = getCharAtxy(bx, by +1);
		if (next == ' ') {
			EraseBee(bx, by);
			by = by + 1;
			PrintBee(bx, by);
		}
		if (next == '#' || next=='|') {
			direction = "up";
		}
	}
	if (direction == "left") {
		 next = getCharAtxy(bx-1, by);
		if (next == ' ') {
			EraseBee(bx, by);
			bx = bx - 1;
			PrintBee(bx, by);
		}
		if (next == '|' || next=='#') {
			direction = "right";
		}
	}
	if (direction == "right") {
		next = getCharAtxy(bx + 1, by);
		if (next == ' ') {
			EraseBee(bx, by);
			bx = bx + 1;
			PrintBee(bx, by);
		}
		if (next == '|' || next == '#') {
			direction = "left";
		}
	}
}
void MoveBumblebee()
{
	string direction="down";
	if (direction == "left") {
		char next = getCharAtxy(b1x - 1, b1y);
		if (next == ' ') {
			EraseBee(b1x, b1y);
			b1x = b1x - 1;
			PrintBee(b1x, b1y);
		}
		if (next == '|' || next=='#') {
			direction = "right";
		}
	}
	if (direction == "up") {
		char next = getCharAtxy(b1x, b1y - 1);
		if (next == ' ') {
			EraseBee(b1x, b1y);
			b1y = b1y - 1;
			PrintBee(b1x, b1y);
		}
		if (next == '#' || next=='|') {
			direction = "down";
		}
	}
	if (direction == "down") {
		char next = getCharAtxy(b1x, b1y + 1);
		if (next == ' ') {
			EraseBee(b1x, b1y);
			b1y = b1y + 1;
			PrintBee(b1x, b1y);
		}
		if (next == '#' || next=='|') {
			direction = "up";
		}
	}
	if (direction == "right") {
		char next = getCharAtxy(b1x + 1, b1y);
		if (next == ' ') {
			EraseBee(b1x, b1y);
			b1x = b1x + 1;
			PrintBee(b1x, b1y);
		}
		if (next == '|' || next=='#') {
			direction = "left";
		}
	}
}
void MoveMiningBee()
{
	string direction="right";
	if (direction == "right") {
		char next = getCharAtxy(b2x +1, b2y);
		if (next == ' ') {
			EraseBee(b2x, b2y);
			b2x = b2x + 1;
			PrintBee(b2x, b2y);
		}
		if (next == '|' || next=='#') {
			direction = "left";
		}
	}
	if (direction == "left") {
		char next = getCharAtxy(b2x - 1, b2y);
		if (next == ' ') {
			EraseBee(b2x, b2y);
			b2x = b2x - 1;
			PrintBee(b2x, b2y);
		}
		if (next == '|' || next=='#') {
			direction = "right";
		}
	}
	if (direction == "down") {
		char next = getCharAtxy(b2x, b2y + 1);
		if (next == ' ') {
			EraseBee(b2x, b2y);
			b2y = b2y + 1;
			PrintBee(b2x, b2y);
		}
		if (next == '#' || next=='|') {
			direction = "up";
		}
	}
	if (direction == "up") {
		char next = getCharAtxy(b2x, b2y - 1);
		if (next == ' ') {
			EraseBee(b2x, b2y);
			b2y = b2y - 1;
			PrintBee(b2x, b2y);
		}
		if (next == '#' || next=='|') {
			direction = "down";
		}
	}
}
void MoveRabbitLeft()
{
	char nextlocation;
	nextlocation = getCharAtxy(rx - 1, ry);
	if (nextlocation == ' ') {
		EraseRabbit(rx, ry);
		rx = rx - 1;
		PrintRabbit(rx, ry);
	}
	if (nextlocation == '|' || nextlocation=='#') {
		EraseRabbit(rx, ry);
		rx = rx + 1;
		PrintRabbit(rx, ry);
	}
}
void MoveRabbitRight()
{
	char nextlocation;
	nextlocation = getCharAtxy(rx + 4, ry);
	if (nextlocation == ' ') {
		EraseRabbit(rx, ry);
		rx = rx + 1;
		PrintRabbit(rx, ry);
	}
}
void MoveRabbitUp()
{
	char nextlocation;
	nextlocation = getCharAtxy(rx, ry - 1);
	if (nextlocation == ' ') {
		EraseRabbit(rx, ry);
		ry = ry - 1;
		PrintRabbit(rx, ry);
	}
}
void MoveRabbitDown()
{
	char nextlocation;
	nextlocation = getCharAtxy(rx, ry + 4);
	if (nextlocation == ' ') {
		EraseRabbit(rx, ry);
		ry = ry + 1;
		PrintRabbit(rx, ry);
	}
}
void PrintScore()
{
	gotoxy(70,70);
	cout << "Score :" << score;
}
void IncreaseScore()
{
	score++;
}
void PrintBullet(int x,int y)
{
	gotoxy(x, y);
	cout << "-" << endl;
}
void EraseBullet(int x, int y) {
	gotoxy(x, y);
	cout << " ";
}
void MoveBullet()
{
	for (int i = 0;i < bulletCount;i++) {
		char next = getCharAtxy(bulletX[i] + 1, bulletY[i] + 1);
		if (next != ' ') {
			EraseBullet(bulletX[i], bulletY[i]);
			RemoveBullet(i);
		}
		else {
			EraseBullet(bulletX[i], bulletY[i]);
			bulletX[i] = bulletX[i] + 1;
			PrintBullet(bulletX[i], bulletY[i]);
		}
	}
}
void RemoveBullet(int x)
{
	for (int i = 0;i < bulletCount - 1; i++) {
		bulletX[i] = bulletX[i + 1];
		bulletY[i] = bulletY[i + 1];
	}
	bulletCount--;
}
void GenerateBullet() {
	bulletX[bulletCount] = rx + 4;
	bulletY[bulletCount] = ry;
	gotoxy(rx + 4,ry);
	cout << "-";
	bulletCount++;
}
void BulletCollision()
{
	for (int i = 0; i < bulletCount; i++)
	{
		if (bulletX[i] + 1 == bx
			&& (bulletY[i] == by || bulletY[i] == by + 1 || bulletY[i] == by + 2 || bulletY[i] == by + 3))
		{
			IncreaseScore();
			PrintScore();
			EraseBullet(bulletX[i], bulletY[i]);
			RemoveBullet(i);
		}
	}
}