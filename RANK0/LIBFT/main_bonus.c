/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 18:56:40 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/09/27 19:33:24 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
/* +==========================+
   |    ft_lstnew_bonus.c     |
   +==========================+ */
    puts("-----FT_LSTNEW------");
    t_list *node = ft_lstnew("Hola");
    printf("ft_lstnew(\"Hola\")\n -Expected: Hola\n +Result: %s\n", (char *)node->content);

/* +==========================+
   | ft_lstadd_front_bonus.c  |
   +==========================+ */
    puts("---FT_LSTADD_FRONT---");
    t_list *lst = NULL;
    ft_lstadd_front(&lst, ft_lstnew("Segundo"));
    ft_lstadd_front(&lst, ft_lstnew("Primero"));
    printf("lst->content\n -Expected: Primero\n +Result: %s\n", (char *)lst->content);

/* +==========================+
   |    ft_lstsize_bonus.c    |
   +==========================+ */
    puts("-----FT_LSTSIZE------");
    printf("ft_lstsize(lst)\n -Expected: 2\n +Result: %d\n", ft_lstsize(lst));

/* +==========================+
   |    ft_lstlast_bonus.c    |
   +==========================+ */
    puts("-------FT_LSTLAST-------");
    t_list *last = ft_lstlast(lst);
    printf("ft_lstlast(lst)\n -Expected: Segundo\n +Result: %s\n", (char *)last->content);

/* +==========================+
   |  ft_lstadd_back_bonus.c  |
   +==========================+ */
    puts("----FT_LSTADD_BACK---");
    ft_lstadd_back(&lst, ft_lstnew("Tercero"));
    printf("lst->next->next->content\n -Expected: Tercero\n +Result: %s\n", (char *)lst->next->next->content);

/* +==========================+
   |   ft_lstdelone_bonus.c   |
   +==========================+ */
//    puts("------FT_LSTDELONE------");
//    t_list *temp = ft_lstnew("Eliminarme");
//    ft_lstdelone(temp, NULL); 

/* +==========================+
   |   ft_lstclear_bonus.c    |
   +==========================+ */
//    puts("-------FT_LSTCLEAR------");
//    ft_lstclear(&lst, NULL);

/* +==========================+
   |   ft_lstiter_bonus.c     |
   +==========================+ */
    puts("--------FT_LSTITER------");
    lst = ft_lstnew("Uno");
    ft_lstadd_back(&lst, ft_lstnew("Dos"));
    puts("ft_lstiter(lst, puts)");
    puts(" -Expected:");
    puts("Uno");
    puts("Dos");
    puts(" +Result:");
    ft_lstiter(lst, (void (*)(void *))puts);

/* +==========================+
   |    ft_lstmap_bonus.c     |
   +==========================+ */
    puts("--------FT_LSTMAP-------");
    puts("ft_lstmap(lst, ft_strdup)");
    t_list *mapped = ft_lstmap(lst, (void *(*)(void *))ft_strdup, free);
    printf("mapped->content\n -Expected: Uno\n +Result: %s\n", (char *)mapped->content);
    printf("mapped->next->content\n -Expected: Dos\n +Result: %s\n", (char *)mapped->next->content);
    ft_lstclear(&mapped, free);
    ft_lstclear(&lst, NULL);

    return 0;
}
