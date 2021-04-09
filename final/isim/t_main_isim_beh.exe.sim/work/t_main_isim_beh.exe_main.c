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
    work_m_00000000000412795831_2490150795_init();
    work_m_00000000002934960201_3642967255_init();
    work_m_00000000002558522064_3422311471_init();
    work_m_00000000003162743476_0448428560_init();
    work_m_00000000000046449038_2752377337_init();
    work_m_00000000002944188509_4260226045_init();
    work_m_00000000000047724607_0286164271_init();
    work_m_00000000001163409251_1657136808_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001163409251_1657136808");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
