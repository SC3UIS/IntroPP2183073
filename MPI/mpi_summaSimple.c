#include <stdio.h>
#include <mpi.h>

int main(int argc, char** argv)
{
    int num, count, sum = 0;
    int rank, size;

    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);

    if (rank == 0)
    {
        printf("Enter a positive integer: ");
        scanf("%d", &num);
    }

    MPI_Bcast(&num, 1, MPI_INT, 0, MPI_COMM_WORLD);

    int local_sum = 0;
    for (count = rank + 1; count <= num; count += size)
    {
        local_sum += count;
    }

    int global_sum;
    MPI_Reduce(&local_sum, &global_sum, 1, MPI_INT, MPI_SUM, 0, MPI_COMM_WORLD);

    if (rank == 0)
    {
        printf("\nSum = %d\n", global_sum);
    }

    MPI_Finalize();

    return 0;
}
