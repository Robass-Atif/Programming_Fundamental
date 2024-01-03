#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

void printMaze();
void gotoxy(int x, int y);
char getCharATXY(short int x, short int y);
void printHero(int x, int y);
void eraseHero(int x, int y);
void heroLeft();
void heroRight();
void heroDown();
void heroUp();
void printBullet(int x, int y);
void generateBullet();
void moveBullet();
void removeBullet(int x);
void eraseBullet(int x, int y);
void printScout(int x, int y);
void printScout2(int x, int y);
void scou1MovementLeft();
void scou1MovementUp();
void scout1MovementRight();
void scout1Bullet(int x , int y);
void scout1BulletRemove(int x , int y);
void generateScout1Bullet();
void moveScoutBullet();
void removeBulletScout(int x);
void generateScout1Bullet();
void addScore();
void scou2MovementLeft();
void scou2MovementDown();
void scou2MovementRight();
void eraseScout2(int x, int y);
void eraseScout(int x, int y);
void collosion();


void scout2Bullet(int x , int y);
void scout2BulletRemove(int x , int y);
void generateScout2Bullet();
void moveScout2Bullet();
void removeBulletScout2(int x);
void generateScout2Bullet();



int hx = 28;
int hy = 10;

int sx = 140;
int sy = 20;

int s2x = 140;
int s2y = 5;

int bx[100];
int by[100];
int bulletCount = 0;

int scoutBulletX[1000];
int scoutBulletY[100];
int scoutBulletCount=0; 
int score = 0;
int count = 0;

int scout2BulletX[1000];
int scout2BulletY[1000];
int scout2BulletCount = 0;

int timer = 0;

string direction = "left";
string direction2 = "left";
char previousChar = ' ';

main()
{

    system("cls");
    printMaze();
    printScout(sx, sy);
    printScout2(s2x, s2y);
   

    while (true)
    {
        /*SCOUT1 MOVEMENTS*/
    
        if (direction == "left")
        {
            scou1MovementLeft();
            //generateScout1Bullet();
           
        }
        //moveScoutBullet();

        if (direction == "up")
        {
            scou1MovementUp();
            //generateScout1Bullet();
            
        }
        //moveScoutBullet();
        if (direction == "right")
        {
            scout1MovementRight();
            //generateScout1Bullet();
           
        }
        //moveScoutBullet();
       

        /*SCOUT 2 MOVEMENTS*/
    
        if (direction2 == "left")
        {
            scou2MovementLeft();
            generateScout2Bullet();
            
        }
        moveScout2Bullet();
        if (direction2 == "down")
        {
            scou2MovementDown();
            generateScout2Bullet();
        }
        moveScout2Bullet();
        if (direction2 == "right")
        {
            scou2MovementRight();
            generateScout2Bullet();
            
        }
        moveScout2Bullet();
        //timer=0;
        
        
    
        /*PLAYER MOVEMENTS*/

        if (GetAsyncKeyState(VK_LEFT))
        {
            heroLeft();
        }

        if (GetAsyncKeyState(VK_RIGHT))
        {
            heroRight();
        }

        if (GetAsyncKeyState(VK_DOWN))
        {
            heroDown();
        }

        if (GetAsyncKeyState(VK_UP))
        {
            heroUp();
        }
        if (GetAsyncKeyState(VK_SPACE))
        {
            generateBullet();
        }
        moveBullet();
        collosion();
        
        Sleep(90);
    
}
}

/*FUNCTIONS*/









void moveScout2Bullet()
{
    for (int i = 0; i < scout2BulletCount; i++)
    {
        char nextLocation = getCharATXY(scout2BulletX[i]-1, scout2BulletY[i]);
        if (nextLocation != ' ')
        {
            scout1BulletRemove(scout2BulletX[i], scout2BulletY[i]);
            removeBulletScout(i);
        }
        else
        {
            scout1BulletRemove(scout2BulletX[i], scout2BulletY[i]);
            scout2BulletX[i] = scout2BulletX[i] - 1;
            scout1Bullet(scout2BulletX[i], scout2BulletY[i]);
        }
        
    }
    
}

void generateScout2Bullet()
{        
    scout2BulletX[scout2BulletCount] = s2x - 1;                    
    scout2BulletY[scout2BulletCount] = s2y;
    
    scout2BulletCount++;
}

void removeBulletScout2(int x)
{
    for (int i = x; i < scout2BulletCount - 1; i++)
    {
        scout2BulletX[i] = scout2BulletX[i + 1];
        scout2BulletY[i] = scout2BulletY[i + 1];
    }
    scout2BulletCount--;
}

void scout2BulletRemove(int x  , int y)
{
    gotoxy(x, y+1);
    cout << " "<<endl;
}

void scout2Bullet(int x , int y)
{
    gotoxy(x, y+1);
    cout << "<"<<endl;

}



void moveScoutBullet()
{
    for (int i = 0; i < scoutBulletCount; i++)
    {
        char nextLocation = getCharATXY(scoutBulletX[i]-1, scoutBulletY[i]);
        if (nextLocation != ' ')
        {
            scout1BulletRemove(scoutBulletX[i], scoutBulletY[i]);
            removeBulletScout(i);
        }
        else if(nextLocation == ' ' || nextLocation == '<')
        {
            scout1BulletRemove(scoutBulletX[i], scoutBulletY[i]);
            scoutBulletX[i] = scoutBulletX[i] - 1;
            scout1Bullet(scoutBulletX[i], scoutBulletY[i]);
        }
        
    }
    
}

void generateScout1Bullet()
{        
    scoutBulletX[scoutBulletCount] = sx - 1;                    
    scoutBulletY[scoutBulletCount] = sy;
    
    scoutBulletCount++;
}

void removeBulletScout(int x)
{
    for (int i = x; i < scoutBulletCount - 1; i++)
    {
        scoutBulletX[i] = scoutBulletX[i + 1];
        scoutBulletY[i] = scoutBulletY[i + 1];
    }
    scoutBulletCount--;
}



void scout1BulletRemove(int x  , int y)
{
    gotoxy(x, y+1);
    cout << " "<<endl;
}

void scout1Bullet(int x , int y)
{
    gotoxy(x, y+1);
    cout << "<"<<endl;

}



void eraseScout2(int x, int y)
{
    gotoxy(x, y);
    cout << "                  ";
    gotoxy(x, y + 1);
    cout << "                   ";
    gotoxy(x, y + 2);
    cout << "                  " << endl;
    gotoxy(x, y + 3);
}

void printScout2(int x, int y)
{
    gotoxy(x, y);
    cout << "       *   ***";
    gotoxy(x, y + 1);
    cout << "     *** *****";
    gotoxy(x, y + 2);
    cout << "       *   ***" << endl;
    gotoxy(x, y + 3);
    cout << "              " << endl;
}

void scou2MovementRight()
{
    char nextLocation = getCharATXY(s2x - 5, s2y + 4);
    if (nextLocation == '|')
    {
        s2x = s2x + 1;
        printScout(s2x, s2y);
    }
    else if (nextLocation == ' ')
    {
        eraseScout(s2x, s2y);
        s2x = s2x - 1;
        previousChar = nextLocation;
        printScout2(s2x, s2y);
    }
}

void scou2MovementDown()
{
    char nextLocation = getCharATXY(s2x - 5, s2y + 3);

    if (s2y == 18)
    {
        direction2 = "right";
    }

    else if (nextLocation == ' ')
    {
        eraseScout(s2x, s2y);
        s2y = s2y + 1;
        previousChar = nextLocation;
        printScout2(s2x, s2y);
    }
}

void scou2MovementLeft()
{
    char nextLocation = getCharATXY(s2x - 5, s2y);
    if (nextLocation == '|')
    {
        direction2 = "right";
    }
    else if (s2x == 100)
    {
        direction2 = "down";
    }
    else if (nextLocation == ' ')
    {
        eraseScout(s2x, s2y);
        s2x = s2x - 1;
        previousChar = nextLocation;
        printScout2(s2x, s2y);
        
    }
}

void scout1MovementRight()
{
    char nextLocation = getCharATXY(sx - 5, sy + 4);
    if (nextLocation == '|')
    {
        direction = "left";
    }
    else if (nextLocation == ' ')
    {
        eraseScout(sx, sy);
        sx = sx - 1;
        previousChar = nextLocation;
        printScout2(sx, sy);
    }
}

void scou1MovementUp()
{
    char nextLocation = getCharATXY(sx - 5, sy + 3);

    if (sy == 5)
    {
        direction = "right";
    }

    else if (nextLocation == ' ')
    {
        eraseScout(sx, sy);
        sy = sy - 1;
        previousChar = nextLocation;
        printScout2(sx, sy);
    }
}

void scou1MovementLeft()
{
    char nextLocation = getCharATXY(sx - 5, sy);
    if (nextLocation == '|')
    {
        direction = "right";
    }
    else if (s2x == 120)
    {
        direction = "up";
    }
    else if (nextLocation == ' ')
    {
        eraseScout(sx, sy);
        sx = sx - 1;
        previousChar = nextLocation;
        printScout(sx, sy);
        
    }
}

void eraseScout(int x, int y)
{
    gotoxy(x, y);
    cout << "                  ";
    gotoxy(x, y + 1);
    cout << "                   ";
    gotoxy(x, y + 2);
    cout << "                  " << endl;
    gotoxy(x, y + 3);
    cout << "                  " << endl;
}

void printScout(int x, int y)
{
    gotoxy(x, y);
    cout << "       *   ***";
    gotoxy(x, y + 1);
    cout << "     *** *****";
    gotoxy(x, y + 2);
    cout << "       *   ***" << endl;
    gotoxy(x, y + 3);
    cout << "              " << endl;
}

void generateBullet()
{
    bx[bulletCount] = hx + 20;
    by[bulletCount] = hy;
    gotoxy(hx + 20, hy);
    cout << "-";
    bulletCount++;
}

void removeBullet(int x)
{
    for (int i = x; i < bulletCount - 1; i++)
    {
        bx[i] = bx[i + 1];
        by[i] = by[i + 1];
    }
    bulletCount--;
}

void moveBullet()
{
    for (int i = 0; i < bulletCount; i++)
    {
        char nextLocation = getCharATXY(bx[i] + 1, by[i] + 1);
        if (nextLocation != ' ')
        {
            eraseBullet(bx[i], by[i]);
            removeBullet(i);
        }
        else
        {
            eraseBullet(bx[i], by[i]);
            bx[i] = bx[i] + 1;
            printBullet(bx[i], by[i]);
        }
    }
}
void collosion()
{
    for (int i = 0; i < bulletCount; i++)
    {
        if ((bx[i] + 1 == sx || bx[i] + 1 == sx+2 || bx[i] + 3 == sx) && (by[i] == sy || by[i] == sy + 1 || by[i] == sy + 2 || by[i] == sy + 3))
        // || (bx[i] + 1 == s2x || bx[i] + 1 == s2x+2 || bx[i] + 3 == s2x) && (by[i] == s2y || by[i] == s2y + 1 || by[i] == s2y + 2 || by[i] == s2y + 3))
        {
            addScore();
            count = count + 1;
            eraseBullet(bx[i], by[i]);
            removeBullet(i);
            // eraseScout(sx, sy);
        }
    }
}

void check(int count)
{
    if (count == 5)
    {
        eraseScout(sx, sy);
        
    }
    
}
void addScore()
{
    score++;
    gotoxy(1,1);
    cout << "score: " <<score;
}

void eraseBullet(int x, int y)
{
    gotoxy(x, y);
    cout << " ";
}
void printBullet(int x, int y)
{
    gotoxy(x, y);
    cout << "-";
}

void heroUp()
{
    char nextLocation = getCharATXY(hx, hy - 4);
    if ((nextLocation == ' '))
    {
        eraseHero(hx, hy);
        hy = hy - 1;
        printHero(hx, hy);
    }
}

void heroDown()
{
    char nextLocation = getCharATXY(hx, hy + 2);
    if ((nextLocation == ' '))
    {
        eraseHero(hx, hy);
        hy = hy + 1;
        printHero(hx, hy);
    }
}
void heroRight()
{
    char nextLocation = getCharATXY(hx + 20, hy);
    if (nextLocation == ' ' || nextLocation == '-')
    {
        eraseHero(hx, hy);
        hx = hx + 1;
        printHero(hx, hy);
    }
}
void heroLeft()
{
    char nextLocation = getCharATXY(hx - 1, hy);
    if (nextLocation == ' ')
    {
        eraseHero(hx, hy);
        hx = hx - 1;
        printHero(hx, hy);
    }
}

void eraseHero(int x, int y)
{
    cout << endl;
    gotoxy(x + 1, y - 3);
    cout << "           " << endl;
    gotoxy(x + 1, y - 2);
    cout << "    ";

    cout << endl;
    gotoxy(x + 1, y - 1);
    for (int i = 0; i < 10; i++)
    {
        cout << " ";
    }
    cout << "         ";

    cout << endl;
    gotoxy(x + 1, y);
    for (int i = 0; i < 10; i++)
    {
        cout << " ";
    }

    cout << "         ";
    cout << endl;
    gotoxy(x + 1, y + 1);
    cout << "    ";
    cout << "       " << endl;
}

void printHero(int x, int y)
{

    char box = 219;
    char box2 = 221;

    cout << endl;
    gotoxy(x + 1, y - 3);
    cout << "    _______" << endl;
    gotoxy(x + 1, y - 2);
    cout << "   |";

    cout << endl;
    gotoxy(x + 1, y - 1);
    for (int i = 0; i < 10; i++)
    {
        cout << box;
    }
    cout << "-------->";

    cout << endl;
    gotoxy(x + 1, y);
    for (int i = 0; i < 10; i++)
    {
        cout << box;
    }

    cout << "-------->";
    cout << endl;
    gotoxy(x + 1, y + 1);
    cout << "   |";
    cout << "_______" << endl;
}

void printMaze()
{

    cout << "\t\t################################################################################################################################################" << endl;
    cout << "\t\t|                                                                                                                                                |" << endl;
    cout << "\t\t|                                                                                                                                                |" << endl;
    cout << "\t\t|                                                                                                                                                |" << endl;
    cout << "\t\t|                                                                                                                                                |" << endl;
    cout << "\t\t|                                                                                                                                                |" << endl;
    cout << "\t\t|                                                                                                                                                |" << endl;
    cout << "\t\t|                                                                                                                                                |" << endl;
    cout << "\t\t|                                                                                                                                                |" << endl;
    cout << "\t\t|                                                                                                                                                |" << endl;
    cout << "\t\t|                                                                                                                                                |" << endl;
    cout << "\t\t|                                                                                                                                                |" << endl;
    cout << "\t\t|                                                                                                                                                |" << endl;
    cout << "\t\t|                                                                                                                                                |" << endl;
    cout << "\t\t|                                                                                                                                                |" << endl;
    cout << "\t\t|                                                                                                                                                |" << endl;
    cout << "\t\t|                                                                                                                                                |" << endl;
    cout << "\t\t|                                                                                                                                                |" << endl;
    cout << "\t\t|                                                                                                                                                |" << endl;
    cout << "\t\t|                                                                                                                                                |" << endl;
    cout << "\t\t|                                                                                                                                                |" << endl;
    cout << "\t\t|                                                                                                                                                |" << endl;
    cout << "\t\t|                                                                                                                                                |" << endl;
    cout << "\t\t|                                                                                                                                                |" << endl;
    cout << "\t\t|                                                                                                                                                |" << endl;
    cout << "\t\t|                                                                                                                                                |" << endl;
    cout << "\t\t################################################################################################################################################" << endl;
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

char getCharATXY(short int x, short int y)
{

    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufsize;
    coordBufsize.X = 1;
    coordBufsize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufsize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}


void page()
{
    cout << "\t\t\t\t ________                  ________          "<<endl;
    cout << "\t\t\t\t|        |   ||           |        |     "<<endl;
    cout << "\t\t\t\t|            ||           |   ___  |       "<<endl;
    cout << "\t\t\t\t|            ||           |  |___| |      "<<endl;
    cout << "\t\t\t\t|      __    ||           |________|              "<<endl;
    cout << "\t\t\t\t|        |   ||           |        |      "<<endl;
    cout << "\t\t\t\t|________|   ||________   |        |         "<<endl;
}