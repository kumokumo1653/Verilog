
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name segment7Module -dir "C:/Users/fjsda/Studying/Verilog/segment7Module/planAhead_run_4" -part xc6slx9tqg144-2
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "segment7.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {Divider.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {segment7.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top segment7 $srcset
add_files [list {segment7.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc6slx9tqg144-2
