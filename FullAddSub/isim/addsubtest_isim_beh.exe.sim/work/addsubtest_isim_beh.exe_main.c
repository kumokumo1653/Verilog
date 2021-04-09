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
    work_m_00000000003381371328_2811757443_init();
    work_m_00000000001290986635_0006150199_init();
    work_m_00000000000404865951_0042005176_init();
    work_m_00000000004083969155_2772773132_init();
    work_m_00000000000851606374_2596016755_init();
    work_m_00000000000282773018_3767489175_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000282773018_3767489175");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
