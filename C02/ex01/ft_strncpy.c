char *ft_strncpy(char *dest, char *src, unsigned int n){
    unsigned int k=0;
    while(k<n && src[k]!='\0'){
        dest[k]=src[k];
        k++;
    }
    while(k<n){
        dest[k]='\0';
        k++;
    }
    return dest;
}
