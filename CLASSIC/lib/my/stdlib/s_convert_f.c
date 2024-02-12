/*
** EPITECH PROJECT, 2023
** KJ_GETFLOAT
** File description:
** Tranform a float number into a string.
*/

#include "../../../include/my.h"
static char *kj_subzero_to_str(char *result, int i, int virg)
{
    char carac[] = "#";
    int i_max = s_size(result) - 1;

    for (; i < virg + 1; ++i){
        carac[0] = '0';
        result = s_merge(result, carac);
    }
    return (result);
}

static char *kj_insert_float(char *result, double nb, int virg)
{
    unsigned long long num = (unsigned long long)(nb / 1);
    unsigned long long num2;
    char *str_num = s_convert_n(num);
    int i;

    nb -= ((unsigned long long)(nb / 1));
    nb *= n_power(10, virg);
    num2 = (unsigned long long)(nb / 1);
    result = s_merge(result, "0");
    result = s_merge(result, str_num);
    result = s_merge(result, ".");
    free(str_num);
    str_num = s_convert_n(num2);
    result = s_merge(result, str_num);
    result = kj_subzero_to_str(result, s_size(str_num) - 1, virg);
    free(str_num);
    return (result);
}

static char *do_round_sup(char *str, int i, int i_max, int reste)
{
    if (str[i] == '.')
        --i;
    if (str[i] + reste > '9' || (i == i_max - 1 && str[i] >= '5')){
        str[i] = '0';
        reste = 1;
        do_round_sup(str, i - 1, i_max, reste);
    } else {
        str[i] += reste;
    }
    return (str);
}

static char *kj_putfloat_print(char *res, int res_size)
{
    char *result;
    int i_start = 0;

    if (res[0] == '0')
        ++i_start;
    if (res[0] == '-' && res[1] == '0'){
        res[1] = res[0];
        ++i_start;
    }
    if (res[res_size - 2] == '.')
        res_size -= 1;
    result = s_extract(res, i_start, res_size - 1);
    free(res);
    return (result);
}

char *s_convert_f(double nb, int virg)
{
    char *result = s_dup("");
    int res_size;

    if (nb > 1.7976931348623157e+308 ||
    nb < -1.7976931348623157e+308)
        return (s_dup("inf"));
    if (nb < 0){
        nb *= -1;
        result = s_merge(result, "-");
    }
    if (virg > 9)
        virg = 9;
    result = kj_insert_float(result, nb, virg + 1);
    res_size = s_size(result) - 2;
    result = do_round_sup(result, res_size - 1, res_size, 0);
    return (kj_putfloat_print(result, res_size));
}
