TExecFunc arrow_binary_decode() { return MakeIndirectExec<true, false>(&binary_decode); }
TExecFunc arrow_binary_encode() { return MakeIndirectExec<true, false>(&binary_encode); }
TExecFunc arrow_box_above() { return MakeIndirectExec<true, true>(&box_above); }
TExecFunc arrow_box_above_eq() { return MakeIndirectExec<true, true>(&box_above_eq); }
TExecFunc arrow_box_add() { return MakeIndirectExec<true, false>(&box_add); }
TExecFunc arrow_box_area() { return MakeIndirectExec<true, true>(&box_area); }
TExecFunc arrow_box_below() { return MakeIndirectExec<true, true>(&box_below); }
TExecFunc arrow_box_below_eq() { return MakeIndirectExec<true, true>(&box_below_eq); }
TExecFunc arrow_box_center() { return MakeIndirectExec<true, false>(&box_center); }
TExecFunc arrow_box_circle() { return MakeIndirectExec<true, false>(&box_circle); }
TExecFunc arrow_box_contain() { return MakeIndirectExec<true, true>(&box_contain); }
TExecFunc arrow_box_contain_pt() { return MakeIndirectExec<true, true>(&box_contain_pt); }
TExecFunc arrow_box_contained() { return MakeIndirectExec<true, true>(&box_contained); }
TExecFunc arrow_box_diagonal() { return MakeIndirectExec<true, false>(&box_diagonal); }
TExecFunc arrow_box_distance() { return MakeIndirectExec<true, true>(&box_distance); }
TExecFunc arrow_box_div() { return MakeIndirectExec<true, false>(&box_div); }
TExecFunc arrow_box_eq() { return MakeIndirectExec<true, true>(&box_eq); }
TExecFunc arrow_box_ge() { return MakeIndirectExec<true, true>(&box_ge); }
TExecFunc arrow_box_gt() { return MakeIndirectExec<true, true>(&box_gt); }
TExecFunc arrow_box_height() { return MakeIndirectExec<true, true>(&box_height); }
TExecFunc arrow_box_in() { return MakeIndirectExec<true, false>(&box_in); }
TExecFunc arrow_box_intersect() { return MakeIndirectExec<true, false>(&box_intersect); }
TExecFunc arrow_box_le() { return MakeIndirectExec<true, true>(&box_le); }
TExecFunc arrow_box_left() { return MakeIndirectExec<true, true>(&box_left); }
TExecFunc arrow_box_lt() { return MakeIndirectExec<true, true>(&box_lt); }
TExecFunc arrow_box_mul() { return MakeIndirectExec<true, false>(&box_mul); }
TExecFunc arrow_box_out() { return MakeIndirectExec<true, false>(&box_out); }
TExecFunc arrow_box_overabove() { return MakeIndirectExec<true, true>(&box_overabove); }
TExecFunc arrow_box_overbelow() { return MakeIndirectExec<true, true>(&box_overbelow); }
TExecFunc arrow_box_overlap() { return MakeIndirectExec<true, true>(&box_overlap); }
TExecFunc arrow_box_overleft() { return MakeIndirectExec<true, true>(&box_overleft); }
TExecFunc arrow_box_overright() { return MakeIndirectExec<true, true>(&box_overright); }
TExecFunc arrow_box_poly() { return MakeIndirectExec<true, false>(&box_poly); }
TExecFunc arrow_box_recv() { return MakeIndirectExec<true, false>(&box_recv); }
TExecFunc arrow_box_right() { return MakeIndirectExec<true, true>(&box_right); }
TExecFunc arrow_box_same() { return MakeIndirectExec<true, true>(&box_same); }
TExecFunc arrow_box_send() { return MakeIndirectExec<true, false>(&box_send); }
TExecFunc arrow_box_sub() { return MakeIndirectExec<true, false>(&box_sub); }
TExecFunc arrow_box_width() { return MakeIndirectExec<true, true>(&box_width); }
TExecFunc arrow_boxes_bound_box() { return MakeIndirectExec<true, false>(&boxes_bound_box); }
TExecFunc arrow_circle_above() { return MakeIndirectExec<true, true>(&circle_above); }
TExecFunc arrow_circle_add_pt() { return MakeIndirectExec<true, false>(&circle_add_pt); }
TExecFunc arrow_circle_area() { return MakeIndirectExec<true, true>(&circle_area); }
TExecFunc arrow_circle_below() { return MakeIndirectExec<true, true>(&circle_below); }
TExecFunc arrow_circle_box() { return MakeIndirectExec<true, false>(&circle_box); }
TExecFunc arrow_circle_center() { return MakeIndirectExec<true, false>(&circle_center); }
TExecFunc arrow_circle_contain() { return MakeIndirectExec<true, true>(&circle_contain); }
TExecFunc arrow_circle_contain_pt() { return MakeIndirectExec<true, true>(&circle_contain_pt); }
TExecFunc arrow_circle_contained() { return MakeIndirectExec<true, true>(&circle_contained); }
TExecFunc arrow_circle_diameter() { return MakeIndirectExec<true, true>(&circle_diameter); }
TExecFunc arrow_circle_distance() { return MakeIndirectExec<true, true>(&circle_distance); }
TExecFunc arrow_circle_div_pt() { return MakeIndirectExec<true, false>(&circle_div_pt); }
TExecFunc arrow_circle_eq() { return MakeIndirectExec<true, true>(&circle_eq); }
TExecFunc arrow_circle_ge() { return MakeIndirectExec<true, true>(&circle_ge); }
TExecFunc arrow_circle_gt() { return MakeIndirectExec<true, true>(&circle_gt); }
TExecFunc arrow_circle_in() { return MakeIndirectExec<true, false>(&circle_in); }
TExecFunc arrow_circle_le() { return MakeIndirectExec<true, true>(&circle_le); }
TExecFunc arrow_circle_left() { return MakeIndirectExec<true, true>(&circle_left); }
TExecFunc arrow_circle_lt() { return MakeIndirectExec<true, true>(&circle_lt); }
TExecFunc arrow_circle_mul_pt() { return MakeIndirectExec<true, false>(&circle_mul_pt); }
TExecFunc arrow_circle_ne() { return MakeIndirectExec<true, true>(&circle_ne); }
TExecFunc arrow_circle_out() { return MakeIndirectExec<true, false>(&circle_out); }
TExecFunc arrow_circle_overabove() { return MakeIndirectExec<true, true>(&circle_overabove); }
TExecFunc arrow_circle_overbelow() { return MakeIndirectExec<true, true>(&circle_overbelow); }
TExecFunc arrow_circle_overlap() { return MakeIndirectExec<true, true>(&circle_overlap); }
TExecFunc arrow_circle_overleft() { return MakeIndirectExec<true, true>(&circle_overleft); }
TExecFunc arrow_circle_overright() { return MakeIndirectExec<true, true>(&circle_overright); }
TExecFunc arrow_circle_poly() { return MakeIndirectExec<true, false>(&circle_poly); }
TExecFunc arrow_circle_radius() { return MakeIndirectExec<true, true>(&circle_radius); }
TExecFunc arrow_circle_recv() { return MakeIndirectExec<true, false>(&circle_recv); }
TExecFunc arrow_circle_right() { return MakeIndirectExec<true, true>(&circle_right); }
TExecFunc arrow_circle_same() { return MakeIndirectExec<true, true>(&circle_same); }
TExecFunc arrow_circle_send() { return MakeIndirectExec<true, false>(&circle_send); }
TExecFunc arrow_circle_sub_pt() { return MakeIndirectExec<true, false>(&circle_sub_pt); }
TExecFunc arrow_close_ls() { return MakeIndirectExec<true, false>(&close_ls); }
TExecFunc arrow_close_lseg() { return MakeIndirectExec<true, false>(&close_lseg); }
TExecFunc arrow_close_pb() { return MakeIndirectExec<true, false>(&close_pb); }
TExecFunc arrow_close_pl() { return MakeIndirectExec<true, false>(&close_pl); }
TExecFunc arrow_close_ps() { return MakeIndirectExec<true, false>(&close_ps); }
TExecFunc arrow_close_sb() { return MakeIndirectExec<true, false>(&close_sb); }
TExecFunc arrow_construct_point() { return MakeIndirectExec<true, false>(&construct_point); }
TExecFunc arrow_cr_circle() { return MakeIndirectExec<true, false>(&cr_circle); }
TExecFunc arrow_dist_bp() { return MakeIndirectExec<true, true>(&dist_bp); }
TExecFunc arrow_dist_bs() { return MakeIndirectExec<true, true>(&dist_bs); }
TExecFunc arrow_dist_cpoint() { return MakeIndirectExec<true, true>(&dist_cpoint); }
TExecFunc arrow_dist_cpoly() { return MakeIndirectExec<true, true>(&dist_cpoly); }
TExecFunc arrow_dist_lp() { return MakeIndirectExec<true, true>(&dist_lp); }
TExecFunc arrow_dist_ls() { return MakeIndirectExec<true, true>(&dist_ls); }
TExecFunc arrow_dist_pathp() { return MakeIndirectExec<true, true>(&dist_pathp); }
TExecFunc arrow_dist_pb() { return MakeIndirectExec<true, true>(&dist_pb); }
TExecFunc arrow_dist_pc() { return MakeIndirectExec<true, true>(&dist_pc); }
TExecFunc arrow_dist_pl() { return MakeIndirectExec<true, true>(&dist_pl); }
TExecFunc arrow_dist_polyc() { return MakeIndirectExec<true, true>(&dist_polyc); }
TExecFunc arrow_dist_polyp() { return MakeIndirectExec<true, true>(&dist_polyp); }
TExecFunc arrow_dist_ppath() { return MakeIndirectExec<true, true>(&dist_ppath); }
TExecFunc arrow_dist_ppoly() { return MakeIndirectExec<true, true>(&dist_ppoly); }
TExecFunc arrow_dist_ps() { return MakeIndirectExec<true, true>(&dist_ps); }
TExecFunc arrow_dist_sb() { return MakeIndirectExec<true, true>(&dist_sb); }
TExecFunc arrow_dist_sl() { return MakeIndirectExec<true, true>(&dist_sl); }
TExecFunc arrow_dist_sp() { return MakeIndirectExec<true, true>(&dist_sp); }
TExecFunc arrow_inter_lb() { return MakeIndirectExec<true, true>(&inter_lb); }
TExecFunc arrow_inter_sb() { return MakeIndirectExec<true, true>(&inter_sb); }
TExecFunc arrow_inter_sl() { return MakeIndirectExec<true, true>(&inter_sl); }
TExecFunc arrow_line_construct_pp() { return MakeIndirectExec<true, false>(&line_construct_pp); }
TExecFunc arrow_line_distance() { return MakeIndirectExec<true, true>(&line_distance); }
TExecFunc arrow_line_eq() { return MakeIndirectExec<true, true>(&line_eq); }
TExecFunc arrow_line_horizontal() { return MakeIndirectExec<true, true>(&line_horizontal); }
TExecFunc arrow_line_in() { return MakeIndirectExec<true, false>(&line_in); }
TExecFunc arrow_line_interpt() { return MakeIndirectExec<true, false>(&line_interpt); }
TExecFunc arrow_line_intersect() { return MakeIndirectExec<true, true>(&line_intersect); }
TExecFunc arrow_line_out() { return MakeIndirectExec<true, false>(&line_out); }
TExecFunc arrow_line_parallel() { return MakeIndirectExec<true, true>(&line_parallel); }
TExecFunc arrow_line_perp() { return MakeIndirectExec<true, true>(&line_perp); }
TExecFunc arrow_line_recv() { return MakeIndirectExec<true, false>(&line_recv); }
TExecFunc arrow_line_send() { return MakeIndirectExec<true, false>(&line_send); }
TExecFunc arrow_line_vertical() { return MakeIndirectExec<true, true>(&line_vertical); }
TExecFunc arrow_lseg_center() { return MakeIndirectExec<true, false>(&lseg_center); }
TExecFunc arrow_lseg_construct() { return MakeIndirectExec<true, false>(&lseg_construct); }
TExecFunc arrow_lseg_distance() { return MakeIndirectExec<true, true>(&lseg_distance); }
TExecFunc arrow_lseg_eq() { return MakeIndirectExec<true, true>(&lseg_eq); }
TExecFunc arrow_lseg_ge() { return MakeIndirectExec<true, true>(&lseg_ge); }
TExecFunc arrow_lseg_gt() { return MakeIndirectExec<true, true>(&lseg_gt); }
TExecFunc arrow_lseg_horizontal() { return MakeIndirectExec<true, true>(&lseg_horizontal); }
TExecFunc arrow_lseg_in() { return MakeIndirectExec<true, false>(&lseg_in); }
TExecFunc arrow_lseg_interpt() { return MakeIndirectExec<true, false>(&lseg_interpt); }
TExecFunc arrow_lseg_intersect() { return MakeIndirectExec<true, true>(&lseg_intersect); }
TExecFunc arrow_lseg_le() { return MakeIndirectExec<true, true>(&lseg_le); }
TExecFunc arrow_lseg_length() { return MakeIndirectExec<true, true>(&lseg_length); }
TExecFunc arrow_lseg_lt() { return MakeIndirectExec<true, true>(&lseg_lt); }
TExecFunc arrow_lseg_ne() { return MakeIndirectExec<true, true>(&lseg_ne); }
TExecFunc arrow_lseg_out() { return MakeIndirectExec<true, false>(&lseg_out); }
TExecFunc arrow_lseg_parallel() { return MakeIndirectExec<true, true>(&lseg_parallel); }
TExecFunc arrow_lseg_perp() { return MakeIndirectExec<true, true>(&lseg_perp); }
TExecFunc arrow_lseg_recv() { return MakeIndirectExec<true, false>(&lseg_recv); }
TExecFunc arrow_lseg_send() { return MakeIndirectExec<true, false>(&lseg_send); }
TExecFunc arrow_lseg_vertical() { return MakeIndirectExec<true, true>(&lseg_vertical); }
TExecFunc arrow_on_pb() { return MakeIndirectExec<true, true>(&on_pb); }
TExecFunc arrow_on_pl() { return MakeIndirectExec<true, true>(&on_pl); }
TExecFunc arrow_on_ppath() { return MakeIndirectExec<true, true>(&on_ppath); }
TExecFunc arrow_on_ps() { return MakeIndirectExec<true, true>(&on_ps); }
TExecFunc arrow_on_sb() { return MakeIndirectExec<true, true>(&on_sb); }
TExecFunc arrow_on_sl() { return MakeIndirectExec<true, true>(&on_sl); }
TExecFunc arrow_path_add() { return MakeIndirectExec<true, false>(&path_add); }
TExecFunc arrow_path_add_pt() { return MakeIndirectExec<true, false>(&path_add_pt); }
TExecFunc arrow_path_area() { return MakeIndirectExec<true, true>(&path_area); }
TExecFunc arrow_path_close() { return MakeIndirectExec<true, false>(&path_close); }
TExecFunc arrow_path_distance() { return MakeIndirectExec<true, true>(&path_distance); }
TExecFunc arrow_path_div_pt() { return MakeIndirectExec<true, false>(&path_div_pt); }
TExecFunc arrow_path_in() { return MakeIndirectExec<true, false>(&path_in); }
TExecFunc arrow_path_inter() { return MakeIndirectExec<true, true>(&path_inter); }
TExecFunc arrow_path_isclosed() { return MakeIndirectExec<true, true>(&path_isclosed); }
TExecFunc arrow_path_isopen() { return MakeIndirectExec<true, true>(&path_isopen); }
TExecFunc arrow_path_length() { return MakeIndirectExec<true, true>(&path_length); }
TExecFunc arrow_path_mul_pt() { return MakeIndirectExec<true, false>(&path_mul_pt); }
TExecFunc arrow_path_n_eq() { return MakeIndirectExec<true, true>(&path_n_eq); }
TExecFunc arrow_path_n_ge() { return MakeIndirectExec<true, true>(&path_n_ge); }
TExecFunc arrow_path_n_gt() { return MakeIndirectExec<true, true>(&path_n_gt); }
TExecFunc arrow_path_n_le() { return MakeIndirectExec<true, true>(&path_n_le); }
TExecFunc arrow_path_n_lt() { return MakeIndirectExec<true, true>(&path_n_lt); }
TExecFunc arrow_path_npoints() { return MakeIndirectExec<true, true>(&path_npoints); }
TExecFunc arrow_path_open() { return MakeIndirectExec<true, false>(&path_open); }
TExecFunc arrow_path_out() { return MakeIndirectExec<true, false>(&path_out); }
TExecFunc arrow_path_poly() { return MakeIndirectExec<true, false>(&path_poly); }
TExecFunc arrow_path_recv() { return MakeIndirectExec<true, false>(&path_recv); }
TExecFunc arrow_path_send() { return MakeIndirectExec<true, false>(&path_send); }
TExecFunc arrow_path_sub_pt() { return MakeIndirectExec<true, false>(&path_sub_pt); }
TExecFunc arrow_pg_copy_logical_replication_slot_a() { return MakeIndirectExec<true, false>(&pg_copy_logical_replication_slot_a); }
TExecFunc arrow_pg_copy_logical_replication_slot_b() { return MakeIndirectExec<true, false>(&pg_copy_logical_replication_slot_b); }
TExecFunc arrow_pg_copy_logical_replication_slot_c() { return MakeIndirectExec<true, false>(&pg_copy_logical_replication_slot_c); }
TExecFunc arrow_pg_copy_physical_replication_slot_a() { return MakeIndirectExec<true, false>(&pg_copy_physical_replication_slot_a); }
TExecFunc arrow_pg_copy_physical_replication_slot_b() { return MakeIndirectExec<true, false>(&pg_copy_physical_replication_slot_b); }
TExecFunc arrow_pg_create_logical_replication_slot() { return MakeIndirectExec<true, false>(&pg_create_logical_replication_slot); }
TExecFunc arrow_pg_create_physical_replication_slot() { return MakeIndirectExec<true, false>(&pg_create_physical_replication_slot); }
TExecFunc arrow_pg_drop_replication_slot() { return MakeIndirectExec<true, true>(&pg_drop_replication_slot); }
TExecFunc arrow_pg_replication_slot_advance() { return MakeIndirectExec<true, false>(&pg_replication_slot_advance); }
TExecFunc arrow_point_above() { return MakeIndirectExec<true, true>(&point_above); }
TExecFunc arrow_point_add() { return MakeIndirectExec<true, false>(&point_add); }
TExecFunc arrow_point_below() { return MakeIndirectExec<true, true>(&point_below); }
TExecFunc arrow_point_box() { return MakeIndirectExec<true, false>(&point_box); }
TExecFunc arrow_point_distance() { return MakeIndirectExec<true, true>(&point_distance); }
TExecFunc arrow_point_div() { return MakeIndirectExec<true, false>(&point_div); }
TExecFunc arrow_point_eq() { return MakeIndirectExec<true, true>(&point_eq); }
TExecFunc arrow_point_horiz() { return MakeIndirectExec<true, true>(&point_horiz); }
TExecFunc arrow_point_in() { return MakeIndirectExec<true, false>(&point_in); }
TExecFunc arrow_point_left() { return MakeIndirectExec<true, true>(&point_left); }
TExecFunc arrow_point_mul() { return MakeIndirectExec<true, false>(&point_mul); }
TExecFunc arrow_point_ne() { return MakeIndirectExec<true, true>(&point_ne); }
TExecFunc arrow_point_out() { return MakeIndirectExec<true, false>(&point_out); }
TExecFunc arrow_point_recv() { return MakeIndirectExec<true, false>(&point_recv); }
TExecFunc arrow_point_right() { return MakeIndirectExec<true, true>(&point_right); }
TExecFunc arrow_point_send() { return MakeIndirectExec<true, false>(&point_send); }
TExecFunc arrow_point_slope() { return MakeIndirectExec<true, true>(&point_slope); }
TExecFunc arrow_point_sub() { return MakeIndirectExec<true, false>(&point_sub); }
TExecFunc arrow_point_vert() { return MakeIndirectExec<true, true>(&point_vert); }
TExecFunc arrow_points_box() { return MakeIndirectExec<true, false>(&points_box); }
TExecFunc arrow_poly_above() { return MakeIndirectExec<true, true>(&poly_above); }
TExecFunc arrow_poly_below() { return MakeIndirectExec<true, true>(&poly_below); }
TExecFunc arrow_poly_box() { return MakeIndirectExec<true, false>(&poly_box); }
TExecFunc arrow_poly_center() { return MakeIndirectExec<true, false>(&poly_center); }
TExecFunc arrow_poly_circle() { return MakeIndirectExec<true, false>(&poly_circle); }
TExecFunc arrow_poly_contain() { return MakeIndirectExec<true, true>(&poly_contain); }
TExecFunc arrow_poly_contain_pt() { return MakeIndirectExec<true, true>(&poly_contain_pt); }
TExecFunc arrow_poly_contained() { return MakeIndirectExec<true, true>(&poly_contained); }
TExecFunc arrow_poly_distance() { return MakeIndirectExec<true, true>(&poly_distance); }
TExecFunc arrow_poly_in() { return MakeIndirectExec<true, false>(&poly_in); }
TExecFunc arrow_poly_left() { return MakeIndirectExec<true, true>(&poly_left); }
TExecFunc arrow_poly_npoints() { return MakeIndirectExec<true, true>(&poly_npoints); }
TExecFunc arrow_poly_out() { return MakeIndirectExec<true, false>(&poly_out); }
TExecFunc arrow_poly_overabove() { return MakeIndirectExec<true, true>(&poly_overabove); }
TExecFunc arrow_poly_overbelow() { return MakeIndirectExec<true, true>(&poly_overbelow); }
TExecFunc arrow_poly_overlap() { return MakeIndirectExec<true, true>(&poly_overlap); }
TExecFunc arrow_poly_overleft() { return MakeIndirectExec<true, true>(&poly_overleft); }
TExecFunc arrow_poly_overright() { return MakeIndirectExec<true, true>(&poly_overright); }
TExecFunc arrow_poly_path() { return MakeIndirectExec<true, false>(&poly_path); }
TExecFunc arrow_poly_recv() { return MakeIndirectExec<true, false>(&poly_recv); }
TExecFunc arrow_poly_right() { return MakeIndirectExec<true, true>(&poly_right); }
TExecFunc arrow_poly_same() { return MakeIndirectExec<true, true>(&poly_same); }
TExecFunc arrow_poly_send() { return MakeIndirectExec<true, false>(&poly_send); }
TExecFunc arrow_pt_contained_circle() { return MakeIndirectExec<true, true>(&pt_contained_circle); }
TExecFunc arrow_pt_contained_poly() { return MakeIndirectExec<true, true>(&pt_contained_poly); }
TExecFunc arrow_spg_bbox_quad_config() { return MakeIndirectExec<true, true>(&spg_bbox_quad_config); }
TExecFunc arrow_spg_box_quad_choose() { return MakeIndirectExec<true, true>(&spg_box_quad_choose); }
TExecFunc arrow_spg_box_quad_config() { return MakeIndirectExec<true, true>(&spg_box_quad_config); }
TExecFunc arrow_spg_box_quad_inner_consistent() { return MakeIndirectExec<true, true>(&spg_box_quad_inner_consistent); }
TExecFunc arrow_spg_box_quad_leaf_consistent() { return MakeIndirectExec<true, true>(&spg_box_quad_leaf_consistent); }
TExecFunc arrow_spg_box_quad_picksplit() { return MakeIndirectExec<true, true>(&spg_box_quad_picksplit); }
TExecFunc arrow_spg_poly_quad_compress() { return MakeIndirectExec<true, false>(&spg_poly_quad_compress); }
TExecFunc arrow_tsmatchjoinsel() { return MakeIndirectExec<true, true>(&tsmatchjoinsel); }
TExecFunc arrow_tsmatchsel() { return MakeIndirectExec<true, true>(&tsmatchsel); }
TExecFunc arrow_tsquery_rewrite() { return MakeIndirectExec<true, false>(&tsquery_rewrite); }
TExecFunc arrow_tsquery_rewrite_query() { return MakeIndirectExec<true, false>(&tsquery_rewrite_query); }
