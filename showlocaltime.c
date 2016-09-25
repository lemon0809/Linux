#include <stdio.h>
#include <unistd.h>
#include <time.h>
int main()
{
  time_t timep;
  struct tm *p;
  for(;;)
  {
    time(&timep);
    p = localtime(&timep);	//取得当地时间
    printf("%d:%d:%d\n",p->tm_hour,p->tm_min,p->tm_sec);
    sleep(1);						//睡一秒
    printf("\033[1A"); 	//先回到上一行
    printf("\033[K");		//清除该行
  }	
    return 0;
}
