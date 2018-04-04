#include <stdio.h>

int main()
{
	printf("Sara Huang");
	printf("ECE160: Memory and Pointers");
    {
	char ar[10];
    ar[0] = 20;
    ar[1] = 21;
    ar[2] = 22;
    ar[3] = 23;
    ar[4] = 24;
    ar[5] = 25;
    ar[6] = 26;
    ar[7] = 27;
    ar[8] = 28;
    ar[9] = 29;
    char *ptr = &ar[3];
    printf("(a) %x\n", &ar[0]);
    printf("(b) %x\n", &ar[3]);
    printf("(c) %x\n", &ptr);
    printf("(d) %x\n", ptr);
    printf("(e) %d\n", ar[3]);
    printf("(f) %d\n", *ptr);
    printf("(g) %d\n", (&ar[3]-&ar[0])/3);
	}
	
	{
    long ar[10];
    ar[0] = 31;
    ar[1] = 32;
    ar[2] = 33;
    ar[3] = 34;
    ar[4] = 35;
    ar[5] = 36;
    ar[6] = 37;
    ar[7] = 38;
    ar[8] = 39;
    ar[9] = 40;
    long *ptrr = &ar[3];
    printf("(a) %x\n", &ar[0]);
    printf("(b) %x\n", &ar[3]);
    printf("(c) %x\n", &ptrr);
    printf("(d) %x\n", ptrr);
    printf("(e) %d\n", ar[3]);
    printf("(f) %d\n", *ptrr);
    printf("(g) %ld\n", ((long) &ar[3]- (long) &ar[0])/3);
    }
	
	{
    long lng = 136792;
	unsigned char *kwlng = (unsigned char *)&lng;
	for (int i = (sizeof lng) - 1; i >= 0; --i)
	{
		printf("%02X", kwlng[i]);
	}
	printf("\n (0 x 16^5) + (2 x 16^4) + (1 x 16^3) + (6 *16^2) + (5 * 16^1) + (8 x 16^0) \n= 136792 \n\n");
	}
}