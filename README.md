# examen-parcial-Tema2
https://github.com/alexdulo06/examen-parcial-Tema2.git

## Ejercicio 1: Identificación de Número Positivo, Negativo o Cero

**Descripción**: Este ejercicio analiza un conjunto de números predefinidos para determinar si cada uno es positivo, negativo o cero, e imprime el resultado correspondiente.

**Explicación de lo echo**: 
Solicitar Entrada: Pide al usuario que ingrese un número entero.
Condicional: Usa una estructura condicional (if-else) para evaluar el número ingresado:
Si el número es mayor que cero, imprime "positivo".
Si el número es menor que cero, imprime "negativo".
Si el número es igual a cero, imprime "cero".

**Archivo**: src/ejercicio1.cpp

## Ejercicio 2: Día de la Semana

**Descripción**: Este ejercicio toma una lista de números predefinidos (del 1 al 7, más un número fuera de rango) y, para cada número, imprime el día de la semana correspondiente (por ejemplo, 1 para lunes, 2 para martes, etc.). Si el número está fuera del rango, imprime un mensaje de error.

**Explicación de lo echo**: 
Solicitar Entrada: Pide al usuario que ingrese un número del 1 al 7.
Condicional: Usa una serie de condiciones (if-else o switch) para determinar qué día de la semana corresponde al número ingresado:
1 se asocia con "lunes", 2 con "martes", y así sucesivamente hasta 7 que es "domingo".

**Archivo**: src/ejercicio2.cpp

## Ejercicio 3: Cálculo de Promedio de Calificaciones

**Descripción**: En este ejercicio, se evalúan ocho calificaciones predefinidas y se calcula el promedio de estas calificaciones, imprimiendo tanto cada calificación individual como el promedio final.

**Explicación de lo echo**: 
Definir Variables: Crea un array o una lista para almacenar las 8 calificaciones.
Solicitar Entradas: Utiliza un bucle para solicitar al usuario que ingrese cada calificación, almacenándolas en el array.
Calcular Promedio: Suma todas las calificaciones y divide el total por 8.
Mostrar Resultado: Imprime el promedio calculado.

**Archivo**: src/ejercicio3.cpp

## Ejercicio 4: Promoción de "3 por 2" en Tienda

**Descripción**: Este ejercicio simula una promoción en una tienda donde el cliente ingresa tres precios, y solo se cobra por los dos artículos más caros. Se imprimen los precios de los artículos y el total a pagar bajo la promoción.

**Explicación de lo echo**: 
Solicitar Entradas: Pide al usuario que ingrese los precios de tres artículos.
Almacenar Precios: Guarda los precios en variables.
Calcular Total:
Determina el precio más bajo de los tres artículos.
Suma los precios de los tres artículos y resta el más bajo (este será el que no se pague).
Mostrar Resultado: Imprime el total a pagar bajo la promoción.

**Archivo**: src/ejercicio4.cpp

## Archivo Principal

**Descripción**: El archivo main.cpp es el punto de entrada del programa. Llama a cada uno de los ejercicios y organiza la salida para que el usuario pueda ver los resultados de forma clara y ordenada.

**Explicación de lo echo**: 
Estructuras de Control: Usa condicionales para decisiones y bucles para repetición.
Entrada/Salida: Utiliza cin para capturar entradas y cout para mostrar resultados.
Validación: Considera añadir validaciones para las entradas del usuario cuando sea necesario (por ejemplo, asegurarte de que el número ingresado esté dentro de un rango específico).

**Archivo**: main.cpp
