/*
  (Palíndromos.) Un palíndromo es una cadena que dice lo mismo si se lee hacia
  delante que si se lee hacia atrás. Algunos ejemplos de palíndromos son
  “radar”, “ojo”, “oso”. Escriba una función recursiva pruebaPalindromo que
  devuelva 1 si la cadena almacenada en el arreglo es un palíndromo, y 0 si no
  lo es. La función debe ignorar los espacios y la puntuación en la cadena.
 */

enum Booleano { FALSO, VERDADERO };

enum Booleano pruebaPalindromo(const char cadena[], int inicial, int longitud) {
  if (longitud == 1)
    return VERDADERO;

  char caracterActual = cadena[inicial];
  char caracterEspejo = cadena[longitud - 1];

  if (caracterActual != caracterEspejo)
    return FALSO;

  return pruebaPalindromo(cadena, inicial + 1, longitud - 1);
}
