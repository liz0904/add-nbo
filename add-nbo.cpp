#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>    
#include <stdint.h>
#include <netinet/in.h>

int main(int argc, char* argv[]) {
	uint32_t a = 0, b = 0;
	FILE* fp1 = fopen(argv[1], "rb");
	FILE* fp2 = fopen(argv[2], "rb");

	fread(&a, sizeof(uint32_t), 1, fp1);
	uint32_t na = ntohl(a);
	fread(&b, sizeof(uint32_t), 1, fp2);
	uint32_t nb = ntohl(b);

	printf("32 bit number=0x%x\n", na);
	printf("32 bit number=0x%x\n", nb);
	
	printf("%d(%x)+%d(%x)=%d(%x)", na,na,nb,nb,na+nb, na+nb);
	fclose(fp1);	fclose(fp2);
	return 0;

}

