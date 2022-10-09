#include <stdio.h>
#include <stdlib.h>
 
int main()
{
 
unsigned int x;
 
unsigned int *px;
 
char*pc;
 
px = &x;
 
int *py = malloc(sizeof(int)
);
 
printf("Enter a value for x in hex\n" );
 
scanf("%x", &x);
 
printf("x= %016llx\n", x);
 
printf("Enter the int 0x1234567 in hexadecimal form:\n");
 
scanf ("%x\n", &*py);
 
printf("Value of x: \n", x);
 
printf("Value of px: \n", px);
 
printf("Value of py: \n", py);
 
printf("Value of *py: \n", *py);
 
pc = (char *) &x;
 
for( int i =0; i<4; i++)
{
 
printf("Value of pc + %d : %p \n", i, (pc+i)
);
 
printf("Value of *(pc + %d)
: %x \n", i, *(pc+i)
);
 
pc++;
 
}
 
 
pc = (char*) py;
 
for( int i =0; i<4; i++)
{
 
printf("Value of pc + %d: %p \n", i,
(pc+i)
);
 
printf("Value of *(pc +%d)
: %x \n", i, *(pc+i)
);
 
}
 
free(py);
 
return 0;
 
}
 
