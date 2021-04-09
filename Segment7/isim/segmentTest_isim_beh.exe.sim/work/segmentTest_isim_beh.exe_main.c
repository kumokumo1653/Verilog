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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000002940494513_3919802476_init();
    work_m_00000000002940494513_4196412144_init();
    work_m_00000000003003887928_1448365076_init();
    work_m_00000000002951379562_3700789657_init();
    work_m_00000000002625339573_3642967255_init();
    work_m_00000000003118092767_3422311471_init();
    work_m_00000000000189969991_2035480523_init();
    work_m_00000000003415283882_0416217130_init();
    work_m_00000000003963939567_3202900172_init();


    xsi_register_tops("work_m_00000000003963939567_3202900172");


    return xsi_run_simulation(argc, argv);

}
