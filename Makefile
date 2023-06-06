CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = push_swap.c check_list.c ft_atoi.c ft_split.c \
pa_pb_ra_rb_rr.c print_error_exit.c rra_rrb_rrr.c \
sa_sb_ss.c set_list.c step3.c step_0_1_2_4.c step3_utils.c
SRCS_BONUS = checker_bonus.c check_list.c ft_atoi.c ft_split.c \
pa_pb_ra_rb_rr_bonus.c print_error_exit.c rra_rrb_rrr_bonus.c \
sa_sb_ss_bonus.c set_list.c gnl_bonus.c gnl_utils_bonus.c ft_strlen.c
OBJS = push_swap.o check_list.o ft_atoi.o ft_split.o \
pa_pb_ra_rb_rr.o print_error_exit.o rra_rrb_rrr.o \
sa_sb_ss.o set_list.o step3.o step_0_1_2_4.o step3_utils.o
OBJS_BONUS = checker_bonus.o check_list.o ft_atoi.o ft_split.o \
pa_pb_ra_rb_rr_bonus.o print_error_exit.o rra_rrb_rrr_bonus.o \
sa_sb_ss_bonus.o set_list.o gnl_bonus.o gnl_utils_bonus.o ft_strlen.o
NAME = push_swap
BONUS = checker

all : $(NAME)

bonus : $(BONUS)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(BONUS) : $(OBJS_BONUS)
	$(CC) $(CFLAGS) $(OBJS_BONUS) -o $(BONUS)

%.o : %.c
	$(CC) $(CFLAGS) $^ -c
	
clean :
	rm -rf $(OBJS)
	rm -rf $(OBJS_BONUS)

fclean : clean
	rm -rf $(NAME)
	rm -rf $(BONUS)

re :
	make fclean
	make all
	
.PHONY : re clean fclean all bonus