#include"unity.h"

extern int test_show_record();
extern void test_reset_score();
extern void test_help();
extern void test_edit_score(float score, char plnm[20]);
void setUp(void)
{

}
void tearDown(void)
{

}
int test_game()
{
    TEST_ASSERT_EQUAL(0,test_show_record());
}
int test_reset()
{
    

    TEST_ASSERT_EQUAL(0,test_rest_score());
}
void test_score()
{

    
    TEST_ASSERT_EQUAL(0,test_edit_score());
}

 int main(void)
{
    UnityBegin(NULL);
    RUN_TEST(test_game());
    RUN_TEST(test_reset_score());
     RUN_TEST(test_edit_score();
    return(UnityEnd());


}
