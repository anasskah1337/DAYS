int ft_str_is_numeric(char *str){
    int i=0,k=0;
    while(str[i]!='\0'){
        i++;
    }
    while(k<i){
        if(!(str[k]>='0' && str[k]<='9')){
            return 0;
        }
        k++;
    }
    return 1;
}
