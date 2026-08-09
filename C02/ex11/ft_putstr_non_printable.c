#include<unistd.h>
void ft_putchar(char c){
    write(1,&c,1);
}
char hex[16]={'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
void ft_putstr_non_printable(char *str){
    int j=0,y,x;
    while(str[j]!='\0'){
        if((str[j]>=0 && str[j]<=31) || str[j]==127){
            ft_putchar('\\');
                x=str[j]/16;
                y=str[j]%16;
                ft_putchar(hex[x]);
                ft_putchar(hex[y]);
        }
        else{
            ft_putchar(str[j]);
        }
    j++;
    }
}    
int main(){
char str[] = "ABC\rDEF";
ft_putstr_non_printable(str);
} 