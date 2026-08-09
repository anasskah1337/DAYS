void ft_rev_int_tab(int *tab, int size){
int c,k=0;
while(k < (size/2)){
c = tab[k];
tab[k] = tab[size - k - 1];
tab[size - k - 1] = c;
k++;
}
}

