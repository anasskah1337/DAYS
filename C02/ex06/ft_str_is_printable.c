int ft_str_is_printable(char *str){
    int i=0,k=0;
    while(str[i]!='\0'){
        i++;
    }
    while(k<i){
        if((str[k]>=0 && str[k]<=31) || str[k]==127){
            return 0;
        }
        k++;
    }
    return 1;
}