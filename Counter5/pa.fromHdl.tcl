
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name Counter5 -dir "C:/Users/fjsda/Studying/FPGA/Counter5/planAhead_run_1" -part xc6slx9tqg144-2
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "Counter.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {Counter.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top Counter $srcset
add_files [list {Counter.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc6slx9tqg144-2
