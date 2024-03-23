#include <stdio.h>

int negativos(int n, float *vet)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (vet[i] < 0)
        {
            count += 1;
        }
    }

    return count;
}

int main(void)
{
    float vetor[5] = {1, 3, -2, 4, -5};
    int n = 5;

    printf("%d", negativos(n, &vetor));

    return 0;
}