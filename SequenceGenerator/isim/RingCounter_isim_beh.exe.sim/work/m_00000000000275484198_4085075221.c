/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Student/Desktop/-p/SequenceGenerator/RingCounter.v";
static int ng1[] = {1000, 0};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static int ng4[] = {2, 0};
static int ng5[] = {3, 0};



static void Initial_28_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(29, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1448);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 4);

LAB1:    return;
}

static void Always_31_1(char *t0)
{
    char t7[8];
    char t17[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    int t22;

LAB0:    t1 = (t0 + 2776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 3096);
    *((int *)t2) = 1;
    t3 = (t0 + 2808);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(32, ng0);

LAB5:    xsi_set_current_line(33, ng0);
    t4 = (t0 + 1448);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t8 = (t7 + 4);
    t9 = (t6 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 0);
    t12 = (t11 & 1);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 0);
    t15 = (t14 & 1);
    *((unsigned int *)t8) = t15;
    t16 = (t0 + 1608);
    xsi_vlogvar_assign_value(t16, t7, 0, 0, 1);
    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t5 = (t7 + 4);
    t6 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 1);
    t12 = (t11 & 1);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t6);
    t14 = (t13 >> 1);
    t15 = (t14 & 1);
    *((unsigned int *)t5) = t15;
    t8 = (t0 + 1448);
    t9 = (t0 + 1448);
    t16 = (t9 + 72U);
    t18 = *((char **)t16);
    t19 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t17, t18, 2, t19, 32, 1);
    t20 = (t17 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (!(t21));
    if (t22 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t5 = (t7 + 4);
    t6 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 2);
    t12 = (t11 & 1);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t6);
    t14 = (t13 >> 2);
    t15 = (t14 & 1);
    *((unsigned int *)t5) = t15;
    t8 = (t0 + 1448);
    t9 = (t0 + 1448);
    t16 = (t9 + 72U);
    t18 = *((char **)t16);
    t19 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t17, t18, 2, t19, 32, 1);
    t20 = (t17 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (!(t21));
    if (t22 == 1)
        goto LAB8;

LAB9:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t5 = (t7 + 4);
    t6 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 3);
    t12 = (t11 & 1);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t6);
    t14 = (t13 >> 3);
    t15 = (t14 & 1);
    *((unsigned int *)t5) = t15;
    t8 = (t0 + 1448);
    t9 = (t0 + 1448);
    t16 = (t9 + 72U);
    t18 = *((char **)t16);
    t19 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t17, t18, 2, t19, 32, 1);
    t20 = (t17 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (!(t21));
    if (t22 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1448);
    t6 = (t0 + 1448);
    t8 = (t6 + 72U);
    t9 = *((char **)t8);
    t16 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t7, t9, 2, t16, 32, 1);
    t18 = (t7 + 4);
    t10 = *((unsigned int *)t18);
    t22 = (!(t10));
    if (t22 == 1)
        goto LAB12;

LAB13:    goto LAB2;

LAB6:    xsi_vlogvar_assign_value(t8, t7, 0, *((unsigned int *)t17), 1);
    goto LAB7;

LAB8:    xsi_vlogvar_assign_value(t8, t7, 0, *((unsigned int *)t17), 1);
    goto LAB9;

LAB10:    xsi_vlogvar_assign_value(t8, t7, 0, *((unsigned int *)t17), 1);
    goto LAB11;

LAB12:    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t7), 1);
    goto LAB13;

}


extern void work_m_00000000000275484198_4085075221_init()
{
	static char *pe[] = {(void *)Initial_28_0,(void *)Always_31_1};
	xsi_register_didat("work_m_00000000000275484198_4085075221", "isim/RingCounter_isim_beh.exe.sim/work/m_00000000000275484198_4085075221.didat");
	xsi_register_executes(pe);
}
