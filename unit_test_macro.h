
#ifndef UNIT_TEST_MACRO_H_
#define UNIT_TEST_MACRO_H_


#ifndef EXPECT
#define EXPECT(expr) \
    do { \
    if(!(expr)) \
        { \
        fprintf(stderr, "unexpect-> %s:%d\n", __FILE__, __LINE__); \
        exit(1); \
        } \
    } while (0)
#endif

#endif // !UNIT_TEST_MACRO_H_