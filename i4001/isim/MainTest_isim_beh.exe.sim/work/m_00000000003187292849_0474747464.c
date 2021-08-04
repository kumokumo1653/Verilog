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
static const char *ng0 = "C:/Users/kumomomo/Studying/5J/Verilog/i4001/MainTest.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {127U, 0U};



static void Initial_57_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(57, ng0);

LAB2:    xsi_set_current_line(59, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(60, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2408);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 16);
    xsi_set_current_line(61, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2568);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(62, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2728);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(63, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_72_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
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

LAB0:    t1 = (t0 + 4216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(72, ng0);

LAB4:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 4024);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(73, ng0);
    t4 = (t0 + 2248);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
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

LAB8:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB9:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB11;

LAB10:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 2248);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB6:    *((unsigned int *)t3) = 1;
    goto LAB9;

LAB11:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB10;

}

static void Always_76_2(char *t0)
{
    char t6[8];
    char t14[8];
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
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t1 = (t0 + 4464U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(76, ng0);

LAB4:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(81, ng0);

LAB23:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 4272);
    xsi_process_wait(t2, 1000000LL);
    *((char **)t1) = &&LAB24;

LAB1:    return;
LAB5:    xsi_set_current_line(77, ng0);

LAB8:    xsi_set_current_line(78, ng0);
    t13 = (t0 + 4272);
    xsi_process_wait(t13, 100000000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB7:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t13 = (t5 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t5);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t7);
    t12 = *((unsigned int *)t13);
    t19 = (t11 ^ t12);
    t20 = (t10 | t19);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t13);
    t23 = (t21 | t22);
    t27 = (~(t23));
    t28 = (t20 & t27);
    if (t28 != 0)
        goto LAB29;

LAB26:    if (t23 != 0)
        goto LAB28;

LAB27:    *((unsigned int *)t6) = 1;

LAB29:    t16 = (t6 + 4);
    t29 = *((unsigned int *)t16);
    t30 = (~(t29));
    t31 = *((unsigned int *)t6);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB30;

LAB31:
LAB32:    goto LAB2;

LAB9:    xsi_set_current_line(78, ng0);
    t15 = (t0 + 2568);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memset(t14, 0, 8);
    t18 = (t17 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (~(t19));
    t21 = *((unsigned int *)t17);
    t22 = (t21 & t20);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB13;

LAB11:    if (*((unsigned int *)t18) == 0)
        goto LAB10;

LAB12:    t24 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t24) = 1;

LAB13:    t25 = (t14 + 4);
    t26 = (t17 + 4);
    t27 = *((unsigned int *)t17);
    t28 = (~(t27));
    *((unsigned int *)t14) = t28;
    *((unsigned int *)t25) = 0;
    if (*((unsigned int *)t26) != 0)
        goto LAB15;

LAB14:    t33 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t33 & 1U);
    t34 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t34 & 1U);
    t35 = (t0 + 2568);
    xsi_vlogvar_assign_value(t35, t14, 0, 0, 1);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 16, t4, 16, t5, 16);
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 16);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 4272);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB16;
    goto LAB1;

LAB10:    *((unsigned int *)t14) = 1;
    goto LAB13;

LAB15:    t29 = *((unsigned int *)t14);
    t30 = *((unsigned int *)t26);
    *((unsigned int *)t14) = (t29 | t30);
    t31 = *((unsigned int *)t25);
    t32 = *((unsigned int *)t26);
    *((unsigned int *)t25) = (t31 | t32);
    goto LAB14;

LAB16:    xsi_set_current_line(80, ng0);
    t3 = (t0 + 2568);
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
        goto LAB20;

LAB18:    if (*((unsigned int *)t7) == 0)
        goto LAB17;

LAB19:    t13 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t13) = 1;

LAB20:    t15 = (t6 + 4);
    t16 = (t5 + 4);
    t19 = *((unsigned int *)t5);
    t20 = (~(t19));
    *((unsigned int *)t6) = t20;
    *((unsigned int *)t15) = 0;
    if (*((unsigned int *)t16) != 0)
        goto LAB22;

LAB21:    t28 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t28 & 1U);
    t29 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t29 & 1U);
    t17 = (t0 + 2568);
    xsi_vlogvar_assign_value(t17, t6, 0, 0, 1);
    goto LAB7;

LAB17:    *((unsigned int *)t6) = 1;
    goto LAB20;

LAB22:    t21 = *((unsigned int *)t6);
    t22 = *((unsigned int *)t16);
    *((unsigned int *)t6) = (t21 | t22);
    t23 = *((unsigned int *)t15);
    t27 = *((unsigned int *)t16);
    *((unsigned int *)t15) = (t23 | t27);
    goto LAB21;

LAB24:    xsi_set_current_line(82, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 4272);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB25:    xsi_set_current_line(83, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB7;

LAB28:    t15 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB29;

LAB30:    xsi_set_current_line(85, ng0);

LAB33:    xsi_set_current_line(86, ng0);
    t17 = ((char*)((ng4)));
    t18 = (t0 + 3048);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 32);
    goto LAB32;

}


extern void work_m_00000000003187292849_0474747464_init()
{
	static char *pe[] = {(void *)Initial_57_0,(void *)Always_72_1,(void *)Always_76_2};
	xsi_register_didat("work_m_00000000003187292849_0474747464", "isim/MainTest_isim_beh.exe.sim/work/m_00000000003187292849_0474747464.didat");
	xsi_register_executes(pe);
}
