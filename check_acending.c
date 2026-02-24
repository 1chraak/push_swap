/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_acending.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izouriqi <izouriqi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 12:37:34 by izouriqi          #+#    #+#             */
/*   Updated: 2026/02/24 12:37:35 by izouriqi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	if_acending(s_node *stack)
{
	s_node	*comp;

	comp = stack->next;
	while (comp)
	{
		if (comp->content < stack->content)
		{
			return (0);
		}
		stack = stack->next;
		comp = stack->next;
	}
	return (1);
}

void	setranking(s_node *stack_a, int *list)
{
	int	i;

	i = 0;
	while (stack_a)
	{
		stack_a->rank = list[i];
		stack_a = stack_a->next;
		i++;
	}
}
