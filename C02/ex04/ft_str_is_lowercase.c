int ft_str_is_lowercase(char *str){
    int i=0,k=0;
    while(str[i]!='\0'){
        i++;
    }
    while(k<i){
        if(!(str[k]>='a' && str[k]<='z')){
            return 0;
        }
        k++;
    }
    return 1;
}