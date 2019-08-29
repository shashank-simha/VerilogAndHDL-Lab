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
static const char *ng0 = "C:/Users/Student/Desktop/ShashankShivv/FlipFlop/ff.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};



static void Initial_92_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(93, ng0);

LAB2:    xsi_set_current_line(94, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1608);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(95, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_98_1(char *t0)
{
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;

LAB0:    t1 = (t0 + 2936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 3256);
    *((int *)t2) = 1;
    t3 = (t0 + 2968);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(99, ng0);

LAB5:    xsi_set_current_line(100, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_xcompare(t5, 1, t4, 1);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_xcompare(t5, 1, t2, 1);
    if (t6 == 1)
        goto LAB9;

LAB10:
LAB11:    goto LAB2;

LAB7:    xsi_set_current_line(101, ng0);

LAB12:    xsi_set_current_line(101, ng0);
    t7 = (t0 + 1608);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 1608);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 1);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 1768);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 1);
    goto LAB11;

LAB9:    xsi_set_current_line(102, ng0);

LAB13:    xsi_set_current_line(102, ng0);
    t3 = (t0 + 1608);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    memset(t11, 0, 8);
    t8 = (t7 + 4);
    t12 = *((unsigned int *)t8);
    t13 = (~(t12));
    t14 = *((unsigned int *)t7);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB17;

LAB15:    if (*((unsigned int *)t8) == 0)
        goto LAB14;

LAB16:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;

LAB17:    t10 = (t11 + 4);
    t17 = (t7 + 4);
    t18 = *((unsigned int *)t7);
    t19 = (~(t18));
    *((unsigned int *)t11) = t19;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t17) != 0)
        goto LAB19;

LAB18:    t24 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t24 & 1U);
    t25 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t25 & 1U);
    t26 = (t0 + 1608);
    xsi_vlogvar_assign_value(t26, t11, 0, 0, 1);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t7 = (t4 + 4);
    t12 = *((unsigned int *)t7);
    t13 = (~(t12));
    t14 = *((unsigned int *)t4);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB23;

LAB21:    if (*((unsigned int *)t7) == 0)
        goto LAB20;

LAB22:    t8 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t8) = 1;

LAB23:    t9 = (t11 + 4);
    t10 = (t4 + 4);
    t18 = *((unsigned int *)t4);
    t19 = (~(t18));
    *((unsigned int *)t11) = t19;
    *((unsigned int *)t9) = 0;
    if (*((unsigned int *)t10) != 0)
        goto LAB25;

LAB24:    t24 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t24 & 1U);
    t25 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t25 & 1U);
    t17 = (t0 + 1768);
    xsi_vlogvar_assign_value(t17, t11, 0, 0, 1);
    goto LAB11;

LAB14:    *((unsigned int *)t11) = 1;
    goto LAB17;

LAB19:    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t17);
    *((unsigned int *)t11) = (t20 | t21);
    t22 = *((unsigned int *)t10);
    t23 = *((unsigned int *)t17);
    *((unsigned int *)t10) = (t22 | t23);
    goto LAB18;

LAB20:    *((unsigned int *)t11) = 1;
    goto LAB23;

LAB25:    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t10);
    *((unsigned int *)t11) = (t20 | t21);
    t22 = *((unsigned int *)t9);
    t23 = *((unsigned int *)t10);
    *((unsigned int *)t9) = (t22 | t23);
    goto LAB24;

}


extern void work_m_00000000001014183960_0338671026_init()
{
	static char *pe[] = {(void *)Initial_92_0,(void *)Always_98_1};
	xsi_register_didat("work_m_00000000001014183960_0338671026", "isim/FF_T_isim_beh.exe.sim/work/m_00000000001014183960_0338671026.didat");
	xsi_register_executes(pe);
}
