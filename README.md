# Números Primos y Narcisistas en C++

## Descripción

Este programa en C++ identifica y muestra los números primos y narcisistas dentro de un intervalo dado.

## Instrucciones de Uso
En primera instancia el programa iniciará la función opciones que mediante el uso de switch permitirá
elegir los números que desea buscar, en el caso de que ingrese una opción diferente aparecerá un mensaje de
error y se cerrará el programa.
Luego de seleccionar una de las 3 opciones pedidas se mostrará en pantalla algunas notas importantes para
que el usuario ocupe de manera correcta el código y no se presenten errores, posteriormente pedirá al usuario
los límites de su intervalo.
Así, los números en el intervalo van siendo ingresados a las funciones tipo bool nprimo() y nnarcisista()
de modo que si cumplen los requisitos son impresos en pantalla.
La función nprimo() acepta un variable tipo entero y en primera instancia elimina los casos menores o
iguales a 1, después busca el primer divisor con el que tenga resto nulo, partiendo desde el número 2, por
lo que si cumple esta condición el número ingresado es primo, de lo contrario se descarta. Por otro lado, la
función nnarcisista() se comporta de manera similar a la anterior, se descarta el caso 0, busca la cantidad
de cifras y luego mediante un for va sumando los dígitos elevados a su número de cifras, cumpliendo la
siguiente fórmula
$$n = d^k_{k}+d^k_{k-1}+\cdots+d^k_{k2}+d^k_{1}$$
con $k$ el número de cifras y los dígitos variado entre $0 \leq d_i \leq 9$. Finalmente, los números que cumplan los
requisitos son impresos y los que no son rechazados.

### Compilación:
- Asegúrate de tener un compilador de C++ instalado en tu sistema.
- Abre una terminal en el directorio donde se encuentra el archivo fuente `num.cpp`.
- Compila el programa utilizando el siguiente comando:
```bash
  g++ num.cpp -o num

```
### Ejecución:
Una vez compilado, ejecuta el programa proporcionando y siga las instrucciones proporcionadas en pantalla
```bash
  ./num
```  
### Requisitos y Dependencias:
Compilador de C++ compatible.

### Ejemplos y Demostraciones:
Una vez compilado, ejecuta el programa proporcionando y siga las instrucciones proporcionadas en pantalla, a continuación se muestra un ejemplo del programa:
```mathematica
$ ./num

Busqueda de numeros primos y narcisistas

Que numeros desea buscar, digite el numero de su eleccion
1.-Primos
2.-Narcisistas
3.-Primos y Narcisistas
Ingrese su eleccion: 3

Notas:
-Si no hay numeros en su eleccion quiere decir que no se encontro ningun valor en el intervalo
-Se aceptan numeros negativos, pero no hay ninguno que cumpla las categorias mencionadas
-Si el limite inferior es mayor al superior no se entregaran resultados
-Los caracteres especiales pueden ocasionar errores
-Solo se aceptan numeros enteros

Ingresar limite inferior del intervalo deseado : 0
Ingresar limite superior del intervalo deseado : 100
Su intervalo es :(0,100)
Los numeros primos encontrados en el intervalo son:
{  2  3  5  7  11  13  17  19  23  29  31  37  41  43  47  53  59  61  67  71  73  79  83  89  97  }

Los numeros narcisistas encontrados en el intervalo son:
{  1  2  3  4  5  6  7  8  9  }

Presione <ENTER> para terminar el programa.

```
### Contribución y Colaboración

¡Tu contribución es bienvenida! Si deseas contribuir con mejoras, correcciones o nuevas características, aquí hay algunas formas de hacerlo:

1. **Informar Problemas:** Si encuentras errores o tienes ideas para nuevas características, por favor abre un problema en el [rastreador de problemas](https://github.com/drodtapia/N-primos-y-narcisistas/issues).
   
2. **Enviar Pull Requests:** Si has realizado mejoras en el código, puedes enviar un pull request. Asegúrate de que tu código esté bien probado y documentado.

3. **Comentar y Discutir:** Incluso si no puedes contribuir con código, puedes participar en las discusiones sobre problemas y características. Tus comentarios son valiosos para mejorar el proyecto.

4. **Compartir:** ¡Ayuda a difundir este proyecto compartiéndolo con tus amigos y colegas!

¡Gracias por tu interés en contribuir al proyecto!

### Licencia

Este proyecto está bajo la Licencia [Creative Commons Attribution-NonCommercial 4.0 International License](https://creativecommons.org/licenses/by-nc/4.0/).

Esto significa que puedes:

- Compartir: copiar y redistribuir el material en cualquier medio o formato.
- Adaptar: remezclar, transformar y construir sobre el material.

Bajo los siguientes términos:

- Atribución: debes dar crédito de manera adecuada, proporcionar un enlace a la licencia e indicar si se han realizado cambios. Puedes hacerlo de cualquier manera razonable, pero no de una manera que sugiera que el licenciante te respalda a ti o al uso que haces del material.
- No Comercial: no puedes utilizar el material con fines comerciales.

Leer el texto completo de la licencia [aquí](https://creativecommons.org/licenses/by-nc/4.0/legalcode).

### Créditos y Reconocimientos
Desarrollado por David Rodríguez.

### Contacto
Si tienes alguna pregunta o sugerencia, no dudes en contactar a drodtapia@gmail.com.
