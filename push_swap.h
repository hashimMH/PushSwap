/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 16:15:41 by hmohamed          #+#    #+#             */
/*   Updated: 2023/01/25 15:44:03 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <signal.h>
# include <stdlib.h>
# include <stdio.h>
# include "libft/libft.h"

void	check_dup(t_list **a);
int		is_sorted(t_list *a, t_list *b);
int		check_num(long num, t_list **a);
void	setnum(char **num);
void	free_sp(char **sp);
void	free_sp_ex(char **sp, t_list **a);
void	sa(t_list **a);
void	sb(t_list **b);
void	ss(t_list **a, t_list **b);
void	pa(t_list **a, t_list **b);
void	pb(t_list **a, t_list **b);
void	ra(t_list **a);
void	rb(t_list **b);
void	rra(t_list **a);
void	rrb(t_list **b);
void	rrr(t_list **a, t_list **b);
void	sort(t_list **a);
void	sort_three(t_list **a);
void	sort_five(t_list **a, t_list **b);
int		small_num(t_list *a);
void	sort_four(t_list **a, t_list **b);
void	sort_rest(t_list **a, t_list **b, int size);
int		small_val(t_list *a);
int		big_num(t_list *a);
int		small_avg(t_list *a, int s, int e);
int		big_val(t_list *a);
void	move_rest(t_list **a, t_list **b, int size);

#endif