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
static const char *ng0 = "C:/Users/ohike/Studying/Verilog/i4001/SelectorRom.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {8U, 0U};
static unsigned int ng8[] = {16U, 0U};
static unsigned int ng9[] = {5U, 0U};
static unsigned int ng10[] = {32U, 0U};
static unsigned int ng11[] = {6U, 0U};
static unsigned int ng12[] = {64U, 0U};
static unsigned int ng13[] = {7U, 0U};
static unsigned int ng14[] = {128U, 0U};
static unsigned int ng15[] = {256U, 0U};
static unsigned int ng16[] = {9U, 0U};
static unsigned int ng17[] = {512U, 0U};
static unsigned int ng18[] = {10U, 0U};
static unsigned int ng19[] = {1024U, 0U};
static unsigned int ng20[] = {11U, 0U};
static unsigned int ng21[] = {2048U, 0U};
static unsigned int ng22[] = {12U, 0U};
static unsigned int ng23[] = {4096U, 0U};
static unsigned int ng24[] = {13U, 0U};
static unsigned int ng25[] = {8192U, 0U};
static unsigned int ng26[] = {14U, 0U};
static unsigned int ng27[] = {16384U, 0U};
static unsigned int ng28[] = {15U, 0U};
static unsigned int ng29[] = {32768U, 0U};



static void Always_27_0(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
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
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    int t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 2848);
    *((int *)t2) = 1;
    t3 = (t0 + 2560);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(27, ng0);

LAB5:    xsi_set_current_line(28, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(48, ng0);

LAB50:    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);

LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(28, ng0);

LAB13:    xsi_set_current_line(29, ng0);
    t28 = (t0 + 1048U);
    t29 = *((char **)t28);

LAB14:    t28 = ((char*)((ng2)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 4, t28, 4);
    if (t30 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng3)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 4, t2, 4);
    if (t30 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng4)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 4, t2, 4);
    if (t30 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng6)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 4, t2, 4);
    if (t30 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng5)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 4, t2, 4);
    if (t30 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng9)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 4, t2, 4);
    if (t30 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng11)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 4, t2, 4);
    if (t30 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng13)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 4, t2, 4);
    if (t30 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng7)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 4, t2, 4);
    if (t30 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng16)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 4, t2, 4);
    if (t30 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng18)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 4, t2, 4);
    if (t30 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng20)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 4, t2, 4);
    if (t30 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng22)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 4, t2, 4);
    if (t30 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng24)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 4, t2, 4);
    if (t30 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng26)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 4, t2, 4);
    if (t30 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng28)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 4, t2, 4);
    if (t30 == 1)
        goto LAB45;

LAB46:
LAB48:
LAB47:    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);

LAB49:    goto LAB12;

LAB15:    xsi_set_current_line(30, ng0);
    t31 = ((char*)((ng3)));
    t32 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 16, 0LL);
    goto LAB49;

LAB17:    xsi_set_current_line(31, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 16, 0LL);
    goto LAB49;

LAB19:    xsi_set_current_line(32, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 16, 0LL);
    goto LAB49;

LAB21:    xsi_set_current_line(33, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 16, 0LL);
    goto LAB49;

LAB23:    xsi_set_current_line(34, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 16, 0LL);
    goto LAB49;

LAB25:    xsi_set_current_line(35, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 16, 0LL);
    goto LAB49;

LAB27:    xsi_set_current_line(36, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 16, 0LL);
    goto LAB49;

LAB29:    xsi_set_current_line(37, ng0);
    t3 = ((char*)((ng14)));
    t4 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 16, 0LL);
    goto LAB49;

LAB31:    xsi_set_current_line(38, ng0);
    t3 = ((char*)((ng15)));
    t4 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 16, 0LL);
    goto LAB49;

LAB33:    xsi_set_current_line(39, ng0);
    t3 = ((char*)((ng17)));
    t4 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 16, 0LL);
    goto LAB49;

LAB35:    xsi_set_current_line(40, ng0);
    t3 = ((char*)((ng19)));
    t4 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 16, 0LL);
    goto LAB49;

LAB37:    xsi_set_current_line(41, ng0);
    t3 = ((char*)((ng21)));
    t4 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 16, 0LL);
    goto LAB49;

LAB39:    xsi_set_current_line(42, ng0);
    t3 = ((char*)((ng23)));
    t4 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 16, 0LL);
    goto LAB49;

LAB41:    xsi_set_current_line(43, ng0);
    t3 = ((char*)((ng25)));
    t4 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 16, 0LL);
    goto LAB49;

LAB43:    xsi_set_current_line(44, ng0);
    t3 = ((char*)((ng27)));
    t4 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 16, 0LL);
    goto LAB49;

LAB45:    xsi_set_current_line(45, ng0);
    t3 = ((char*)((ng29)));
    t4 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 16, 0LL);
    goto LAB49;

}


extern void work_m_00000000001998130370_2567450189_init()
{
	static char *pe[] = {(void *)Always_27_0};
	xsi_register_didat("work_m_00000000001998130370_2567450189", "isim/Main_isim_beh.exe.sim/work/m_00000000001998130370_2567450189.didat");
	xsi_register_executes(pe);
}
