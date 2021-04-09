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
static const char *ng0 = "C:/Users/wasabi/Desktop/temp/final/final/t_main.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {4, 0};
static int ng4[] = {16, 0};

static void NetReassign_119_1(char *);
static void NetReassign_121_2(char *);
static void NetReassign_123_3(char *);


static void Initial_89_0(char *t0)
{
    char t6[8];
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
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;

LAB0:    t1 = (t0 + 6688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(89, ng0);

LAB4:    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3848);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4008);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4168);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4328);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4488);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4648);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4808);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4968);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5128);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 6496);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(110, ng0);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB6:    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB7;

LAB8:    goto LAB1;

LAB7:    xsi_set_current_line(111, ng0);

LAB9:    xsi_set_current_line(112, ng0);
    xsi_set_current_line(112, ng0);
    t13 = ((char*)((ng1)));
    t14 = (t0 + 3368);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 32);

LAB10:    t2 = (t0 + 3368);
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
        goto LAB11;

LAB12:    xsi_set_current_line(123, ng0);
    t2 = (t0 + 3848);
    xsi_set_assignedflag(t2);
    t3 = (t0 + 9680);
    *((int *)t3) = 1;
    t4 = (t0 + 3688);
    xsi_set_assignedflag(t4);
    t5 = (t0 + 9684);
    *((int *)t5) = 1;
    NetReassign_123_3(t0);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 3208);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB6;

LAB11:    xsi_set_current_line(113, ng0);

LAB13:    xsi_set_current_line(114, ng0);
    xsi_set_current_line(114, ng0);
    t13 = ((char*)((ng1)));
    t14 = (t0 + 3528);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 32);

LAB14:    t2 = (t0 + 3528);
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
        goto LAB15;

LAB16:    xsi_set_current_line(121, ng0);
    t2 = (t0 + 4488);
    xsi_set_assignedflag(t2);
    t3 = (t0 + 9664);
    *((int *)t3) = 1;
    t4 = (t0 + 4328);
    xsi_set_assignedflag(t4);
    t5 = (t0 + 9668);
    *((int *)t5) = 1;
    t7 = (t0 + 4168);
    xsi_set_assignedflag(t7);
    t13 = (t0 + 9672);
    *((int *)t13) = 1;
    t14 = (t0 + 4008);
    xsi_set_assignedflag(t14);
    t23 = (t0 + 9676);
    *((int *)t23) = 1;
    NetReassign_121_2(t0);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 3368);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB10;

LAB15:    xsi_set_current_line(115, ng0);

LAB17:    xsi_set_current_line(116, ng0);
    t13 = (t0 + 6496);
    xsi_process_wait(t13, 50000LL);
    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB18:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 5768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB22;

LAB20:    if (*((unsigned int *)t5) == 0)
        goto LAB19;

LAB21:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;

LAB22:    t13 = (t6 + 4);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = (~(t15));
    *((unsigned int *)t6) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB24;

LAB23:    t21 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t0 + 5768);
    xsi_vlogvar_assign_value(t23, t6, 0, 0, 1);
    xsi_set_current_line(118, ng0);
    t2 = (t0 + 5288);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB28;

LAB26:    if (*((unsigned int *)t5) == 0)
        goto LAB25;

LAB27:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;

LAB28:    t13 = (t6 + 4);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = (~(t15));
    *((unsigned int *)t6) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB30;

LAB29:    t21 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t0 + 5288);
    xsi_vlogvar_assign_value(t23, t6, 0, 0, 1);
    xsi_set_current_line(119, ng0);
    t2 = (t0 + 5128);
    xsi_set_assignedflag(t2);
    t3 = (t0 + 9648);
    *((int *)t3) = 1;
    t4 = (t0 + 4968);
    xsi_set_assignedflag(t4);
    t5 = (t0 + 9652);
    *((int *)t5) = 1;
    t7 = (t0 + 4808);
    xsi_set_assignedflag(t7);
    t13 = (t0 + 9656);
    *((int *)t13) = 1;
    t14 = (t0 + 4648);
    xsi_set_assignedflag(t14);
    t23 = (t0 + 9660);
    *((int *)t23) = 1;
    NetReassign_119_1(t0);
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 3528);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB14;

LAB19:    *((unsigned int *)t6) = 1;
    goto LAB22;

LAB24:    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t6) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB23;

LAB25:    *((unsigned int *)t6) = 1;
    goto LAB28;

LAB30:    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t6) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB29;

}

static void NetReassign_119_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
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

LAB0:    t1 = (t0 + 6936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(119, ng0);
    t3 = 0;
    t2 = (t0 + 3528);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 9648);
    if (*((int *)t6) > 0)
        goto LAB4;

LAB5:    t8 = (t0 + 9652);
    if (*((int *)t8) > 0)
        goto LAB6;

LAB7:    t10 = (t0 + 9656);
    if (*((int *)t10) > 0)
        goto LAB8;

LAB9:    t12 = (t0 + 9660);
    if (*((int *)t12) > 0)
        goto LAB10;

LAB11:    if (t3 > 0)
        goto LAB12;

LAB13:    t15 = (t0 + 7752);
    *((int *)t15) = 0;

LAB14:
LAB1:    return;
LAB4:    t7 = (t0 + 5128);
    xsi_vlogvar_assignassignvalue(t7, t5, 0, 0, 0, 1, ((int*)(t6)));
    t3 = 1;
    goto LAB5;

LAB6:    t9 = (t0 + 4968);
    xsi_vlogvar_assignassignvalue(t9, t5, 0, 1, 0, 1, ((int*)(t8)));
    t3 = 1;
    goto LAB7;

LAB8:    t11 = (t0 + 4808);
    xsi_vlogvar_assignassignvalue(t11, t5, 0, 2, 0, 1, ((int*)(t10)));
    t3 = 1;
    goto LAB9;

LAB10:    t13 = (t0 + 4648);
    xsi_vlogvar_assignassignvalue(t13, t5, 0, 3, 0, 1, ((int*)(t12)));
    t3 = 1;
    goto LAB11;

LAB12:    t14 = (t0 + 7752);
    *((int *)t14) = 1;
    goto LAB14;

}

static void NetReassign_121_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
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

LAB0:    t1 = (t0 + 7184U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(121, ng0);
    t3 = 0;
    t2 = (t0 + 3368);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 9664);
    if (*((int *)t6) > 0)
        goto LAB4;

LAB5:    t8 = (t0 + 9668);
    if (*((int *)t8) > 0)
        goto LAB6;

LAB7:    t10 = (t0 + 9672);
    if (*((int *)t10) > 0)
        goto LAB8;

LAB9:    t12 = (t0 + 9676);
    if (*((int *)t12) > 0)
        goto LAB10;

LAB11:    if (t3 > 0)
        goto LAB12;

LAB13:    t15 = (t0 + 7768);
    *((int *)t15) = 0;

LAB14:
LAB1:    return;
LAB4:    t7 = (t0 + 4488);
    xsi_vlogvar_assignassignvalue(t7, t5, 0, 0, 0, 1, ((int*)(t6)));
    t3 = 1;
    goto LAB5;

LAB6:    t9 = (t0 + 4328);
    xsi_vlogvar_assignassignvalue(t9, t5, 0, 1, 0, 1, ((int*)(t8)));
    t3 = 1;
    goto LAB7;

LAB8:    t11 = (t0 + 4168);
    xsi_vlogvar_assignassignvalue(t11, t5, 0, 2, 0, 1, ((int*)(t10)));
    t3 = 1;
    goto LAB9;

LAB10:    t13 = (t0 + 4008);
    xsi_vlogvar_assignassignvalue(t13, t5, 0, 3, 0, 1, ((int*)(t12)));
    t3 = 1;
    goto LAB11;

LAB12:    t14 = (t0 + 7768);
    *((int *)t14) = 1;
    goto LAB14;

}

static void NetReassign_123_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    t1 = (t0 + 7432U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(123, ng0);
    t3 = 0;
    t2 = (t0 + 3208);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 9680);
    if (*((int *)t6) > 0)
        goto LAB4;

LAB5:    t8 = (t0 + 9684);
    if (*((int *)t8) > 0)
        goto LAB6;

LAB7:    if (t3 > 0)
        goto LAB8;

LAB9:    t11 = (t0 + 7784);
    *((int *)t11) = 0;

LAB10:
LAB1:    return;
LAB4:    t7 = (t0 + 3848);
    xsi_vlogvar_assignassignvalue(t7, t5, 0, 0, 0, 1, ((int*)(t6)));
    t3 = 1;
    goto LAB5;

LAB6:    t9 = (t0 + 3688);
    xsi_vlogvar_assignassignvalue(t9, t5, 0, 1, 0, 1, ((int*)(t8)));
    t3 = 1;
    goto LAB7;

LAB8:    t10 = (t0 + 7784);
    *((int *)t10) = 1;
    goto LAB10;

}


extern void work_m_00000000001163409251_1657136808_init()
{
	static char *pe[] = {(void *)Initial_89_0,(void *)NetReassign_119_1,(void *)NetReassign_121_2,(void *)NetReassign_123_3};
	xsi_register_didat("work_m_00000000001163409251_1657136808", "isim/t_main_isim_beh.exe.sim/work/m_00000000001163409251_1657136808.didat");
	xsi_register_executes(pe);
}
