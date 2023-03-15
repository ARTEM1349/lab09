#include "lib.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <malloc.h>
#include <check.h>

START_TEST(test_lab05_fn)
{
        int test_a = 1;
        int test_result = 2000;
        int actual_result = lab05(test_a);
 
        ck_assert_int_eq(test_result, actual_result);
}
END_TEST

START_TEST(test_lab06_fn)
{
        int c ;
        int s = 6;
        long int test_d[]={24,342,345,234,545,678};
        long int expected[]={24,234,342,345,545,678};
        for (int a = 0;a<6;a++){
        int actual = lab06(test_d,s,a);
        ck_assert_int_eq(actual,expected[a]);
        }
}
END_TEST  
 


Suite *lab_test_suite(void)
{
    Suite *s;
    TCase *tc_lab05;
    TCase *tc_lab06;
   
    s = suite_create("lab09");
 
    tc_lab05 = tcase_create("lab_05");
   
    tcase_add_test(tc_lab05, test_lab05_fn);
 
    tc_lab06 = tcase_create("lab_06");
 
    tcase_add_test(tc_lab06, test_lab06_fn);
 
    suite_add_tcase(s, tc_lab05);
    suite_add_tcase(s, tc_lab06);
   
    return s;
}

int main(void)
{
   
    int number_failed;
    Suite *s;
    SRunner *sr;
   
    s = lab_test_suite();
    sr = srunner_create(s);
   
    srunner_run_all(sr, CK_NORMAL);
    number_failed = srunner_ntests_failed(sr);
    srunner_free(sr);
   
    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
