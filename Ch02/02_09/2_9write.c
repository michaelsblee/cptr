// create a struct, fill with data, save to file
// struct must be allocated as a pointer
#include <stdio.h>
#include <stdlib.h>
int main()
{
	struct human {
		char name[32];
		int age;
	} *towrite;
	const char filename[] = "saved.dat";
	char *r;
	FILE *fp;

    towrite = (struct human *)malloc( sizeof(struct human) * 1);

	if( towrite==NULL )
	{
		fprintf(stderr,"Unable to allocate structure memory\n");
		exit(1);
	}

    printf("Enter your name: ");
    r = fgets(towrite->name,32,stdin);
    	if( r==NULL )
	{
		fprintf(stderr,"Input error\n");
		exit(1);
	}
    printf("How old are you: ");
	/* towrite->age is an integer, not a pointer, so
	   the ampersand is required */
	scanf("%d",&towrite->age);

    fp = fopen(filename,"w");
    /* write the structure */
	fwrite(towrite,sizeof(struct human),1,fp);
    /* close the file */
	fclose(fp);
	printf("Data written to %s\n",filename);
	
	return(0);
}