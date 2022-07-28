#include<stdio.h>

unsigned int ft_strlcpy(char*dest,char*src,unsigned int size);

int main()
{
	for(int i=0;i<101;i++){
		for(int j=0;j<120;j++){
			char src[j];
			for(int k=0;k<j;k++){
				src[k]=20+k;
			}
			src[j-1]=0;
			char dest[100];
			int len=ft_strlcpy(dest,src,i);
			printf("%s %s len: %d",src,dest,len);
		}
	}
   
}
