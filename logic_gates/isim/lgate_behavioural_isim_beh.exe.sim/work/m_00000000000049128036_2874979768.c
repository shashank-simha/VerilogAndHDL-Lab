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
static const char *ng0 = "C:/Users/Student/Desktop/ShashankShivv/logic_gates/lgate_behavioural.v";



static void Always_34_0(char *t0)
{
    char t7[8];
    char t39[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;

LAB0:    t1 = (t0 + 3488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 3808);
    *((int *)t2) = 1;
    t3 = (t0 + 3520);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB5:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t6 = *((char **)t4);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 & t9);
    *((unsigned int *)t7) = t10;
    t4 = (t5 + 4);
    t11 = (t6 + 4);
    t12 = (t7 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t11);
    t15 = (t13 | t14);
    *((unsigned int *)t12) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB6;

LAB7:
LAB8:    t38 = (t0 + 1608);
    xsi_vlogvar_assign_value(t38, t7, 0, 0, 1);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t4);
    t10 = (t8 | t9);
    *((unsigned int *)t7) = t10;
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = (t7 + 4);
    t13 = *((unsigned int *)t2);
    t14 = *((unsigned int *)t5);
    t15 = (t13 | t14);
    *((unsigned int *)t6) = t15;
    t16 = *((unsigned int *)t6);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB9;

LAB10:
LAB11:    t20 = (t0 + 1768);
    xsi_vlogvar_assign_value(t20, t7, 0, 0, 1);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t4);
    t10 = (t8 ^ t9);
    *((unsigned int *)t7) = t10;
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = (t7 + 4);
    t13 = *((unsigned int *)t2);
    t14 = *((unsigned int *)t5);
    t15 = (t13 | t14);
    *((unsigned int *)t6) = t15;
    t16 = *((unsigned int *)t6);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB12;

LAB13:
LAB14:    t11 = (t0 + 1928);
    xsi_vlogvar_assign_value(t11, t7, 0, 0, 1);
    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t4);
    t10 = (t8 & t9);
    *((unsigned int *)t39) = t10;
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = (t39 + 4);
    t13 = *((unsigned int *)t2);
    t14 = *((unsigned int *)t5);
    t15 = (t13 | t14);
    *((unsigned int *)t6) = t15;
    t16 = *((unsigned int *)t6);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB15;

LAB16:
LAB17:    memset(t7, 0, 8);
    t20 = (t39 + 4);
    t40 = *((unsigned int *)t20);
    t41 = (~(t40));
    t42 = *((unsigned int *)t39);
    t43 = (t42 & t41);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB21;

LAB19:    if (*((unsigned int *)t20) == 0)
        goto LAB18;

LAB20:    t21 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t21) = 1;

LAB21:    t38 = (t7 + 4);
    t45 = (t39 + 4);
    t46 = *((unsigned int *)t39);
    t47 = (~(t46));
    *((unsigned int *)t7) = t47;
    *((unsigned int *)t38) = 0;
    if (*((unsigned int *)t45) != 0)
        goto LAB23;

LAB22:    t52 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t52 & 1U);
    t53 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t53 & 1U);
    t54 = (t0 + 2088);
    xsi_vlogvar_assign_value(t54, t7, 0, 0, 1);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t4);
    t10 = (t8 | t9);
    *((unsigned int *)t39) = t10;
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = (t39 + 4);
    t13 = *((unsigned int *)t2);
    t14 = *((unsigned int *)t5);
    t15 = (t13 | t14);
    *((unsigned int *)t6) = t15;
    t16 = *((unsigned int *)t6);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB24;

LAB25:
LAB26:    memset(t7, 0, 8);
    t20 = (t39 + 4);
    t34 = *((unsigned int *)t20);
    t35 = (~(t34));
    t36 = *((unsigned int *)t39);
    t37 = (t36 & t35);
    t40 = (t37 & 1U);
    if (t40 != 0)
        goto LAB30;

LAB28:    if (*((unsigned int *)t20) == 0)
        goto LAB27;

LAB29:    t21 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t21) = 1;

LAB30:    t38 = (t7 + 4);
    t45 = (t39 + 4);
    t41 = *((unsigned int *)t39);
    t42 = (~(t41));
    *((unsigned int *)t7) = t42;
    *((unsigned int *)t38) = 0;
    if (*((unsigned int *)t45) != 0)
        goto LAB32;

LAB31:    t48 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t48 & 1U);
    t49 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t49 & 1U);
    t54 = (t0 + 2248);
    xsi_vlogvar_assign_value(t54, t7, 0, 0, 1);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t4);
    t10 = (t8 ^ t9);
    *((unsigned int *)t39) = t10;
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = (t39 + 4);
    t13 = *((unsigned int *)t2);
    t14 = *((unsigned int *)t5);
    t15 = (t13 | t14);
    *((unsigned int *)t6) = t15;
    t16 = *((unsigned int *)t6);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB33;

LAB34:
LAB35:    memset(t7, 0, 8);
    t11 = (t39 + 4);
    t22 = *((unsigned int *)t11);
    t23 = (~(t22));
    t24 = *((unsigned int *)t39);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB39;

LAB37:    if (*((unsigned int *)t11) == 0)
        goto LAB36;

LAB38:    t12 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t12) = 1;

LAB39:    t20 = (t7 + 4);
    t21 = (t39 + 4);
    t27 = *((unsigned int *)t39);
    t28 = (~(t27));
    *((unsigned int *)t7) = t28;
    *((unsigned int *)t20) = 0;
    if (*((unsigned int *)t21) != 0)
        goto LAB41;

LAB40:    t35 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t35 & 1U);
    t36 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t36 & 1U);
    t38 = (t0 + 2408);
    xsi_vlogvar_assign_value(t38, t7, 0, 0, 1);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t13 = (t10 & t9);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB45;

LAB43:    if (*((unsigned int *)t2) == 0)
        goto LAB42;

LAB44:    t4 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t4) = 1;

LAB45:    t5 = (t7 + 4);
    t6 = (t3 + 4);
    t15 = *((unsigned int *)t3);
    t16 = (~(t15));
    *((unsigned int *)t7) = t16;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t6) != 0)
        goto LAB47;

LAB46:    t23 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t23 & 1U);
    t24 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t24 & 1U);
    t11 = (t0 + 2568);
    xsi_vlogvar_assign_value(t11, t7, 0, 0, 1);
    goto LAB2;

LAB6:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t7) = (t18 | t19);
    t20 = (t5 + 4);
    t21 = (t6 + 4);
    t22 = *((unsigned int *)t5);
    t23 = (~(t22));
    t24 = *((unsigned int *)t20);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (~(t26));
    t28 = *((unsigned int *)t21);
    t29 = (~(t28));
    t30 = (t23 & t25);
    t31 = (t27 & t29);
    t32 = (~(t30));
    t33 = (~(t31));
    t34 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t34 & t32);
    t35 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t35 & t33);
    t36 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t36 & t32);
    t37 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t37 & t33);
    goto LAB8;

LAB9:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t6);
    *((unsigned int *)t7) = (t18 | t19);
    t11 = (t3 + 4);
    t12 = (t4 + 4);
    t22 = *((unsigned int *)t11);
    t23 = (~(t22));
    t24 = *((unsigned int *)t3);
    t30 = (t24 & t23);
    t25 = *((unsigned int *)t12);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t31 = (t27 & t26);
    t28 = (~(t30));
    t29 = (~(t31));
    t32 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t32 & t28);
    t33 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t33 & t29);
    goto LAB11;

LAB12:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t6);
    *((unsigned int *)t7) = (t18 | t19);
    goto LAB14;

LAB15:    t18 = *((unsigned int *)t39);
    t19 = *((unsigned int *)t6);
    *((unsigned int *)t39) = (t18 | t19);
    t11 = (t3 + 4);
    t12 = (t4 + 4);
    t22 = *((unsigned int *)t3);
    t23 = (~(t22));
    t24 = *((unsigned int *)t11);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (~(t26));
    t28 = *((unsigned int *)t12);
    t29 = (~(t28));
    t30 = (t23 & t25);
    t31 = (t27 & t29);
    t32 = (~(t30));
    t33 = (~(t31));
    t34 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t34 & t32);
    t35 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t35 & t33);
    t36 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t36 & t32);
    t37 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t37 & t33);
    goto LAB17;

LAB18:    *((unsigned int *)t7) = 1;
    goto LAB21;

LAB23:    t48 = *((unsigned int *)t7);
    t49 = *((unsigned int *)t45);
    *((unsigned int *)t7) = (t48 | t49);
    t50 = *((unsigned int *)t38);
    t51 = *((unsigned int *)t45);
    *((unsigned int *)t38) = (t50 | t51);
    goto LAB22;

LAB24:    t18 = *((unsigned int *)t39);
    t19 = *((unsigned int *)t6);
    *((unsigned int *)t39) = (t18 | t19);
    t11 = (t3 + 4);
    t12 = (t4 + 4);
    t22 = *((unsigned int *)t11);
    t23 = (~(t22));
    t24 = *((unsigned int *)t3);
    t30 = (t24 & t23);
    t25 = *((unsigned int *)t12);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t31 = (t27 & t26);
    t28 = (~(t30));
    t29 = (~(t31));
    t32 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t32 & t28);
    t33 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t33 & t29);
    goto LAB26;

LAB27:    *((unsigned int *)t7) = 1;
    goto LAB30;

LAB32:    t43 = *((unsigned int *)t7);
    t44 = *((unsigned int *)t45);
    *((unsigned int *)t7) = (t43 | t44);
    t46 = *((unsigned int *)t38);
    t47 = *((unsigned int *)t45);
    *((unsigned int *)t38) = (t46 | t47);
    goto LAB31;

LAB33:    t18 = *((unsigned int *)t39);
    t19 = *((unsigned int *)t6);
    *((unsigned int *)t39) = (t18 | t19);
    goto LAB35;

LAB36:    *((unsigned int *)t7) = 1;
    goto LAB39;

LAB41:    t29 = *((unsigned int *)t7);
    t32 = *((unsigned int *)t21);
    *((unsigned int *)t7) = (t29 | t32);
    t33 = *((unsigned int *)t20);
    t34 = *((unsigned int *)t21);
    *((unsigned int *)t20) = (t33 | t34);
    goto LAB40;

LAB42:    *((unsigned int *)t7) = 1;
    goto LAB45;

LAB47:    t17 = *((unsigned int *)t7);
    t18 = *((unsigned int *)t6);
    *((unsigned int *)t7) = (t17 | t18);
    t19 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t6);
    *((unsigned int *)t5) = (t19 | t22);
    goto LAB46;

}


extern void work_m_00000000000049128036_2874979768_init()
{
	static char *pe[] = {(void *)Always_34_0};
	xsi_register_didat("work_m_00000000000049128036_2874979768", "isim/lgate_behavioural_isim_beh.exe.sim/work/m_00000000000049128036_2874979768.didat");
	xsi_register_executes(pe);
}
