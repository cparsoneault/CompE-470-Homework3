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
static const char *ng0 = "C:/Users/Chris/Documents/CompE470/Homework3_2/Homework3/nbit_shift.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {5U, 0U};
static unsigned int ng8[] = {6U, 0U};
static unsigned int ng9[] = {7U, 0U};
static unsigned int ng10[] = {8U, 0U};
static unsigned int ng11[] = {9U, 0U};
static unsigned int ng12[] = {1U, 1U};



static void Always_11_0(char *t0)
{
    char t9[8];
    char t10[8];
    char t17[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;

LAB0:    t1 = (t0 + 3464U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(11, ng0);
    t2 = (t0 + 3784);
    *((int *)t2) = 1;
    t3 = (t0 + 3496);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(12, ng0);
    t4 = (t0 + 1664U);
    t5 = *((char **)t4);

LAB5:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t6 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB24;

LAB25:
LAB27:
LAB26:    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 2544);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB28:    goto LAB2;

LAB6:    xsi_set_current_line(13, ng0);
    t7 = ((char*)((ng1)));
    t8 = (t0 + 2544);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 8);
    goto LAB28;

LAB8:    xsi_set_current_line(16, ng0);
    t3 = (t0 + 1824U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng3)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_lshift(t9, 8, t4, 8, t3, 32);
    t7 = (t0 + 2544);
    xsi_vlogvar_assign_value(t7, t9, 0, 0, 8);
    goto LAB28;

LAB10:    xsi_set_current_line(19, ng0);
    t3 = (t0 + 1824U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng3)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_rshift(t9, 8, t4, 8, t3, 32);
    t7 = (t0 + 2544);
    xsi_vlogvar_assign_value(t7, t9, 0, 0, 8);
    goto LAB28;

LAB12:    xsi_set_current_line(22, ng0);
    t3 = (t0 + 1824U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng3)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_arith_rshift(t9, 8, t4, 8, t3, 32);
    t7 = (t0 + 2544);
    xsi_vlogvar_assign_value(t7, t9, 0, 0, 8);
    goto LAB28;

LAB14:    xsi_set_current_line(25, ng0);
    t3 = (t0 + 1824U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t7 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 7);
    t13 = (t12 & 1);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t7);
    t15 = (t14 >> 7);
    t16 = (t15 & 1);
    *((unsigned int *)t3) = t16;
    t8 = (t0 + 1824U);
    t18 = *((char **)t8);
    memset(t17, 0, 8);
    t8 = (t17 + 4);
    t19 = (t18 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (t20 >> 0);
    *((unsigned int *)t17) = t21;
    t22 = *((unsigned int *)t19);
    t23 = (t22 >> 0);
    *((unsigned int *)t8) = t23;
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t24 & 127U);
    t25 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t25 & 127U);
    xsi_vlogtype_concat(t9, 8, 8, 2U, t17, 7, t10, 1);
    t26 = (t0 + 2544);
    xsi_vlogvar_assign_value(t26, t9, 0, 0, 8);
    goto LAB28;

LAB16:    xsi_set_current_line(28, ng0);
    t3 = (t0 + 1824U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t7 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 1);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 1);
    *((unsigned int *)t3) = t14;
    t15 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t15 & 127U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 127U);
    t8 = (t0 + 1824U);
    t18 = *((char **)t8);
    memset(t17, 0, 8);
    t8 = (t17 + 4);
    t19 = (t18 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (t20 >> 0);
    t22 = (t21 & 1);
    *((unsigned int *)t17) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 >> 0);
    t25 = (t24 & 1);
    *((unsigned int *)t8) = t25;
    xsi_vlogtype_concat(t9, 8, 8, 2U, t17, 1, t10, 7);
    t26 = (t0 + 2544);
    xsi_vlogvar_assign_value(t26, t9, 0, 0, 8);
    goto LAB28;

LAB18:    xsi_set_current_line(31, ng0);

LAB29:    xsi_set_current_line(32, ng0);
    t3 = (t0 + 1344U);
    t4 = *((char **)t3);
    t3 = (t0 + 1824U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 0);
    *((unsigned int *)t3) = t14;
    t15 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t15 & 127U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 127U);
    xsi_vlogtype_concat(t9, 8, 8, 2U, t10, 7, t4, 1);
    t18 = (t0 + 2544);
    xsi_vlogvar_assign_value(t18, t9, 0, 0, 8);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t4 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (t11 >> 7);
    t13 = (t12 & 1);
    *((unsigned int *)t9) = t13;
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 7);
    t16 = (t15 & 1);
    *((unsigned int *)t2) = t16;
    t7 = (t0 + 2384);
    xsi_vlogvar_assign_value(t7, t9, 0, 0, 1);
    goto LAB28;

LAB20:    xsi_set_current_line(37, ng0);

LAB30:    xsi_set_current_line(38, ng0);
    t3 = (t0 + 1824U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t7 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 1);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 1);
    *((unsigned int *)t3) = t14;
    t15 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t15 & 127U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 127U);
    t8 = (t0 + 1504U);
    t18 = *((char **)t8);
    xsi_vlogtype_concat(t9, 8, 8, 2U, t18, 1, t10, 7);
    t8 = (t0 + 2544);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 8);
    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t4 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t9) = t13;
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 0);
    t16 = (t15 & 1);
    *((unsigned int *)t2) = t16;
    t7 = (t0 + 2224);
    xsi_vlogvar_assign_value(t7, t9, 0, 0, 1);
    goto LAB28;

LAB22:    xsi_set_current_line(43, ng0);
    t3 = (t0 + 2544);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 2544);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 8);
    goto LAB28;

LAB24:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 1824U);
    t4 = *((char **)t3);
    t3 = (t0 + 2544);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 8);
    goto LAB28;

}


extern void work_m_00000000002117330030_2534719660_init()
{
	static char *pe[] = {(void *)Always_11_0};
	xsi_register_didat("work_m_00000000002117330030_2534719660", "isim/tb_nbit_shift_isim_beh.exe.sim/work/m_00000000002117330030_2534719660.didat");
	xsi_register_executes(pe);
}
