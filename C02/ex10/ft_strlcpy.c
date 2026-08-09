char *ft_strcpy(char *dest, char *src){
    int i=0;
    int k=0;
    while(src[i]!='\0'){
        i++;
    }
    while(k<i){
        dest[k]=src[k];
        k++;
    }   
    dest[k]='\0';
    return dest;
}


