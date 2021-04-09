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
    work_m_00000000002940494513_4196412144_init();
    work_m_00000000001536797947_0707350538_init();
    work_m_00000000003054833801_0367702543_init();
    work_m_00000000004259575392_3642967255_init();
    work_m_00000000003781895726_3422311471_init();
    work_m_00000000000189969991_2035480523_init();
    work_m_00000000002865156522_2973510161_init();
    work_m_00000000002464609660_0474747464_init();


    xsi_register_tops("work_m_00000000002464609660_0474747464");


    return xsi_run_simulation(argc, argv);

}
