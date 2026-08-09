#include<unistd.h>
#include<stdio.h>
char zeta='z' ;
ft_print_reverse_alphabet(void){
while(zeta>='a'){
write(1,&zeta,1);  
zeta--;  
}
}    
int main(){
ft_print_reverse_alphabet(void);
return 0;    
}