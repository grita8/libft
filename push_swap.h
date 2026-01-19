#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "libft.h"
#include <stdlib.h>
typedef struct stack_list
{
    int             content;
    struct stack_list   *next;
} list_t;


list_t  *new_node(int content);
void    add_back(list_t **stack, list_t *new);
list_t  *creat_stack(int argc, char **argv);
void    ft_putnbr(int nb);
void    free_stack(list_t *stack);

int	swap_stack_b(list_t **stack_b);
int	swap_stack_a(list_t **stack_a);

int	sa(list_t **stack_b);
int	sb(list_t **stack_b);
int	ss(list_t **stack_b);

int push_a(list_t **stack_a, list_t **stack_b);
int push_b(list_t **stack_a, list_t **stack_b);

int pb(list_t **stack_a, list_t **stack_b);
int pa(list_t **stack_a, list_t **stack_b);

int rotate_stack_a(list_t **stack_b);
int rotate_stack_b(list_t **stack_b);

int	ra(list_t **stack_a);
int	rb(list_t **stack_a);
int	rr(list_t **stack_a);



#endif
