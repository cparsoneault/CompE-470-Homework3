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
static const char *ng0 = "C:/Users/Chris/Documents/CompE470/Homework3_2/Homework3/Question1.v";
static unsigned int ng1[] = {1U, 0U};
static int ng2[] = {0, 0};



static void Initial_23_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
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

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(23, ng0);

LAB4:    xsi_set_current_line(24, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(25, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(26, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(28, ng0);
    t2 = (t0 + 2656);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(28, ng0);
    t3 = (t0 + 1608);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t7) == 0)
        goto LAB6;

LAB8:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB9:    t14 = (t4 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t4) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB11;

LAB10:    t22 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 1608);
    xsi_vlogvar_assign_value(t24, t4, 0, 0, 1);
    xsi_set_current_line(29, ng0);
    t2 = (t0 + 2656);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t4) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB10;

LAB12:    xsi_set_current_line(29, ng0);
    t3 = (t0 + 1448);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB16;

LAB14:    if (*((unsigned int *)t7) == 0)
        goto LAB13;

LAB15:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB16:    t14 = (t4 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t4) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB18;

LAB17:    t22 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 1448);
    xsi_vlogvar_assign_value(t24, t4, 0, 0, 1);
    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (~(t8));
    t10 = *((unsigned int *)t5);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB22;

LAB20:    if (*((unsigned int *)t6) == 0)
        goto LAB19;

LAB21:    t7 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t7) = 1;

LAB22:    t13 = (t4 + 4);
    t14 = (t5 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (~(t16));
    *((unsigned int *)t4) = t17;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB24;

LAB23:    t22 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t22 & 1U);
    t23 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t23 & 1U);
    t15 = (t0 + 1768);
    xsi_vlogvar_assign_value(t15, t4, 0, 0, 1);
    xsi_set_current_line(31, ng0);
    t2 = (t0 + 2656);
    xsi_process_wait(t2, 3000LL);
    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB13:    *((unsigned int *)t4) = 1;
    goto LAB16;

LAB18:    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t4) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB17;

LAB19:    *((unsigned int *)t4) = 1;
    goto LAB22;

LAB24:    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t18 | t19);
    t20 = *((unsigned int *)t13);
    t21 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t20 | t21);
    goto LAB23;

LAB25:    xsi_set_current_line(31, ng0);
    t3 = (t0 + 1608);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB29;

LAB27:    if (*((unsigned int *)t7) == 0)
        goto LAB26;

LAB28:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB29:    t14 = (t4 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t4) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB31;

LAB30:    t22 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 1608);
    xsi_vlogvar_assign_value(t24, t4, 0, 0, 1);
    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (~(t8));
    t10 = *((unsigned int *)t5);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB35;

LAB33:    if (*((unsigned int *)t6) == 0)
        goto LAB32;

LAB34:    t7 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t7) = 1;

LAB35:    t13 = (t4 + 4);
    t14 = (t5 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (~(t16));
    *((unsigned int *)t4) = t17;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB37;

LAB36:    t22 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t22 & 1U);
    t23 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t23 & 1U);
    t15 = (t0 + 1928);
    xsi_vlogvar_assign_value(t15, t4, 0, 0, 1);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 2656);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB38;
    goto LAB1;

LAB26:    *((unsigned int *)t4) = 1;
    goto LAB29;

LAB31:    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t4) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB30;

LAB32:    *((unsigned int *)t4) = 1;
    goto LAB35;

LAB37:    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t18 | t19);
    t20 = *((unsigned int *)t13);
    t21 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t20 | t21);
    goto LAB36;

LAB38:    xsi_set_current_line(33, ng0);
    t3 = (t0 + 1608);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB42;

LAB40:    if (*((unsigned int *)t7) == 0)
        goto LAB39;

LAB41:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB42:    t14 = (t4 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t4) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB44;

LAB43:    t22 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 1608);
    xsi_vlogvar_assign_value(t24, t4, 0, 0, 1);
    xsi_set_current_line(34, ng0);
    t2 = (t0 + 2656);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB45;
    goto LAB1;

LAB39:    *((unsigned int *)t4) = 1;
    goto LAB42;

LAB44:    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t4) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB43;

LAB45:    xsi_set_current_line(34, ng0);
    t3 = (t0 + 1928);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB49;

LAB47:    if (*((unsigned int *)t7) == 0)
        goto LAB46;

LAB48:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB49:    t14 = (t4 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t4) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB51;

LAB50:    t22 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 1928);
    xsi_vlogvar_assign_value(t24, t4, 0, 0, 1);
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (~(t8));
    t10 = *((unsigned int *)t5);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB55;

LAB53:    if (*((unsigned int *)t6) == 0)
        goto LAB52;

LAB54:    t7 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t7) = 1;

LAB55:    t13 = (t4 + 4);
    t14 = (t5 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (~(t16));
    *((unsigned int *)t4) = t17;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB57;

LAB56:    t22 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t22 & 1U);
    t23 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t23 & 1U);
    t15 = (t0 + 1768);
    xsi_vlogvar_assign_value(t15, t4, 0, 0, 1);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 2656);
    xsi_process_wait(t2, 3000LL);
    *((char **)t1) = &&LAB58;
    goto LAB1;

LAB46:    *((unsigned int *)t4) = 1;
    goto LAB49;

LAB51:    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t4) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB50;

LAB52:    *((unsigned int *)t4) = 1;
    goto LAB55;

LAB57:    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t18 | t19);
    t20 = *((unsigned int *)t13);
    t21 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t20 | t21);
    goto LAB56;

LAB58:    xsi_set_current_line(36, ng0);
    t3 = (t0 + 1608);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB62;

LAB60:    if (*((unsigned int *)t7) == 0)
        goto LAB59;

LAB61:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB62:    t14 = (t4 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t4) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB64;

LAB63:    t22 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 1608);
    xsi_vlogvar_assign_value(t24, t4, 0, 0, 1);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2656);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB65;
    goto LAB1;

LAB59:    *((unsigned int *)t4) = 1;
    goto LAB62;

LAB64:    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t4) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB63;

LAB65:    xsi_set_current_line(37, ng0);
    t3 = (t0 + 1608);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB69;

LAB67:    if (*((unsigned int *)t7) == 0)
        goto LAB66;

LAB68:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB69:    t14 = (t4 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t4) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB71;

LAB70:    t22 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 1608);
    xsi_vlogvar_assign_value(t24, t4, 0, 0, 1);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 2656);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB72;
    goto LAB1;

LAB66:    *((unsigned int *)t4) = 1;
    goto LAB69;

LAB71:    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t4) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB70;

LAB72:    xsi_set_current_line(38, ng0);
    t3 = (t0 + 1608);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB76;

LAB74:    if (*((unsigned int *)t7) == 0)
        goto LAB73;

LAB75:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB76:    t14 = (t4 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t4) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB78;

LAB77:    t22 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 1608);
    xsi_vlogvar_assign_value(t24, t4, 0, 0, 1);
    goto LAB1;

LAB73:    *((unsigned int *)t4) = 1;
    goto LAB76;

LAB78:    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t4) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB77;

}


extern void work_m_00000000002672859351_3922469269_init()
{
	static char *pe[] = {(void *)Initial_23_0};
	xsi_register_didat("work_m_00000000002672859351_3922469269", "isim/tb_MUX2to1_enable_isim_beh.exe.sim/work/m_00000000002672859351_3922469269.didat");
	xsi_register_executes(pe);
}
