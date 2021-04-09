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
static const char *ng0 = "C:/Users/fjsda/Studying/FPGA/FullAddSub/ADDSUB.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};



static int sp_select(char *t1, char *t2)
{
    char t8[8];
    char t9[8];
    char t28[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;

LAB0:    t0 = 1;
    xsi_set_current_line(42, ng0);

LAB2:    xsi_set_current_line(43, ng0);
    t3 = (t1 + 4120);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);

LAB3:    t6 = ((char*)((ng1)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 1, t6, 1);
    if (t7 == 1)
        goto LAB4;

LAB5:    t3 = ((char*)((ng2)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 1, t3, 1);
    if (t7 == 1)
        goto LAB6;

LAB7:
LAB8:    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(44, ng0);
    t10 = (t1 + 2600U);
    t11 = *((char **)t10);
    memset(t9, 0, 8);
    t10 = (t11 + 4);
    t12 = *((unsigned int *)t10);
    t13 = (~(t12));
    t14 = *((unsigned int *)t11);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB12;

LAB10:    if (*((unsigned int *)t10) == 0)
        goto LAB9;

LAB11:    t17 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t17) = 1;

LAB12:    t18 = (t9 + 4);
    t19 = (t11 + 4);
    t20 = *((unsigned int *)t11);
    t21 = (~(t20));
    *((unsigned int *)t9) = t21;
    *((unsigned int *)t18) = 0;
    if (*((unsigned int *)t19) != 0)
        goto LAB14;

LAB13:    t26 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t26 & 1U);
    t27 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t27 & 1U);
    t29 = (t1 + 3480);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    memset(t28, 0, 8);
    t32 = (t31 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t31);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB18;

LAB16:    if (*((unsigned int *)t32) == 0)
        goto LAB15;

LAB17:    t38 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t38) = 1;

LAB18:    t39 = (t28 + 4);
    t40 = (t31 + 4);
    t41 = *((unsigned int *)t31);
    t42 = (~(t41));
    *((unsigned int *)t28) = t42;
    *((unsigned int *)t39) = 0;
    if (*((unsigned int *)t40) != 0)
        goto LAB20;

LAB19:    t47 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t47 & 1U);
    t48 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t48 & 1U);
    xsi_vlogtype_concat(t8, 3, 2, 2U, t28, 1, t9, 1);
    t49 = (t1 + 3320);
    xsi_vlogvar_assign_value(t49, t8, 0, 0, 3);
    goto LAB8;

LAB6:    xsi_set_current_line(45, ng0);
    t4 = (t1 + 2920U);
    t6 = *((char **)t4);
    memset(t9, 0, 8);
    t4 = (t6 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (~(t12));
    t14 = *((unsigned int *)t6);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB24;

LAB22:    if (*((unsigned int *)t4) == 0)
        goto LAB21;

LAB23:    t10 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t10) = 1;

LAB24:    t11 = (t9 + 4);
    t17 = (t6 + 4);
    t20 = *((unsigned int *)t6);
    t21 = (~(t20));
    *((unsigned int *)t9) = t21;
    *((unsigned int *)t11) = 0;
    if (*((unsigned int *)t17) != 0)
        goto LAB26;

LAB25:    t26 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t26 & 1U);
    t27 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t27 & 1U);
    t18 = (t1 + 3800);
    t19 = (t18 + 56U);
    t29 = *((char **)t19);
    memset(t28, 0, 8);
    t30 = (t29 + 4);
    t33 = *((unsigned int *)t30);
    t34 = (~(t33));
    t35 = *((unsigned int *)t29);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB30;

LAB28:    if (*((unsigned int *)t30) == 0)
        goto LAB27;

LAB29:    t31 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t31) = 1;

LAB30:    t32 = (t28 + 4);
    t38 = (t29 + 4);
    t41 = *((unsigned int *)t29);
    t42 = (~(t41));
    *((unsigned int *)t28) = t42;
    *((unsigned int *)t32) = 0;
    if (*((unsigned int *)t38) != 0)
        goto LAB32;

LAB31:    t47 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t47 & 1U);
    t48 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t48 & 1U);
    xsi_vlogtype_concat(t8, 3, 2, 2U, t28, 1, t9, 1);
    t39 = (t1 + 3320);
    xsi_vlogvar_assign_value(t39, t8, 0, 0, 3);
    goto LAB8;

LAB9:    *((unsigned int *)t9) = 1;
    goto LAB12;

LAB14:    t22 = *((unsigned int *)t9);
    t23 = *((unsigned int *)t19);
    *((unsigned int *)t9) = (t22 | t23);
    t24 = *((unsigned int *)t18);
    t25 = *((unsigned int *)t19);
    *((unsigned int *)t18) = (t24 | t25);
    goto LAB13;

LAB15:    *((unsigned int *)t28) = 1;
    goto LAB18;

LAB20:    t43 = *((unsigned int *)t28);
    t44 = *((unsigned int *)t40);
    *((unsigned int *)t28) = (t43 | t44);
    t45 = *((unsigned int *)t39);
    t46 = *((unsigned int *)t40);
    *((unsigned int *)t39) = (t45 | t46);
    goto LAB19;

LAB21:    *((unsigned int *)t9) = 1;
    goto LAB24;

LAB26:    t22 = *((unsigned int *)t9);
    t23 = *((unsigned int *)t17);
    *((unsigned int *)t9) = (t22 | t23);
    t24 = *((unsigned int *)t11);
    t25 = *((unsigned int *)t17);
    *((unsigned int *)t11) = (t24 | t25);
    goto LAB25;

LAB27:    *((unsigned int *)t28) = 1;
    goto LAB30;

LAB32:    t43 = *((unsigned int *)t28);
    t44 = *((unsigned int *)t38);
    *((unsigned int *)t28) = (t43 | t44);
    t45 = *((unsigned int *)t32);
    t46 = *((unsigned int *)t38);
    *((unsigned int *)t32) = (t45 | t46);
    goto LAB31;

}

static void Cont_35_0(char *t0)
{
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
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;

LAB0:    t1 = (t0 + 5040U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 2440U);
    t3 = *((char **)t2);
    t2 = (t0 + 2600U);
    t4 = *((char **)t2);
    t2 = (t0 + 2760U);
    t5 = *((char **)t2);
    t2 = (t0 + 2920U);
    t6 = *((char **)t2);
    t2 = (t0 + 1960U);
    t7 = *((char **)t2);
    t2 = (t0 + 4848);
    t8 = (t0 + 848);
    t9 = xsi_create_subprogram_invocation(t2, 0, t0, t8, 0, 0);
    t10 = (t0 + 3480);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 1);
    t11 = (t0 + 3640);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 1);
    t12 = (t0 + 3800);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 1);
    t13 = (t0 + 3960);
    xsi_vlogvar_assign_value(t13, t6, 0, 0, 1);
    t14 = (t0 + 4120);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 1);

LAB4:    t15 = (t0 + 4944);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t23 = ((int  (*)(char *, char *))t22)(t0, t16);
    if (t23 != 0)
        goto LAB6;

LAB5:    t16 = (t0 + 4944);
    t24 = *((char **)t16);
    t16 = (t0 + 3320);
    t25 = (t16 + 56U);
    t26 = *((char **)t25);
    memcpy(t27, t26, 8);
    t28 = (t0 + 848);
    t29 = (t0 + 4848);
    t30 = 0;
    xsi_delete_subprogram_invocation(t28, t24, t0, t29, t30);
    t31 = (t0 + 5504);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memset(t35, 0, 8);
    t36 = 1U;
    t37 = t36;
    t38 = (t27 + 4);
    t39 = *((unsigned int *)t27);
    t36 = (t36 & t39);
    t40 = *((unsigned int *)t38);
    t37 = (t37 & t40);
    t41 = (t35 + 4);
    t42 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t42 | t36);
    t43 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t43 | t37);
    xsi_driver_vfirst_trans(t31, 0, 0);
    t44 = (t0 + 5440);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    memset(t48, 0, 8);
    t49 = 2U;
    t50 = t49;
    t51 = (t27 + 4);
    t52 = *((unsigned int *)t27);
    t49 = (t49 & t52);
    t53 = *((unsigned int *)t51);
    t50 = (t50 & t53);
    t49 = (t49 >> 1);
    t50 = (t50 >> 1);
    t54 = (t48 + 4);
    t55 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t55 | t49);
    t56 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t56 | t50);
    xsi_driver_vfirst_trans(t44, 0, 0);
    t57 = (t0 + 5360);
    *((int *)t57) = 1;

LAB1:    return;
LAB6:    t15 = (t0 + 5040U);
    *((char **)t15) = &&LAB4;
    goto LAB1;

}


extern void work_m_00000000000851606374_2596016755_init()
{
	static char *pe[] = {(void *)Cont_35_0};
	static char *se[] = {(void *)sp_select};
	xsi_register_didat("work_m_00000000000851606374_2596016755", "isim/addsubtest_isim_beh.exe.sim/work/m_00000000000851606374_2596016755.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
