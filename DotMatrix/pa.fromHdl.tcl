
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name DotMatrix -dir "C:/Users/ohike/Studying/Verilog/DotMatrix/planAhead_run_1" -part xc6slx9tqg144-2
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "Main.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {Divider.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {Matrix.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {Main.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top Main $srcset
add_files [list {Main.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc6slx9tqg144-2
