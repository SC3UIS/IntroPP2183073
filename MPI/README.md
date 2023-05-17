# Introduction
In the ```OpenMP``` work, we have already compiled and executed the original code ```summaSimple.c``` and the modified one with ```OpenMP```. In this case, we only have the MPI code, which can be found in this repository with the name mpi_summaSimple.c. To compile and execute it, we follow the following steps:
Once we have requested the resources and are in the assigned working directory, we load the module. To do this, we use the following code: module load ```devtools/mpi/mpich/3.3.1.``` This allows us to compile the program.
Once we have the new code ```mpi_summaSimple.c```, we use the following code to compile it:``` mpicc mpi_summaSimple.c -o mpi_summaSimple.```
To execute it, we use the following code:``` mpirun -np 12 ./mpi_summaSimple.```
To measure the execution time, we use``` time mpirun -np 12 ./mpi_summaSimple.```
Using "time" gives you the timing for all three codes.
# Execution time of the three codes.
## summaSimple.c
![img2](https://github.com/SC3UIS/IntroPP2183073/assets/83093835/b56d5868-ec71-4719-9994-774ed6397d51)
## omp_summaSimple.c
![img1](https://github.com/SC3UIS/IntroPP2183073/assets/83093835/d479f72e-49cf-49a7-9836-76ba3aa54db7)
## mpi_summaSimple.c
![img3 ](https://github.com/SC3UIS/IntroPP2183073/assets/83093835/4bd50ba5-137a-4d20-87ce-59bbd633d3ad)



To compare the performance of two approaches in terms of speed and efficiency, an experiment can be conducted on a shared resource system, such as a computer with multiple CPU cores.

In this experiment, each approach is executed multiple times, and the execution time is measured. By comparing the execution times and calculating the acceleration using the formula:

Acceleration = Sequential Execution Time / Parallel Execution Time

If the acceleration value is greater than 1, it indicates that the parallel approach is faster than the sequential approach. Furthermore, observing how the execution time changes as the problem size (e.g., the value of num in the given code) increases can provide insights into how well the performance scales.

It's important to acknowledge that performance can vary based on the hardware, problem size, and specific implementation. Hence, it is advisable to conduct experiments in the target execution environment and analyze the results obtained to determine which approach offers superior performance in the given scenario.
