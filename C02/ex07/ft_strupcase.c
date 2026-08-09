char *ft_strupcase(char *str){
    int i=0,k=0;
    while(str[i]!='\0'){
        i++;
    }
    while(k<i){
        if(str[k]>=97 && str[k]<=122){
        str[k]=str[k]-32;
        }
        k++;
    }
    return str;
}