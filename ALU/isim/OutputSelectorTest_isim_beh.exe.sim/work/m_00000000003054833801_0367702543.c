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
static const char *ng0 = "C:/Users/fjsda/Studying/FPGA/ALU/OutputSeletor.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {255U, 255U};



static int sp_switch(char *t1, char *t2)
{
    char t12[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;

LAB0:    t0 = 1;
    xsi_set_current_line(40, ng0);

LAB2:    xsi_set_current_line(41, ng0);
    t3 = (t1 + 3320);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);

LAB3:    t6 = ((char*)((ng1)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 2, t6, 2);
    if (t7 == 1)
        goto LAB4;

LAB5:    t3 = ((char*)((ng2)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 2);
    if (t7 == 1)
        goto LAB6;

LAB7:    t3 = ((char*)((ng3)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 2);
    if (t7 == 1)
        goto LAB8;

LAB9:    t3 = ((char*)((ng4)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 2);
    if (t7 == 1)
        goto LAB10;

LAB11:
LAB13:
LAB12:    xsi_set_current_line(46, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t1 + 3160);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);

LAB14:    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(42, ng0);
    t8 = (t1 + 3640);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t1 + 3160);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 8);
    goto LAB14;

LAB6:    xsi_set_current_line(43, ng0);
    t4 = (t1 + 3480);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t9 = (t1 + 3160);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 8);
    goto LAB14;

LAB8:    xsi_set_current_line(44, ng0);
    t4 = (t1 + 3800);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t9 = ((char*)((ng1)));
    xsi_vlogtype_concat(t12, 8, 8, 2U, t9, 4, t8, 4);
    t10 = (t1 + 3160);
    xsi_vlogvar_assign_value(t10, t12, 0, 0, 8);
    goto LAB14;

LAB10:    xsi_set_current_line(45, ng0);
    t4 = (t1 + 3960);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t9 = (t1 + 4120);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    xsi_vlogtype_concat(t12, 8, 8, 2U, t11, 4, t8, 4);
    t13 = (t1 + 3160);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 8);
    goto LAB14;

}

static void Cont_51_0(char *t0)
{
    char t3[8];
    char t31[8];
    char *t1;
    char *t2;
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
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;

LAB0:    t1 = (t0 + 5040U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1640U);
    t4 = *((char **)t2);
    t2 = (t0 + 1480U);
    t5 = *((char **)t2);
    xsi_vlogtype_concat(t3, 2, 2, 2U, t5, 1, t4, 1);
    t2 = (t0 + 1800U);
    t6 = *((char **)t2);
    t2 = (t0 + 1960U);
    t7 = *((char **)t2);
    t2 = (t0 + 2120U);
    t8 = *((char **)t2);
    t2 = (t0 + 2280U);
    t9 = *((char **)t2);
    t2 = (t0 + 2440U);
    t10 = *((char **)t2);
    t2 = (t0 + 4848);
    t11 = (t0 + 848);
    t12 = xsi_create_subprogram_invocation(t2, 0, t0, t11, 0, 0);
    t13 = (t0 + 3320);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 2);
    t14 = (t0 + 3480);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 8);
    t15 = (t0 + 3640);
    xsi_vlogvar_assign_value(t15, t7, 0, 0, 8);
    t16 = (t0 + 3800);
    xsi_vlogvar_assign_value(t16, t8, 0, 0, 4);
    t17 = (t0 + 3960);
    xsi_vlogvar_assign_value(t17, t9, 0, 0, 4);
    t18 = (t0 + 4120);
    xsi_vlogvar_assign_value(t18, t10, 0, 0, 4);

LAB4:    t19 = (t0 + 4944);
    t20 = *((char **)t19);
    t21 = (t20 + 80U);
    t22 = *((char **)t21);
    t23 = (t22 + 272U);
    t24 = *((char **)t23);
    t25 = (t24 + 0U);
    t26 = *((char **)t25);
    t27 = ((int  (*)(char *, char *))t26)(t0, t20);
    if (t27 != 0)
        goto LAB6;

LAB5:    t20 = (t0 + 4944);
    t28 = *((char **)t20);
    t20 = (t0 + 3160);
    t29 = (t20 + 56U);
    t30 = *((char **)t29);
    memcpy(t31, t30, 8);
    t32 = (t0 + 848);
    t33 = (t0 + 4848);
    t34 = 0;
    xsi_delete_subprogram_invocation(t32, t28, t0, t33, t34);
    t35 = (t0 + 5504);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    memset(t39, 0, 8);
    t40 = 15U;
    t41 = t40;
    t42 = (t31 + 4);
    t43 = *((unsigned int *)t31);
    t40 = (t40 & t43);
    t44 = *((unsigned int *)t42);
    t41 = (t41 & t44);
    t45 = (t39 + 4);
    t46 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t46 | t40);
    t47 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t47 | t41);
    xsi_driver_vfirst_trans(t35, 0, 3);
    t48 = (t0 + 5440);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    memset(t52, 0, 8);
    t53 = 240U;
    t54 = t53;
    t55 = (t31 + 4);
    t56 = *((unsigned int *)t31);
    t53 = (t53 & t56);
    t57 = *((unsigned int *)t55);
    t54 = (t54 & t57);
    t53 = (t53 >> 4);
    t54 = (t54 >> 4);
    t58 = (t52 + 4);
    t59 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t59 | t53);
    t60 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t60 | t54);
    xsi_driver_vfirst_trans(t48, 0, 3);
    t61 = (t0 + 5360);
    *((int *)t61) = 1;

LAB1:    return;
LAB6:    t19 = (t0 + 5040U);
    *((char **)t19) = &&LAB4;
    goto LAB1;

}


extern void work_m_00000000003054833801_0367702543_init()
{
	static char *pe[] = {(void *)Cont_51_0};
	static char *se[] = {(void *)sp_switch};
	xsi_register_didat("work_m_00000000003054833801_0367702543", "isim/OutputSelectorTest_isim_beh.exe.sim/work/m_00000000003054833801_0367702543.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
