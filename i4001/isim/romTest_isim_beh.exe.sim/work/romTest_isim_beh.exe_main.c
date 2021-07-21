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
    work_m_00000000001998130370_2567450189_init();
    xilinxcorelib_ver_m_00000000001358910285_3692054689_init();
    xilinxcorelib_ver_m_00000000001687936702_4083328711_init();
    xilinxcorelib_ver_m_00000000000277421008_3636866542_init();
    xilinxcorelib_ver_m_00000000001603977570_0384154275_init();
    work_m_00000000000403262735_2296714578_init();
    work_m_00000000000009324825_2306352867_init();
    work_m_00000000002516232586_3155701258_init();
    work_m_00000000003538572162_2136604625_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003538572162_2136604625");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
