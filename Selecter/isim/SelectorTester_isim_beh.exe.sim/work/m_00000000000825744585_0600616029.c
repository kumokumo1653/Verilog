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
static const char *ng0 = "C:/Users/fjsda/Studying/FPGA/Selecter/Selecter.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {7U, 7U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};



static int sp_SEL(char *t1, char *t2)
{
    char t10[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    char *t11;

LAB0:    t0 = 1;
    xsi_set_current_line(36, ng0);

LAB2:    xsi_set_current_line(37, ng0);
    t3 = (t1 + 3320);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);

LAB3:    t6 = ((char*)((ng1)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 2, t6, 2);
    if (t7 == 1)
        goto LAB4;

LAB5:    t3 = ((char*)((ng3)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 2);
    if (t7 == 1)
        goto LAB6;

LAB7:    t3 = ((char*)((ng4)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 2);
    if (t7 == 1)
        goto LAB8;

LAB9:    t3 = ((char*)((ng5)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 2);
    if (t7 == 1)
        goto LAB10;

LAB11:
LAB12:    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(38, ng0);
    t8 = ((char*)((ng2)));
    t9 = (t1 + 2680);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 4);
    goto LAB12;

LAB6:    xsi_set_current_line(39, ng0);
    t4 = (t1 + 2840);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t9 = ((char*)((ng3)));
    xsi_vlogtype_concat(t10, 7, 7, 2U, t9, 4, t8, 3);
    t11 = (t1 + 2680);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 4);
    goto LAB12;

LAB8:    xsi_set_current_line(40, ng0);
    t4 = (t1 + 3000);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t9 = ((char*)((ng3)));
    xsi_vlogtype_concat(t10, 7, 7, 2U, t9, 4, t8, 3);
    t11 = (t1 + 2680);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 4);
    goto LAB12;

LAB10:    xsi_set_current_line(41, ng0);
    t4 = (t1 + 3160);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t9 = ((char*)((ng3)));
    xsi_vlogtype_concat(t10, 7, 7, 2U, t9, 4, t8, 3);
    t11 = (t1 + 2680);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 4);
    goto LAB12;

}

static void Cont_29_0(char *t0)
{
    char t25[8];
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
    int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;

LAB0:    t1 = (t0 + 4240U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    t2 = (t0 + 1640U);
    t4 = *((char **)t2);
    t2 = (t0 + 1800U);
    t5 = *((char **)t2);
    t2 = (t0 + 1960U);
    t6 = *((char **)t2);
    t2 = (t0 + 4048);
    t7 = (t0 + 848);
    t8 = xsi_create_subprogram_invocation(t2, 0, t0, t7, 0, 0);
    t9 = (t0 + 2840);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 3);
    t10 = (t0 + 3000);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 3);
    t11 = (t0 + 3160);
    xsi_vlogvar_assign_value(t11, t5, 0, 0, 3);
    t12 = (t0 + 3320);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 2);

LAB4:    t13 = (t0 + 4144);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t21 = ((int  (*)(char *, char *))t20)(t0, t14);
    if (t21 != 0)
        goto LAB6;

LAB5:    t14 = (t0 + 4144);
    t22 = *((char **)t14);
    t14 = (t0 + 2680);
    t23 = (t14 + 56U);
    t24 = *((char **)t23);
    memcpy(t25, t24, 8);
    t26 = (t0 + 848);
    t27 = (t0 + 4048);
    t28 = 0;
    xsi_delete_subprogram_invocation(t26, t22, t0, t27, t28);
    t29 = (t0 + 4704);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memset(t33, 0, 8);
    t34 = 7U;
    t35 = t34;
    t36 = (t25 + 4);
    t37 = *((unsigned int *)t25);
    t34 = (t34 & t37);
    t38 = *((unsigned int *)t36);
    t35 = (t35 & t38);
    t39 = (t33 + 4);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t40 | t34);
    t41 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t41 | t35);
    xsi_driver_vfirst_trans(t29, 0, 2);
    t42 = (t0 + 4640);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    memset(t46, 0, 8);
    t47 = 8U;
    t48 = t47;
    t49 = (t25 + 4);
    t50 = *((unsigned int *)t25);
    t47 = (t47 & t50);
    t51 = *((unsigned int *)t49);
    t48 = (t48 & t51);
    t47 = (t47 >> 3);
    t48 = (t48 >> 3);
    t52 = (t46 + 4);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t53 | t47);
    t54 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t54 | t48);
    xsi_driver_vfirst_trans(t42, 0, 0);
    t55 = (t0 + 4560);
    *((int *)t55) = 1;

LAB1:    return;
LAB6:    t13 = (t0 + 4240U);
    *((char **)t13) = &&LAB4;
    goto LAB1;

}


extern void work_m_00000000000825744585_0600616029_init()
{
	static char *pe[] = {(void *)Cont_29_0};
	static char *se[] = {(void *)sp_SEL};
	xsi_register_didat("work_m_00000000000825744585_0600616029", "isim/SelectorTester_isim_beh.exe.sim/work/m_00000000000825744585_0600616029.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
