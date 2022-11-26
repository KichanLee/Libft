#ifndef  libft.h
#define libft.h
int ft_isalpha(int ch);
int ft_isdigit(int digit);
void * ft_memset(void *b, int n, size_t length);


int ft_isalpha(int ch){

    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')){
        return (1);
    }
    return (0);
}

int ft_isdigit(int digit){
    
    if(digit >= '0' && digit <= '9'){
        return (1);
    }
    return (0);
}
void * ft_memset(void *b, int n, size_t length){

    size_t i;

    i = 0;

    while(i < length){
       ((char *)b)[i] = n;
       i++;
    }
    return (b);
}

#endif