#include<stdio.h>
#include<stdlib.h>
#include<getch.h>

int main(int argc,const char*argv[]) 
{
	int cut=0;
	int a[8][8]={
		{0,0,3,3,3,3,0,0},
		{0,0,3,5,5,3,0,0},
		{0,0,3,0,5,3,0,0},
		{3,3,0,4,0,0,3,3},
		{3,0,0,3,4,4,0,3},
		{3,0,0,2,0,0,0,3},
		{3,3,3,3,3,3,3,3}};
	int x=6,y=3;
	for(;;)
	{
		int cunt=0;
		system("clear");
		for(int i=0;i<8;i++)
		{
			for(int j=0;j<8;j++)
			{
				if(a[i][j]==9)
				{
					cunt++;
				}
				switch(a[i][j])
				{
					case 0:printf("  ");break;
					case 2:printf("@ ");break;//人 
					case 3:printf("# ");break;//墙 
					case 4:printf("$ ");break;//箱子 
					case 5:printf("o ");break;//目标位置 
					case 7:printf("@ ");break;
					case 9:printf("$ ");break;
				 } 
			}
			printf("\n");
		}
		if(4==cout)
		{
			printf("成功\n步数：%d",cut);
			return 0;
		}
		switch(getch())
		{
			case 183:
				if(0!=x&&3==a[x-1][y])
				{
					a[x][y]=2;
				}
				else if(5==a[x-1][y]||0==a[x-1][y])
				{
					a[x][y]-=2;
					a[x-1][y]+=2;
					x--;
					cut++;
				}
				else if(5==a[x-2][y]||0==a[x-2][y]&&(4==a[x-1][y]||9=a[x-1][y]))
				{
					a[x-2][y]+=4;
					a[x-1][y]-=4;
					a[x-1][y]+=2;
					a[x][y]-=2;
					x--;cut++;
				}break;
			case 184:
				if(0!=x&&3==a[x+1][y])
				{
					a[x][y]=2;
				}
				else if((5==a[x+1][y])||(0==a[x+1][y]))
				{
					a[x][y]-=2;
					a[x+1][y]+=2;
					x++;cut++;
				}
				else if(5==a[x+2][y]||0==a[x+2][y]&&(4==a[x+1][y]||9=a[x+1][y]))
				{
					a[x+2][y]+=4;
					a[x+1][y]-=4;
					a[x+1][y]+=2;
					a[x][y]-=2;
					x++;cut++;
				}break;
			case 185:
					if(0!=x&&3==a[x][y+1])
				{
					a[x][y]=2;
				}
				else if((5==a[x][y+1])||(0==a[x][y+1]))
				{
					a[x][y]-=2;
					a[x][y+1]+=2;
					y++;cut++;
				}
				else if(5==a[x][y+2]||0==a[x][y+2]&&(4==a[x][y+1]||9=a[x][y+1]))
				{
					a[x][y+2]+=4;
					a[x][y+1]-=4;
					a[x][y+1]+=2;
					a[x][y]-=2;
					y++;cut++;
				}break;
			case 186:
					if(0!=x&&3==a[x][y-1])
				{
					a[x][y]=2;
				}
				else if((5==a[x][y-1])||(0==a[x][y-1]))
				{
					a[x][y]-=2;
					a[x][y-1]+=2;
					y++;cut++;
				}
				else if(5==a[x][y-2]||0==a[x][y-2]&&(4==a[x][y-1]||9=a[x][y-1]))
				{
					a[x][y-2]+=4;
					a[x][y-1]-=4;
					a[x][y-1]+=2;
					a[x][y]-=2;
					y--;cut++;
				}break;
				
				
		 } 
	}
	return 0;
}
