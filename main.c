#include "push_swap.h"

void free_stack(list_t *stack)
{
    list_t *tmp;

    while (stack)
    {
        tmp = stack->next;
        free(stack);
        stack = tmp;
    }
}

list_t *new_node(int content)
{
    list_t *node = malloc(sizeof(list_t));
    if (!node)
        return NULL;
    node->content = content;
    node->next = NULL;
    return node;
}
void add_back(list_t **stack, list_t *new)
{
    list_t *tmp;

    if (!*stack)
    {
        *stack = new;
        return;
    }
    tmp = *stack;
    while (tmp->next)
        tmp = tmp->next;
    tmp->next = new;
}
list_t *creat_stack(int argc, char **argv)
{
    list_t *stack = NULL;
    int i = 1;

    while (i < argc)
    {
        add_back(&stack, new_node(ft_atoi(argv[i])));
        i++;
    }
    return stack;
}
void ft_putnbr(int nb)
{
    char c;
    if(nb < 0)
    {
        nb = -nb;
        write(1, "-", 1);
    }
    if(nb >= 10)
    {
        ft_putnbr(nb / 10);
    }
    c = (nb % 10) + '0';
    write(1, &c, 1);
}
void print_stack(list_t *stack)
{
    while (stack)
    {
        ft_putnbr(stack->content);
         write(1, " ", 2);
        stack = stack->next;
    }
   write(1, "\n", 2);
}


int main(int argc, char **argv)
{
    list_t *stack_a = NULL;

    if (argc < 2)
        return 0;

    stack_a = creat_stack(argc, argv);
     print_stack(stack_a);
     
    free_stack(stack_a);
    return 0;
}

