#include"matrical.h"
#include"matrix.h"
#include"unity.h"

struct matrix m1 = {2,3,{{1,2,3,
                          4,5,6}}};


struct matrix m2 = {2,3,{{4,6,8,
                          1,5,6}}};


struct matrix solve = {0,0,{{0}}};


struct matrix m3 = {3,3,{{1,2,3,
                          4,5,6,
                          7,8,9}}};

int s1[6] = {2,4,6,8,10,12};
int s2[6] = {5,8,11,5,10,12};
int s3[9] = {2,4,6,8,10,12,14,16,18};
int d1[6] = {0,0,0,0,0,0};
int d2[6] = {3,4,5,-3,0,0};
int d3[9] = {0,0,0,0,0,0,0,0,0};
int mu1[6] = {30,36,42,66,81,96};
int mu2[9] = {9,12,15,24,33,42,39,54,69};
int t1[6] = {1,4,2,5,3,6};
int t2[9] ={1,4,7,2,5,8,3,6,9};

void setUp()
{
}
void tearDown()
{
}

void test_sum(void)
{
  TEST_ASSERT_EQUAL_INT_ARRAY(s1,matrix_sum(m1,m1,&solve),1);
  TEST_ASSERT_EQUAL_INT_ARRAY(s2,matrix_sum(m1,m2,&solve),1);
  TEST_ASSERT_EQUAL_INT_ARRAY(s3,matrix_sum(m3,m3,&solve),1);

}
void test_difference(void)
{
  TEST_ASSERT_EQUAL_INT_ARRAY(d1,matrix_differnce(m1,m1,&solve),1);
  TEST_ASSERT_EQUAL_INT_ARRAY(d2,matrix_differnce(m2,m1,&solve),1);
  TEST_ASSERT_EQUAL_INT_ARRAY(d3,matrix_differnce(m3,m3,&solve),1);

}
void test_multiply(void)
{
  TEST_ASSERT_EQUAL_INT_ARRAY(mu1,matrix_multi(m1,m3,&solve),1);
  TEST_ASSERT_EQUAL_INT_ARRAY(mu2,matrix_multi(m3,m1,&solve),1);
}
void test_transpose(void)
{
  TEST_ASSERT_EQUAL_INT_ARRAY(t1,Transpose(m1,&solve),1);
  TEST_ASSERT_EQUAL_INT_ARRAY(t2,Transpose(m3,&solve),1);
}

int main(void)
{
  UNITY_BEGIN();

  RUN_TEST(test_sum);
  RUN_TEST(test_difference);
  RUN_TEST(test_multiply);
  RUN_TEST(test_transpose);
  
  return UNITY_END();
}