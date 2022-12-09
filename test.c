/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 20:50:52 by kichlee           #+#    #+#             */
/*   Updated: 2022/12/09 20:51:18 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_strlen(const char *s) {
  int i;

  i = 0;
  while (s[i])
    ++i;
  return (i);
}

char *ft_substr(char const *s, unsigned int start, size_t len) {
  int length;
  size_t i;
  size_t s_len;

  length = len - start;
  s_len = ft_strlen(s);
  i = 0;
  char *string;
  if (!s)
    return (NULL);
  string = (char *)malloc(sizeof(char) * (5));
  if (!string)
    return (NULL);
  while (i < 7) {
    string[i] = s[start + i];
    i++;
  }
  string[i] = 0;
  return (string);
}

int main() {
  char origin[500] = "abcde12345\0";
  char *rst;
  int idx_start = 3, len = 7;

  printf("origin string\t[%s]\n", origin);
  printf("start\t\t[%d]\nlen\t\t[%d]\n", idx_start, len);
  rst = ft_substr(origin, idx_start, len);
  printf("result\t\t[%s]\n", rst);
}