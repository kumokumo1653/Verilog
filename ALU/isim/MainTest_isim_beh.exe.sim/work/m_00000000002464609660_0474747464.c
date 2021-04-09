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
static const char *ng0 = "C:/Users/fjsda/Studying/FPGA/ALU/MainTest.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {29U, 0U};
static unsigned int ng4[] = {32U, 0U};
static unsigned int ng5[] = {23U, 0U};
static unsigned int ng6[] = {64U, 0U};
static unsigned int ng7[] = {80U, 0U};
static unsigned int ng8[] = {96U, 0U};
static unsigned int ng9[] = {112U, 0U};
static unsigned int ng10[] = {128U, 0U};
static unsigned int ng11[] = {144U, 0U};
static unsigned int ng12[] = {48U, 0U};



static void Initial_65_0(char *t0)
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

LAB0:    t1 = (t0 + 4448U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(65, ng0);

LAB4:    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(80, ng0);

LAB5:    xsi_set_current_line(80, ng0);

LAB6:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 4256);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB7:    xsi_set_current_line(81, ng0);
    t3 = (t0 + 1768);
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
        goto LAB11;

LAB9:    if (*((unsigned int *)t7) == 0)
        goto LAB8;

LAB10:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB11:    t14 = (t4 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t4) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB13;

LAB12:    t22 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 1768);
    xsi_vlogvar_assign_value(t24, t4, 0, 0, 1);
    goto LAB5;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB13:    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t4) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB12;

LAB14:    goto LAB1;

}

static void Initial_86_1(char *t0)
{
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;

LAB0:    t1 = (t0 + 4696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(86, ng0);

LAB4:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 4504);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t4 = (t0 + 2888);
    xsi_vlogvar_assign_value(t4, t2, 1, 0, 1);
    t5 = (t0 + 2728);
    xsi_vlogvar_assign_value(t5, t2, 2, 0, 1);
    t6 = (t0 + 2568);
    xsi_vlogvar_assign_value(t6, t2, 3, 0, 1);
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t2, 4, 0, 1);
    t8 = (t0 + 2248);
    xsi_vlogvar_assign_value(t8, t2, 5, 0, 1);
    t9 = (t0 + 2088);
    xsi_vlogvar_assign_value(t9, t2, 6, 0, 1);
    t10 = (t0 + 1928);
    xsi_vlogvar_assign_value(t10, t2, 7, 0, 1);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t12 = *((unsigned int *)t5);
    t13 = (~(t12));
    t14 = *((unsigned int *)t4);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t6 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t6) = 1;

LAB9:    t7 = (t11 + 4);
    t8 = (t4 + 4);
    t17 = *((unsigned int *)t4);
    t18 = (~(t17));
    *((unsigned int *)t11) = t18;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB11;

LAB10:    t23 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t23 & 1U);
    t24 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t24 & 1U);
    t9 = (t0 + 3208);
    xsi_vlogvar_assign_value(t9, t11, 0, 0, 1);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 4504);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB6:    *((unsigned int *)t11) = 1;
    goto LAB9;

LAB11:    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t8);
    *((unsigned int *)t11) = (t19 | t20);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t21 | t22);
    goto LAB10;

LAB12:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t12 = *((unsigned int *)t5);
    t13 = (~(t12));
    t14 = *((unsigned int *)t4);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB16;

LAB14:    if (*((unsigned int *)t5) == 0)
        goto LAB13;

LAB15:    t6 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t6) = 1;

LAB16:    t7 = (t11 + 4);
    t8 = (t4 + 4);
    t17 = *((unsigned int *)t4);
    t18 = (~(t17));
    *((unsigned int *)t11) = t18;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB18;

LAB17:    t23 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t23 & 1U);
    t24 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t24 & 1U);
    t9 = (t0 + 3208);
    xsi_vlogvar_assign_value(t9, t11, 0, 0, 1);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 4504);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB13:    *((unsigned int *)t11) = 1;
    goto LAB16;

LAB18:    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t8);
    *((unsigned int *)t11) = (t19 | t20);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t21 | t22);
    goto LAB17;

LAB19:    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t4 = (t0 + 2888);
    xsi_vlogvar_assign_value(t4, t2, 1, 0, 1);
    t5 = (t0 + 2728);
    xsi_vlogvar_assign_value(t5, t2, 2, 0, 1);
    t6 = (t0 + 2568);
    xsi_vlogvar_assign_value(t6, t2, 3, 0, 1);
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t2, 4, 0, 1);
    t8 = (t0 + 2248);
    xsi_vlogvar_assign_value(t8, t2, 5, 0, 1);
    t9 = (t0 + 2088);
    xsi_vlogvar_assign_value(t9, t2, 6, 0, 1);
    t10 = (t0 + 1928);
    xsi_vlogvar_assign_value(t10, t2, 7, 0, 1);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t12 = *((unsigned int *)t5);
    t13 = (~(t12));
    t14 = *((unsigned int *)t4);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB23;

LAB21:    if (*((unsigned int *)t5) == 0)
        goto LAB20;

LAB22:    t6 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t6) = 1;

LAB23:    t7 = (t11 + 4);
    t8 = (t4 + 4);
    t17 = *((unsigned int *)t4);
    t18 = (~(t17));
    *((unsigned int *)t11) = t18;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB25;

LAB24:    t23 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t23 & 1U);
    t24 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t24 & 1U);
    t9 = (t0 + 3208);
    xsi_vlogvar_assign_value(t9, t11, 0, 0, 1);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 4504);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB20:    *((unsigned int *)t11) = 1;
    goto LAB23;

LAB25:    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t8);
    *((unsigned int *)t11) = (t19 | t20);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t21 | t22);
    goto LAB24;

LAB26:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t12 = *((unsigned int *)t5);
    t13 = (~(t12));
    t14 = *((unsigned int *)t4);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB30;

LAB28:    if (*((unsigned int *)t5) == 0)
        goto LAB27;

LAB29:    t6 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t6) = 1;

LAB30:    t7 = (t11 + 4);
    t8 = (t4 + 4);
    t17 = *((unsigned int *)t4);
    t18 = (~(t17));
    *((unsigned int *)t11) = t18;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB32;

LAB31:    t23 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t23 & 1U);
    t24 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t24 & 1U);
    t9 = (t0 + 3208);
    xsi_vlogvar_assign_value(t9, t11, 0, 0, 1);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 4504);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB33;
    goto LAB1;

LAB27:    *((unsigned int *)t11) = 1;
    goto LAB30;

LAB32:    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t8);
    *((unsigned int *)t11) = (t19 | t20);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t21 | t22);
    goto LAB31;

LAB33:    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t4 = (t0 + 2888);
    xsi_vlogvar_assign_value(t4, t2, 1, 0, 1);
    t5 = (t0 + 2728);
    xsi_vlogvar_assign_value(t5, t2, 2, 0, 1);
    t6 = (t0 + 2568);
    xsi_vlogvar_assign_value(t6, t2, 3, 0, 1);
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t2, 4, 0, 1);
    t8 = (t0 + 2248);
    xsi_vlogvar_assign_value(t8, t2, 5, 0, 1);
    t9 = (t0 + 2088);
    xsi_vlogvar_assign_value(t9, t2, 6, 0, 1);
    t10 = (t0 + 1928);
    xsi_vlogvar_assign_value(t10, t2, 7, 0, 1);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t12 = *((unsigned int *)t5);
    t13 = (~(t12));
    t14 = *((unsigned int *)t4);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB37;

LAB35:    if (*((unsigned int *)t5) == 0)
        goto LAB34;

LAB36:    t6 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t6) = 1;

LAB37:    t7 = (t11 + 4);
    t8 = (t4 + 4);
    t17 = *((unsigned int *)t4);
    t18 = (~(t17));
    *((unsigned int *)t11) = t18;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB39;

LAB38:    t23 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t23 & 1U);
    t24 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t24 & 1U);
    t9 = (t0 + 3208);
    xsi_vlogvar_assign_value(t9, t11, 0, 0, 1);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 4504);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB40;
    goto LAB1;

LAB34:    *((unsigned int *)t11) = 1;
    goto LAB37;

LAB39:    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t8);
    *((unsigned int *)t11) = (t19 | t20);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t21 | t22);
    goto LAB38;

LAB40:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t12 = *((unsigned int *)t5);
    t13 = (~(t12));
    t14 = *((unsigned int *)t4);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB44;

LAB42:    if (*((unsigned int *)t5) == 0)
        goto LAB41;

LAB43:    t6 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t6) = 1;

LAB44:    t7 = (t11 + 4);
    t8 = (t4 + 4);
    t17 = *((unsigned int *)t4);
    t18 = (~(t17));
    *((unsigned int *)t11) = t18;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB46;

LAB45:    t23 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t23 & 1U);
    t24 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t24 & 1U);
    t9 = (t0 + 3208);
    xsi_vlogvar_assign_value(t9, t11, 0, 0, 1);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 4504);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB47;
    goto LAB1;

LAB41:    *((unsigned int *)t11) = 1;
    goto LAB44;

LAB46:    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t8);
    *((unsigned int *)t11) = (t19 | t20);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t21 | t22);
    goto LAB45;

LAB47:    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t4 = (t0 + 2888);
    xsi_vlogvar_assign_value(t4, t2, 1, 0, 1);
    t5 = (t0 + 2728);
    xsi_vlogvar_assign_value(t5, t2, 2, 0, 1);
    t6 = (t0 + 2568);
    xsi_vlogvar_assign_value(t6, t2, 3, 0, 1);
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t2, 4, 0, 1);
    t8 = (t0 + 2248);
    xsi_vlogvar_assign_value(t8, t2, 5, 0, 1);
    t9 = (t0 + 2088);
    xsi_vlogvar_assign_value(t9, t2, 6, 0, 1);
    t10 = (t0 + 1928);
    xsi_vlogvar_assign_value(t10, t2, 7, 0, 1);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t12 = *((unsigned int *)t5);
    t13 = (~(t12));
    t14 = *((unsigned int *)t4);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB51;

LAB49:    if (*((unsigned int *)t5) == 0)
        goto LAB48;

LAB50:    t6 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t6) = 1;

LAB51:    t7 = (t11 + 4);
    t8 = (t4 + 4);
    t17 = *((unsigned int *)t4);
    t18 = (~(t17));
    *((unsigned int *)t11) = t18;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB53;

LAB52:    t23 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t23 & 1U);
    t24 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t24 & 1U);
    t9 = (t0 + 3208);
    xsi_vlogvar_assign_value(t9, t11, 0, 0, 1);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 4504);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB54;
    goto LAB1;

LAB48:    *((unsigned int *)t11) = 1;
    goto LAB51;

LAB53:    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t8);
    *((unsigned int *)t11) = (t19 | t20);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t21 | t22);
    goto LAB52;

LAB54:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t12 = *((unsigned int *)t5);
    t13 = (~(t12));
    t14 = *((unsigned int *)t4);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB58;

LAB56:    if (*((unsigned int *)t5) == 0)
        goto LAB55;

LAB57:    t6 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t6) = 1;

LAB58:    t7 = (t11 + 4);
    t8 = (t4 + 4);
    t17 = *((unsigned int *)t4);
    t18 = (~(t17));
    *((unsigned int *)t11) = t18;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB60;

LAB59:    t23 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t23 & 1U);
    t24 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t24 & 1U);
    t9 = (t0 + 3208);
    xsi_vlogvar_assign_value(t9, t11, 0, 0, 1);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 4504);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB61;
    goto LAB1;

LAB55:    *((unsigned int *)t11) = 1;
    goto LAB58;

LAB60:    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t8);
    *((unsigned int *)t11) = (t19 | t20);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t21 | t22);
    goto LAB59;

LAB61:    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t4 = (t0 + 2888);
    xsi_vlogvar_assign_value(t4, t2, 1, 0, 1);
    t5 = (t0 + 2728);
    xsi_vlogvar_assign_value(t5, t2, 2, 0, 1);
    t6 = (t0 + 2568);
    xsi_vlogvar_assign_value(t6, t2, 3, 0, 1);
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t2, 4, 0, 1);
    t8 = (t0 + 2248);
    xsi_vlogvar_assign_value(t8, t2, 5, 0, 1);
    t9 = (t0 + 2088);
    xsi_vlogvar_assign_value(t9, t2, 6, 0, 1);
    t10 = (t0 + 1928);
    xsi_vlogvar_assign_value(t10, t2, 7, 0, 1);
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t12 = *((unsigned int *)t5);
    t13 = (~(t12));
    t14 = *((unsigned int *)t4);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB65;

LAB63:    if (*((unsigned int *)t5) == 0)
        goto LAB62;

LAB64:    t6 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t6) = 1;

LAB65:    t7 = (t11 + 4);
    t8 = (t4 + 4);
    t17 = *((unsigned int *)t4);
    t18 = (~(t17));
    *((unsigned int *)t11) = t18;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB67;

LAB66:    t23 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t23 & 1U);
    t24 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t24 & 1U);
    t9 = (t0 + 3208);
    xsi_vlogvar_assign_value(t9, t11, 0, 0, 1);
    xsi_set_current_line(115, ng0);
    t2 = (t0 + 4504);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB68;
    goto LAB1;

LAB62:    *((unsigned int *)t11) = 1;
    goto LAB65;

LAB67:    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t8);
    *((unsigned int *)t11) = (t19 | t20);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t21 | t22);
    goto LAB66;

LAB68:    xsi_set_current_line(116, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t12 = *((unsigned int *)t5);
    t13 = (~(t12));
    t14 = *((unsigned int *)t4);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB72;

LAB70:    if (*((unsigned int *)t5) == 0)
        goto LAB69;

LAB71:    t6 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t6) = 1;

LAB72:    t7 = (t11 + 4);
    t8 = (t4 + 4);
    t17 = *((unsigned int *)t4);
    t18 = (~(t17));
    *((unsigned int *)t11) = t18;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB74;

LAB73:    t23 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t23 & 1U);
    t24 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t24 & 1U);
    t9 = (t0 + 3208);
    xsi_vlogvar_assign_value(t9, t11, 0, 0, 1);
    xsi_set_current_line(117, ng0);
    t2 = (t0 + 4504);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB75;
    goto LAB1;

LAB69:    *((unsigned int *)t11) = 1;
    goto LAB72;

LAB74:    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t8);
    *((unsigned int *)t11) = (t19 | t20);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t21 | t22);
    goto LAB73;

LAB75:    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t4 = (t0 + 2888);
    xsi_vlogvar_assign_value(t4, t2, 1, 0, 1);
    t5 = (t0 + 2728);
    xsi_vlogvar_assign_value(t5, t2, 2, 0, 1);
    t6 = (t0 + 2568);
    xsi_vlogvar_assign_value(t6, t2, 3, 0, 1);
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t2, 4, 0, 1);
    t8 = (t0 + 2248);
    xsi_vlogvar_assign_value(t8, t2, 5, 0, 1);
    t9 = (t0 + 2088);
    xsi_vlogvar_assign_value(t9, t2, 6, 0, 1);
    t10 = (t0 + 1928);
    xsi_vlogvar_assign_value(t10, t2, 7, 0, 1);
    xsi_set_current_line(120, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t12 = *((unsigned int *)t5);
    t13 = (~(t12));
    t14 = *((unsigned int *)t4);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB79;

LAB77:    if (*((unsigned int *)t5) == 0)
        goto LAB76;

LAB78:    t6 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t6) = 1;

LAB79:    t7 = (t11 + 4);
    t8 = (t4 + 4);
    t17 = *((unsigned int *)t4);
    t18 = (~(t17));
    *((unsigned int *)t11) = t18;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB81;

LAB80:    t23 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t23 & 1U);
    t24 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t24 & 1U);
    t9 = (t0 + 3208);
    xsi_vlogvar_assign_value(t9, t11, 0, 0, 1);
    xsi_set_current_line(121, ng0);
    t2 = (t0 + 4504);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB82;
    goto LAB1;

LAB76:    *((unsigned int *)t11) = 1;
    goto LAB79;

LAB81:    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t8);
    *((unsigned int *)t11) = (t19 | t20);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t21 | t22);
    goto LAB80;

LAB82:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t12 = *((unsigned int *)t5);
    t13 = (~(t12));
    t14 = *((unsigned int *)t4);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB86;

LAB84:    if (*((unsigned int *)t5) == 0)
        goto LAB83;

LAB85:    t6 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t6) = 1;

LAB86:    t7 = (t11 + 4);
    t8 = (t4 + 4);
    t17 = *((unsigned int *)t4);
    t18 = (~(t17));
    *((unsigned int *)t11) = t18;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB88;

LAB87:    t23 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t23 & 1U);
    t24 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t24 & 1U);
    t9 = (t0 + 3208);
    xsi_vlogvar_assign_value(t9, t11, 0, 0, 1);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 4504);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB89;
    goto LAB1;

LAB83:    *((unsigned int *)t11) = 1;
    goto LAB86;

LAB88:    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t8);
    *((unsigned int *)t11) = (t19 | t20);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t21 | t22);
    goto LAB87;

LAB89:    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t4 = (t0 + 2888);
    xsi_vlogvar_assign_value(t4, t2, 1, 0, 1);
    t5 = (t0 + 2728);
    xsi_vlogvar_assign_value(t5, t2, 2, 0, 1);
    t6 = (t0 + 2568);
    xsi_vlogvar_assign_value(t6, t2, 3, 0, 1);
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t2, 4, 0, 1);
    t8 = (t0 + 2248);
    xsi_vlogvar_assign_value(t8, t2, 5, 0, 1);
    t9 = (t0 + 2088);
    xsi_vlogvar_assign_value(t9, t2, 6, 0, 1);
    t10 = (t0 + 1928);
    xsi_vlogvar_assign_value(t10, t2, 7, 0, 1);
    xsi_set_current_line(126, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t12 = *((unsigned int *)t5);
    t13 = (~(t12));
    t14 = *((unsigned int *)t4);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB93;

LAB91:    if (*((unsigned int *)t5) == 0)
        goto LAB90;

LAB92:    t6 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t6) = 1;

LAB93:    t7 = (t11 + 4);
    t8 = (t4 + 4);
    t17 = *((unsigned int *)t4);
    t18 = (~(t17));
    *((unsigned int *)t11) = t18;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB95;

LAB94:    t23 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t23 & 1U);
    t24 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t24 & 1U);
    t9 = (t0 + 3208);
    xsi_vlogvar_assign_value(t9, t11, 0, 0, 1);
    xsi_set_current_line(127, ng0);
    t2 = (t0 + 4504);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB96;
    goto LAB1;

LAB90:    *((unsigned int *)t11) = 1;
    goto LAB93;

LAB95:    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t8);
    *((unsigned int *)t11) = (t19 | t20);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t21 | t22);
    goto LAB94;

LAB96:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t12 = *((unsigned int *)t5);
    t13 = (~(t12));
    t14 = *((unsigned int *)t4);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB100;

LAB98:    if (*((unsigned int *)t5) == 0)
        goto LAB97;

LAB99:    t6 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t6) = 1;

LAB100:    t7 = (t11 + 4);
    t8 = (t4 + 4);
    t17 = *((unsigned int *)t4);
    t18 = (~(t17));
    *((unsigned int *)t11) = t18;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB102;

LAB101:    t23 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t23 & 1U);
    t24 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t24 & 1U);
    t9 = (t0 + 3208);
    xsi_vlogvar_assign_value(t9, t11, 0, 0, 1);
    xsi_set_current_line(129, ng0);
    t2 = (t0 + 4504);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB103;
    goto LAB1;

LAB97:    *((unsigned int *)t11) = 1;
    goto LAB100;

LAB102:    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t8);
    *((unsigned int *)t11) = (t19 | t20);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t21 | t22);
    goto LAB101;

LAB103:    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t4 = (t0 + 2888);
    xsi_vlogvar_assign_value(t4, t2, 1, 0, 1);
    t5 = (t0 + 2728);
    xsi_vlogvar_assign_value(t5, t2, 2, 0, 1);
    t6 = (t0 + 2568);
    xsi_vlogvar_assign_value(t6, t2, 3, 0, 1);
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t2, 4, 0, 1);
    t8 = (t0 + 2248);
    xsi_vlogvar_assign_value(t8, t2, 5, 0, 1);
    t9 = (t0 + 2088);
    xsi_vlogvar_assign_value(t9, t2, 6, 0, 1);
    t10 = (t0 + 1928);
    xsi_vlogvar_assign_value(t10, t2, 7, 0, 1);
    xsi_set_current_line(132, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t12 = *((unsigned int *)t5);
    t13 = (~(t12));
    t14 = *((unsigned int *)t4);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB107;

LAB105:    if (*((unsigned int *)t5) == 0)
        goto LAB104;

LAB106:    t6 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t6) = 1;

LAB107:    t7 = (t11 + 4);
    t8 = (t4 + 4);
    t17 = *((unsigned int *)t4);
    t18 = (~(t17));
    *((unsigned int *)t11) = t18;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB109;

LAB108:    t23 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t23 & 1U);
    t24 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t24 & 1U);
    t9 = (t0 + 3208);
    xsi_vlogvar_assign_value(t9, t11, 0, 0, 1);
    xsi_set_current_line(133, ng0);
    t2 = (t0 + 4504);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB110;
    goto LAB1;

LAB104:    *((unsigned int *)t11) = 1;
    goto LAB107;

LAB109:    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t8);
    *((unsigned int *)t11) = (t19 | t20);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t21 | t22);
    goto LAB108;

LAB110:    xsi_set_current_line(134, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t12 = *((unsigned int *)t5);
    t13 = (~(t12));
    t14 = *((unsigned int *)t4);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB114;

LAB112:    if (*((unsigned int *)t5) == 0)
        goto LAB111;

LAB113:    t6 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t6) = 1;

LAB114:    t7 = (t11 + 4);
    t8 = (t4 + 4);
    t17 = *((unsigned int *)t4);
    t18 = (~(t17));
    *((unsigned int *)t11) = t18;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB116;

LAB115:    t23 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t23 & 1U);
    t24 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t24 & 1U);
    t9 = (t0 + 3208);
    xsi_vlogvar_assign_value(t9, t11, 0, 0, 1);
    xsi_set_current_line(135, ng0);
    t2 = (t0 + 4504);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB117;
    goto LAB1;

LAB111:    *((unsigned int *)t11) = 1;
    goto LAB114;

LAB116:    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t8);
    *((unsigned int *)t11) = (t19 | t20);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t21 | t22);
    goto LAB115;

LAB117:    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t4 = (t0 + 2888);
    xsi_vlogvar_assign_value(t4, t2, 1, 0, 1);
    t5 = (t0 + 2728);
    xsi_vlogvar_assign_value(t5, t2, 2, 0, 1);
    t6 = (t0 + 2568);
    xsi_vlogvar_assign_value(t6, t2, 3, 0, 1);
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t2, 4, 0, 1);
    t8 = (t0 + 2248);
    xsi_vlogvar_assign_value(t8, t2, 5, 0, 1);
    t9 = (t0 + 2088);
    xsi_vlogvar_assign_value(t9, t2, 6, 0, 1);
    t10 = (t0 + 1928);
    xsi_vlogvar_assign_value(t10, t2, 7, 0, 1);
    xsi_set_current_line(138, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t12 = *((unsigned int *)t5);
    t13 = (~(t12));
    t14 = *((unsigned int *)t4);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB121;

LAB119:    if (*((unsigned int *)t5) == 0)
        goto LAB118;

LAB120:    t6 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t6) = 1;

LAB121:    t7 = (t11 + 4);
    t8 = (t4 + 4);
    t17 = *((unsigned int *)t4);
    t18 = (~(t17));
    *((unsigned int *)t11) = t18;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB123;

LAB122:    t23 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t23 & 1U);
    t24 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t24 & 1U);
    t9 = (t0 + 3208);
    xsi_vlogvar_assign_value(t9, t11, 0, 0, 1);
    xsi_set_current_line(139, ng0);
    t2 = (t0 + 4504);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB124;
    goto LAB1;

LAB118:    *((unsigned int *)t11) = 1;
    goto LAB121;

LAB123:    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t8);
    *((unsigned int *)t11) = (t19 | t20);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t21 | t22);
    goto LAB122;

LAB124:    xsi_set_current_line(140, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t12 = *((unsigned int *)t5);
    t13 = (~(t12));
    t14 = *((unsigned int *)t4);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB128;

LAB126:    if (*((unsigned int *)t5) == 0)
        goto LAB125;

LAB127:    t6 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t6) = 1;

LAB128:    t7 = (t11 + 4);
    t8 = (t4 + 4);
    t17 = *((unsigned int *)t4);
    t18 = (~(t17));
    *((unsigned int *)t11) = t18;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB130;

LAB129:    t23 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t23 & 1U);
    t24 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t24 & 1U);
    t9 = (t0 + 3208);
    xsi_vlogvar_assign_value(t9, t11, 0, 0, 1);
    xsi_set_current_line(141, ng0);
    t2 = (t0 + 4504);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB131;
    goto LAB1;

LAB125:    *((unsigned int *)t11) = 1;
    goto LAB128;

LAB130:    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t8);
    *((unsigned int *)t11) = (t19 | t20);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t21 | t22);
    goto LAB129;

LAB131:    xsi_set_current_line(143, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t4 = (t0 + 2888);
    xsi_vlogvar_assign_value(t4, t2, 1, 0, 1);
    t5 = (t0 + 2728);
    xsi_vlogvar_assign_value(t5, t2, 2, 0, 1);
    t6 = (t0 + 2568);
    xsi_vlogvar_assign_value(t6, t2, 3, 0, 1);
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t2, 4, 0, 1);
    t8 = (t0 + 2248);
    xsi_vlogvar_assign_value(t8, t2, 5, 0, 1);
    t9 = (t0 + 2088);
    xsi_vlogvar_assign_value(t9, t2, 6, 0, 1);
    t10 = (t0 + 1928);
    xsi_vlogvar_assign_value(t10, t2, 7, 0, 1);
    xsi_set_current_line(144, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t12 = *((unsigned int *)t5);
    t13 = (~(t12));
    t14 = *((unsigned int *)t4);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB135;

LAB133:    if (*((unsigned int *)t5) == 0)
        goto LAB132;

LAB134:    t6 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t6) = 1;

LAB135:    t7 = (t11 + 4);
    t8 = (t4 + 4);
    t17 = *((unsigned int *)t4);
    t18 = (~(t17));
    *((unsigned int *)t11) = t18;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB137;

LAB136:    t23 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t23 & 1U);
    t24 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t24 & 1U);
    t9 = (t0 + 3208);
    xsi_vlogvar_assign_value(t9, t11, 0, 0, 1);
    xsi_set_current_line(145, ng0);
    t2 = (t0 + 4504);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB138;
    goto LAB1;

LAB132:    *((unsigned int *)t11) = 1;
    goto LAB135;

LAB137:    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t8);
    *((unsigned int *)t11) = (t19 | t20);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t21 | t22);
    goto LAB136;

LAB138:    xsi_set_current_line(146, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t12 = *((unsigned int *)t5);
    t13 = (~(t12));
    t14 = *((unsigned int *)t4);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB142;

LAB140:    if (*((unsigned int *)t5) == 0)
        goto LAB139;

LAB141:    t6 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t6) = 1;

LAB142:    t7 = (t11 + 4);
    t8 = (t4 + 4);
    t17 = *((unsigned int *)t4);
    t18 = (~(t17));
    *((unsigned int *)t11) = t18;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB144;

LAB143:    t23 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t23 & 1U);
    t24 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t24 & 1U);
    t9 = (t0 + 3208);
    xsi_vlogvar_assign_value(t9, t11, 0, 0, 1);
    xsi_set_current_line(147, ng0);
    t2 = (t0 + 4504);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB145;
    goto LAB1;

LAB139:    *((unsigned int *)t11) = 1;
    goto LAB142;

LAB144:    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t8);
    *((unsigned int *)t11) = (t19 | t20);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t21 | t22);
    goto LAB143;

LAB145:    goto LAB1;

}


extern void work_m_00000000002464609660_0474747464_init()
{
	static char *pe[] = {(void *)Initial_65_0,(void *)Initial_86_1};
	xsi_register_didat("work_m_00000000002464609660_0474747464", "isim/MainTest_isim_beh.exe.sim/work/m_00000000002464609660_0474747464.didat");
	xsi_register_executes(pe);
}
