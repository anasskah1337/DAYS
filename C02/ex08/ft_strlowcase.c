char *ft_strlowcase(char *str){
    int i=0,k=0;
    while(str[i]!='\0'){
        i++;
    }
    while(k<i){
        if(str[k]>=65 && str[k]<=90){
        str[k]=str[k]+32;
        }
        k++;
    }
    return str;
}