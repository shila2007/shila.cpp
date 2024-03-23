#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<math.h>
using namespace std;

//1: Flag

void flag () {
    int gd = DETECT, gm;

    initgraph (&gd, &gm, "");

        rectangle(100, 100, 170, 150);
        setcolor(GREEN);
        rectangle(100, 100, 400, 250);
        setfillstyle(1, GREEN);
        floodfill(102, 102, GREEN);

        setcolor(RED);
        circle(245, 175, 40);
        setfillstyle(1, RED);
        floodfill(247, 177, RED);

        getch();
        closegraph();


}

//2-Emoji
void emoji() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");


        setcolor(WHITE);
        setfillstyle (1, YELLOW);
        circle(150, 150, 100);
        floodfill (150, 150, WHITE);

        setfillstyle (1, RED);
        circle(100, 100, 10);
        floodfill (100, 100, WHITE);

        setfillstyle (1, RED);
        circle(200, 110, 10);
        floodfill (200, 110, WHITE);

        setcolor(BLACK);
        ellipse(150, 170, 180, 360, 50, 30);
    getch();
    closegraph();
}

//3:House

void house () {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

   // Draw house body
    setcolor(LIGHTBLUE);
    setfillstyle(SOLID_FILL, LIGHTBLUE);
    rectangle(200, 300, 400, 450);
    floodfill(300, 400, LIGHTBLUE);

    // Draw roof
    setcolor(RED);
    setfillstyle(SOLID_FILL, RED);
    line(200, 300, 300, 200);
    line(300, 200, 400, 300);
    line(400, 300, 200, 300);
    floodfill(300, 250, RED);

    // Draw door
    setcolor(BROWN);
    setfillstyle(SOLID_FILL, BROWN);
    rectangle(270, 380, 330, 450);
    floodfill(280, 400, BROWN);

    // Draw window
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);
    rectangle(240, 320, 290, 370);
    floodfill(250, 330, YELLOW);

    // Display text
    setcolor(WHITE);
    outtextxy(250, 470, "My House");


    getch();
    closegraph();
}
void tajmohol()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    initwindow(1000,800,"Tajmohol",0,50);

//Field
    setfillstyle(1,GREEN);
    line(50,600,950,600);//Front Line -------
    line(50,600,200,70);//Left Line    /
    line(950,600,750,70);//Right Line   \   /
    line(200,70,750,70);// Back Area ---------
    floodfill(150,500,WHITE);

//Main Building Area
    //Front Wall

//4 Minar
    //Front Left Minner
    setfillstyle(1,YELLOW);
    line(200,400,210,100);
    line(250,400,240,100);

    line(200,400,250,400);
    line(210,100,240,100);

    line(215,100,215,85);
    line(225,100,225,85);
    line(235,100,235,85);

    floodfill(205,395,WHITE);

    setcolor(RED);
    setfillstyle(1,RED);
    ellipse(225,87,0,180,25,45);
    line(195,85,255,85);
    floodfill(224,84,RED);
    setcolor(WHITE);
    line(224,40,224,25);
    line(225,40,225,25);
    line(226,41,226,25);

// Divider/Design of the Miner
    setcolor(LIGHTGRAY);
    setfillstyle(1,LIGHTGRAY);
    ellipse(225,300,0,360,40,3);
    floodfill(225,300,LIGHTGRAY);

    setcolor(LIGHTGRAY);
    setfillstyle(1,LIGHTGRAY);
    ellipse(225,200,0,360,30,3);
    floodfill(225,200,LIGHTGRAY);

//End Front Left Miner


//---------Start Front Right----------
    setcolor(BROWN);
    setfillstyle(1,YELLOW);
    line(800,400,810,100);
    line(850,400,840,100);

    line(800,400,850,400);
    line(810,100,840,100);

    floodfill(805,395,BROWN);

    setcolor(RED);
    setfillstyle(1,RED);
    ellipse(825,87,0,180,25,45);
    line(795,85,855,85);
    floodfill(824,84,RED);
    setcolor(WHITE);

    line(815,100,815,85);
    line(825,100,825,85);
    line(835,100,835,85);

    line(824,40,824,25);
    line(825,40,825,25);
    line(826,40,826,25);

// Divider/Design of the Miner
    setcolor(LIGHTGRAY);
    setfillstyle(1,LIGHTGRAY);
    ellipse(825,300,0,360,40,3);
    floodfill(825,300,LIGHTGRAY);

    setcolor(LIGHTGRAY);
    setfillstyle(1,LIGHTGRAY);
    ellipse(825,200,0,360,30,3);
    floodfill(825,200,LIGHTGRAY);
//----------End Front Right-------------

// ----------Start Left Back---------
    setcolor(RED);
    setfillstyle(1,YELLOW);
    rectangle(300,100,320,250);
    floodfill(305,105,RED);

    setfillstyle(1,RED);
    ellipse(310,90,0,180,15,20);
    line(290,90,330,90);
    floodfill(315,80,RED);
    setcolor(WHITE);

    line(305,100,305,90);
    line(310,100,310,90);
    line(315,100,315,90);

    line(309,70,309,58);
    line(310,70,310,58);


// Divider/Design of the Miner
    setcolor(LIGHTGRAY);
    setfillstyle(1,LIGHTGRAY);
    ellipse(310,200,0,360,20,3);
    floodfill(300,200,LIGHTGRAY);


    setcolor(LIGHTGRAY);
    setfillstyle(1,LIGHTGRAY);
    ellipse(310,130,0,360,15,3);
    floodfill(310,130,LIGHTGRAY);

//----------End Left Back --------------
//----------Start Right Back--------------
    setcolor(RED);
    setfillstyle(1,YELLOW);
    rectangle(700,100,720,250);
    floodfill(705,105,RED);

    setfillstyle(1,RED);
    ellipse(710,90,0,180,15,20);
    line(690,90,730,90);
    floodfill(715,80,RED);
    setcolor(WHITE);

    line(705,100,705,90);
    line(710,100,710,90);
    line(715,100,715,90);

    line(709,70,709,58);
    line(710,70,710,58);
// Divider/Design of the Miner
    setcolor(LIGHTGRAY);
    setfillstyle(1,LIGHTGRAY);
    ellipse(710,200,0,360,20,3);
    floodfill(710,200,LIGHTGRAY);


    setcolor(LIGHTGRAY);
    setfillstyle(1,LIGHTGRAY);
    ellipse(710,130,0,360,15,3);
    floodfill(710,130,LIGHTGRAY);

 //------End Right Back------------
//Main Bulding

//------------Start Middle or Main Gombuj-----------------
    setcolor(BROWN);
    setfillstyle(1,LIGHTGRAY);
    circle(500,100,65);
    floodfill(500,80,BROWN);

    setfillstyle(1,WHITE);
    ellipse(500,37,0,180,6,30);//Top line on the Gombuj
    floodfill(500,30,BROWN);

    setcolor(WHITE);
    ellipse(500,100,0,180,45,65);
    ellipse(500,100,0,180,20,65);
//-----------End Middle Gombuj---------


    setcolor(DARKGRAY);
    setfillstyle(1,WHITE);
    rectangle(430,100,570,300);//Middle Part
    floodfill(455,150,DARKGRAY);//-----------------------------------

//----------Start Main door or Middle Part Door-----------
    setfillstyle(1,15130848);
    ellipse(500,300,0,180,50,150);
    floodfill(455,250,DARKGRAY);





//Left Part  beside the Main Door
    setcolor(BLACK);
    setfillstyle(1,180);
    circle(400,120,25);
    floodfill(400,100,BLACK);

    setcolor(WHITE);
    line(400,94,400,80);
    line(399,94,399,80);
    setcolor(DARKGRAY);
    setfillstyle(1,15130848);
    setcolor(DARKGRAY);
    rectangle(370,120,430,300);
    floodfill(375,180,DARKGRAY);


    line(370,120,370,300);//right
    line(370,300,340,280);//bottom
    line(340,280,340,120);//left
    line(340,120,370,120);//top
    floodfill(345,150,DARKGRAY);

    //Window 01
    setcolor(WHITE);
    setfillstyle(1,DARKGRAY);
    line(380,280,420,280);
    ellipse(400,282,0,180,20,40);
    floodfill(400,275,WHITE);

    //Window 02
    setcolor(WHITE);
    setfillstyle(1,DARKGRAY);
    line(380,200,420,200);
    ellipse(400,202,0,180,20,40);
    floodfill(400,175,WHITE);

//Start Right Part beside the Main Door

    setcolor(BLACK);
    setfillstyle(1,180);
    circle(600,120,25);
    floodfill(600,100,BLACK);

    setcolor(WHITE);
    line(600,94,600,80);
    line(601,94,601,80);
    setcolor(DARKGRAY);
    rectangle(570,120,630,300);

    //Window 01
    setcolor(WHITE);
    setfillstyle(1,DARKGRAY);
    line(580,280,620,280);
    ellipse(600,282,0,180,20,40);
    floodfill(600,275,WHITE);

    //Window 02
    setcolor(WHITE);
    setfillstyle(1,DARKGRAY);
    line(580,200,620,200);
    ellipse(600,202,0,180,20,40);
    floodfill(600,175,WHITE);

    setcolor(DARKGRAY);
    setfillstyle(1,15130848);
    floodfill(575,150,DARKGRAY);
    line(630,120,630,300);//left
    line(630,300,660,280);//bottom
    line(660,280,660,120);//right
    line(660,120,630,120);//top
    floodfill(635,150,DARKGRAY);

//-----------Water Lane-----------
    setcolor(DARKGRAY);
    setfillstyle(1,LIGHTCYAN);
    line(450,300,550,300);
    line(480,300,420,600);
    line(520,300,580,600);
    line(370,600,630,600);
    floodfill(500,400,DARKGRAY);
//Road side, near the water line
    setfillstyle(2,DARKGRAY);
    line(450,300,370,600);
    line(550,300,630,600);
    floodfill(470,310,DARKGRAY);
    floodfill(550,350,DARKGRAY);


    getch();
    closegraph();


}


int main() {
    int choice;
    //Choice List
    cout << "1: flag \n";
    cout << "2: Emoji \n";
    cout << "3: House \n";
    cout << "4: Taj Mohol \n";

    cout << "Enter Your Choice: ";
    cin >> choice;



    switch(choice) {
        case 1:
            flag();
            break;
        case 2:
            emoji();
            break;
        case 3:
             house();
            break;
        case 4:
             tajmohol();
            break;

        default:
            std::cout << "Invalid choice!";
            break;
    }

    return 0;
}
