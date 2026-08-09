#include<unistd.h>
char a='0';
char b,c;
void ft_print_comb(){
while(a<='7'){
b=a+1;
while(b<='8'){
c=b+1;
while(c<='9'){
if(a=='7' && b=='8' && c=='9'){
write(1,&a,1);
write(1,&b,1);
write(1,&c,1);
}else{
write(1,&a,1);
write(1,&b,1);
write(1,&c,1);
write(1,", ",2);
}
c++; 
}   
b++;
}
a++;
}    
}
int main(){
ft_print_comb();
return 0;    
}