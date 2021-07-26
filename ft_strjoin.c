/*
*	DESCRIPTION
*	Allocates (with malloc(3)) and returns a new string, which is the result of 
*	the concatenation of ’s1’ and ’s2’.
*	RETURN VALUES
*	The new string. NULL if the allocation fails.
*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ccat;
	int		len_s1;
	int		len_s2;

	len_s1 = (ft_strlen((char *)s1));
	len_s2 = (ft_strlen((char *)s2));
	ccat = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (ccat == NULL)
		return (NULL);
	ft_strlcpy(&ccat[0], s1, len_s1 + 1);
	ft_strlcpy(&ccat[len_s1], s2, len_s2 + 1);
	return (ccat);
}
