#include <stdio.h>
#include <stdlib.h>

void get_input(char **b) {
    *b = (char *)malloc( sizeof(char) * 16 );
    int x;
	if( *b==NULL )
	{
		fprintf(stderr,"Unable to allocate buffer\n");
		exit(1);
	}

    // read a string from stdin
    fgets(*b,16,stdin);
    for( x=0; x<16; x++ )
	{
		/* search for newline */
		if( *(*b+x)=='\n' )
		{
			/* replace with null character */
			*(*b+x)='\0';
			/* exit loop */
			break;
		}
	}
}

int main() {
    char *names[5];
    int x;

    for (x=0; x<5; x++) {
        printf("Name #%d: ",x+1);
        get_input(&names[x]);
    }

    for( x=0; x<5;x++ )
        printf("%s\n",names[x]);
    return(0);
}