/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alletond <alletond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:43:29 by alletond          #+#    #+#             */
/*   Updated: 2023/11/02 15:08:14 by alletond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ra(t_stack **head, int print)
{
	t_stack	*first;
	t_stack	*last;

	if (*head == NULL || (*head)->next == NULL)
	{
		return ;
	}
	first = *head;
	last = *head;
	while (last->next != NULL)
	{
		last = last->next;
	}
	*head = first->next;
	(*head)->prev = NULL;
	first->next = NULL;
	first->prev = last;
	last->next = first;
	if (print)
		ft_putstr("ra\n");
}
