#include<stdio.h>
main()
{
	int dd,mm,yyyy,d,c,f,i;
	printf("enter any date (dd/mm/yyyy)-->\n");
	scanf("%d%d%d" ,&dd,&mm,&yyyy);
	d=yyyy%100;
	c=(yyyy-d)/100;
	mm=mm-2;
	if(mm<1)
	{
	mm=mm+12;
	d=d-1;
	}
	f=dd+(((13*mm)-1)/5)+(d/4)+d-(2*c)+(c/4);
	for(i=0;i<100;i++)
	{
		if (f<0)
		f=f+7;
	}
	d=f%7;
	switch(d)
	{
		case 0: printf("the day is sunday\n");
		break;
		case 1: printf("the day is monday\n");
		break;
		case 2: printf("the day is tuesday\n");
		break;
		case 3: printf("the day is wednesday\n");
		break;
		case 4: printf("the day is thursday\n");
		break;
		case 5: printf("the day is friday\n");
		break;
		case 6: printf("the day is satureday\n");
		break;
		default: printf("something went wrong\n");
		break;
	}
	}