#include <stdio.h>
#include <stdlib.h>
# include "./push_swap.h"

t_stack *get_last(t_stack *stack)
{
	if (!stack)
		return (NULL);	
	while (stack->next != NULL)
		stack = stack->next;
	return (stack);
}

void ra(t_stack **a) {
    if (!a || !(*a) || !(*a)->next)
        return;

    t_stack *first = *a;
    t_stack *last = get_last(*a);
    t_stack *new_first = (*a)->next;

    // penultimo elemnt
    t_stack *second_last = *a;
    while (second_last->next->next != NULL) {
        second_last = second_last->next;
    }
    second_last->next = first; //coneta el penultimo con el primero
    *a = last; // actualiza la lista al ultmio nodo(el nuevo top)
    last->next = new_first; // conecta el ultimo nodo al segundo (ahora el ultmio es el primero)
    first->next = NULL; // quita el pirmer nodo (que ahora es el ultmo lo pone en NULL para q no conecte a nada)
}

// Añado un nodo al final de la lista (pruebas de listas)
void append(t_stack **a, int value, int pos) {
    t_stack *new_node = malloc(sizeof(t_stack));
    new_node->value = value;
    new_node->pos = pos;
    new_node->next = NULL;
    if (!(*a)) {
        *a = new_node;
        return;
    }
    t_stack *temp = *a;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = new_node;
}

int main() {
    t_stack *a;
	
	a = NULL;
    // Crear la lista: 1(0) -> 5(1) -> 67(2) -> 8(3) -> 9(4)
    append(&a, 1, 0);
    append(&a, 5, 1);
    append(&a, 67, 2);
    append(&a, 8, 3);
    append(&a, 9, 4);

    printf("Lista original: ");
    print_list(a);

    // Realizar el intercambio
    ra(&a);

    printf("Lista modificada: ");
    print_list(a);

    // Liberar memoria
    t_stack *temp;
    while (a) {
        temp = a;
        a = a->next;
        free(temp);
    }

    return 0;
}
