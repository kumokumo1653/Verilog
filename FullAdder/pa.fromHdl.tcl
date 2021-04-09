
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name fulladder -dir "C:/Users/fjsda/Studying/FPGA/FullAdder/planAhead_run_2" -part xc6slx9tqg144-2
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "FullAdder.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {FullAdder.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top FullAdder $srcset
add_files [list {FullAdder.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc6slx9tqg144-2
