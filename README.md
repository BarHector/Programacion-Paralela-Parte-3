# Programacion-Paralela-Parte-3
Tercera parte de programación paralela en lenguaje C. En este repositorio se verá el ejemplo de suma y multiplición de de matrices. Además de usar el cronómetro para saber que tan rápido o lento termina el programa.

En este repositorio se verá una de las formas en las cuales se ve de una manera más clara el uso de la programación paralela, en este caso para la multiplicación y suma de matrices. Si pensamos en estas dos operaciones nos daremos cuenta que el resultado de un producto o de una suma, no afecta el resultado de la operación siguiente o se ve afectado por la anterior.

Algo que destacar en los programas, es el uso de los cronómetro para determinar el tiempo que se tarda en ejecutar (en este caso) cierta parte del código, esto porque los cronometros no están puestos desde un principio del código.

También se incluye una nueva cláusula llamada 'reduction', esta cláusula toma el valor de una variable aportada por cada hilo (una variable en común) y aplica una operacion (que se debe de indicar) sobre todas para obtener un resultado, en otras palabras, funciona como un acumulador visto desde la programación paralela.

Otra cláusula utilizada es 'sections' y 'section','sections' permite hacer una division del código a distintos hilos para que trabajen de forma paralela. 'section' será en donde se harán las divisiones.

NOTAS RESPECTO AL CÓDIGO
- El tiempo final se multiplica por -1 debido a que el tiempo obtenido es negativo.
- Respecto a los programas de la suma de matrices, se hicieron 5 pruebas con una laptop con procesodr AMD A9, 8 GB en RAM y en una máquina virtual con Ubuntu, la versión con 'for' resultó más rápida.
- Algo que no se ha mencionado en los repositorios de programación paralela anteriores, es el uso de llaves ({}) para el uso de este tipo de programación, aunque en la programación secuencial es indiferente donde se colocan para abrir o cerrar una sección de código, en las versiones paralelas es necesario respetar donde se abren y donde se cierran. En todos los repoositorios de programación paralela se tienen colocados de manera correcta. Esto se menciona ya que cuando comence a hacer este tipo de códigos, si colocaba las llaves en distintas posiciones al momento de compilar se mostraban errores.  
