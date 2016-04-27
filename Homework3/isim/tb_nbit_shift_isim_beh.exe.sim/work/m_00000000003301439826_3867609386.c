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
static unsigned int ng1[] = {170U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {9, 0};
static int ng5[] = {1, 0};
static unsigned int ng6[] = {240U, 0U};



static void Initial_65_0(char *t0)
{
    char t6[8];
    char t25[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t1 = (t0 + 3488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(65, ng0);

LAB4:    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1928);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 3296);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(71, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 3296);
    xsi_process_wait(t2, 3000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(72, ng0);
    t3 = (t0 + 2088);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t5);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB10;

LAB8:    if (*((unsigned int *)t7) == 0)
        goto LAB7;

LAB9:    t13 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t13) = 1;

LAB10:    t14 = (t6 + 4);
    t15 = (t5 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (~(t16));
    *((unsigned int *)t6) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB12;

LAB11:    t22 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 2088);
    xsi_vlogvar_assign_value(t24, t6, 0, 0, 1);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 3296);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB7:    *((unsigned int *)t6) = 1;
    goto LAB10;

LAB12:    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t6) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB11;

LAB13:    xsi_set_current_line(73, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 3296);
    xsi_process_wait(t2, 3000LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB14:    xsi_set_current_line(74, ng0);
    t3 = (t0 + 2088);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t5);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB18;

LAB16:    if (*((unsigned int *)t7) == 0)
        goto LAB15;

LAB17:    t13 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t13) = 1;

LAB18:    t14 = (t6 + 4);
    t15 = (t5 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (~(t16));
    *((unsigned int *)t6) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB20;

LAB19:    t22 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 2088);
    xsi_vlogvar_assign_value(t24, t6, 0, 0, 1);
    xsi_set_current_line(75, ng0);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB21:    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(81, ng0);

LAB40:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 3296);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB41;
    goto LAB1;

LAB15:    *((unsigned int *)t6) = 1;
    goto LAB18;

LAB20:    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t6) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB19;

LAB22:    xsi_set_current_line(75, ng0);

LAB24:    xsi_set_current_line(76, ng0);
    t13 = (t0 + 3296);
    xsi_process_wait(t13, 5000LL);
    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB25:    xsi_set_current_line(76, ng0);
    t14 = (t0 + 2088);
    t15 = (t14 + 56U);
    t24 = *((char **)t15);
    memset(t25, 0, 8);
    t26 = (t24 + 4);
    t16 = *((unsigned int *)t26);
    t17 = (~(t16));
    t18 = *((unsigned int *)t24);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB29;

LAB27:    if (*((unsigned int *)t26) == 0)
        goto LAB26;

LAB28:    t27 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t27) = 1;

LAB29:    t28 = (t25 + 4);
    t29 = (t24 + 4);
    t21 = *((unsigned int *)t24);
    t22 = (~(t21));
    *((unsigned int *)t25) = t22;
    *((unsigned int *)t28) = 0;
    if (*((unsigned int *)t29) != 0)
        goto LAB31;

LAB30:    t33 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t33 & 1U);
    t34 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t34 & 1U);
    t35 = (t0 + 2088);
    xsi_vlogvar_assign_value(t35, t25, 0, 0, 1);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 3296);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB32;
    goto LAB1;

LAB26:    *((unsigned int *)t25) = 1;
    goto LAB29;

LAB31:    t23 = *((unsigned int *)t25);
    t30 = *((unsigned int *)t29);
    *((unsigned int *)t25) = (t23 | t30);
    t31 = *((unsigned int *)t28);
    t32 = *((unsigned int *)t29);
    *((unsigned int *)t28) = (t31 | t32);
    goto LAB30;

LAB32:    xsi_set_current_line(77, ng0);
    t3 = (t0 + 2408);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t5, 4, t7, 32);
    t13 = (t0 + 2408);
    xsi_vlogvar_assign_value(t13, t6, 0, 0, 4);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 3296);
    xsi_process_wait(t2, 3000LL);
    *((char **)t1) = &&LAB33;
    goto LAB1;

LAB33:    xsi_set_current_line(78, ng0);
    t3 = (t0 + 2088);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t5);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB37;

LAB35:    if (*((unsigned int *)t7) == 0)
        goto LAB34;

LAB36:    t13 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t13) = 1;

LAB37:    t14 = (t6 + 4);
    t15 = (t5 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (~(t16));
    *((unsigned int *)t6) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB39;

LAB38:    t22 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 2088);
    xsi_vlogvar_assign_value(t24, t6, 0, 0, 1);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2568);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB21;

LAB34:    *((unsigned int *)t6) = 1;
    goto LAB37;

LAB39:    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t6) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB38;

LAB41:    xsi_set_current_line(82, ng0);
    t3 = (t0 + 2088);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t5);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB45;

LAB43:    if (*((unsigned int *)t7) == 0)
        goto LAB42;

LAB44:    t13 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t13) = 1;

LAB45:    t14 = (t6 + 4);
    t15 = (t5 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (~(t16));
    *((unsigned int *)t6) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB47;

LAB46:    t22 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 2088);
    xsi_vlogvar_assign_value(t24, t6, 0, 0, 1);
    goto LAB40;

LAB42:    *((unsigned int *)t6) = 1;
    goto LAB45;

LAB47:    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t6) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB46;

LAB48:    goto LAB1;

}


extern void work_m_00000000003301439826_3867609386_init()
{
	static char *pe[] = {(void *)Initial_65_0};
	xsi_register_didat("work_m_00000000003301439826_3867609386", "isim/tb_nbit_shift_isim_beh.exe.sim/work/m_00000000003301439826_3867609386.didat");
	xsi_register_executes(pe);
}
