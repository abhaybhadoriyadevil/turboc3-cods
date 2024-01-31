     #include<iostream.h>
     #include<conio.h>
     #include<graphics.h>
     #include<stdlib.h>
     #include<stdio.h>
     #include<dos.h>


   // lucifer icon
       void icon()
     { int a=getmaxx(),b=240;

   for(a=getmaxx()-150;a>150;a--){
    setcolor(a);
    ellipse(a,b,110,70,150, 50);
    ellipse(a,b,110,70,70, 25);
    ellipse(a,b,251,250,50,140);  delay(5); cleardevice();
       }
	  setcolor(RED);
	ellipse(150,240,110,70,150, 50);
      ellipse(150,240,110,70,70, 25);
       ellipse(150,240,251,250,50,140);
	 settextstyle(TRIPLEX_FONT, HORIZ_DIR, 5);
      outtextxy(250,220,"LUCIFER GAMING"); delay(1000);

      };

  //  symbol graphics
	 void symbol(){int gd=DETECT,gm;   icon(); cleardevice();
    initgraph(&gd,&gm,"c:\\turboc3\\bgi");
   int x=getmaxx()/2,y=getmaxy()/2,a;
      for(int i=0;i<8;i++){     delay(200); cleardevice();
	ellipse(x,y,0,360,200,150);
	setfillstyle(4,WHITE);
	fillellipse(x,y,200,150);
	setcolor(BLACK);
	ellipse(x,y,180,360,100,100);
	setfillstyle(2,RED);
       sector(x,y,180,360,100,100);
      setfillstyle(2,BLUE);
       sector(x,y,0,180,100,100);


	//words
       setcolor(i);
	 settextstyle(TRIPLEX_FONT, HORIZ_DIR, i);
      outtextxy(230,185,"SNAKE &");
       setcolor(i+1);	 outtextxy(235,250,"LEADERS");  delay(100);     }
       cleardevice();  }

  //  board design
     void board(){   settextstyle(TRIPLEX_FONT, HORIZ_DIR, 1);
 /*     //1
    setfillstyle(1,BLACK);
    bar(0,0,48,48);
    bar(0,48,48,96);
     bar(0,96,48,144);
     bar(0,144,48,192);
     bar(0,192,48,240);
     bar(0,240,48,288);
     bar(0,288,48,336);
     bar(0,336,48,384);
     bar(0,384,48,432);
     bar(0,432,48,480);
       //2
       bar(48,0,96,48);
    bar(48,48,96,96);
     bar(48,96,96,144);
     bar(48,144,96,192);
     bar(48,192,96,240);
     bar(48,240,96,288);
     bar(48,288,96,336);
     bar(48,336,96,384);
     bar(48,384,96,432);
     bar(48,432,96,480);
	//4
       bar(144,0,192,48);
    bar(144,48,192,96);
     bar(144,96,192,144);
     bar(144,144,192,192);
     bar(144,192,192,240);
     bar(144,240,192,288);
     bar(144,288,192,336);
     bar(144,336,192,384);
     bar(144,384,192,432);
     bar(144,432,192,480);
	   //3
       bar(96,0,144,48);
    bar(96,48,144,96);
     bar(96,96,144,144);
     bar(96,144,144,192);
     bar(96,192,144,240);
     bar(96,240,144,288);
     bar(96,288,144,336);
     bar(96,336,144,384);
     bar(96,384,144,432);
     bar(96,432,144,480);
//5
       bar(192,0,240,48);
    bar(192,48,240,96);
     bar(192,96,240,144);
     bar(192,144,240,192);
     bar(192,192,240,240);
     bar(192,240,240,288);
     bar(192,288,240,336);
     bar(192,336,240,384);
     bar(192,384,240,432);
     bar(192,432,240,480);
 //6

       bar(240,0,288,48);
    bar(240,48,288,96);
     bar(240,96,288,144);
     bar(240,144,288,192);
     bar(240,192,288,240);
     bar(240,240,288,288);
     bar(240,288,288,336);
     bar(240,336,288,384);
     bar(240,384,288,432);
     bar(240,432,288,480);
  //7
       bar(288,0,336,48);
    bar(288,48,336,96);
     bar(288,96,336,144);
     bar(288,144,336,192);
     bar(288,192,336,240);
     bar(288,240,336,288);
     bar(288,288,336,336);
     bar(288,336,336,384);
     bar(288,384,336,432);
     bar(288,432,336,480);
  //8
       bar(336,0,384,48);
    bar(336,48,384,96);
     bar(336,96,384,144);
     bar(336,144,384,192);
     bar(336,192,384,240);
     bar(336,240,384,288);
     bar(336,288,384,336);
     bar(336,336,384,384);
     bar(336,384,384,432);
     bar(336,432,384,480);
//9

       bar(384,0,432,48);
    bar(384,48,432,96);
     bar(384,96,432,144);
     bar(384,144,432,192);
     bar(384,192,432,240);
     bar(384,240,432,288);
     bar(384,288,432,336);
     bar(384,336,432,384);
     bar(384,384,432,432);
     bar(384,432,432,480);

 //10
       bar(432,0,480,48);
    bar(432,48,480,96);
     bar(432,144,480,192);
      bar(432,192,480,240);
     bar(432,240,480,288);
     bar(432,288,480,336);
     bar(432,336,480,384);
     bar(432,384,480,432);
     bar(432,432,480,480);
     setcolor(WHITE);
     line(0,0,479,0);
       line(0,48,479,48);
       line(0,96,479,96);
       line(0,144,479,144);
       line(0,192,479,192);
       line(0,240,479,240);
       line(0,288,479,288);
       line(0,336,479,336);
       line(0,384,479,384);
       line(0,432,479,432);
       line(0,480,479,480);

       line(0,0,0,480);
      line(48,0,48,480);
      line(96,0,96,480);
      line(144,0,144,480);
      line(192,0,192,480);
      line(240,0,240,480);
      line(288,0,288,480);
      line(336,0,336,480);
      line(384,0,384,480);
      line(432,0,432,480);
      line(480,0,480,480);
  setcolor(WHITE);

    outtextxy(0,5,"100");
    outtextxy(0,49,"81");
    outtextxy(0,97,"80");
     outtextxy(0,144,"61");
    outtextxy(0,193,"60");
    outtextxy(0,241,"41");
    outtextxy(0,289,"40");
      outtextxy(0,337,"21");
    outtextxy(0,385,"20");
    outtextxy(0,433,"1");


    outtextxy(48,5,"99");
    outtextxy(48,49,"82");
    outtextxy(48,97,"79");
     outtextxy(48,144,"62");
    outtextxy(48,193,"59");
    outtextxy(48,241,"42");
    outtextxy(48,289,"39");
      outtextxy(48,337,"22");
    outtextxy(48,385,"12");
    outtextxy(48,433,"2");


    outtextxy(96,5,"98");
    outtextxy(96,49,"83");
    outtextxy(96,97,"78");
     outtextxy(96,144,"63");
    outtextxy(96,193,"58");
    outtextxy(96,241,"43");
    outtextxy(96,289,"38");
      outtextxy(96,337,"23");
    outtextxy(96,385,"18");
    outtextxy(96,433,"3");


    outtextxy(144,5,"97");
    outtextxy(144,49,"84");
    outtextxy(144,97,"77");
     outtextxy(144,144,"64");
    outtextxy(144,193,"57");
    outtextxy(144,241,"44");
    outtextxy(144,289,"37");
      outtextxy(144,337,"24");
    outtextxy(144,385,"17");
    outtextxy(144,433,"4");


    outtextxy(192,5,"96");
    outtextxy(192,49,"85");
    outtextxy(192,97,"76");
     outtextxy(192,144,"65");
    outtextxy(192,193,"56");
    outtextxy(192,241,"45");
    outtextxy(192,289,"36");
      outtextxy(192,337,"25");
    outtextxy(192,385,"16");
    outtextxy(192,433,"5");


    outtextxy(240,5,"95");
    outtextxy(240,49,"86");
    outtextxy(240,97,"75");
     outtextxy(240,144,"66");
    outtextxy(240,193,"55");
    outtextxy(240,241,"46");
    outtextxy(240,289,"35");
      outtextxy(240,337,"26");
    outtextxy(240,385,"15");
    outtextxy(240,433,"6");



    outtextxy(288,5,"94");
    outtextxy(288,49,"87");
    outtextxy(288,97,"74");
     outtextxy(288,144,"67");
    outtextxy(288,193,"54");
    outtextxy(288,241,"47");
    outtextxy(288,289,"34");
      outtextxy(288,337,"27");
    outtextxy(288,385,"14");
    outtextxy(288,433,"7");


    outtextxy(336,5,"93");
    outtextxy(336,49,"88");
    outtextxy(336,97,"73");
     outtextxy(336,144,"68");
    outtextxy(336,193,"53");
    outtextxy(336,241,"48");
    outtextxy(336,289,"33");
      outtextxy(336,337,"28");
    outtextxy(336,385,"13");
    outtextxy(336,433,"8");


    outtextxy(384,5,"92");
    outtextxy(384,49,"89");
    outtextxy(384,97,"72");
     outtextxy(384,144,"69");
    outtextxy(384,193,"52");
    outtextxy(384,241,"49");
    outtextxy(384,289,"32");
      outtextxy(384,337,"29");
    outtextxy(384,385,"12");
    outtextxy(384,433,"9");


    outtextxy(432,5,"91");
    outtextxy(432,49,"90");
    outtextxy(432,97,"71");
     outtextxy(432,144,"70");
    outtextxy(432,193,"51");
    outtextxy(432,241,"50");
    outtextxy(432,289,"31");
      outtextxy(432,337,"30");
    outtextxy(432,385,"11");
    outtextxy(432,433,"10");
    circle(25,457,22);outtextxy(5,455,"START");
     circle(25,25,22);outtextxy(1,18,"FINISH");
     setcolor(RED);  */

     for(int f=0; f<10; ++f){
	for(int g=0; g<10; ++g){
	  int x1 = f*48;
	  int y1= g*48;
	  int x2=x1+48;
	  int y2=y1+48;
	  //draw rectangle
	  setfillstyle(1,BLACK);
	  bar(x1,y1,x2,y2);

	  //Draw text
	  char text[3];
	  sprintf(text, "%d",100-10*g-f);
	  outtextxy(x1+5,y1+5,text);
	  }
	     }

       // draw grid lines
       setcolor(WHITE);
       for(int i=0;i<=480;i+=48){
       line(0,i,480,i);
       line(i,0,i,480);
       }

       //draw start and finish circles
       circle(25,457,22);
       outtextxy(5,455,"START");
       circle(25,25,22);
       outtextxy(1,18,"FINISH");
     //snakes structure
     //s1
 moveto(78,457);lineto(56,378);lineto(25,250);lineto(32,193);lineto(59,40);
 moveto(78,457);lineto(60,378);lineto(34,250);lineto(40,193);lineto(70,40);
 lineto(85,30);lineto(75,20);lineto(65,20);lineto(51,30);lineto(59,40);
 circle(60,30,3);circle(73,30,3);line(69,20,63,10);line(69,20,76,8);
   //s2
   moveto(214,424);lineto(60,344);lineto(160,266);lineto(125,123);
   moveto(214,424);lineto(70,344);lineto(176,266);lineto(135,123);
   lineto(145,110);lineto(125,105);lineto(115,115);lineto(125,123);
   circle(135,115,2);circle(125,115,2);

   //s3
   moveto(453,150);lineto(349,90);lineto(420,40);
    moveto(453,150);lineto(335,90);lineto(412,40);
    circle(417,36,7); line(417,29,419,20);circle(414,36,1);circle(420,36,1);

  //s4
  moveto(310,300);lineto(260,270);lineto(340,220);lineto(310,180);
   moveto(310,300);lineto(266,270);lineto(347,220);lineto(315,180);
   circle(312,175,5);line(312,170,310,165);line(309,175,315,175);

   //s5
   moveto(390,420);lineto(250,370);lineto(320,270);lineto(368,300);
   moveto(390,420);lineto(256,370);lineto(327,280);lineto(368,310);
 circle(374,305,10);circle(370,305,2);circle(379,305,2);line(374,315,372,322);
 line(374,315,380,322);
setcolor(3);
//leaders structure
 //l1
{ line(200,370,200,222);line(230,370,230,222);int a=210;
 for(int i=0;i<9;i++){a=a+17; line(200,a,230,a);  }  }

 //l2
{ line(444,400,444,220);line(460,400,460,220);int a=220;
 for(int i=0;i<10;i++){a=a+15; line(460,a,444,a);} }

 //l3
{ line(330,60,330,310);line(300,60,300,310);int a=60;
 for(int i=0;i<15;i++){a=a+15;line(330,a,300,a);  }  }

 //l4
{line(130,20,130,260);line(100,20,100,260);int a=20;
for(int i=0;i<15;i++){a=a+15;line(130,a,100,a);     }} };

// goti structure
 void goti(int &x,int &y){ int a=x,b=y;
setfillstyle(1,3);
bar(a+15,b+60,a+45,b+55);
bar(a+20,b+50,a+40,b+55);
bar(a+26,b+35,a+34,b+50);
setcolor(4);
circle(a+30,b+27,5);   };


main(){ int gd=DETECT,gm,c,x,y,s,a=0,b=415,lala,i,button;union REGS in,out;
    initgraph(&gd,&gm,"c:\\turboc3\\bgi"); symbol();
 ram: cleardevice();
 //mouse handeling
   in.x.ax=1;
int86(0x33,&in,&out);
board();
//dice structure
 setcolor(WHITE);
 circle(560,310,70);
 circle(560,310,60);

 setfillstyle(1,RED);
 bar(520,270,600,350);

 while(!kbhit()){    //clock (for random output)
  c=0; goti(a,b);
 in.h.ah=0x2c;
int86(0x21,&in,&out);
s=out.h.dh;
if(s>=55&&s<=60){c=5;} //12
if(s>=50&&s<=55){c=3;} //11
if(s>=45&&s<=50){c=1;} //10
if(s>=40&&s<=45){c=4;} // 9
if(s>=35&&s<=40){c=5;} // 8
if(s>=30&&s<=35){c=3;} // 7
if(s>=25&&s<=30){c=1;} // 6
if(s>=20&&s<=25){c=2;} // 5
if(s>=15&&s<=20){c=6;} // 4
if(s>=10&&s<=15){c=4;} // 3
if(s>=5&&s<=10){c=1;} // 2
if(s>=0&&s<=5){c=2;} // 1

//mouse handeling
  in.x.ax=3;
 int86(0x33,&in,&out);
 button=out.x.bx;
 if(button==1){button=0;
  x=out.x.cx;
  y=out.x.dx;
 if(x>520&&x<600&&y>260&&y<340){ lala=0;

// dice logic
switch(c){
case 6:
{ setcolor(WHITE);setfillstyle(1,WHITE);
 circle(560,300,10);   floodfill(560,300,WHITE);lala=1; }
 break;

 case 1:
 { setcolor(WHITE);setfillstyle(1,WHITE);
 circle(540,300,8);circle(580,300,8);   floodfill(540,300,WHITE);
  floodfill(580,300,WHITE); lala=2;      }
 break;

 case 2:
 { setcolor(WHITE);setfillstyle(1,WHITE);
 circle(540,300,8);circle(580,300,8); circle(560,320,8);
   floodfill(540,300,WHITE); floodfill(580,300,WHITE);
    floodfill(560,320,WHITE); lala=3;      }
 break;

 case 3:
 { setcolor(WHITE);setfillstyle(1,WHITE);
 circle(540,300,8);circle(580,300,8);
  circle(540,320,8);circle(580,320,8);
  floodfill(540,300,WHITE); floodfill(580,300,WHITE);
   floodfill(540,320,WHITE); floodfill(580,320,WHITE);   lala=4; }
 break;

 case 4:
 { setcolor(WHITE);setfillstyle(1,WHITE);
 circle(540,300,8);circle(580,300,8);
   circle(540,320,8);circle(580,320,8);circle(560,340,8);
    floodfill(540,300,WHITE);    floodfill(580,300,WHITE);
   floodfill(540,320,WHITE); floodfill(580,320,WHITE);
   floodfill(560,340,WHITE);   lala=5; }
 break;

 case 5:
 { setcolor(WHITE);setfillstyle(1,WHITE);
 circle(540,300,8);circle(580,300,8);
    circle(540,320,8);circle(580,320,8);
     circle(540,340,8);circle(580,340,8);
   floodfill(540,300,WHITE); floodfill(580,300,WHITE);
   floodfill(540,320,WHITE); floodfill(580,320,WHITE);
   floodfill(540,340,WHITE); floodfill(580,340,WHITE);lala=6;       }
 break;
 default:
 break;

}delay(100);
//1
if(b==415){ if(a>432){cout<<"error";}
if(b==415&&a>=432){b=b-48;a=a-((lala)*48);goti(a,b);  }  a=a+((lala)*48);goti(a,b); }
 //2
if(b==367){
if(b==367&&a<=0){b=b-48; a=a+((lala)*48);goti(a,b);  }   a=a-((lala)*48);goti(a,b);  }
//3
if(b==319){
if(b==319&&a>=432){b=b-48;a=a-((lala)*48);goti(a,b);  } a=a+((lala)*48);goti(a,b);     }
//4
if(b==271){
if(b==271&&a<=0){b=b-48; a=a+((lala)*48);goti(a,b);  }    a=a-((lala)*48);goti(a,b);     }
//5
if(b==223){
if(b==223&&a>=432){b=b-48;a=a-((lala)*48);goti(a,b);  } a=a+((lala)*48);goti(a,b);}
//6
if(b==175){
if(b==175&&a<=0){b=b-48; a=a+((lala)*48);goti(a,b);  }  a=a-((lala)*48);goti(a,b);   }
//7
if(b==127){
if(b==127&&a>=432){b=b-48;a=a-((lala)*48);goti(a,b);  } a=a+((lala)*48);goti(a,b);}
//8
if(b==79){
if(b==79&&a<=0){b=b-48; a=a+((lala)*48);goti(a,b);  }    a=a-((lala)*48);goti(a,b); }
//9
if(b==31){
if(b==31&&a>=432){b=b-48;a=a-((lala)*48);goti(a,b); }    a=a+((lala)*48);goti(a,b); }
//10
if(b==-17){
if(b==-17&&a<=0){b=b-48; a=a+((lala)*48);goti(a,b);  }     a=a-((lala)*48);goti(a,b); }
//else
//{a=a+((lala)*48);goti(a,b);}

    delay(1000);

 goto ram;	  }   }  }
     getch();
    closegraph();
       }