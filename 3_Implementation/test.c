#include"unity.h"
#include<stdio.h>



extern int show_record();
extern void reset_score();
extern void help();
extern void edit_score(float score, char plnm[20]);
void setUp(void)
{

}
void tearDown(void)
{

}
int test_game()
{
    UNITY_TEST_ASSERT_EQUAL_INT((0), (show_record()), __LINE__, NULL);

return 0;}
int test_reset()
{
    

    UNITY_TEST_ASSERT_EQUAL_INT((0), (rest_score()), __LINE__, NULL);
}
void test_score()
{

    
    UNITY_TEST_ASSERT_EQUAL_INT((0), (edit_score()), __LINE__, NULL);
}

 int main(void)
{
    UnityBegin(NULL);
    RUN_TEST(test_game());
    RUN_TEST(test_score());
    RUN_TEST(test_reset());
    return(UnityEnd());


}
