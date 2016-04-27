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

/* This file is designed for use with ISim build 0xa0883be4 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Chris/Documents/CompE470/Homework3_2/Homework3/Question3.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};



static void Always_10_0(char *t0)
{
    char t13[8];
    char t14[8];
    char t15[8];
    char t27[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;

LAB0:    t1 = (t0 + 2800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(10, ng0);
    t2 = (t0 + 3120);
    *((int *)t2) = 1;
    t3 = (t0 + 2832);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(10, ng0);

LAB5:    xsi_set_current_line(11, ng0);
    t4 = (t0 + 1320U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(14, ng0);
    t2 = (t0 + 1880);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t11 = *((char **)t5);
    memset(t15, 0, 8);
    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB10;

LAB9:    t12 = (t11 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB10;

LAB13:    if (*((unsigned int *)t4) < *((unsigned int *)t11))
        goto LAB11;

LAB12:    memset(t14, 0, 8);
    t17 = (t15 + 4);
    t6 = *((unsigned int *)t17);
    t7 = (~(t6));
    t8 = *((unsigned int *)t15);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t17) != 0)
        goto LAB16;

LAB17:    t19 = (t14 + 4);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t19);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB18;

LAB19:    t28 = *((unsigned int *)t14);
    t29 = (~(t28));
    t30 = *((unsigned int *)t19);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t19) > 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t14) > 0)
        goto LAB24;

LAB25:    memcpy(t13, t32, 8);

LAB26:    t33 = (t0 + 1880);
    xsi_vlogvar_assign_value(t33, t13, 0, 0, 4);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(12, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1880);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 4);
    goto LAB8;

LAB10:    t16 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB12;

LAB11:    *((unsigned int *)t15) = 1;
    goto LAB12;

LAB14:    *((unsigned int *)t14) = 1;
    goto LAB17;

LAB16:    t18 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB17;

LAB18:    t23 = (t0 + 1880);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = ((char*)((ng2)));
    memset(t27, 0, 8);
    xsi_vlog_unsigned_add(t27, 32, t25, 4, t26, 32);
    goto LAB19;

LAB20:    t32 = ((char*)((ng1)));
    goto LAB21;

LAB22:    xsi_vlog_unsigned_bit_combine(t13, 32, t27, 32, t32, 32);
    goto LAB26;

LAB24:    memcpy(t13, t27, 8);
    goto LAB26;

}


extern void work_m_00000000003066823557_2582214024_init()
{
	static char *pe[] = {(void *)Always_10_0};
	xsi_register_didat("work_m_00000000003066823557_2582214024", "isim/tb_counter_isim_beh.exe.sim/work/m_00000000003066823557_2582214024.didat");
	xsi_register_executes(pe);
}
