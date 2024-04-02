#include<stdio.h>
int main(){

	char*s="yastaaaa";
	//printf("%s %p\n",s,s);
	
    char *str[3]={s,"aujh \t","kuhd"};
	//printf("%s %p\n",s,s);
	//printf("%s %p\n",str[0],str);
	
    str[0]="aaaaaaa";
	//printf("%s %p\n",str[1],str);
	str[0]="bbbbbbb";

    for(int i = 0 ; i<3; i++)
        printf("%s %p \n" , *(str+i) , *str);

}