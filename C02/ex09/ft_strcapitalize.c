
int ft_is_alpha_numeric(char c)
{
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')){
                return 1;
            }
    return 0;        
}
int ft_is_lower(char c){
    if(c >= 'a' && c <= 'z'){
        return 1;
    }
    return 0;
}
int ft_is_upper(char c){
    if(c >= 'A' && c <= 'Z'){
        return 1;
    }
    return 0;
}
int  ft_premier_mot(char *str,int j){
if(j==0 && ft_is_alpha_numeric(str[0])==1){
    return 1;
}
if (ft_is_alpha_numeric(str[j])==1 && ft_is_alpha_numeric(str[j-1])==0){
    return 1;
}
return 0;
}
char *ft_strcapitalize(char *str){
    int i=0,j=0;
    while(str[i]!='\0'){
        i++;
    }
    while(j<i){
       if( ft_is_alpha_numeric(str[j])==1){
        if(ft_is_lower(str[j])==1 && ft_premier_mot(str,j)==1){
            str[j]-=32;
        }else{
            if(ft_is_upper(str[j])==1 && ft_premier_mot(str,j)==0){
            str[j]+=32;
        }
       }
       }
    j++; 
}
return str;
}
int main(){
    char str[]="hi, how are you? 42words forty-two; fifty+and+one";
    *ft_strcapitalize(str);
}

        
