#include <stdio.h>

#define ROOT "mnt"

void hexdump(char *buf, int num)
{
	int i;

	for(i = 0; i < num; i++) {
		printf("%02hhx\t", buf[i]);
		if ((i+1)%8 == 0) {
				printf("\n");
			}
		}
	printf("\n");
}

int main()
{
	if(-1)
		printf("test\n");

	char test[20] = "mnt/mmc/test";
	char temp[10] = {0};
	sscanf(test,ROOT"/%s",temp);
	printf("%s\n",temp);

	char chinese[64] = {0xE7,0xB9,0x81,0xE4,0xBD,0x93,0xE4,0xB8,0xAD,0xE6,0x96,0x87};
	printf("%s\n",chinese);	
	char chinese2[64] = {0x7E,0x41,0x4F,0x53,0x4E,0x2D,0x65,0x87};
	printf("%s\n",chinese2);
	printf("%x\n","繁");
	char chinese3[64] = {0x40,0x08,0x70};
	printf("%s\n",chinese3);

	hexdump("繁",3);
	return 0;
}
