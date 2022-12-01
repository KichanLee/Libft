
size_t strlen(char *str){

    size_t i = 0 ;

    while(*str){
        ++i;
    }
    return (i);
}

size_t strlcpy(char *dst, const char * src, size_t size){

    size_t dst_len;
    size_t src_len;
    int i;

    i = 0;
    dst_len = strlen(dst);
    src_len = strlen(src);

    if (dst_len < size)
    {
        while (i + 1< size){
            dst[i] = src[i];
            ++i;
        }
      dst[i] = '\0';

      return (size - 1);
    }

    
}

/**
 *  size만큼 dst에 src를 복사한다.
 *  최대로 , size - 1 만큼만 복사된다. 
 *  항상 null을 포함한다. size가 null이 아닌한
 * 
 * return : 
 *  the strlcpy function은 return값으로 src의 strlen의 길이를 반환한다.
 *  if (retbal >= size) 이면 truncation 이 발생한다.
 *  
 *  
 * /