# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ljaehaer <ljaehaer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/27 11:51:35 by ljaehaer          #+#    #+#              #
#    Updated: 2022/01/17 15:08:47 by ljaehaer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap
NAME_BONUS	=	checker

SRCS		=	srcs/push_swap.c srcs/sort.c srcs/is_sorted.c srcs/sort_3_nums.c srcs/sort_4_5_nums.c srcs/sort_many_nums.c srcs/sort_many_many_nums.c\
				srcs/funcs_error/check_for_error_argv.c srcs/funcs_error/put_error.c srcs/funcs_error/del.c\
				srcs/rules/swap.c srcs/rules/push.c srcs/rules/rotate.c srcs/rules/reverse_rotate.c\
				srcs/cycles_rules/cycle_rotate.c srcs/cycles_rules/cycle_reverse_rotate.c\
				srcs/utils/utils.c srcs/utils/utils2.c srcs/utils/utils3.c srcs/utils/utils4.c

SRCS_BONUS	=	srcs_bonus/checker.c srcs_bonus/read_insts.c srcs_bonus/use_insts.c\
				srcs_bonus/calls_rules/call_push.c srcs_bonus/calls_rules/call_reverse_rotate.c srcs_bonus/calls_rules/call_rotate.c srcs_bonus/calls_rules/call_swap.c\
				srcs_bonus/rules/push.c srcs_bonus/rules/reverse_rotate.c srcs_bonus/rules/rotate.c srcs_bonus/rules/swap.c

HEADER		=	incs/push_swap.h
HEADER_BONUS=	incs/push_swap_bonus.h

OBJS		=	${SRCS:%.c=%.o}
OBJS_BONUS	=	${SRCS_BONUS:%.c=%.o}
OBJS_TO_OBJS_BONUS	=	srcs/is_sorted.o srcs/funcs_error/check_for_error_argv.o srcs/funcs_error/put_error.o srcs/funcs_error/del.o

CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror
RM			=	rm -f

.PHONY	:		all clean fclean re bonus

all		:		${NAME}

${NAME}	:		${OBJS}
	make -C libft
	${CC} ${CFLAGS} -o ${NAME} ${OBJS} -L./libft -lft

%.o		:		%.c ${HEADER} ${HEADER_BONUS}
	${CC} ${CFLAGS} -c $< -o $@

clean	:		
	${RM} ${OBJS} ${OBJS_BONUS}

fclean	:		clean
	make -C libft fclean
	${RM} ${NAME} ${NAME_BONUS}

re		:		fclean all

bonus	:		${NAME} ${NAME_BONUS}

${NAME_BONUS}	:	${OBJS_BONUS} ${OBJS_TO_OBJS_BONUS}
	${CC} ${CFLAGS} -o ${NAME_BONUS} ${OBJS_BONUS} ${OBJS_TO_OBJS_BONUS} -L./libft -lft
