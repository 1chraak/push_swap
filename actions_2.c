/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izouriqi <izouriqi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 12:37:06 by izouriqi          #+#    #+#             */
/*   Updated: 2026/02/24 12:37:07 by izouriqi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr(t_node **stack_a, t_node **stack_b, char c)
{
	ra_b(stack_a, c);
	ra_b(stack_b, c);
}

void	ss(t_node **stack_a, t_node **stack_b, char c)
{
	*stack_a = sa_b(*stack_a, c);
	*stack_b = sa_b(*stack_b, c);
}

void	rrr(t_node **stack_a, t_node **stack_b, char c)
{
	*stack_a = rra_b(*stack_a, c);
	*stack_b = rra_b(*stack_b, c);
}
