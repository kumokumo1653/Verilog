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
static const char *ng0 = "C:/Users/wasabi/Desktop/temp/final/final/make17.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {15, 0};
static int ng3[] = {4, 0};
static int ng4[] = {0, 0};
static int ng5[] = {3, 0};
static unsigned int ng6[] = {1U, 0U};
static int ng7[] = {1, 0};
static unsigned int ng8[] = {2U, 0U};
static unsigned int ng9[] = {3U, 0U};



static void Cont_25_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 3488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 4152);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 0);
    t16 = (t0 + 4056);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Always_27_1(char *t0)
{
    char t10[8];
    char t11[8];
    char t12[8];
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    int t20;
    int t21;
    char *t22;
    unsigned int t23;
    int t24;
    int t25;
    unsigned int t26;
    int t27;
    unsigned int t28;
    unsigned int t29;
    int t30;
    int t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;

LAB0:    t1 = (t0 + 3736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 4072);
    *((int *)t2) = 1;
    t3 = (t0 + 3768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(28, ng0);

LAB5:    xsi_set_current_line(30, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 1, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 1, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 1, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 1, t2, 2);
    if (t6 == 1)
        goto LAB13;

LAB14:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(32, ng0);

LAB16:    xsi_set_current_line(33, ng0);
    t7 = (t0 + 1368U);
    t8 = *((char **)t7);
    t7 = (t0 + 1528U);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 16, t8, 1, t9, 1);
    t7 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t7, t10, 0, 0, 16, 0LL);
    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1528U);
    t4 = *((char **)t2);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 12, t3, 1, t4, 1);
    t2 = (t0 + 2248);
    t7 = (t0 + 2248);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t14 = ((char*)((ng2)));
    t15 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t11, t12, t13, ((int*)(t9)), 2, t14, 32, 1, t15, 32, 1);
    t16 = (t11 + 4);
    t17 = *((unsigned int *)t16);
    t6 = (!(t17));
    t18 = (t12 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    t21 = (t6 && t20);
    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (!(t23));
    t25 = (t21 && t24);
    if (t25 == 1)
        goto LAB17;

LAB18:    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2248);
    t4 = (t0 + 2248);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng5)));
    t14 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t10, t11, t12, ((int*)(t8)), 2, t9, 32, 1, t14, 32, 1);
    t15 = (t10 + 4);
    t17 = *((unsigned int *)t15);
    t6 = (!(t17));
    t16 = (t11 + 4);
    t19 = *((unsigned int *)t16);
    t20 = (!(t19));
    t21 = (t6 && t20);
    t18 = (t12 + 4);
    t23 = *((unsigned int *)t18);
    t24 = (!(t23));
    t25 = (t21 && t24);
    if (t25 == 1)
        goto LAB19;

LAB20:    goto LAB15;

LAB9:    xsi_set_current_line(38, ng0);

LAB21:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = (t0 + 1528U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB23;

LAB22:    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB23;

LAB26:    if (*((unsigned int *)t4) < *((unsigned int *)t7))
        goto LAB25;

LAB24:    *((unsigned int *)t10) = 1;

LAB25:    t14 = (t10 + 4);
    t17 = *((unsigned int *)t14);
    t19 = (~(t17));
    t23 = *((unsigned int *)t10);
    t26 = (t23 & t19);
    t28 = (t26 != 0);
    if (t28 > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(44, ng0);

LAB35:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 16, t3, 1, t4, 1);
    t2 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t2, t10, 0, 0, 16, 0LL);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 12, t3, 1, t4, 1);
    t2 = (t0 + 2248);
    t7 = (t0 + 2248);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t14 = ((char*)((ng2)));
    t15 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t11, t12, t13, ((int*)(t9)), 2, t14, 32, 1, t15, 32, 1);
    t16 = (t11 + 4);
    t17 = *((unsigned int *)t16);
    t6 = (!(t17));
    t18 = (t12 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    t21 = (t6 && t20);
    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (!(t23));
    t25 = (t21 && t24);
    if (t25 == 1)
        goto LAB36;

LAB37:    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2248);
    t4 = (t0 + 2248);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng5)));
    t14 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t10, t11, t12, ((int*)(t8)), 2, t9, 32, 1, t14, 32, 1);
    t15 = (t10 + 4);
    t17 = *((unsigned int *)t15);
    t6 = (!(t17));
    t16 = (t11 + 4);
    t19 = *((unsigned int *)t16);
    t20 = (!(t19));
    t21 = (t6 && t20);
    t18 = (t12 + 4);
    t23 = *((unsigned int *)t18);
    t24 = (!(t23));
    t25 = (t21 && t24);
    if (t25 == 1)
        goto LAB38;

LAB39:
LAB29:    goto LAB15;

LAB11:    xsi_set_current_line(51, ng0);

LAB40:    xsi_set_current_line(52, ng0);
    xsi_set_current_line(52, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB41:    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 1528U);
    t8 = *((char **)t7);
    memset(t10, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB43;

LAB42:    t9 = (t8 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB43;

LAB46:    if (*((unsigned int *)t4) < *((unsigned int *)t8))
        goto LAB44;

LAB45:    t15 = (t10 + 4);
    t17 = *((unsigned int *)t15);
    t19 = (~(t17));
    t23 = *((unsigned int *)t10);
    t26 = (t23 & t19);
    t28 = (t26 != 0);
    if (t28 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 2248);
    t8 = (t0 + 2248);
    t9 = (t8 + 72U);
    t14 = *((char **)t9);
    t15 = ((char*)((ng2)));
    t16 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t10, t11, t12, ((int*)(t14)), 2, t15, 32, 1, t16, 32, 1);
    t18 = (t10 + 4);
    t17 = *((unsigned int *)t18);
    t6 = (!(t17));
    t22 = (t11 + 4);
    t19 = *((unsigned int *)t22);
    t20 = (!(t19));
    t21 = (t6 && t20);
    t32 = (t12 + 4);
    t23 = *((unsigned int *)t32);
    t24 = (!(t23));
    t25 = (t21 && t24);
    if (t25 == 1)
        goto LAB50;

LAB51:    goto LAB15;

LAB13:    xsi_set_current_line(59, ng0);

LAB52:    xsi_set_current_line(60, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    memset(t10, 0, 8);
    t7 = (t4 + 4);
    t8 = (t3 + 4);
    t17 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t3);
    t23 = (t17 ^ t19);
    t26 = *((unsigned int *)t7);
    t28 = *((unsigned int *)t8);
    t29 = (t26 ^ t28);
    t34 = (t23 | t29);
    t35 = *((unsigned int *)t7);
    t36 = *((unsigned int *)t8);
    t37 = (t35 | t36);
    t38 = (~(t37));
    t39 = (t34 & t38);
    if (t39 != 0)
        goto LAB56;

LAB53:    if (t37 != 0)
        goto LAB55;

LAB54:    *((unsigned int *)t10) = 1;

LAB56:    t14 = (t10 + 4);
    t40 = *((unsigned int *)t14);
    t41 = (~(t40));
    t42 = *((unsigned int *)t10);
    t43 = (t42 & t41);
    t44 = (t43 != 0);
    if (t44 > 0)
        goto LAB57;

LAB58:    xsi_set_current_line(64, ng0);

LAB61:    xsi_set_current_line(65, ng0);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB62:    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 1528U);
    t8 = *((char **)t7);
    memset(t10, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB64;

LAB63:    t9 = (t8 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB64;

LAB67:    if (*((unsigned int *)t4) > *((unsigned int *)t8))
        goto LAB65;

LAB66:    t15 = (t10 + 4);
    t17 = *((unsigned int *)t15);
    t19 = (~(t17));
    t23 = *((unsigned int *)t10);
    t26 = (t23 & t19);
    t28 = (t26 != 0);
    if (t28 > 0)
        goto LAB68;

LAB69:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 16, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 2248);
    t8 = (t0 + 2248);
    t9 = (t8 + 72U);
    t14 = *((char **)t9);
    t15 = ((char*)((ng2)));
    t16 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t10, t11, t12, ((int*)(t14)), 2, t15, 32, 1, t16, 32, 1);
    t18 = (t10 + 4);
    t17 = *((unsigned int *)t18);
    t6 = (!(t17));
    t22 = (t11 + 4);
    t19 = *((unsigned int *)t22);
    t20 = (!(t19));
    t21 = (t6 && t20);
    t32 = (t12 + 4);
    t23 = *((unsigned int *)t32);
    t24 = (!(t23));
    t25 = (t21 && t24);
    if (t25 == 1)
        goto LAB71;

LAB72:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memcpy(t10, t3, 8);
    t2 = (t0 + 2248);
    t4 = (t0 + 2248);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng5)));
    t14 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t11, t12, t13, ((int*)(t8)), 2, t9, 32, 1, t14, 32, 1);
    t15 = (t11 + 4);
    t17 = *((unsigned int *)t15);
    t6 = (!(t17));
    t16 = (t12 + 4);
    t19 = *((unsigned int *)t16);
    t20 = (!(t19));
    t21 = (t6 && t20);
    t18 = (t13 + 4);
    t23 = *((unsigned int *)t18);
    t24 = (!(t23));
    t25 = (t21 && t24);
    if (t25 == 1)
        goto LAB73;

LAB74:
LAB59:    goto LAB15;

LAB17:    t26 = *((unsigned int *)t13);
    t27 = (t26 + 0);
    t28 = *((unsigned int *)t11);
    t29 = *((unsigned int *)t12);
    t30 = (t28 - t29);
    t31 = (t30 + 1);
    xsi_vlogvar_wait_assign_value(t2, t10, t27, *((unsigned int *)t12), t31, 0LL);
    goto LAB18;

LAB19:    t26 = *((unsigned int *)t12);
    t27 = (t26 + 0);
    t28 = *((unsigned int *)t10);
    t29 = *((unsigned int *)t11);
    t30 = (t28 - t29);
    t31 = (t30 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, t27, *((unsigned int *)t11), t31, 0LL);
    goto LAB20;

LAB23:    t9 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB25;

LAB27:    xsi_set_current_line(40, ng0);

LAB30:    xsi_set_current_line(41, ng0);
    t15 = (t0 + 1368U);
    t16 = *((char **)t15);
    t15 = (t0 + 1528U);
    t18 = *((char **)t15);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_minus(t11, 16, t16, 1, t18, 1);
    t15 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t15, t11, 0, 0, 16, 0LL);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1528U);
    t4 = *((char **)t2);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 12, t3, 1, t4, 1);
    t2 = (t0 + 2248);
    t7 = (t0 + 2248);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t14 = ((char*)((ng2)));
    t15 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t11, t12, t13, ((int*)(t9)), 2, t14, 32, 1, t15, 32, 1);
    t16 = (t11 + 4);
    t17 = *((unsigned int *)t16);
    t6 = (!(t17));
    t18 = (t12 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    t21 = (t6 && t20);
    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (!(t23));
    t25 = (t21 && t24);
    if (t25 == 1)
        goto LAB31;

LAB32:    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2248);
    t4 = (t0 + 2248);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng5)));
    t14 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t10, t11, t12, ((int*)(t8)), 2, t9, 32, 1, t14, 32, 1);
    t15 = (t10 + 4);
    t17 = *((unsigned int *)t15);
    t6 = (!(t17));
    t16 = (t11 + 4);
    t19 = *((unsigned int *)t16);
    t20 = (!(t19));
    t21 = (t6 && t20);
    t18 = (t12 + 4);
    t23 = *((unsigned int *)t18);
    t24 = (!(t23));
    t25 = (t21 && t24);
    if (t25 == 1)
        goto LAB33;

LAB34:    goto LAB29;

LAB31:    t26 = *((unsigned int *)t13);
    t27 = (t26 + 0);
    t28 = *((unsigned int *)t11);
    t29 = *((unsigned int *)t12);
    t30 = (t28 - t29);
    t31 = (t30 + 1);
    xsi_vlogvar_wait_assign_value(t2, t10, t27, *((unsigned int *)t12), t31, 0LL);
    goto LAB32;

LAB33:    t26 = *((unsigned int *)t12);
    t27 = (t26 + 0);
    t28 = *((unsigned int *)t10);
    t29 = *((unsigned int *)t11);
    t30 = (t28 - t29);
    t31 = (t30 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, t27, *((unsigned int *)t11), t31, 0LL);
    goto LAB34;

LAB36:    t26 = *((unsigned int *)t13);
    t27 = (t26 + 0);
    t28 = *((unsigned int *)t11);
    t29 = *((unsigned int *)t12);
    t30 = (t28 - t29);
    t31 = (t30 + 1);
    xsi_vlogvar_wait_assign_value(t2, t10, t27, *((unsigned int *)t12), t31, 0LL);
    goto LAB37;

LAB38:    t26 = *((unsigned int *)t12);
    t27 = (t26 + 0);
    t28 = *((unsigned int *)t10);
    t29 = *((unsigned int *)t11);
    t30 = (t28 - t29);
    t31 = (t30 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, t27, *((unsigned int *)t11), t31, 0LL);
    goto LAB39;

LAB43:    t14 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB45;

LAB44:    *((unsigned int *)t10) = 1;
    goto LAB45;

LAB47:    xsi_set_current_line(53, ng0);

LAB49:    xsi_set_current_line(54, ng0);
    t16 = (t0 + 2088);
    t18 = (t16 + 56U);
    t22 = *((char **)t18);
    t32 = (t0 + 1368U);
    t33 = *((char **)t32);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 16, t22, 16, t33, 1);
    t32 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t32, t11, 0, 0, 16, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng7)));
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t4, 32, t7, 32);
    t8 = (t0 + 2408);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB41;

LAB50:    t26 = *((unsigned int *)t12);
    t27 = (t26 + 0);
    t28 = *((unsigned int *)t10);
    t29 = *((unsigned int *)t11);
    t30 = (t28 - t29);
    t31 = (t30 + 1);
    xsi_vlogvar_wait_assign_value(t7, t4, t27, *((unsigned int *)t11), t31, 0LL);
    goto LAB51;

LAB55:    t9 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB56;

LAB57:    xsi_set_current_line(61, ng0);

LAB60:    xsi_set_current_line(62, ng0);
    t15 = ((char*)((ng4)));
    t16 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t16, t15, 0, 0, 16, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    goto LAB59;

LAB64:    t14 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB66;

LAB65:    *((unsigned int *)t10) = 1;
    goto LAB66;

LAB68:    xsi_set_current_line(66, ng0);

LAB70:    xsi_set_current_line(67, ng0);
    t16 = (t0 + 2568);
    t18 = (t16 + 56U);
    t22 = *((char **)t18);
    t32 = (t0 + 1528U);
    t33 = *((char **)t32);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_minus(t11, 1, t22, 1, t33, 1);
    t32 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t32, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng7)));
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t4, 32, t7, 32);
    t8 = (t0 + 2408);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB62;

LAB71:    t26 = *((unsigned int *)t12);
    t27 = (t26 + 0);
    t28 = *((unsigned int *)t10);
    t29 = *((unsigned int *)t11);
    t30 = (t28 - t29);
    t31 = (t30 + 1);
    xsi_vlogvar_wait_assign_value(t7, t4, t27, *((unsigned int *)t11), t31, 0LL);
    goto LAB72;

LAB73:    t26 = *((unsigned int *)t13);
    t27 = (t26 + 0);
    t28 = *((unsigned int *)t11);
    t29 = *((unsigned int *)t12);
    t30 = (t28 - t29);
    t31 = (t30 + 1);
    xsi_vlogvar_wait_assign_value(t2, t10, t27, *((unsigned int *)t12), t31, 0LL);
    goto LAB74;

}


extern void work_m_00000000003162743476_0448428560_init()
{
	static char *pe[] = {(void *)Cont_25_0,(void *)Always_27_1};
	xsi_register_didat("work_m_00000000003162743476_0448428560", "isim/t_main_isim_beh.exe.sim/work/m_00000000003162743476_0448428560.didat");
	xsi_register_executes(pe);
}
