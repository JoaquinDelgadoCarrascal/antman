/*
** EPITECH PROJECT, 2020
** my_strupcase
** File description:
** puts every letter of every word in it in uppercase
*/

char *my_strupcase(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] <= 'z' && str[i] >= 'a') {
            str[i] = str[i] - 32;
            i++;
        }
        else
            i++;
    }
    return (str);
}