/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dictionary.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijin <yijin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 22:07:25 by yijin             #+#    #+#             */
/*   Updated: 2022/07/24 22:07:27 by yijin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

#define HASHSIZE 101
static struct nlist *hashtab[HASHSIZE]; /* pointer table */

/* hash: form hash value for string s */
unsigned	hash(char *s)
{
	unsigned hashval;
	for (hashval = 0; *s != '\0'; s++)
		hashval = *s + 31 * hashval;
	return hashval % HASHSIZE;
}

/* lookup: look for s in hashtab */
struct nlist *lookup(char *s)
{
	struct nlist *np;
	for (np = hashtab[hash(s)]; np != NULL; np = np->next)
		if (strcmp(s, np->name) == 0)
			return np; /* found */
	return NULL;	   /* not found */
}

char *ft_strdup(char *);
/* install: put (name, defn) in hashtab */
struct nlist *install(char *name, char *defn)
{
	struct nlist *np;
	unsigned hashval;
	if ((np = lookup(name)) == NULL)
	{ /* not found */
		np = (struct nlist *)malloc(sizeof(*np));
		if (np == NULL || (np->name = ft_strdup(name)) == NULL)
			return NULL;
		hashval = hash(name);
		np->next = hashtab[hashval];
		hashtab[hashval] = np;
	}
	else						/* already there */
		free((void *)np->defn); /*free previous defn */
	if ((np->defn = ft_strdup(defn)) == NULL)
		return NULL;
	return np;
}

char *ft_strdup(char *s) /* make a duplicate of s */
{
	char *p;
	p = (char *)malloc(strlen(s) + 1); /* +1 for ???\0??? */
	if (p != NULL)
		strcpy(p, s);
	return p;
}
