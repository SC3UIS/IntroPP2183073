# Procedimiento

se explica el funcionamiento del código, opciones de compilación y ejecución y cómo se ejecuta tanto en su máquina local como en GUANE-1.

## Introducción.
En este trabajo se evaluaron las competencias adquiridas en torno a la transformación de códigos implementados en ```C``` para su ejecución paralela utilizando ```OpenMP```. La metodología para realizar la evaluación y entrega consistió en crear una cuenta en Github, vincularse al equipo ***beginners-hpc de Supercomputación y Cálculo Científico*** de ***la Universidad Industrial de Santander*** ```(SC3UIS)``` y crear un repositorio que contenga el código original en ```C```, la versión modificada en ```OpenMP```, el archivo sbatch para la corrida en ```GUANE-1```, el archivo ```README``` con la descripción del código y sus opciones de compilación y corrida, y el archivo de salida con los resultados obtenidos.

## Objetivo. 
Aplicar los fundamentos de ```OpenMP``` vistos en clase y en la bibliografía relacionada para paralelizar el código original, manteniendo el estilo de la documentación y agregando una sección que explique las modificaciones realizadas en la versión en ```OpenMP```.

## Imagen ejecución en maquina local.

![Captura de pantalla 2023-04-23 180203](https://user-images.githubusercontent.com/83093835/233870828-ffc3dc39-98c4-4a1f-826a-1012b8b3e0b3.png)
Este código utiliza la librería ```"omp.h"``` para implementar la ejecución paralela de un bucle ```"for"``` que calcula la suma de los números del 1 hasta el número ingresado por el usuario. En la línea 7 se solicita al usuario ingresar un número entero positivo. Luego, en la línea 10, se utiliza la directiva ***"#pragma omp parallel for reduction(+:sum)"*** para crear un equipo de hilos y distribuir el trabajo del bucle ```"for"``` en paralelo. La cláusula ```"parallel"``` indica que el siguiente bloque de código se ejecutará en paralelo. La cláusula ```"for"``` indica que se debe distribuir el trabajo del bucle ```"for"``` entre los hilos creados. La cláusula ```"reduction"``` indica que la variable ```"sum"``` debe ser compartida entre los hilos, y que cada hilo debe mantener una copia privada de la variable. Al final del bucle, los valores de todas las copias privadas se suman y se almacenan en la variable ```"sum"```. Por último, en la línea 14, se imprime el valor de la suma calculada. Este código es un ejemplo sencillo de cómo se puede utilizar ```OpenMP``` para aprovechar el potencial de la ejecución paralela en la resolución de problemas computacionales.

## Imagen ejecucion en Guane-1.

![Captura de pantalla 2023-04-23 182643](https://user-images.githubusercontent.com/83093835/233880502-8fa20cd3-c53c-4da2-8141-ab9a9898064d.png)

## Conclusion.

Este trabajo permitió adquirir habilidades y conocimientos importantes en el ámbito de la programación paralela utilizando ```OpenMP```, así como en la gestión de proyectos de software a través de Github.
