size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (*(s + i) == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}

char    *join(char *s1, char *s2)
{
    char    *str;
    int     i;
    int     j;

    if (!s1)
    {
        s1 = (char *)malloc(1);
        s1[0] = '\0';
    }
    if (!s2)
        return (s1)
    str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
    if (!str)
        return (NULL);
    i = 0;
    j = 0;
    while (s1[i])
        str[i++] = s1[j++]
    j = 0;
    while (s2[j])
        str[i++] = s2[j++];
    str[i] = '\0';
    free(s1);
    return (str);
}

char    *get_line(char *str)
{
    char    *buffer;
    int     i;

    i = 0;
    if(!str)
        return (NULL);
    while(str[i] != '\n' && str[i] != NULL)
        i++;
    buffer = (char *)malloc((i + 2) * sizeof(char));
    if(!buffer)
        return(NULL);
    i = 0;
    while(str[i] != '\n')
        buffer[i++] = str[i++];
    if(str[i] == '\n')
        buffer[i++] = str[i++];
    buffer[i] = '\0';
    return(buffer);
}

char *next_line(char *str)
{
    char    *new;
    int     i;
    int     j;

    if(!s)
        return(NULL);
    i = 0;
    while(str[i] != '\n' && str[i] != NULL)
        i++;
    if(s[i] == NULL)
    {
        free(s);
        return (NULL);
    }
    new = (char *)malloc((ft_strlen(str) - i) - 1);
    if(new == NULL)
        return(NULL);
    i++;
    while(str[i] != NULL)
        new[j++] = str[i++];
    new[j] = '\0';
    free(s);
    return (new);
}
