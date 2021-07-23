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
static const char *ng0 = "C:/Users/ohike/Studying/Verilog/i4001/segment7.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {4U, 0U};
static unsigned int ng5[] = {8U, 0U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {3U, 3U};
static int ng8[] = {0, 0};
static unsigned int ng9[] = {192U, 0U};
static int ng10[] = {1, 0};
static unsigned int ng11[] = {249U, 0U};
static int ng12[] = {2, 0};
static unsigned int ng13[] = {164U, 0U};
static int ng14[] = {3, 0};
static unsigned int ng15[] = {176U, 0U};
static int ng16[] = {4, 0};
static unsigned int ng17[] = {153U, 0U};
static int ng18[] = {5, 0};
static unsigned int ng19[] = {146U, 0U};
static int ng20[] = {6, 0};
static unsigned int ng21[] = {130U, 0U};
static int ng22[] = {7, 0};
static unsigned int ng23[] = {248U, 0U};
static int ng24[] = {8, 0};
static unsigned int ng25[] = {128U, 0U};
static int ng26[] = {9, 0};
static unsigned int ng27[] = {144U, 0U};
static int ng28[] = {10, 0};
static unsigned int ng29[] = {136U, 0U};
static int ng30[] = {11, 0};
static unsigned int ng31[] = {131U, 0U};
static int ng32[] = {12, 0};
static unsigned int ng33[] = {198U, 0U};
static int ng34[] = {13, 0};
static unsigned int ng35[] = {161U, 0U};
static int ng36[] = {14, 0};
static unsigned int ng37[] = {134U, 0U};
static int ng38[] = {15, 0};
static unsigned int ng39[] = {142U, 0U};
static unsigned int ng40[] = {255U, 0U};



static int sp_selector(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;

LAB0:    t0 = 1;
    xsi_set_current_line(85, ng0);

LAB2:    xsi_set_current_line(86, ng0);
    t3 = (t1 + 4232);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);

LAB3:    t6 = ((char*)((ng1)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t6, 4);
    if (t7 == 1)
        goto LAB4;

LAB5:    t3 = ((char*)((ng3)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB6;

LAB7:    t3 = ((char*)((ng4)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB8;

LAB9:    t3 = ((char*)((ng5)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB10;

LAB11:
LAB13:
LAB12:    xsi_set_current_line(91, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t1 + 4072);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);

LAB14:    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(87, ng0);
    t8 = ((char*)((ng2)));
    t9 = (t1 + 4072);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 2);
    goto LAB14;

LAB6:    xsi_set_current_line(88, ng0);
    t4 = ((char*)((ng1)));
    t6 = (t1 + 4072);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 2);
    goto LAB14;

LAB8:    xsi_set_current_line(89, ng0);
    t4 = ((char*)((ng3)));
    t6 = (t1 + 4072);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 2);
    goto LAB14;

LAB10:    xsi_set_current_line(90, ng0);
    t4 = ((char*)((ng6)));
    t6 = (t1 + 4072);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 2);
    goto LAB14;

}

static int sp_decode(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;

LAB0:    t0 = 1;
    xsi_set_current_line(98, ng0);

LAB2:    xsi_set_current_line(99, ng0);
    t3 = (t1 + 4552);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);

LAB3:    t6 = ((char*)((ng8)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t6, 32);
    if (t7 == 1)
        goto LAB4;

LAB5:    t3 = ((char*)((ng10)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 32);
    if (t7 == 1)
        goto LAB6;

LAB7:    t3 = ((char*)((ng12)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 32);
    if (t7 == 1)
        goto LAB8;

LAB9:    t3 = ((char*)((ng14)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 32);
    if (t7 == 1)
        goto LAB10;

LAB11:    t3 = ((char*)((ng16)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 32);
    if (t7 == 1)
        goto LAB12;

LAB13:    t3 = ((char*)((ng18)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 32);
    if (t7 == 1)
        goto LAB14;

LAB15:    t3 = ((char*)((ng20)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 32);
    if (t7 == 1)
        goto LAB16;

LAB17:    t3 = ((char*)((ng22)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 32);
    if (t7 == 1)
        goto LAB18;

LAB19:    t3 = ((char*)((ng24)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 32);
    if (t7 == 1)
        goto LAB20;

LAB21:    t3 = ((char*)((ng26)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 32);
    if (t7 == 1)
        goto LAB22;

LAB23:    t3 = ((char*)((ng28)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 32);
    if (t7 == 1)
        goto LAB24;

LAB25:    t3 = ((char*)((ng30)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 32);
    if (t7 == 1)
        goto LAB26;

LAB27:    t3 = ((char*)((ng32)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 32);
    if (t7 == 1)
        goto LAB28;

LAB29:    t3 = ((char*)((ng34)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 32);
    if (t7 == 1)
        goto LAB30;

LAB31:    t3 = ((char*)((ng36)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 32);
    if (t7 == 1)
        goto LAB32;

LAB33:    t3 = ((char*)((ng38)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 32);
    if (t7 == 1)
        goto LAB34;

LAB35:
LAB37:
LAB36:    xsi_set_current_line(116, ng0);
    t3 = ((char*)((ng40)));
    t4 = (t1 + 4392);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);

LAB38:    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(100, ng0);
    t8 = ((char*)((ng9)));
    t9 = (t1 + 4392);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 8);
    goto LAB38;

LAB6:    xsi_set_current_line(101, ng0);
    t4 = ((char*)((ng11)));
    t6 = (t1 + 4392);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB38;

LAB8:    xsi_set_current_line(102, ng0);
    t4 = ((char*)((ng13)));
    t6 = (t1 + 4392);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB38;

LAB10:    xsi_set_current_line(103, ng0);
    t4 = ((char*)((ng15)));
    t6 = (t1 + 4392);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB38;

LAB12:    xsi_set_current_line(104, ng0);
    t4 = ((char*)((ng17)));
    t6 = (t1 + 4392);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB38;

LAB14:    xsi_set_current_line(105, ng0);
    t4 = ((char*)((ng19)));
    t6 = (t1 + 4392);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB38;

LAB16:    xsi_set_current_line(106, ng0);
    t4 = ((char*)((ng21)));
    t6 = (t1 + 4392);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB38;

LAB18:    xsi_set_current_line(107, ng0);
    t4 = ((char*)((ng23)));
    t6 = (t1 + 4392);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB38;

LAB20:    xsi_set_current_line(108, ng0);
    t4 = ((char*)((ng25)));
    t6 = (t1 + 4392);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB38;

LAB22:    xsi_set_current_line(109, ng0);
    t4 = ((char*)((ng27)));
    t6 = (t1 + 4392);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB38;

LAB24:    xsi_set_current_line(110, ng0);
    t4 = ((char*)((ng29)));
    t6 = (t1 + 4392);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB38;

LAB26:    xsi_set_current_line(111, ng0);
    t4 = ((char*)((ng31)));
    t6 = (t1 + 4392);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB38;

LAB28:    xsi_set_current_line(112, ng0);
    t4 = ((char*)((ng33)));
    t6 = (t1 + 4392);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB38;

LAB30:    xsi_set_current_line(113, ng0);
    t4 = ((char*)((ng35)));
    t6 = (t1 + 4392);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB38;

LAB32:    xsi_set_current_line(114, ng0);
    t4 = ((char*)((ng37)));
    t6 = (t1 + 4392);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB38;

LAB34:    xsi_set_current_line(115, ng0);
    t4 = ((char*)((ng39)));
    t6 = (t1 + 4392);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB38;

}

static void Initial_37_0(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    int t14;
    char *t15;
    unsigned int t16;
    int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    int t21;
    int t22;

LAB0:    xsi_set_current_line(37, ng0);

LAB2:    xsi_set_current_line(38, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 3592);
    t5 = (t0 + 3592);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3592);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng8)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB3;

LAB4:    xsi_set_current_line(39, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 3592);
    t5 = (t0 + 3592);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3592);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng10)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB5;

LAB6:    xsi_set_current_line(40, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 3592);
    t5 = (t0 + 3592);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3592);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng12)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(41, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 3592);
    t5 = (t0 + 3592);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3592);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng14)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB9;

LAB10:
LAB1:    return;
LAB3:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB4;

LAB5:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB6;

LAB7:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB8;

LAB9:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB10;

}

static void Always_44_1(char *t0)
{
    char t21[8];
    char t26[8];
    char t27[8];
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
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    int t37;
    char *t38;
    unsigned int t39;
    int t40;
    int t41;
    unsigned int t42;
    unsigned int t43;
    int t44;
    int t45;

LAB0:    t1 = (t0 + 5720U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 7280);
    *((int *)t2) = 1;
    t3 = (t0 + 5752);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(44, ng0);

LAB5:    xsi_set_current_line(45, ng0);
    t4 = (t0 + 2232U);
    t5 = *((char **)t4);
    t4 = (t0 + 5528);
    t6 = (t0 + 1280);
    t7 = xsi_create_subprogram_invocation(t4, 0, t0, t6, 0, 0);
    t8 = (t0 + 4552);
    xsi_vlogvar_assign_value(t8, t5, 0, 0, 4);

LAB6:    t9 = (t0 + 5624);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);
    if (t17 != 0)
        goto LAB8;

LAB7:    t10 = (t0 + 5624);
    t18 = *((char **)t10);
    t10 = (t0 + 4392);
    t19 = (t10 + 56U);
    t20 = *((char **)t19);
    memcpy(t21, t20, 8);
    t22 = (t0 + 1280);
    t23 = (t0 + 5528);
    t24 = 0;
    xsi_delete_subprogram_invocation(t22, t18, t0, t23, t24);
    t25 = (t0 + 3592);
    t28 = (t0 + 3592);
    t29 = (t28 + 72U);
    t30 = *((char **)t29);
    t31 = (t0 + 3592);
    t32 = (t31 + 64U);
    t33 = *((char **)t32);
    t34 = ((char*)((ng8)));
    xsi_vlog_generic_convert_array_indices(t26, t27, t30, t33, 2, 1, t34, 32, 1);
    t35 = (t26 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (!(t36));
    t38 = (t27 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (!(t39));
    t41 = (t37 && t40);
    if (t41 == 1)
        goto LAB9;

LAB10:    goto LAB2;

LAB8:    t9 = (t0 + 5720U);
    *((char **)t9) = &&LAB6;
    goto LAB1;

LAB9:    t42 = *((unsigned int *)t26);
    t43 = *((unsigned int *)t27);
    t44 = (t42 - t43);
    t45 = (t44 + 1);
    xsi_vlogvar_wait_assign_value(t25, t21, 0, *((unsigned int *)t27), t45, 0LL);
    goto LAB10;

}

static void Always_47_2(char *t0)
{
    char t21[8];
    char t26[8];
    char t27[8];
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
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    int t37;
    char *t38;
    unsigned int t39;
    int t40;
    int t41;
    unsigned int t42;
    unsigned int t43;
    int t44;
    int t45;

LAB0:    t1 = (t0 + 5968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 7296);
    *((int *)t2) = 1;
    t3 = (t0 + 6000);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(47, ng0);

LAB5:    xsi_set_current_line(48, ng0);
    t4 = (t0 + 2392U);
    t5 = *((char **)t4);
    t4 = (t0 + 5776);
    t6 = (t0 + 1280);
    t7 = xsi_create_subprogram_invocation(t4, 0, t0, t6, 0, 0);
    t8 = (t0 + 4552);
    xsi_vlogvar_assign_value(t8, t5, 0, 0, 4);

LAB6:    t9 = (t0 + 5872);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);
    if (t17 != 0)
        goto LAB8;

LAB7:    t10 = (t0 + 5872);
    t18 = *((char **)t10);
    t10 = (t0 + 4392);
    t19 = (t10 + 56U);
    t20 = *((char **)t19);
    memcpy(t21, t20, 8);
    t22 = (t0 + 1280);
    t23 = (t0 + 5776);
    t24 = 0;
    xsi_delete_subprogram_invocation(t22, t18, t0, t23, t24);
    t25 = (t0 + 3592);
    t28 = (t0 + 3592);
    t29 = (t28 + 72U);
    t30 = *((char **)t29);
    t31 = (t0 + 3592);
    t32 = (t31 + 64U);
    t33 = *((char **)t32);
    t34 = ((char*)((ng10)));
    xsi_vlog_generic_convert_array_indices(t26, t27, t30, t33, 2, 1, t34, 32, 1);
    t35 = (t26 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (!(t36));
    t38 = (t27 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (!(t39));
    t41 = (t37 && t40);
    if (t41 == 1)
        goto LAB9;

LAB10:    goto LAB2;

LAB8:    t9 = (t0 + 5968U);
    *((char **)t9) = &&LAB6;
    goto LAB1;

LAB9:    t42 = *((unsigned int *)t26);
    t43 = *((unsigned int *)t27);
    t44 = (t42 - t43);
    t45 = (t44 + 1);
    xsi_vlogvar_wait_assign_value(t25, t21, 0, *((unsigned int *)t27), t45, 0LL);
    goto LAB10;

}

static void Always_50_3(char *t0)
{
    char t21[8];
    char t26[8];
    char t27[8];
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
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    int t37;
    char *t38;
    unsigned int t39;
    int t40;
    int t41;
    unsigned int t42;
    unsigned int t43;
    int t44;
    int t45;

LAB0:    t1 = (t0 + 6216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 7312);
    *((int *)t2) = 1;
    t3 = (t0 + 6248);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(50, ng0);

LAB5:    xsi_set_current_line(51, ng0);
    t4 = (t0 + 2552U);
    t5 = *((char **)t4);
    t4 = (t0 + 6024);
    t6 = (t0 + 1280);
    t7 = xsi_create_subprogram_invocation(t4, 0, t0, t6, 0, 0);
    t8 = (t0 + 4552);
    xsi_vlogvar_assign_value(t8, t5, 0, 0, 4);

LAB6:    t9 = (t0 + 6120);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);
    if (t17 != 0)
        goto LAB8;

LAB7:    t10 = (t0 + 6120);
    t18 = *((char **)t10);
    t10 = (t0 + 4392);
    t19 = (t10 + 56U);
    t20 = *((char **)t19);
    memcpy(t21, t20, 8);
    t22 = (t0 + 1280);
    t23 = (t0 + 6024);
    t24 = 0;
    xsi_delete_subprogram_invocation(t22, t18, t0, t23, t24);
    t25 = (t0 + 3592);
    t28 = (t0 + 3592);
    t29 = (t28 + 72U);
    t30 = *((char **)t29);
    t31 = (t0 + 3592);
    t32 = (t31 + 64U);
    t33 = *((char **)t32);
    t34 = ((char*)((ng12)));
    xsi_vlog_generic_convert_array_indices(t26, t27, t30, t33, 2, 1, t34, 32, 1);
    t35 = (t26 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (!(t36));
    t38 = (t27 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (!(t39));
    t41 = (t37 && t40);
    if (t41 == 1)
        goto LAB9;

LAB10:    goto LAB2;

LAB8:    t9 = (t0 + 6216U);
    *((char **)t9) = &&LAB6;
    goto LAB1;

LAB9:    t42 = *((unsigned int *)t26);
    t43 = *((unsigned int *)t27);
    t44 = (t42 - t43);
    t45 = (t44 + 1);
    xsi_vlogvar_wait_assign_value(t25, t21, 0, *((unsigned int *)t27), t45, 0LL);
    goto LAB10;

}

static void Always_53_4(char *t0)
{
    char t21[8];
    char t26[8];
    char t27[8];
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
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    int t37;
    char *t38;
    unsigned int t39;
    int t40;
    int t41;
    unsigned int t42;
    unsigned int t43;
    int t44;
    int t45;

LAB0:    t1 = (t0 + 6464U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 7328);
    *((int *)t2) = 1;
    t3 = (t0 + 6496);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(53, ng0);

LAB5:    xsi_set_current_line(54, ng0);
    t4 = (t0 + 2712U);
    t5 = *((char **)t4);
    t4 = (t0 + 6272);
    t6 = (t0 + 1280);
    t7 = xsi_create_subprogram_invocation(t4, 0, t0, t6, 0, 0);
    t8 = (t0 + 4552);
    xsi_vlogvar_assign_value(t8, t5, 0, 0, 4);

LAB6:    t9 = (t0 + 6368);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);
    if (t17 != 0)
        goto LAB8;

LAB7:    t10 = (t0 + 6368);
    t18 = *((char **)t10);
    t10 = (t0 + 4392);
    t19 = (t10 + 56U);
    t20 = *((char **)t19);
    memcpy(t21, t20, 8);
    t22 = (t0 + 1280);
    t23 = (t0 + 6272);
    t24 = 0;
    xsi_delete_subprogram_invocation(t22, t18, t0, t23, t24);
    t25 = (t0 + 3592);
    t28 = (t0 + 3592);
    t29 = (t28 + 72U);
    t30 = *((char **)t29);
    t31 = (t0 + 3592);
    t32 = (t31 + 64U);
    t33 = *((char **)t32);
    t34 = ((char*)((ng14)));
    xsi_vlog_generic_convert_array_indices(t26, t27, t30, t33, 2, 1, t34, 32, 1);
    t35 = (t26 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (!(t36));
    t38 = (t27 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (!(t39));
    t41 = (t37 && t40);
    if (t41 == 1)
        goto LAB9;

LAB10:    goto LAB2;

LAB8:    t9 = (t0 + 6464U);
    *((char **)t9) = &&LAB6;
    goto LAB1;

LAB9:    t42 = *((unsigned int *)t26);
    t43 = *((unsigned int *)t27);
    t44 = (t42 - t43);
    t45 = (t44 + 1);
    xsi_vlogvar_wait_assign_value(t25, t21, 0, *((unsigned int *)t27), t45, 0LL);
    goto LAB10;

}

static void Always_57_5(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 6712U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 7344);
    *((int *)t2) = 1;
    t3 = (t0 + 6744);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(57, ng0);

LAB5:    xsi_set_current_line(58, ng0);
    t5 = (t0 + 3912);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t8) == 0)
        goto LAB6;

LAB8:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;

LAB9:    t15 = (t4 + 4);
    t16 = (t7 + 4);
    t17 = *((unsigned int *)t7);
    t18 = (~(t17));
    *((unsigned int *)t4) = t18;
    *((unsigned int *)t15) = 0;
    if (*((unsigned int *)t16) != 0)
        goto LAB11;

LAB10:    t23 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t23 & 1U);
    t24 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t24 & 1U);
    t25 = (t0 + 3912);
    xsi_vlogvar_wait_assign_value(t25, t4, 0, 0, 1, 0LL);
    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t16);
    *((unsigned int *)t4) = (t19 | t20);
    t21 = *((unsigned int *)t15);
    t22 = *((unsigned int *)t16);
    *((unsigned int *)t15) = (t21 | t22);
    goto LAB10;

}

static void Always_61_6(char *t0)
{
    char t8[8];
    char t22[8];
    char t36[8];
    char t52[8];
    char t60[8];
    char t102[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    int t84;
    int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t99;
    char *t100;
    char *t101;
    char *t103;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    char *t117;
    char *t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    char *t124;
    char *t125;

LAB0:    t1 = (t0 + 6960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 7360);
    *((int *)t2) = 1;
    t3 = (t0 + 6992);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(61, ng0);

LAB5:    xsi_set_current_line(62, ng0);
    t4 = (t0 + 3432);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 3752);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 4, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3912);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng10)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t6);
    t17 = *((unsigned int *)t7);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    memset(t22, 0, 8);
    t23 = (t8 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t8);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t23) != 0)
        goto LAB12;

LAB13:    t30 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB14;

LAB15:    memcpy(t60, t22, 8);

LAB16:    t92 = (t60 + 4);
    t93 = *((unsigned int *)t92);
    t94 = (~(t93));
    t95 = *((unsigned int *)t60);
    t96 = (t95 & t94);
    t97 = (t96 != 0);
    if (t97 > 0)
        goto LAB28;

LAB29:
LAB30:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 3752);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3432);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    t21 = (t4 + 4);
    t23 = (t7 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t21);
    t13 = *((unsigned int *)t23);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t21);
    t17 = *((unsigned int *)t23);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB44;

LAB41:    if (t18 != 0)
        goto LAB43;

LAB42:    *((unsigned int *)t8) = 1;

LAB44:    t30 = (t8 + 4);
    t24 = *((unsigned int *)t30);
    t25 = (~(t24));
    t26 = *((unsigned int *)t8);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB45;

LAB46:    xsi_set_current_line(74, ng0);

LAB49:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 3592);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3592);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t21 = (t0 + 3592);
    t23 = (t21 + 64U);
    t29 = *((char **)t23);
    t30 = (t0 + 3432);
    t34 = (t30 + 56U);
    t35 = *((char **)t34);
    t37 = (t0 + 6768);
    t38 = (t0 + 848);
    t51 = xsi_create_subprogram_invocation(t37, 0, t0, t38, 0, 0);
    t53 = (t0 + 4232);
    xsi_vlogvar_assign_value(t53, t35, 0, 0, 4);

LAB50:    t59 = (t0 + 6864);
    t64 = *((char **)t59);
    t65 = (t64 + 80U);
    t66 = *((char **)t65);
    t74 = (t66 + 272U);
    t75 = *((char **)t74);
    t92 = (t75 + 0U);
    t98 = *((char **)t92);
    t84 = ((int  (*)(char *, char *))t98)(t0, t64);
    if (t84 != 0)
        goto LAB52;

LAB51:    t64 = (t0 + 6864);
    t99 = *((char **)t64);
    t64 = (t0 + 4072);
    t100 = (t64 + 56U);
    t101 = *((char **)t100);
    memcpy(t22, t101, 8);
    t103 = (t0 + 848);
    t104 = (t0 + 6768);
    t117 = 0;
    xsi_delete_subprogram_invocation(t103, t99, t0, t104, t117);
    xsi_vlog_generic_get_array_select_value(t8, 8, t4, t7, t29, 2, 1, t22, 2, 2);
    t118 = (t0 + 3272);
    xsi_vlogvar_wait_assign_value(t118, t8, 0, 0, 8, 0LL);

LAB47:    goto LAB2;

LAB8:    t21 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t22) = 1;
    goto LAB13;

LAB12:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB13;

LAB14:    t34 = (t0 + 2072U);
    t35 = *((char **)t34);
    t34 = ((char*)((ng10)));
    memset(t36, 0, 8);
    t37 = (t35 + 4);
    t38 = (t34 + 4);
    t39 = *((unsigned int *)t35);
    t40 = *((unsigned int *)t34);
    t41 = (t39 ^ t40);
    t42 = *((unsigned int *)t37);
    t43 = *((unsigned int *)t38);
    t44 = (t42 ^ t43);
    t45 = (t41 | t44);
    t46 = *((unsigned int *)t37);
    t47 = *((unsigned int *)t38);
    t48 = (t46 | t47);
    t49 = (~(t48));
    t50 = (t45 & t49);
    if (t50 != 0)
        goto LAB20;

LAB17:    if (t48 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t36) = 1;

LAB20:    memset(t52, 0, 8);
    t53 = (t36 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t36);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t53) != 0)
        goto LAB23;

LAB24:    t61 = *((unsigned int *)t22);
    t62 = *((unsigned int *)t52);
    t63 = (t61 & t62);
    *((unsigned int *)t60) = t63;
    t64 = (t22 + 4);
    t65 = (t52 + 4);
    t66 = (t60 + 4);
    t67 = *((unsigned int *)t64);
    t68 = *((unsigned int *)t65);
    t69 = (t67 | t68);
    *((unsigned int *)t66) = t69;
    t70 = *((unsigned int *)t66);
    t71 = (t70 != 0);
    if (t71 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB16;

LAB19:    t51 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t52) = 1;
    goto LAB24;

LAB23:    t59 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB24;

LAB25:    t72 = *((unsigned int *)t60);
    t73 = *((unsigned int *)t66);
    *((unsigned int *)t60) = (t72 | t73);
    t74 = (t22 + 4);
    t75 = (t52 + 4);
    t76 = *((unsigned int *)t22);
    t77 = (~(t76));
    t78 = *((unsigned int *)t74);
    t79 = (~(t78));
    t80 = *((unsigned int *)t52);
    t81 = (~(t80));
    t82 = *((unsigned int *)t75);
    t83 = (~(t82));
    t84 = (t77 & t79);
    t85 = (t81 & t83);
    t86 = (~(t84));
    t87 = (~(t85));
    t88 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t88 & t86);
    t89 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t89 & t87);
    t90 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t90 & t86);
    t91 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t91 & t87);
    goto LAB27;

LAB28:    xsi_set_current_line(63, ng0);

LAB31:    xsi_set_current_line(64, ng0);
    t98 = (t0 + 3432);
    t99 = (t98 + 56U);
    t100 = *((char **)t99);
    t101 = ((char*)((ng5)));
    memset(t102, 0, 8);
    t103 = (t100 + 4);
    t104 = (t101 + 4);
    t105 = *((unsigned int *)t100);
    t106 = *((unsigned int *)t101);
    t107 = (t105 ^ t106);
    t108 = *((unsigned int *)t103);
    t109 = *((unsigned int *)t104);
    t110 = (t108 ^ t109);
    t111 = (t107 | t110);
    t112 = *((unsigned int *)t103);
    t113 = *((unsigned int *)t104);
    t114 = (t112 | t113);
    t115 = (~(t114));
    t116 = (t111 & t115);
    if (t116 != 0)
        goto LAB35;

LAB32:    if (t114 != 0)
        goto LAB34;

LAB33:    *((unsigned int *)t102) = 1;

LAB35:    t118 = (t102 + 4);
    t119 = *((unsigned int *)t118);
    t120 = (~(t119));
    t121 = *((unsigned int *)t102);
    t122 = (t121 & t120);
    t123 = (t122 != 0);
    if (t123 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(67, ng0);

LAB40:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 3432);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng10)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_lshift(t8, 4, t4, 4, t5, 32);
    t6 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 4, 0LL);

LAB38:    goto LAB30;

LAB34:    t117 = (t102 + 4);
    *((unsigned int *)t102) = 1;
    *((unsigned int *)t117) = 1;
    goto LAB35;

LAB36:    xsi_set_current_line(64, ng0);

LAB39:    xsi_set_current_line(65, ng0);
    t124 = ((char*)((ng1)));
    t125 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t125, t124, 0, 0, 4, 0LL);
    goto LAB38;

LAB43:    t29 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB44;

LAB45:    xsi_set_current_line(72, ng0);

LAB48:    xsi_set_current_line(73, ng0);
    t34 = ((char*)((ng40)));
    t35 = (t0 + 3272);
    xsi_vlogvar_wait_assign_value(t35, t34, 0, 0, 8, 0LL);
    goto LAB47;

LAB52:    t59 = (t0 + 6960U);
    *((char **)t59) = &&LAB50;
    goto LAB1;

}


extern void work_m_00000000000739817653_0416217130_init()
{
	static char *pe[] = {(void *)Initial_37_0,(void *)Always_44_1,(void *)Always_47_2,(void *)Always_50_3,(void *)Always_53_4,(void *)Always_57_5,(void *)Always_61_6};
	static char *se[] = {(void *)sp_selector,(void *)sp_decode};
	xsi_register_didat("work_m_00000000000739817653_0416217130", "isim/Segment7_isim_beh.exe.sim/work/m_00000000000739817653_0416217130.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
