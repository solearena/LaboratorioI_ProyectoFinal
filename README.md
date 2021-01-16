# LaboratorioI_ProyectoFinal

 	Tecnicatura Universitaria en Programación
  Laboratorio de Computación I

**Trabajo práctico integrador - Tema 2**

**Dificultad: Difícil**

**Categoría: Aplicación de consola**

**Cantidad máxima de integrantes: Dos**

 
El torneo de pesca más importante del mundo requiere un programa para poder llevar la estadística de la edición 2020 del mismo.
El torneo cuenta con 15 participantes inscriptos durante el año 2019 que se identifican con números entre el 100 y el 114. Los organizadores del torneo son muy estrictos con la preservación de la fauna local, por lo que, sólo está permitido capturar una serie de especies en la competencia. Las especies en total son nueve y corresponden a la siguiente tabla:

Código de especie	Nombre	Peso mínimo
- 10	Anchoa	500 gramos
- 20	Pejerrey	2 kilogramos
- 30	Bagre	4 kilogramos
- 40	Boga	5 kilogramos
- 50	Caballa	1 kilogramo
- 60	Carpa	5 kilogramos
- 70	Trucha patagónica	1.5 kilogramos
- 80	Dorado	3 kilogramos
- 90	Lisa	2.5 kilogramos

El torneo se desarrolla en un mismo día desde las 6 hasta las 23. Ambos horarios inclusive. Los pescadores pueden registrar todos los peces que deseen pero con la condición de que supere el peso mínimo de la especie capturada. Caso contrario no debe ser registrado.
Por cada registro de pesca, el torneo completa una ficha con la siguiente información:

BRIAN LARA'S FISHING TOURNAMENT 2020
-------------------------------------

- CÓDIGO DE PESCADOR: [ 110 ]
- CÓDIGO DE ESPECIE : [ 40 ] - [ Boga ]
- HORA              : [ 15 ]
- KILOGRAMOS        : [ 12.4 kgs ]


El ganador del torneo será aquel pescador/a que haya capturado mayor acumulación de kilogramos de peces. 

***Interfaz***

El programa debe contar con un menú principal como el siguiente:

**BRIAN LARA'S FISHING TOURNAMENT**
--------------------------------
1. REGISTRAR CAPTURAS
2. REPORTE A
3. REPORTE B
4. REPORTE C
5. CRÉDITOS
--------------------------------
0. SALIR

***Registrar capturas***
Debe permitir al usuario cargar todas los registros de captura que desee y procesar los mismos. Para poder retornar al menú principal, se ingresa un código de pescador igual a cero. Se puede ingresar a la opción de registrar capturas todas las veces que el usuario lo desee.

***Reporte A - Ganador de la competencia***
Listar por pantalla el código del pescador/a que vaya ganando la competencia y la totalidad de kilogramos capturados hasta el momento.

***Reporte B - Estadísticas de especies***
Deberá mostrar para cada especie, el código y la cantidad de veces que fue capturada. 
Opcional: Mostrar también el nombre de la especie.

***Reporte C - Porcentaje horario***
Deberá mostrar para cada hora del día de la competencia, el porcentaje de capturas realizadas con respecto al total de capturas.

***Créditos***
Deberá mostrar el nombre del equipo (inventar uno) junto con sus respectivos legajos, apellidos y nombres.

***Salir***
Debe salir del programa. Tener en cuenta que todos los datos ingresados se restablecer al iniciarlo nuevamente.

***Validaciones***
Al registrar una captura, validar que:
-	El código de pescador se encuentre entre 100 y 114.
-	El código de especie sea un código de especie válido. Es decir, los descritos en la tabla.
-	La hora de pesca sea un horario válido. Entre las 6 y las 23 (ambos inclusive).
-	El peso del pez sea el reglamentario según la especie.

NOTA: A pesar de estas validaciones, seguiremos en un ambiente ideal en el que el usuario no ingresará caracteres ni números decimales donde no correspondan.

***Recomendaciones****

-	Realizar una tabla de datos para facilitar la carga y calcular el resultado esperado que deberá mostrar el programa en los reportes.
-	No permitir que el programa se cierre a excepción de la opción salir del menú. El programa debe permanecer en funcionamiento hasta que el usuario decida terminarlo.
-	Ser claros en los mensajes al usuario y en el código desarrollado.
-	Utilizar funciones en la mayor medida posible (opciones del menú, validaciones, reportes, etc).
-	No utilizar variables globales salvo autorización de los docentes.
-	No utilizar goto. Atención: No confundirlo con la función gotoxy que sí pueden utilizar.
