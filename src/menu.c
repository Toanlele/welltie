#include<stdio.h>
int main()
{
int var1=0;
char var2;

char var3='y';
int system(const char *string);
printf("--------------菜单：----------\n");
printf("1:WIFI钓鱼\n2:社工库查询\n3:DNS查询\n4:whois查找\n请输入:\n");
scanf("%d",&var1);
printf("-------------end--------------\n");
switch(var1)
{
case 1:
printf("确认选择WIFI钓鱼:(y|n)\n");
goto wifi;
break;

case 2:
printf("确认选择社工库查询(y|n)\n");
goto sws;
break;

case 3:
printf("确认DNS查询(y|n)\n");
goto dns;
break;

case 4:
printf("确认(y|n)\n");
goto whois;
break;

defauit:
printf("选择错误!!!!\n");
goto exit;
break;
}

wifi:
printf("欢迎来到wifi：\n");
system("ping toanle.cn");
goto exit;


dns:
printf("欢迎DNS查询：\n");
system("dig toanle.cn");
goto exit;
sws:
printf("欢迎社工库查询：\n");
system("dmitry -e toanle.cn");
goto exit;
whois:
printf("欢迎whois查找：\n");
system("dmitry -w toanle.cn");
goto exit;
exit:
printf("欢迎下次使用!!!\n");

return 0;
}

