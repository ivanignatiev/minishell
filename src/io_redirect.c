/*
** io_redirect.c for minishell2 in /home/ignati_i//projects/minishell2
** 
** Made by ivan ignatiev
** Login   <ignati_i@epitech.net>
** 
** Started on  Sun Dec  2 14:29:44 2012 ivan ignatiev
** Last update Sun Dec  2 15:14:07 2012 ivan ignatiev
*/

#include	<unistd.h>
#include	<stdlib.h>
#include	"minishell1.h"
#include	"stringmy.h"
#include	"arraymy.h"

int		exec_command_ior(char *cmd, char ***env, int idf, int odf)
{
  return (execute_command(cmd, env, idf, odf));
}
