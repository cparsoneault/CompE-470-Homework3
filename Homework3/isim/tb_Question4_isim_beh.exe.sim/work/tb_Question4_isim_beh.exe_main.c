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
    work_m_00000000001741238885_2700870742_init();
    work_m_00000000001741238885_0206130010_init();
    work_m_00000000003844435411_2800866417_init();
    work_m_00000000004186954364_2856296624_init();
    work_m_00000000001702752410_1685918685_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001702752410_1685918685");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
