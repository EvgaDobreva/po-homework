#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void hex2dec(void);
void dec2hex(void);

int main()
{
    char c;
    c=getchar();
    if(c=='h')
    {
        hex2dec();
    }
    else if(c=='d')
    {
        dec2hex();
    }
	return 0;
}

void hex2dec()
{
// Preobrazuva RGB ot Hex kum Dec
    int i, r, g, b;
    char s[10], s1[10];
    long int col;

	scanf("%s",s);
	for(i=0; i<7; i++)
    {
        s1[i]=s[i+1];
    }
	s1[6]='\0';
	col = strtol(s1, NULL, 16);
	b=col&0xff;
	g=(col>>8)&0xff;
	r=(col>>16)&0xff;
	printf("rgb(%d, %d, %d)",r,g,b);
}

void dec2hex(void)
{
// Preobrazuva RGB ot Dec kum Hex
    int i, j, k;
    char r[5], g[5], b[5];

	scanf("%s %s %s",r,g,b);

	i=atoi(strtok(r,","));
	j=atoi(strtok(g,","));
	k=atoi(b);
	printf("#%02x%02x%02x",i,j,k);
}
