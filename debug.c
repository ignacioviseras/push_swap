/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvisera <igvisera@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 19:23:42 by igvisera          #+#    #+#             */
/*   Updated: 2024/05/29 19:36:07 by igvisera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./push_swap.h"

void print_stack(t_stack *stack)
{
	int i = 1;
	while (stack != NULL) {
		printf("%d. valor %d\n", i, stack->value);
		printf("   pos %d\n", stack->pos);
		stack = stack->next;
		i++;
	}
}


/*
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

// Definición de la estructura t_stack
typedef struct s_stack {
	int value;
	int pos;
	struct s_stack *next;
} t_stack;

// Funciones auxiliares que debes implementar:
int ft_atoi(const char *str);
int is_digit(const char *str);
void error(void);
int n_words(const char *str, char delim);
char **ft_split(const char *str, char delim);
void free_split(char **str_splited);
void free_stack(t_stack *stack);

// Crear un nuevo nodo de la pila
t_stack *stack_create(int value) {
	t_stack *stack = malloc(sizeof(t_stack));
	if (!stack)
		return NULL;
	stack->value = value;
	stack->pos = 0;
	stack->next = NULL;
	return stack;
}

// Añadir un nodo al final de la pila
void stack_add_bottom(t_stack **stack, t_stack *new_stack) {
	if (!*stack) {
		*stack = new_stack;
	} else {
		t_stack *iter = *stack;
		while (iter->next != NULL)
			iter = iter->next;
		iter->next = new_stack;
	}
}

// Inicializar la pila con los números dados en el array de strings num
void init_stack(t_stack **a, char **num, int n_num) {
	int x = 1;
	int i;
	int size;
	char **str_splited;

	while (x < n_num) {
		size = n_words(num[x], ' ');
		str_splited = ft_split(num[x], ' ');
		for (i = 0; i < size; i++) {
			if (is_digit(str_splited[i]) == 1) { // NO es digito
				free_split(str_splited);
				free_stack(*a);
				error();
			} else {
				stack_add_bottom(a, stack_create(ft_atoi(str_splited[i])));
			}
		}
		free_split(str_splited);
		x++;
	}
}

// Imprimir todos los elementos de la pila
void print_stack(t_stack *stack) {
	int i = 1;
	while (stack != NULL) {
		printf("%d. valor %d\n", i, stack->value);
		printf("   pos %d\n", stack->pos);
		stack = stack->next;
		i++;
	}
}

// Función para liberar la memoria de la pila
void free_stack(t_stack *stack) {
	t_stack *temp;
	while (stack) {
		temp = stack;
		stack = stack->next;
		free(temp);
	}
}

// Función para liberar la memoria de los strings spliteados
void free_split(char **str_splited) {
	int i = 0;
	while (str_splited[i]) {
		free(str_splited[i]);
		i++;
	}
	free(str_splited);
}

int main(int argc, char **argv) {
	t_stack *a = NULL;

	if (argc < 2)
		exit(1);
	else {
		init_stack(&a, argv, argc);
		print_stack(a);
		free_stack(a);
	}

	printf("num de params '%d'\n", argc);
	printf("param '%s'\n", argv[1]);
	printf("accedo\n");
	printf("r de atoi1 '%d'\n", ft_atoi(argv[1]));
	printf("r de atoi2 '%d'\n", ft_atoi(argv[1]));

	return 0;
}






*/