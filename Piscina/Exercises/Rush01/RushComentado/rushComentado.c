#include <unistd.h>
#include <stdlib.h>

#define SIZE 4

// Imprime por pantalla el tablero
void	print(int *board)
{
    // Calcula el bufer multiplicando el tamaño por si mismo, y x2 para los espacios, 1 para el nulo 
	char	buffer[SIZE * SIZE * 2 + SIZE + 1];
	int		index;
	int		row;
	int		col;

	index = 0; // Index para el buffer
	row = 0;
	while (row < SIZE)
	{
		col = 0;
		while (col < SIZE)
		{
			// Traduce el numero a char para mostrarlo
			buffer[index++] = board[row * SIZE + col] + '0';
			if (col < SIZE - 1)
				buffer[index++] = ' '; // Añade el espacio entre los numeros hasta la penultima columna
			col++;
		}
		buffer[index++] = '\n'; // al final, lanza una nueva linea 
		row++;
	}
	buffer[index] = '\0'; // Añadir terminador nulo al final del buffer
	write(1, buffer, index); // muestra el tablero
}

// Función para verificar si el tablero cumple con las pistas dadas
int	check(int *board, int *numbers)
{
	// Verificar pistas desde todas las direcciones
	if (!check_top(board, numbers) || !check_bottom(board, numbers)
		|| !check_left(board, numbers) || !check_right(board, numbers))
		return (0); // Si alguna verificación falla, devuelve 0 y se acaba
	else
		return (1); // Si todas las verificaciones pasan devuelve 1 y continua
}

// Comprueba si el numero esta ya en una fila o columna
int	valid(int *board, int row, int col, int num)
{
	int	i;

	i = 0;
	while (i < SIZE)
	{
		// Verificar si el número ya está en la fila o columna
		// Si NUM ya existe en la fila o en la columna 
		if (board[row * SIZE + i] == num || board[i * SIZE + col] == num)
			return (0); // No es seguro colocar el número
		i++;
	}
	return (1); // Es seguro colocar el número
}

// Función recursiva para resolver el tablero usando backtracking (va poniendo y quitando segun si es posible o no)
int	solve(int *board, int *numbers, int pos)
{
	int	row;
	int	col;
	int	num;

	if (pos == SIZE * SIZE)
		return (check(board, numbers)); // Si todas las posiciones están llenas, verificar el tablero
	row = pos / SIZE;
	col = pos % SIZE;
	num = 1;
	while (num <= SIZE)
	{
		// print(board);
		if (valid(board, row, col, num))
		{
			board[row * SIZE + col] = num; // Colocar el número en la posición
			if (solve(board, numbers, pos + 1))
				return (1); // Si el tablero se resuelve, retornar 1
			board[row * SIZE + col] = 0; // Si no, deshacer el movimiento
		}
		num++;
	}
	return (0); // No se encontró solución
}

// Función para verificar las pistas desde la parte superior
int check_top(int *board, int *numbers)
{
    int col;
    int row;
    int box_counter;
    int max_height;
    int valid;

    valid = 1; // Se asume que las pistas desde arriba son válidas inicialmente

    col = -1; // Inicializar `col` en -1 para comenzar desde la columna 0 en el primer incremento
    while (++col < SIZE) // Iterar a través de cada columna (de izquierda a derecha)
    {
        max_height = 0; // Inicializar la altura máxima vista a 0 para cada columna
        box_counter = 0; // Inicializar el contador de cajas vistas a 0 para cada columna

        row = -1; // Inicializar `row` en -1 para comenzar desde la fila 0 en el primer incremento
        while (++row < SIZE) // Iterar a través de cada fila (de arriba a abajo)
        {
            // Comprobar si la altura en la casilla actual es mayor que la altura máxima vista
            if (board[row * SIZE + col] > max_height)
            {
                max_height = board[row * SIZE + col]; // Actualizar la altura máxima vista en la columna actual
                box_counter++; // Incrementar el contador de cajas vistas
            }
        }

        // Verificar si el contador de cajas vistas coincide con la pista desde arriba para esta columna
        if (box_counter != numbers[col])
            valid = 0; // Si no coincide, marcar las pistas como inválidas
    }

    return valid; // Devolver 1 si todas las pistas desde arriba son válidas, 0 si alguna no coincide
}


// Función para verificar las pistas desde la parte inferior
int check_bottom(int *board, int *numbers)
{
    int col;
    int row;
    int box_counter;
    int max_height;
    int valid;

    valid = 1; // Se asume que las pistas desde abajo son válidas inicialmente

    col = -1; // Inicializar `col` en -1 para comenzar desde la columna 0 en el primer incremento
    while (++col < SIZE) // Iterar a través de cada columna (de izquierda a derecha)
    {
        max_height = 0; // Inicializar la altura máxima vista a 0 para cada columna
        box_counter = 0; // Inicializar el contador de cajas vistas a 0 para cada columna

        row = SIZE; // Inicializar `row` en SIZE (que es 4) para comenzar desde la fila SIZE-1 (última fila)
        while (--row >= 0) // Iterar a través de cada fila (de abajo a arriba)
        {
            // Comprobar si la altura en la casilla actual es mayor que la altura máxima vista
            if (board[row * SIZE + col] > max_height)
            {
                max_height = board[row * SIZE + col]; // Actualizar la altura máxima vista en la columna actual
                box_counter++; // Incrementar el contador de cajas vistas
            }
        }

        // Verificar si el contador de cajas vistas coincide con la pista desde abajo para esta columna
        if (box_counter != numbers[SIZE + col])
            valid = 0; // Si no coincide, marcar las pistas como inválidas
    }

    return valid; // Devolver 1 si todas las pistas desde abajo son válidas, 0 si alguna no coincide
}


// Función para verificar las pistas desde la izquierda
int check_left(int *board, int *numbers)
{
    int row;
    int col;
    int box_counter;
    int max_height;
    int valid;

    valid = 1; // Se asume que las pistas desde la izquierda son válidas inicialmente

    row = -1; // Inicializar `row` en -1 para comenzar desde la fila 0 en el primer incremento
    while (++row < SIZE) // Iterar a través de cada fila (de arriba a abajo)
    {
        max_height = 0; // Inicializar la altura máxima vista a 0 para cada fila
        box_counter = 0; // Inicializar el contador de cajas vistas a 0 para cada fila

        col = -1; // Inicializar `col` en -1 para comenzar desde la columna 0 en el primer incremento
        while (++col < SIZE) // Iterar a través de cada columna (de izquierda a derecha)
        {
            // Comprobar si la altura en la casilla actual es mayor que la altura máxima vista
            if (board[row * SIZE + col] > max_height)
            {
                max_height = board[row * SIZE + col]; // Actualizar la altura máxima vista en la fila actual
                box_counter++; // Incrementar el contador de cajas vistas
            }
        }

        // Verificar si el contador de cajas vistas coincide con la pista desde la izquierda para esta fila
        if (box_counter != numbers[2 * SIZE + row])
            valid = 0; // Si no coincide, marcar las pistas como inválidas
    }

    return valid; // Devolver 1 si todas las pistas desde la izquierda son válidas, 0 si alguna no coincide
}


// Función para verificar las pistas desde la derecha
int check_right(int *board, int *numbers)
{
    int row;
    int col;
    int box_counter;
    int max_height;
    int valid;

    valid = 1; // Se asume que las pistas son válidas al inicio

    row = -1; // Inicializar `row` en -1 para comenzar desde la fila 0 en el primer incremento
    while (++row < SIZE) // Iterar a través de cada fila (de arriba a abajo)
    {
        max_height = 0; // Inicializar la altura máxima vista a 0 para cada fila
        box_counter = 0; // Inicializar el contador de cajas vistas a 0 para cada fila

        col = SIZE; // Inicializar `col` en SIZE (4) para comenzar desde la columna SIZE-1 (última columna)
        while (--col >= 0) // Iterar a través de cada columna (de derecha a izquierda)
        {
            if (board[row * SIZE + col] > max_height)
            {
                max_height = board[row * SIZE + col]; // Actualizar la altura máxima vista en la fila actual
                box_counter++; // Incrementar el contador de cajas vistas
            }
        }

        // Verificar si el contador de cajas vistas coincide con la pista derecha para esta fila
        if (box_counter != numbers[3 * SIZE + row]) // revisa del 12 al 16
            valid = 0; // Si no coincide, marcar las pistas como inválidas
    }

    return valid; // Devolver 1 si todas las pistas derechas son válidas, 0 si alguna no coincide
}


int	main(int argc, char **argv)
{
	int	*numbers;
	int	*board;
	int	i;

	if (argc != 2)
	{
		write(1, "Error\n", 6); // Escribir mensaje de error si el número de argumentos es incorrecto
		return (1); 
	}
	numbers = (int *)malloc(SIZE * SIZE * sizeof(int)); // Asignar memoria para las pistas
	i = -1;
	while (++i < SIZE * SIZE)
		numbers[i] = argv[1][i * 2] - '0'; // Convertir las pistas de caracteres a enteros
	board = (int *)malloc(SIZE * SIZE * sizeof(int)); // Asignar memoria para el tablero
	i = -1;
	while (++i < SIZE * SIZE)
		board[i] = 0; // Inicializar el tablero con ceros
	if (solve(board, numbers, 0))
		print(board); // Si se encuentra una solución, imprimir el tablero
	else
		write(1, "Error\n", 6); // Si no se encuentra solución, escribir mensaje de error
	free(numbers); // Liberar memoria 
	free(board); 
	return (0); 
}
