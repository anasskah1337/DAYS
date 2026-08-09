#include<unistd.h>
#include<stdio.h>
char beta='a' ;
ft_print_alphabet(void){
do {
write(1,&beta,1);  
beta++;  
}while(beta<='z');    
}    
int main(){
ft_print_alphabet();
return 0;    
}