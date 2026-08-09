#include<unistd.h>
void ft_putchar(char c){
    write(1,&c,1);
}
 
void ft_print_arr(int n,char *min_arr,char *max_arr){
    int k=0;
    // check if wsslna lmax dyal array antb3o larray wn5rjo mn la fct
    if(min_arr[0]==max_arr[0]){
        while(k<n){
            ft_putchar(min_arr[k]);
            k++;
        }
    return ;
    }
    //sinon on continue normalement wntb3o ", "
    while(k<n){
        ft_putchar(min_arr[k++]);
    }
    if(min_arr[0]!=max_arr[0]){
        ft_putchar(',');
        ft_putchar(' ');
    }
}
void ft_print_combn(int n){
    // check if n li d5el l user compris entre 1 et 10 et n3amro deux array we7da bl prmier et la derniere valeur 
    if(n>0 &&n<10){
        char min_arr[n];
        char max_arr[n];
        int index=0;
        while(index<n){
            min_arr[index]=index +'0';
            max_arr[index]=(10-n)+index+'0';
            index++;
        }
        //affichage du premier array:
        ft_print_arr(n, min_arr, max_arr);
        // affichage du second array au dernier :
        char save_valeur='0';
        // hadxi gha ndiroh la mwsslnax lmax f tableau hit howa deja sait anrej3o l9ima dyal index dyal l array
        while(min_arr[0]!=max_arr[0]){
         index=n-1;
        while(min_arr[index]==max_arr[index]){
              index--;
        //lawselna lmax f la deuxieme case dyal une array hit lwelo une fois anwesslo liha array at7bess o  nrej3o l indice li 9bel on5dm ela la case li 9bel dik l array o ta b save valeaur savi dyal ina case 
         }   
         save_valeur = min_arr[index]+1;
         // n3emro l array 
         while(index<n){
            min_arr[index]=save_valeur;
            index ++;
            save_valeur++;
         }
         ft_print_arr(n,min_arr,max_arr);
        }
    }else{
        write(1,"erreur",6);
    }
}
int main(){
    ft_print_combn(2);
    ft_print_combn(3);
}

