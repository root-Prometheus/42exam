int *ft_rrange(int start,int end)
{
    int tmp,rmb,i,x,size;
    int *array;
    i = 0;
    x = 0;
    tmp = start;
    rmb = end;
    if (tmp == 0 && rmb == 0){
        array = (int *)malloc(1 * sizeof(int*)); 
        array[0] = 0;
        return array;
    }
    if (tmp < 0)
        tmp = -1 * tmp;
    if ( rmb < 0)
        rmb = -1 * rmb;
    size = tmp + rmb;
    array = (int *)malloc(size * sizeof(int*)); 
    if (start > end)
    {
        end = -1 * end;
        while (i <= size)
        {
            array[i] = start;
            start--;
            i++;
        }
         array[end] = '\0'; 
    }
    else
    {
        x = end;
        while (i <= size)
        {
            array[i] = end;
            end--;
            i++;
        }
        array[x] = '\0';
    }
    return array;
}
