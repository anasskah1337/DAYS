void ft_ultimate_div_mod(int *a, int *b){
    int ca,cb;
    ca=*a;
    cb=*b;
    *a=(*a / *b);
    *b=(ca % cb);
}
