#include <stdio.h>

void f1(int i)
{
	if(i>8)
	{
		printf(">8\n");
	}
	else if ((i<=8)&&(i>=6))
	{
		printf("6~8\n");
	}
	else
	{
		printf("<6\n");
	}
}

void f3(int i)
{
	switch(i>8)
	{
		case 1:
		printf(">8\n");
		break;

		default:
		switch ((i<=8)&&(i>=6))
		{
			case 1:
			printf("6~8\n");
			break;

			default:
			printf("<6\n");
		    break;

		}

	}
}



void f2(char i)
{
	switch(i)
	{
		case 'a':
		printf("object\n");
		break;

		case 'd':
		printf("debug\n");
		break;

		default:
		printf("unknown\n");
		break;

	}
}

void f4(char i)
{
	if('a'==i)
	{
		printf("object\n");
	}
	else if('d'==i)
	{
		printf("debug\n");
	}
	else
	{
		printf("unknown\n");
	}
}

int main()
{
	f1(9);
	f1(7);
	f1(3);
	f3(9);
	f3(7);
	f3(3);

	f2('a');
	f2('d');
	f2('f');
	f4('a');
	f4('d');
	f4('f');

	return 0;
}
