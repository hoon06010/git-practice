#include <stdio.h>

int puzzle(int num)
{
    if (num == 1)
    {
        return 1;
    }

    if (num % 2 == 0)
    {
        return puzzle(num / 2) + num;
    }
    else
    {
        return puzzle(3 * num + 1);
    }
    
    
}
int main()
{
    int num_main = 5;

    printf("%d", puzzle(num_main));

    return 0;
}