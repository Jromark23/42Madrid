NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Directorios y archivos
SRC = $(wildcard *.c)	  # Todos los .c
OBJ = $(SRC:.c=.o)        # Sustituye los sufijos .c por .o, de ese modo si modificas un .c solo recompilara ese.
HEADER = libft.h          # Cabecera

# Regla por defecto, se ejecuta cuando pones make sin objetivo
all: $(NAME)

# Compilar, NAME depende de OBJ (los .o) 
# RCS = Reemplaza o añade a la libreria Crea si no existe, Crea indice (Genera libft.a) 
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# Compilar los archivos .o $< = Origen(dependencia, .c) $@ = destino(lo que va a generar, .o)
# -c compila el archivo fuente, pero no enlaza ni crea ejecutable.
%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@     

# Limpiar archivos .o
clean:
	rm -f $(OBJ)

# Limpiar archivos .o y la librería
fclean: clean
	rm -f $(NAME)

# Reconstruir todo
re: fclean all

# Evitar que los nombres de las reglas sean considerados archivos
.PHONY: all clean fclean re
