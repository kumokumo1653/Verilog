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
static const char *ng0 = "C:/Users/fjsda/Studying/FPGA/ALU/Selector.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {15U, 15U};



static int sp_switch(char *t1, char *t2)
{
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

LAB0:    t0 = 1;
    xsi_set_current_line(30, ng0);

LAB2:    xsi_set_current_line(31, ng0);
    t3 = (t1 + 2840);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);

LAB3:    t6 = ((char*)((ng1)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 1, t6, 32);
    if (t7 == 1)
        goto LAB4;

LAB5:    t3 = ((char*)((ng2)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 1, t3, 32);
    if (t7 == 1)
        goto LAB6;

LAB7:
LAB9:
LAB8:    xsi_set_current_line(34, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t1 + 2360);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);

LAB10:    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(32, ng0);
    t8 = (t1 + 2520);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t1 + 2360);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 4);
    goto LAB10;

LAB6:    xsi_set_current_line(33, ng0);
    t4 = (t1 + 2680);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t9 = (t1 + 2360);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 4);
    goto LAB10;

}

static void Cont_39_0(char *t0)
{
    char t23[8];
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
    int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;

LAB0:    t1 = (t0 + 3760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    t2 = (t0 + 1640U);
    t4 = *((char **)t2);
    t2 = (t0 + 1800U);
    t5 = *((char **)t2);
    t2 = (t0 + 3568);
    t6 = (t0 + 848);
    t7 = xsi_create_subprogram_invocation(t2, 0, t0, t6, 0, 0);
    t8 = (t0 + 2520);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 4);
    t9 = (t0 + 2680);
    xsi_vlogvar_assign_value(t9, t4, 0, 0, 4);
    t10 = (t0 + 2840);
    xsi_vlogvar_assign_value(t10, t5, 0, 0, 1);

LAB4:    t11 = (t0 + 3664);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t19 = ((int  (*)(char *, char *))t18)(t0, t12);
    if (t19 != 0)
        goto LAB6;

LAB5:    t12 = (t0 + 3664);
    t20 = *((char **)t12);
    t12 = (t0 + 2360);
    t21 = (t12 + 56U);
    t22 = *((char **)t21);
    memcpy(t23, t22, 8);
    t24 = (t0 + 848);
    t25 = (t0 + 3568);
    t26 = 0;
    xsi_delete_subprogram_invocation(t24, t20, t0, t25, t26);
    t27 = (t0 + 4160);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    memset(t31, 0, 8);
    t32 = 15U;
    t33 = t32;
    t34 = (t23 + 4);
    t35 = *((unsigned int *)t23);
    t32 = (t32 & t35);
    t36 = *((unsigned int *)t34);
    t33 = (t33 & t36);
    t37 = (t31 + 4);
    t38 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t38 | t32);
    t39 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t39 | t33);
    xsi_driver_vfirst_trans(t27, 0, 3);
    t40 = (t0 + 4080);
    *((int *)t40) = 1;

LAB1:    return;
LAB6:    t11 = (t0 + 3760U);
    *((char **)t11) = &&LAB4;
    goto LAB1;

}


extern void work_m_00000000004259575392_3642967255_init()
{
	static char *pe[] = {(void *)Cont_39_0};
	static char *se[] = {(void *)sp_switch};
	xsi_register_didat("work_m_00000000004259575392_3642967255", "isim/MainTest_isim_beh.exe.sim/work/m_00000000004259575392_3642967255.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
