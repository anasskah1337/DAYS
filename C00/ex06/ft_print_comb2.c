#include<unistd.h>
int a=0;
void ft_putchar(char c){
write(1,&c,1);    
}
void ft_convertir(int nb){
if(nb<10){
char d;
d=nb+'0';
ft_putchar('0');
ft_putchar(d);    
}else{
char d1,d2;
d1=nb/10+'0';
d2=nb%10+'0';
ft_putchar(d1);
ft_putchar(d2);    
}
}
void ft_print_comb2(void){
while(a<99){
int b=a+1;
while(b<100){
if(a==98 && b==99){
ft_convertir(a);
ft_putchar(' ');
ft_convertir(b);
}
else{
ft_convertir(a);
ft_putchar(' ');
ft_convertir(b);
ft_putchar(',');
ft_putchar(' ');
}
b++;
}
a++;
}
}
int main(){
ft_print_comb2();
return 0;    
}







