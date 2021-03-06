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
static const char *ng0 = "C:/Users/wasabi/Desktop/temp/final/final/Decoder8.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {252U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {96U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {218U, 0U};
static unsigned int ng7[] = {3U, 0U};
static unsigned int ng8[] = {242U, 0U};
static unsigned int ng9[] = {4U, 0U};
static unsigned int ng10[] = {102U, 0U};
static unsigned int ng11[] = {5U, 0U};
static unsigned int ng12[] = {182U, 0U};
static unsigned int ng13[] = {6U, 0U};
static unsigned int ng14[] = {190U, 0U};
static unsigned int ng15[] = {7U, 0U};
static unsigned int ng16[] = {224U, 0U};
static unsigned int ng17[] = {8U, 0U};
static unsigned int ng18[] = {254U, 0U};
static unsigned int ng19[] = {9U, 0U};
static unsigned int ng20[] = {230U, 0U};
static unsigned int ng21[] = {10U, 0U};
static unsigned int ng22[] = {222U, 0U};
static unsigned int ng23[] = {11U, 0U};
static unsigned int ng24[] = {238U, 0U};
static unsigned int ng25[] = {12U, 0U};
static unsigned int ng26[] = {248U, 0U};
static unsigned int ng27[] = {13U, 0U};
static unsigned int ng28[] = {189U, 0U};
static unsigned int ng29[] = {14U, 0U};
static unsigned int ng30[] = {15U, 0U};
static unsigned int ng31[] = {226U, 0U};



static void Always_23_0(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;

LAB0:    t1 = (t0 + 2368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 2688);
    *((int *)t2) = 1;
    t3 = (t0 + 2400);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(24, ng0);

LAB5:    xsi_set_current_line(25, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng17)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng19)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng21)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng23)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng25)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng27)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng29)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng30)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB37;

LAB38:
LAB40:
LAB39:    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng1)));
    memset(t7, 0, 8);
    t3 = (t7 + 4);
    t4 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    *((unsigned int *)t7) = t12;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t4) != 0)
        goto LAB75;

LAB74:    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 255U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 255U);
    t8 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 8, 0LL);

LAB41:    goto LAB2;

LAB7:    xsi_set_current_line(26, ng0);
    t8 = ((char*)((ng2)));
    memset(t7, 0, 8);
    t9 = (t7 + 4);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (~(t11));
    *((unsigned int *)t7) = t12;
    *((unsigned int *)t9) = 0;
    if (*((unsigned int *)t10) != 0)
        goto LAB43;

LAB42:    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 255U);
    t18 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t18 & 255U);
    t19 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t19, t7, 0, 0, 8, 0LL);
    goto LAB41;

LAB9:    xsi_set_current_line(27, ng0);
    t3 = ((char*)((ng4)));
    memset(t7, 0, 8);
    t4 = (t7 + 4);
    t8 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    *((unsigned int *)t7) = t12;
    *((unsigned int *)t4) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB45;

LAB44:    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 255U);
    t18 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t18 & 255U);
    t9 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t9, t7, 0, 0, 8, 0LL);
    goto LAB41;

LAB11:    xsi_set_current_line(28, ng0);
    t3 = ((char*)((ng6)));
    memset(t7, 0, 8);
    t4 = (t7 + 4);
    t8 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    *((unsigned int *)t7) = t12;
    *((unsigned int *)t4) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB47;

LAB46:    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 255U);
    t18 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t18 & 255U);
    t9 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t9, t7, 0, 0, 8, 0LL);
    goto LAB41;

LAB13:    xsi_set_current_line(29, ng0);
    t3 = ((char*)((ng8)));
    memset(t7, 0, 8);
    t4 = (t7 + 4);
    t8 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    *((unsigned int *)t7) = t12;
    *((unsigned int *)t4) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB49;

LAB48:    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 255U);
    t18 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t18 & 255U);
    t9 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t9, t7, 0, 0, 8, 0LL);
    goto LAB41;

LAB15:    xsi_set_current_line(30, ng0);
    t3 = ((char*)((ng10)));
    memset(t7, 0, 8);
    t4 = (t7 + 4);
    t8 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    *((unsigned int *)t7) = t12;
    *((unsigned int *)t4) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB51;

LAB50:    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 255U);
    t18 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t18 & 255U);
    t9 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t9, t7, 0, 0, 8, 0LL);
    goto LAB41;

LAB17:    xsi_set_current_line(31, ng0);
    t3 = ((char*)((ng12)));
    memset(t7, 0, 8);
    t4 = (t7 + 4);
    t8 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    *((unsigned int *)t7) = t12;
    *((unsigned int *)t4) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB53;

LAB52:    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 255U);
    t18 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t18 & 255U);
    t9 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t9, t7, 0, 0, 8, 0LL);
    goto LAB41;

LAB19:    xsi_set_current_line(32, ng0);
    t3 = ((char*)((ng14)));
    memset(t7, 0, 8);
    t4 = (t7 + 4);
    t8 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    *((unsigned int *)t7) = t12;
    *((unsigned int *)t4) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB55;

LAB54:    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 255U);
    t18 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t18 & 255U);
    t9 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t9, t7, 0, 0, 8, 0LL);
    goto LAB41;

LAB21:    xsi_set_current_line(33, ng0);
    t3 = ((char*)((ng16)));
    memset(t7, 0, 8);
    t4 = (t7 + 4);
    t8 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    *((unsigned int *)t7) = t12;
    *((unsigned int *)t4) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB57;

LAB56:    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 255U);
    t18 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t18 & 255U);
    t9 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t9, t7, 0, 0, 8, 0LL);
    goto LAB41;

LAB23:    xsi_set_current_line(34, ng0);
    t3 = ((char*)((ng18)));
    memset(t7, 0, 8);
    t4 = (t7 + 4);
    t8 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    *((unsigned int *)t7) = t12;
    *((unsigned int *)t4) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB59;

LAB58:    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 255U);
    t18 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t18 & 255U);
    t9 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t9, t7, 0, 0, 8, 0LL);
    goto LAB41;

LAB25:    xsi_set_current_line(35, ng0);
    t3 = ((char*)((ng20)));
    memset(t7, 0, 8);
    t4 = (t7 + 4);
    t8 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    *((unsigned int *)t7) = t12;
    *((unsigned int *)t4) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB61;

LAB60:    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 255U);
    t18 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t18 & 255U);
    t9 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t9, t7, 0, 0, 8, 0LL);
    goto LAB41;

LAB27:    xsi_set_current_line(36, ng0);
    t3 = ((char*)((ng22)));
    memset(t7, 0, 8);
    t4 = (t7 + 4);
    t8 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    *((unsigned int *)t7) = t12;
    *((unsigned int *)t4) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB63;

LAB62:    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 255U);
    t18 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t18 & 255U);
    t9 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t9, t7, 0, 0, 8, 0LL);
    goto LAB41;

LAB29:    xsi_set_current_line(37, ng0);
    t3 = ((char*)((ng24)));
    memset(t7, 0, 8);
    t4 = (t7 + 4);
    t8 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    *((unsigned int *)t7) = t12;
    *((unsigned int *)t4) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB65;

LAB64:    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 255U);
    t18 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t18 & 255U);
    t9 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t9, t7, 0, 0, 8, 0LL);
    goto LAB41;

LAB31:    xsi_set_current_line(38, ng0);
    t3 = ((char*)((ng26)));
    memset(t7, 0, 8);
    t4 = (t7 + 4);
    t8 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    *((unsigned int *)t7) = t12;
    *((unsigned int *)t4) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB67;

LAB66:    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 255U);
    t18 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t18 & 255U);
    t9 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t9, t7, 0, 0, 8, 0LL);
    goto LAB41;

LAB33:    xsi_set_current_line(39, ng0);
    t3 = ((char*)((ng28)));
    memset(t7, 0, 8);
    t4 = (t7 + 4);
    t8 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    *((unsigned int *)t7) = t12;
    *((unsigned int *)t4) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB69;

LAB68:    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 255U);
    t18 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t18 & 255U);
    t9 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t9, t7, 0, 0, 8, 0LL);
    goto LAB41;

LAB35:    xsi_set_current_line(40, ng0);
    t3 = ((char*)((ng8)));
    memset(t7, 0, 8);
    t4 = (t7 + 4);
    t8 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    *((unsigned int *)t7) = t12;
    *((unsigned int *)t4) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB71;

LAB70:    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 255U);
    t18 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t18 & 255U);
    t9 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t9, t7, 0, 0, 8, 0LL);
    goto LAB41;

LAB37:    xsi_set_current_line(41, ng0);
    t3 = ((char*)((ng31)));
    memset(t7, 0, 8);
    t4 = (t7 + 4);
    t8 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    *((unsigned int *)t7) = t12;
    *((unsigned int *)t4) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB73;

LAB72:    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 255U);
    t18 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t18 & 255U);
    t9 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t9, t7, 0, 0, 8, 0LL);
    goto LAB41;

LAB43:    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t10);
    *((unsigned int *)t7) = (t13 | t14);
    t15 = *((unsigned int *)t9);
    t16 = *((unsigned int *)t10);
    *((unsigned int *)t9) = (t15 | t16);
    goto LAB42;

LAB45:    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t13 | t14);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t4) = (t15 | t16);
    goto LAB44;

LAB47:    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t13 | t14);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t4) = (t15 | t16);
    goto LAB46;

LAB49:    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t13 | t14);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t4) = (t15 | t16);
    goto LAB48;

LAB51:    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t13 | t14);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t4) = (t15 | t16);
    goto LAB50;

LAB53:    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t13 | t14);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t4) = (t15 | t16);
    goto LAB52;

LAB55:    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t13 | t14);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t4) = (t15 | t16);
    goto LAB54;

LAB57:    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t13 | t14);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t4) = (t15 | t16);
    goto LAB56;

LAB59:    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t13 | t14);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t4) = (t15 | t16);
    goto LAB58;

LAB61:    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t13 | t14);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t4) = (t15 | t16);
    goto LAB60;

LAB63:    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t13 | t14);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t4) = (t15 | t16);
    goto LAB62;

LAB65:    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t13 | t14);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t4) = (t15 | t16);
    goto LAB64;

LAB67:    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t13 | t14);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t4) = (t15 | t16);
    goto LAB66;

LAB69:    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t13 | t14);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t4) = (t15 | t16);
    goto LAB68;

LAB71:    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t13 | t14);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t4) = (t15 | t16);
    goto LAB70;

LAB73:    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t13 | t14);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t4) = (t15 | t16);
    goto LAB72;

LAB75:    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t7) = (t13 | t14);
    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t4);
    *((unsigned int *)t3) = (t15 | t16);
    goto LAB74;

}


extern void work_m_00000000002944188509_4260226045_init()
{
	static char *pe[] = {(void *)Always_23_0};
	xsi_register_didat("work_m_00000000002944188509_4260226045", "isim/t_main_isim_beh.exe.sim/work/m_00000000002944188509_4260226045.didat");
	xsi_register_executes(pe);
}
