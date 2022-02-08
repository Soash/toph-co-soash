#include <cstdio>
int main()
{
	int length, space, star;
	scanf("%d",&length);
	
for(int i=1; i<=length; i++)
	{
		for(space=i;space<length;space++){
			printf(" ");}
		
		for(star=1;star<=i;star++)
		{
			if(star==i)
				{printf("*");}
			else
			{printf("* ");}
		}
        
        printf("\n");
   }
return 0;
}
