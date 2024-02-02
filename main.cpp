#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>
#include <conio.h>
#include <direct.h>
#include <time.h>
#include <string.h>
void success();
void failed();
void star()
{
    setfillstyle(1, 14);
    line(300, 65, 150, 275);
    line(300, 65, 450, 275);
    line(150, 275, 450, 275);
    floodfill(305, 105, 15);

    line(150, 145, 300, 360);
    line(150, 145, 450, 145);
    line(300, 360, 450, 145);
    floodfill(195, 185, 15);
    floodfill(395, 185, 15);
    floodfill(305, 350, 15);
    delay(5000);
}
void wifi()
{
    int centerX = getmaxx() / 2;
    int centerY = getmaxy() / 2;

    // Radius of the recycling symbol
    int radius = 100;

    // Draw the circular arrows
    for (int i = 0; i < 3; i++)
    {
        arc(centerX, centerY, 0, 120, radius);
        radius -= 20;
    }

    // Draw the center circle
    circle(centerX, centerY, 30);
    delay(5000);
}
void smiley()
{
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);
    fillellipse(getmaxx() / 2, getmaxy() / 2, 50, 50);

    // Draw the eyes
    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);
    fillellipse(getmaxx() / 2 - 20, getmaxy() / 2 - 20, 10, 10);
    fillellipse(getmaxx() / 2 + 20, getmaxy() / 2 - 20, 10, 10);

    // Draw the mouth
    arc(getmaxx() / 2, getmaxy() / 2, 180, 360, 30);
    delay(5000);
}
void crescent()
{
    setcolor(WHITE);
    setfillstyle(SOLID_FILL, WHITE);

    // Draw the moon's outer circle
    fillellipse(200, 200, 60, 60);

    // Draw the moon's inner circle
    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);
    fillellipse(240, 200, 60, 60);

    delay(5000);
}
void cloud()
{
    setcolor(WHITE);
    setfillstyle(SOLID_FILL, WHITE);

    // Draw cloud shape using ellipses
    fillellipse(100, 100, 40, 25);
    fillellipse(130, 100, 35, 25);
    fillellipse(160, 100, 40, 25);
    fillellipse(180, 100, 30, 20);
    fillellipse(140, 85, 30, 20);

    delay(5000);
}
void digital_clock()
{
    int seconds = 5;

    while (seconds >= 0)
    {
        cleardevice();
        setcolor(WHITE);
        settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);

        char timeStr[10];
        sprintf(timeStr, "%02d:%02d", seconds / 60, seconds % 60);
        outtextxy(310, 250, timeStr);

        delay(1000); // Wait for 1 second
        seconds--;
    }
}
int main()
{
    int gd = DETECT, gm;
    char q1[20];
    char q2[20];
    char q3[20];
    char q4[20];
    char q5[20];
    char q6[20];
    char q7[20];
    char q8[20];
    char q9[20];
    char q10[20];
    initgraph(&gd, &gm, NULL);
    outtextxy(170, 0, "-----Welcome to Guess The Shape game-----");
    setcolor(15);
    outtextxy(10, 100, "Rules:-");
    outtextxy(10, 120, "1.) In this game, you will be shown some shapes/objects");
    outtextxy(10, 140, "2.) You will get 6 questions to guess the shapes/object");
    outtextxy(10, 160, "3.) If your answers are correct then you will get 10 points per question..So enjoy the game!!");
    outtextxy(10, 200, "Project By:-");
    outtextxy(10, 220, "1.) Akshay Nazare - 2206127");
    outtextxy(10, 240, "2.) Om nikam - 2206130");
    outtextxy(10, 260, "3.) Chaitanya Nevse - 2206129");
    outtextxy(10, 280, "3.) Siddesh Patil - 2206129");
    delay(8000);
    cleardevice();
    int flag, correct, incorrect, total;
    incorrect = 0;
    correct = 0;
    char a[5], i;
    star();
    settextjustify(CENTER_TEXT, CENTER_TEXT);
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);
    setcolor(RED);
    digital_clock();
    printf("Enter your answer-->");
    scanf("%s", &q2);
    if (strcmp(q2, "star") == 0)
    {
        correct++;
        success();
        total = correct*10;
    }
    else
    {
        incorrect++;
        failed();
    }

    delay(2000);
    cleardevice();
    // smiley face
    smiley();
    settextjustify(CENTER_TEXT, CENTER_TEXT);
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);
    setcolor(RED);
    digital_clock();

    printf("Enter your answer-->");
    scanf("%s", &q3);
    if (strcmp(q3, "smiley") == 0)
    {
        correct++;
        success();
        total = correct*10;
    }
    else
    {
        incorrect++;
        failed();
    }
    delay(2000);
    cleardevice();
    // end of smiley
    // crescent moon
    crescent();
    settextjustify(CENTER_TEXT, CENTER_TEXT);
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);
    setcolor(RED);
    digital_clock();

    printf("Enter your answer-->");
    scanf("%s", &q4);
    if (strcmp(q4, "crescent") == 0)
    {
        correct++;
        success();
        total = correct*10;
    }
    else
    {
        incorrect++;
        failed();
    }
    delay(2000);
    cleardevice();
    // end of crescent
    // cloud shape
    cloud();
    settextjustify(CENTER_TEXT, CENTER_TEXT);
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);
    setcolor(RED);
    digital_clock();
    printf("Enter your answer-->");
    scanf("%s", &q5);
    if (strcmp(q5, "cloud") == 0)
    {
        correct++;
        success();
        total = correct*10;
    }
    else
    {
        incorrect++;
        failed();
    }
    delay(2000);
    // printf("correct-->%d",correct);
    // printf("Incorrect-->%d",incorrect);
    cleardevice();
    // end of cloud

    // wifi
    wifi();
    settextjustify(CENTER_TEXT, CENTER_TEXT);
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);
    setcolor(RED);
    digital_clock();

    printf("Enter your answer-->");
    scanf("%s", &q6);
    if (strcmp(q6, "wifi") == 0)
    {
        correct++;
        success();
        total = correct*10;
    }
    else
    {
        incorrect++;
        failed();
    }
    delay(2000);
    cleardevice();
    // tree
     int centerX = getmaxx() / 2;
    int centerY = getmaxy() / 2;

    // Draw the circle for the peace symbol
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);
    fillellipse(centerX, centerY, 50, 50);

    // Draw the lines for the peace symbol
    setcolor(GREEN);
    setlinestyle(0, 0, 2);
    line(centerX - 25, centerY, centerX + 25, centerY);
    line(centerX, centerY - 25, centerX, centerY + 25);

    delay(5000);
    settextjustify(CENTER_TEXT, CENTER_TEXT);
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);
    setcolor(RED);
    digital_clock();

    printf("Enter your answer-->");
    scanf("%s", &q7);
    if (strcmp(q7, "proton") == 0)
    {
        correct++;
        success();
        total = correct*10;
    }
    else
    {
        incorrect++;
        failed();
    }
    delay(2000);
    cleardevice();
    settextjustify(CENTER_TEXT, CENTER_TEXT);
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
    setcolor(GREEN);
    char correcttext[10];
    sprintf(correcttext, "Correct answers-->%d", correct);
    outtextxy(280, 200, correcttext);
    delay(2000);
    setcolor(RED);
    char incorrecttext[10];
    sprintf(incorrecttext, "Incorrect answers-->%d", incorrect);
    outtextxy(280, 220, incorrecttext);
    delay(2000);
    setcolor(GREEN);
    char totaltext[10];
    sprintf(totaltext, "Total points-->%d", total);
    outtextxy(280, 240, totaltext);
    delay(2000);
    getch();
    closegraph();
}
void success()
{
    setcolor(10);
    outtextxy(300, 200, "CORRECT!!");
}
void failed()
{
    setcolor(RED);
    outtextxy(300, 200, "INCORRECT!!");
}
