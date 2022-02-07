#include <iostream>

void ZeroCount(int *Numbers, int *ArrSize)
{
    int Count = 0;

    for (int i = 0; i < *(ArrSize); i++)
    {

        if (Numbers[i] == 0)
        {
            Count += 1;
        }
    }
    printf("\nNo of Zeros in  array are :%d", Count);
}

int main(int argc, char *argv[])
{

    int Numbers[] = {0, 1, 5,0,0,0,0,1,1,1,77,1,15, 0, 2, 5, 0, 1, 2, 1 ,0, 0, 0, 0, 0, 0, 0, 10, 10, 11, 10, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0};

    int ArrSize = sizeof(Numbers) / sizeof(Numbers[0]);

    ZeroCount(Numbers, &ArrSize);
    
    return 0;
}
