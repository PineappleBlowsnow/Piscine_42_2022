#include<stdio.h>
#include<stdlib.h>

    char *ft_strjoin(int size, char **strs, char *sep);
int main()
{
    char *p;
    char *sep;
    char **test;
    sep="2c";
    char *str1;
    str1="abdc";
    char *str2;
    str2="sdf";
    char *str3;
    str3="cgy";
    char *str4;
    str4="dfd";
    test=malloc(sizeof(*test)*4);
    test[0]=str1;
    test[1]=str2;
    test[2]=str3;
    test[3]=str4;
    p=ft_strjoin(4,test,sep);
    printf("%s\n",p);
    p=ft_strjoin(0,test,sep);
    printf("%s\n",p);
    p=ft_strjoin(1,test,sep);
    printf("%s\n",p);
    free(test);
    free(p);

}

/*int	main(int argc, char **argv)
{
	printf("./ex03/output___said___this___is___a___success :\n");
	printf("%s\n",  ft_strjoin(argc, argv, "___"));
}*/