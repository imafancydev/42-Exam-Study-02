/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugusto <laugusto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 14:13:56 by laugusto          #+#    #+#             */
/*   Updated: 2025/01/06 15:47:08 by laugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     main(int gc, char **gv)
{
    int i;
    if (gc == 2)
    {
        i = 0;

        while (gv[1][i])
        {
            if (gv[1][i] >= 'a' && gv[1][i] <= 'z'){
                gv[1][i] -= 32;
            }else if (gv[1][i] >= 'A' && gv[1][i] <= 'Z'){
                gv[1][i] += 32;
            }
            write(1, &gv[1][i], 1);
            i++;
            
        }
    }
    write(1,"\n",1);
    return (0);
}

/*

Tests


$>./ulstr "L'eSPrit nE peUt plUs pRogResSer s'Il staGne et sI peRsIsTent VAnIte et auto-justification." | cat -e
l'EspRIT Ne PEuT PLuS PrOGrESsER S'iL STAgNE ET Si PErSiStENT vaNiTE ET AUTO-JUSTIFICATION.$
$>./ulstr "S'enTOuRer dE sECreT eSt uN sIGnE De mAnQuE De coNNaiSSanCe.  " | cat -e
s'ENtoUrER De SecREt EsT Un SigNe dE MaNqUe dE COnnAIssANcE.  $
$>./ulstr "3:21 Ba  tOut  moUn ki Ka di KE m'en Ka fe fot" | cat -e
3:21 bA  ToUT  MOuN KI kA DI ke M'EN kA FE FOT$
$>./ulstr | cat -e
$
*/