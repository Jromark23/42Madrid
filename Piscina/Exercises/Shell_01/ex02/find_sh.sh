#!/bin/bash
#Busca en el directorio actual los tipo archivo, que el nombbre sea
# .sh, ejecuta solo el nombre base y luego con sed quita el .sh
find . -type f -name "*.sh" -exec basename -s .sh {} \; 
