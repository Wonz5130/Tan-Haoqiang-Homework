#include<stdio.h>
#include<stdlib.h>
#include<conio.h>               //get the ASCII of up, down, left and right
#include<windows.h>
#include<mmsystem.h>
#pragma comment(lib,"winmm.lib") //PlaySound()
#include<time.h>
#include<algorithm>
using namespace std;


//画迷宫
void draw(int maze[20][20]){
    int i,j;
    for(i = 0;i < 20;i ++){
        printf("\t\t\t");                          //display int the center of the screen
        for(j = 0;j < 20;j ++){
            if(maze[i][j] == 4) printf("*");       //4---you
            else if(maze[i][j] == 0) printf(" ");  //0---road
            else printf("#");                      //1---wall
        }
        printf("\n");
    }
}


//移动
void move(int maze[20][20]){
    int a = 1;  //row
    int b = 0;  //col
    char num;
    do{
        num = getch();
        //only change four locations of *
        switch(num){
            case 72:  //↑的ASCII 
            case 87:  //大写W的ASCII
            case 119: //小写w的ASCII
            if(maze[a-1][b] != 1){  //up
                swap(maze[a][b],maze[a-1][b]);
                a --;
                system("cls");  //clear the screen
                draw(maze);
                break;
            }
            break;
            case 80:
            case 83:
            case 115:
            if(maze[a+1][b] != 1){  //down
                swap(maze[a+1][b],maze[a][b]);
                a ++;
                system("cls");
                draw(maze);
                break;
            }
            break;
            case 75:
            case 65:
            case 97:
            if(maze[a][b-1] != 1){  //left
                swap(maze[a][b-1],maze[a][b]);
                b --;
                system("cls");
                draw(maze);
                break;
            }
            break;
            case 77:
            case 68:
            case 100:
            if(maze[a][b+1] != 1){  //right
                swap(maze[a][b+1],maze[a][b]);
                b ++;
                system("cls");
                draw(maze);
                break;
            }
            break;
            default:break;
        }
        if(maze[18][19] == 4){
            printf("\n\t\t\t    Happy Children's Day to You!\n\n\n");
            Sleep(2000);  //delay
            break; 
        }
    }while(1);
}



int main(){
	system("color 0D");  //color
	//system("pause");
	//PlaySound("1.wav",NULL,SND_FILENAME|SND_ASYNC|SND_LOOP);  //只支持wav格式,要放在同一个文件夹下
	//mciSendString("open D:\\Code\\一时兴起\\1.wav",NULL,0,NULL);
    int maze[20][20] = {{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
		                {4,0,0,0,0,1,1,1,0,0,0,0,1,1,1,0,0,0,0,1},
		                {1,1,1,0,0,1,1,1,0,0,1,0,0,0,0,0,1,0,0,1},
		                {1,1,1,0,0,1,1,1,0,0,1,1,1,1,0,0,1,0,0,1},
		                {1,0,0,0,0,1,1,1,0,0,0,1,1,1,0,0,1,0,0,1},
		                {1,0,0,1,1,1,1,1,1,0,0,1,1,1,0,0,1,0,0,1},
		                {1,0,0,1,1,1,1,1,1,0,0,1,0,0,0,0,1,0,0,1},
		                {1,0,0,0,0,0,0,0,0,0,0,1,0,0,1,1,1,0,0,1},
		                {1,0,0,0,0,0,0,0,0,0,0,1,0,0,1,1,1,0,0,1},
		                {1,0,0,1,1,1,1,1,1,0,0,0,0,0,1,0,0,0,0,1},
		                {1,0,0,0,0,0,0,1,1,0,0,0,0,0,1,0,0,1,1,1},
		                {1,0,0,0,0,0,0,1,1,0,0,1,1,1,1,0,0,1,1,1},
		                {1,1,1,1,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1},
		                {1,1,1,1,1,0,0,1,1,1,1,1,0,0,0,0,0,0,0,1},
		                {1,0,0,0,0,0,0,1,0,0,0,1,1,1,1,0,1,0,0,1},
		                {1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,1,0,0,1},
		                {1,0,0,1,1,1,1,1,0,1,1,1,1,0,0,0,0,0,1,1},
		                {1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,1,1},
		                {1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,0,0,0,0,0},
		                {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}};
    printf("\t\t\t");
    for(int i = 0;i < 20;i ++){
        printf("-");  //输出界面上界  
    }
    printf("\n");
    printf("The * is the symbol of you.\n");  //*表示你所处的位置  
    printf("You can press (up,down,left,right) to move the (*).\n");  //你可以按上、下、左右键控制移动
    printf("If your keyboard doesn't have these buttons,you can also press (w,s,a,d) to move the (*).\n\n");  //也可以按w/s/a/d控制移动
    printf("Please press Enter to enter the maze.\n");  //请按回车键进入游戏界面  
    getch();  //don't show in the screen,不回显
    system("cls");  //清屏
    draw(maze);
    move(maze);
    return 0;
}