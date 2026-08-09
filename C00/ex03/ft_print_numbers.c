#include<unistd.h>
#include<stdlib.h>
char c='0';
void ft_print_numbers(void){
do{
write(1,&c,1);
c++;
}while(c<='9');
}
int main(){
ft_print_numbers();
return 0;    
}