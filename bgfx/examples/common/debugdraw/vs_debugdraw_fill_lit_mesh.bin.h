static const uint8_t vs_debugdraw_fill_lit_mesh_glsl[489] =
{
	0x56, 0x53, 0x48, 0x06, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xc8, 0x56, 0x5f, 0x03, 0x00, 0x06, 0x75, // VSH.......V_...u
	0x5f, 0x76, 0x69, 0x65, 0x77, 0x04, 0x01, 0x00, 0x00, 0x01, 0x00, 0x0a, 0x75, 0x5f, 0x76, 0x69, // _view.......u_vi
	0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0x00, 0x00, 0x01, 0x00, 0x07, 0x75, 0x5f, 0x6d, // ewProj.......u_m
	0x6f, 0x64, 0x65, 0x6c, 0x04, 0x20, 0x00, 0x00, 0x20, 0x00, 0xaa, 0x01, 0x00, 0x00, 0x61, 0x74, // odel. .. .....at
	0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, // tribute highp ve
	0x63, 0x33, 0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x3b, 0x0a, 0x76, // c3 a_position;.v
	0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, // arying highp vec
	0x33, 0x20, 0x76, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, // 3 v_view;.varyin
	0x67, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x76, 0x5f, 0x77, // g highp vec3 v_w
	0x6f, 0x72, 0x6c, 0x64, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x68, 0x69, // orld;.uniform hi
	0x67, 0x68, 0x70, 0x20, 0x6d, 0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x3b, // ghp mat4 u_view;
	0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x6d, // .uniform highp m
	0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x3b, 0x0a, // at4 u_viewProj;.
	0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x6d, 0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, 0x6d, // uniform mat4 u_m
	0x6f, 0x64, 0x65, 0x6c, 0x5b, 0x33, 0x32, 0x5d, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, // odel[32];.void m
	0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, // ain ().{.  highp
	0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x3b, 0x0a, //  vec4 tmpvar_1;.
	0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x31, //   tmpvar_1.w = 1
	0x2e, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x78, // .0;.  tmpvar_1.x
	0x79, 0x7a, 0x20, 0x3d, 0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x3b, // yz = a_position;
	0x0a, 0x20, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, // .  highp vec4 tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // pvar_2;.  tmpvar
	0x5f, 0x32, 0x20, 0x3d, 0x20, 0x28, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x5b, 0x30, 0x5d, // _2 = (u_model[0]
	0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x29, 0x3b, 0x0a, 0x20, 0x20, //  * tmpvar_1);.  
	0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x3d, 0x20, 0x28, 0x75, // gl_Position = (u
	0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, // _viewProj * tmpv
	0x61, 0x72, 0x5f, 0x32, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x20, // ar_2);.  v_view 
	0x3d, 0x20, 0x28, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, // = (u_view * tmpv
	0x61, 0x72, 0x5f, 0x32, 0x29, 0x2e, 0x78, 0x79, 0x7a, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x5f, 0x77, // ar_2).xyz;.  v_w
	0x6f, 0x72, 0x6c, 0x64, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, // orld = tmpvar_2.
	0x78, 0x79, 0x7a, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,                                           // xyz;.}...
};
static const uint8_t vs_debugdraw_fill_lit_mesh_spv[1662] =
{
	0x56, 0x53, 0x48, 0x06, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xc8, 0x56, 0x5f, 0x03, 0x00, 0x07, 0x75, // VSH.......V_...u
	0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x04, 0x01, 0x80, 0x00, 0x04, 0x00, 0x0a, 0x75, 0x5f, 0x76, // _model.......u_v
	0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0x40, 0x00, 0x04, 0x00, 0x06, 0x75, 0x5f, // iewProj..@....u_
	0x76, 0x69, 0x65, 0x77, 0x04, 0x01, 0x00, 0x00, 0x04, 0x00, 0x38, 0x06, 0x00, 0x00, 0x03, 0x02, // view......8.....
	0x23, 0x07, 0x00, 0x00, 0x01, 0x00, 0x07, 0x00, 0x08, 0x00, 0xa6, 0x00, 0x00, 0x00, 0x00, 0x00, // #...............
	0x00, 0x00, 0x11, 0x00, 0x02, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x06, 0x00, 0x01, 0x00, // ................
	0x00, 0x00, 0x47, 0x4c, 0x53, 0x4c, 0x2e, 0x73, 0x74, 0x64, 0x2e, 0x34, 0x35, 0x30, 0x00, 0x00, // ..GLSL.std.450..
	0x00, 0x00, 0x0e, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0f, 0x00, // ................
	0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, // ..........main..
	0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x4c, 0x00, 0x00, 0x00, 0x55, 0x00, 0x00, 0x00, 0x59, 0x00, // ..H...L...U...Y.
	0x00, 0x00, 0x5c, 0x00, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00, 0x05, 0x00, 0x00, 0x00, 0xf4, 0x01, // ................
	0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, // ..........main..
	0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x27, 0x00, 0x00, 0x00, 0x24, 0x47, 0x6c, 0x6f, 0x62, 0x61, // ......'...$Globa
	0x6c, 0x00, 0x06, 0x00, 0x05, 0x00, 0x27, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, // l.....'.......u_
	0x76, 0x69, 0x65, 0x77, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0x27, 0x00, 0x00, 0x00, 0x01, 0x00, // view......'.....
	0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0x00, 0x06, 0x00, // ..u_viewProj....
	0x05, 0x00, 0x27, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, // ..'.......u_mode
	0x6c, 0x00, 0x05, 0x00, 0x03, 0x00, 0x29, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, // l.....).........
	0x05, 0x00, 0x48, 0x00, 0x00, 0x00, 0x61, 0x5f, 0x69, 0x6e, 0x64, 0x69, 0x63, 0x65, 0x73, 0x00, // ..H...a_indices.
	0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x4c, 0x00, 0x00, 0x00, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, // ......L...a_posi
	0x74, 0x69, 0x6f, 0x6e, 0x00, 0x00, 0x05, 0x00, 0x0a, 0x00, 0x55, 0x00, 0x00, 0x00, 0x40, 0x65, // tion......U...@e
	0x6e, 0x74, 0x72, 0x79, 0x50, 0x6f, 0x69, 0x6e, 0x74, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x2e, // ntryPointOutput.
	0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x00, 0x00, 0x00, 0x05, 0x00, // gl_Position.....
	0x09, 0x00, 0x59, 0x00, 0x00, 0x00, 0x40, 0x65, 0x6e, 0x74, 0x72, 0x79, 0x50, 0x6f, 0x69, 0x6e, // ..Y...@entryPoin
	0x74, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x2e, 0x76, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x00, 0x00, // tOutput.v_view..
	0x00, 0x00, 0x05, 0x00, 0x09, 0x00, 0x5c, 0x00, 0x00, 0x00, 0x40, 0x65, 0x6e, 0x74, 0x72, 0x79, // ..........@entry
	0x50, 0x6f, 0x69, 0x6e, 0x74, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x2e, 0x76, 0x5f, 0x77, 0x6f, // PointOutput.v_wo
	0x72, 0x6c, 0x64, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x26, 0x00, 0x00, 0x00, 0x06, 0x00, // rld...G...&.....
	0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x27, 0x00, 0x00, 0x00, 0x00, 0x00, // ..@...H...'.....
	0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x27, 0x00, 0x00, 0x00, 0x00, 0x00, // ......H...'.....
	0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x27, 0x00, // ..#.......H...'.
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, // ..............H.
	0x04, 0x00, 0x27, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, // ..'...........H.
	0x05, 0x00, 0x27, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x40, 0x00, // ..'.......#...@.
	0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x27, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x07, 0x00, // ..H...'.........
	0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x27, 0x00, 0x00, 0x00, 0x02, 0x00, // ......H...'.....
	0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x27, 0x00, 0x00, 0x00, 0x02, 0x00, // ......H...'.....
	0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x27, 0x00, // ..#.......H...'.
	0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x47, 0x00, // ..............G.
	0x03, 0x00, 0x27, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x29, 0x00, // ..'.......G...).
	0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x29, 0x00, // ..".......G...).
	0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x48, 0x00, // ..!.......G...H.
	0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x4c, 0x00, // ..........G...L.
	0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x55, 0x00, // ..........G...U.
	0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x59, 0x00, // ..........G...Y.
	0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x5c, 0x00, // ..........G.....
	0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x13, 0x00, 0x02, 0x00, 0x02, 0x00, // ................
	0x00, 0x00, 0x21, 0x00, 0x03, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x15, 0x00, // ..!.............
	0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x17, 0x00, // ...... .........
	0x04, 0x00, 0x07, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x16, 0x00, // ................
	0x03, 0x00, 0x09, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x0a, 0x00, // ...... .........
	0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x0c, 0x00, // ................
	0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x15, 0x00, 0x04, 0x00, 0x15, 0x00, // ................
	0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x15, 0x00, // .. .......+.....
	0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x15, 0x00, // ..........+.....
	0x00, 0x00, 0x1a, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x09, 0x00, // ..........+.....
	0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f, 0x18, 0x00, 0x04, 0x00, 0x24, 0x00, // .........?....$.
	0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x06, 0x00, // ..........+.....
	0x00, 0x00, 0x25, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x04, 0x00, 0x26, 0x00, // ..%... .......&.
	0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x25, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x05, 0x00, 0x27, 0x00, // ..$...%.......'.
	0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, 0x00, 0x20, 0x00, // ..$...$...&... .
	0x04, 0x00, 0x28, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x27, 0x00, 0x00, 0x00, 0x3b, 0x00, // ..(.......'...;.
	0x04, 0x00, 0x28, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x2b, 0x00, // ..(...).......+.
	0x04, 0x00, 0x15, 0x00, 0x00, 0x00, 0x2a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, // ......*....... .
	0x04, 0x00, 0x2b, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x20, 0x00, // ..+.......$... .
	0x04, 0x00, 0x47, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x3b, 0x00, // ..G...........;.
	0x04, 0x00, 0x47, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, // ..G...H....... .
	0x04, 0x00, 0x4b, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x3b, 0x00, // ..K...........;.
	0x04, 0x00, 0x4b, 0x00, 0x00, 0x00, 0x4c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, // ..K...L....... .
	0x04, 0x00, 0x54, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x3b, 0x00, // ..T...........;.
	0x04, 0x00, 0x54, 0x00, 0x00, 0x00, 0x55, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x20, 0x00, // ..T...U....... .
	0x04, 0x00, 0x58, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x3b, 0x00, // ..X...........;.
	0x04, 0x00, 0x58, 0x00, 0x00, 0x00, 0x59, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x3b, 0x00, // ..X...Y.......;.
	0x04, 0x00, 0x58, 0x00, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x36, 0x00, // ..X...........6.
	0x05, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, // ................
	0x00, 0x00, 0xf8, 0x00, 0x02, 0x00, 0x05, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x0a, 0x00, // ..........=.....
	0x00, 0x00, 0x4d, 0x00, 0x00, 0x00, 0x4c, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x09, 0x00, // ..M...L...Q.....
	0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x4d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x51, 0x00, // ..p...M.......Q.
	0x05, 0x00, 0x09, 0x00, 0x00, 0x00, 0x71, 0x00, 0x00, 0x00, 0x4d, 0x00, 0x00, 0x00, 0x01, 0x00, // ......q...M.....
	0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x09, 0x00, 0x00, 0x00, 0x72, 0x00, 0x00, 0x00, 0x4d, 0x00, // ..Q.......r...M.
	0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x50, 0x00, 0x07, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x73, 0x00, // ......P.......s.
	0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x71, 0x00, 0x00, 0x00, 0x72, 0x00, 0x00, 0x00, 0x1f, 0x00, // ..p...q...r.....
	0x00, 0x00, 0x41, 0x00, 0x06, 0x00, 0x2b, 0x00, 0x00, 0x00, 0x74, 0x00, 0x00, 0x00, 0x29, 0x00, // ..A...+...t...).
	0x00, 0x00, 0x1a, 0x00, 0x00, 0x00, 0x2a, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x24, 0x00, // ......*...=...$.
	0x00, 0x00, 0x75, 0x00, 0x00, 0x00, 0x74, 0x00, 0x00, 0x00, 0x90, 0x00, 0x05, 0x00, 0x0c, 0x00, // ..u...t.........
	0x00, 0x00, 0x76, 0x00, 0x00, 0x00, 0x73, 0x00, 0x00, 0x00, 0x75, 0x00, 0x00, 0x00, 0x41, 0x00, // ..v...s...u...A.
	0x05, 0x00, 0x2b, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00, 0x16, 0x00, // ..+...x...).....
	0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x24, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x78, 0x00, // ..=...$...y...x.
	0x00, 0x00, 0x90, 0x00, 0x05, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x7a, 0x00, 0x00, 0x00, 0x76, 0x00, // ..........z...v.
	0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x41, 0x00, 0x05, 0x00, 0x2b, 0x00, 0x00, 0x00, 0x7d, 0x00, // ..y...A...+...}.
	0x00, 0x00, 0x29, 0x00, 0x00, 0x00, 0x2a, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x24, 0x00, // ..)...*...=...$.
	0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x7d, 0x00, 0x00, 0x00, 0x90, 0x00, 0x05, 0x00, 0x0c, 0x00, // ..~...}.........
	0x00, 0x00, 0x7f, 0x00, 0x00, 0x00, 0x76, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x4f, 0x00, // ......v...~...O.
	0x08, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x7f, 0x00, 0x00, 0x00, 0x7f, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x4f, 0x00, // ..............O.
	0x08, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x83, 0x00, 0x00, 0x00, 0x76, 0x00, 0x00, 0x00, 0x76, 0x00, // ..........v...v.
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x51, 0x00, // ..............Q.
	0x05, 0x00, 0x09, 0x00, 0x00, 0x00, 0x86, 0x00, 0x00, 0x00, 0x7a, 0x00, 0x00, 0x00, 0x01, 0x00, // ..........z.....
	0x00, 0x00, 0x7f, 0x00, 0x04, 0x00, 0x09, 0x00, 0x00, 0x00, 0x87, 0x00, 0x00, 0x00, 0x86, 0x00, // ................
	0x00, 0x00, 0x52, 0x00, 0x06, 0x00, 0x0c, 0x00, 0x00, 0x00, 0xa5, 0x00, 0x00, 0x00, 0x87, 0x00, // ..R.............
	0x00, 0x00, 0x7a, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x55, 0x00, // ..z.......>...U.
	0x00, 0x00, 0xa5, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x59, 0x00, 0x00, 0x00, 0x80, 0x00, // ......>...Y.....
	0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x5c, 0x00, 0x00, 0x00, 0x83, 0x00, 0x00, 0x00, 0xfd, 0x00, // ..>.............
	0x01, 0x00, 0x38, 0x00, 0x01, 0x00, 0x00, 0x02, 0x0e, 0x00, 0x01, 0x00, 0xc0, 0x00,             // ..8...........
};
static const uint8_t vs_debugdraw_fill_lit_mesh_dx9[559] =
{
	0x56, 0x53, 0x48, 0x06, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xc8, 0x56, 0x5f, 0x03, 0x00, 0x07, 0x75, // VSH.......V_...u
	0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x04, 0x20, 0x08, 0x00, 0x04, 0x00, 0x06, 0x75, 0x5f, 0x76, // _model. .....u_v
	0x69, 0x65, 0x77, 0x04, 0x01, 0x00, 0x00, 0x04, 0x00, 0x0a, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, // iew.......u_view
	0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0x04, 0x00, 0x04, 0x00, 0xf0, 0x01, 0x00, 0x00, 0x00, 0x03, // Proj............
	0xfe, 0xff, 0xfe, 0xff, 0x32, 0x00, 0x43, 0x54, 0x41, 0x42, 0x1c, 0x00, 0x00, 0x00, 0x9a, 0x00, // ....2.CTAB......
	0x00, 0x00, 0x00, 0x03, 0xfe, 0xff, 0x03, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x91, // ................
	0x00, 0x00, 0x93, 0x00, 0x00, 0x00, 0x58, 0x00, 0x00, 0x00, 0x02, 0x00, 0x08, 0x00, 0x04, 0x00, // ......X.........
	0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x02, 0x00, // ..`.......p.....
	0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, // ......x.........
	0x00, 0x00, 0x02, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, // ..........x.....
	0x00, 0x00, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x00, 0x03, 0x00, 0x03, 0x00, 0x04, 0x00, // ..u_model.......
	0x04, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, // .. .......u_view
	0x00, 0xab, 0x03, 0x00, 0x03, 0x00, 0x04, 0x00, 0x04, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0x76, 0x73, 0x5f, // ..u_viewProj.vs_
	0x33, 0x5f, 0x30, 0x00, 0x4d, 0x69, 0x63, 0x72, 0x6f, 0x73, 0x6f, 0x66, 0x74, 0x20, 0x28, 0x52, // 3_0.Microsoft (R
	0x29, 0x20, 0x48, 0x4c, 0x53, 0x4c, 0x20, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x20, 0x43, 0x6f, // ) HLSL Shader Co
	0x6d, 0x70, 0x69, 0x6c, 0x65, 0x72, 0x20, 0x31, 0x30, 0x2e, 0x31, 0x00, 0xab, 0xab, 0x1f, 0x00, // mpiler 10.1.....
	0x00, 0x02, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x0f, 0x90, 0x1f, 0x00, 0x00, 0x02, 0x00, 0x00, // ................
	0x00, 0x80, 0x00, 0x00, 0x0f, 0xe0, 0x1f, 0x00, 0x00, 0x02, 0x05, 0x00, 0x00, 0x80, 0x01, 0x00, // ................
	0x07, 0xe0, 0x1f, 0x00, 0x00, 0x02, 0x05, 0x00, 0x01, 0x80, 0x02, 0x00, 0x07, 0xe0, 0x05, 0x00, // ................
	0x00, 0x03, 0x00, 0x00, 0x0f, 0x80, 0x09, 0x00, 0xe4, 0xa0, 0x00, 0x00, 0x55, 0x90, 0x04, 0x00, // ............U...
	0x00, 0x04, 0x00, 0x00, 0x0f, 0x80, 0x08, 0x00, 0xe4, 0xa0, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, // ................
	0xe4, 0x80, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x0f, 0x80, 0x0a, 0x00, 0xe4, 0xa0, 0x00, 0x00, // ................
	0xaa, 0x90, 0x00, 0x00, 0xe4, 0x80, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x0f, 0x80, 0x00, 0x00, // ................
	0xe4, 0x80, 0x0b, 0x00, 0xe4, 0xa0, 0x05, 0x00, 0x00, 0x03, 0x01, 0x00, 0x0f, 0x80, 0x00, 0x00, // ................
	0x55, 0x80, 0x05, 0x00, 0xe4, 0xa0, 0x04, 0x00, 0x00, 0x04, 0x01, 0x00, 0x0f, 0x80, 0x04, 0x00, // U...............
	0xe4, 0xa0, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0xe4, 0x80, 0x04, 0x00, 0x00, 0x04, 0x01, 0x00, // ................
	0x0f, 0x80, 0x06, 0x00, 0xe4, 0xa0, 0x00, 0x00, 0xaa, 0x80, 0x01, 0x00, 0xe4, 0x80, 0x04, 0x00, // ................
	0x00, 0x04, 0x00, 0x00, 0x0f, 0xe0, 0x07, 0x00, 0xe4, 0xa0, 0x00, 0x00, 0xff, 0x80, 0x01, 0x00, // ................
	0xe4, 0x80, 0x05, 0x00, 0x00, 0x03, 0x01, 0x00, 0x07, 0x80, 0x00, 0x00, 0x55, 0x80, 0x01, 0x00, // ............U...
	0xe4, 0xa0, 0x04, 0x00, 0x00, 0x04, 0x01, 0x00, 0x07, 0x80, 0x00, 0x00, 0xe4, 0xa0, 0x00, 0x00, // ................
	0x00, 0x80, 0x01, 0x00, 0xe4, 0x80, 0x04, 0x00, 0x00, 0x04, 0x01, 0x00, 0x07, 0x80, 0x02, 0x00, // ................
	0xe4, 0xa0, 0x00, 0x00, 0xaa, 0x80, 0x01, 0x00, 0xe4, 0x80, 0x04, 0x00, 0x00, 0x04, 0x01, 0x00, // ................
	0x07, 0xe0, 0x03, 0x00, 0xe4, 0xa0, 0x00, 0x00, 0xff, 0x80, 0x01, 0x00, 0xe4, 0x80, 0x01, 0x00, // ................
	0x00, 0x02, 0x02, 0x00, 0x07, 0xe0, 0x00, 0x00, 0xe4, 0x80, 0xff, 0xff, 0x00, 0x00, 0x00,       // ...............
};
static const uint8_t vs_debugdraw_fill_lit_mesh_dx11[878] =
{
	0x56, 0x53, 0x48, 0x06, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xc8, 0x56, 0x5f, 0x03, 0x00, 0x06, 0x75, // VSH.......V_...u
	0x5f, 0x76, 0x69, 0x65, 0x77, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x0a, 0x75, 0x5f, 0x76, 0x69, // _view.......u_vi
	0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x00, 0x40, 0x00, 0x04, 0x00, 0x07, 0x75, 0x5f, 0x6d, // ewProj..@....u_m
	0x6f, 0x64, 0x65, 0x6c, 0x04, 0x20, 0x80, 0x00, 0x80, 0x00, 0x28, 0x03, 0x00, 0x00, 0x44, 0x58, // odel. ....(...DX
	0x42, 0x43, 0x0c, 0x35, 0x6f, 0xf1, 0x34, 0x2f, 0x66, 0x52, 0xad, 0xf1, 0xc6, 0xf0, 0x74, 0x1b, // BC.5o.4/fR....t.
	0xc3, 0x1d, 0x01, 0x00, 0x00, 0x00, 0x28, 0x03, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x2c, 0x00, // ......(.......,.
	0x00, 0x00, 0x84, 0x00, 0x00, 0x00, 0xf4, 0x00, 0x00, 0x00, 0x49, 0x53, 0x47, 0x4e, 0x50, 0x00, // ..........ISGNP.
	0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, // ..........8.....
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, // ................
	0x00, 0x00, 0x45, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, // ..E.............
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x07, 0x07, 0x00, 0x00, 0x42, 0x4c, 0x45, 0x4e, 0x44, 0x49, // ..........BLENDI
	0x4e, 0x44, 0x49, 0x43, 0x45, 0x53, 0x00, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, // NDICES.POSITION.
	0xab, 0xab, 0x4f, 0x53, 0x47, 0x4e, 0x68, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x08, 0x00, // ..OSGNh.........
	0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, // ..P.............
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x07, 0x08, // ................
	0x00, 0x00, 0x5c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, // ................
	0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x07, 0x08, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x50, 0x4f, 0x53, // ..........SV_POS
	0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, 0x54, 0x45, 0x58, 0x43, 0x4f, 0x4f, 0x52, 0x44, 0x00, 0xab, // ITION.TEXCOORD..
	0xab, 0xab, 0x53, 0x48, 0x44, 0x52, 0x2c, 0x02, 0x00, 0x00, 0x40, 0x00, 0x01, 0x00, 0x8b, 0x00, // ..SHDR,...@.....
	0x00, 0x00, 0x59, 0x00, 0x00, 0x04, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, // ..Y...F. .......
	0x00, 0x00, 0x5f, 0x00, 0x00, 0x03, 0x72, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x67, 0x00, // .._...r.......g.
	0x00, 0x04, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x65, 0x00, // ... ..........e.
	0x00, 0x03, 0x72, 0x20, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0x72, 0x20, // ..r ......e...r 
	0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x02, 0x02, 0x00, 0x00, 0x00, 0x38, 0x00, // ......h.......8.
	0x00, 0x08, 0xf2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x56, 0x15, 0x10, 0x00, 0x01, 0x00, // ..........V.....
	0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x32, 0x00, // ..F. .........2.
	0x00, 0x0a, 0xf2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, // ..........F. ...
	0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x06, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x0e, // ..............F.
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0xf2, 0x00, 0x10, 0x00, 0x00, 0x00, // ......2.........
	0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0xa6, 0x1a, // ..F. ...........
	0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ......F.........
	0x00, 0x08, 0xf2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x00, 0x00, // ..........F.....
	0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x38, 0x00, // ..F. .........8.
	0x00, 0x08, 0xf2, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x56, 0x05, 0x10, 0x00, 0x00, 0x00, // ..........V.....
	0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x32, 0x00, // ..F. .........2.
	0x00, 0x0a, 0xf2, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, // ..........F. ...
	0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x06, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x0e, // ..............F.
	0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0xf2, 0x00, 0x10, 0x00, 0x01, 0x00, // ......2.........
	0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0xa6, 0x0a, // ..F. ...........
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x32, 0x00, // ......F.......2.
	0x00, 0x0a, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, // ... ......F. ...
	0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0xf6, 0x0f, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x0e, // ..............F.
	0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x08, 0x72, 0x00, 0x10, 0x00, 0x01, 0x00, // ......8...r.....
	0x00, 0x00, 0x56, 0x05, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x82, 0x20, 0x00, 0x00, 0x00, // ..V.......F. ...
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0x72, 0x00, 0x10, 0x00, 0x01, 0x00, // ......2...r.....
	0x00, 0x00, 0x46, 0x82, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, // ..F. ...........
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x32, 0x00, // ......F.......2.
	0x00, 0x0a, 0x72, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x82, 0x20, 0x00, 0x00, 0x00, // ..r.......F. ...
	0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xa6, 0x0a, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, // ..............F.
	0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0x72, 0x20, 0x10, 0x00, 0x01, 0x00, // ......2...r ....
	0x00, 0x00, 0x46, 0x82, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xf6, 0x0f, // ..F. ...........
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x36, 0x00, // ......F.......6.
	0x00, 0x05, 0x72, 0x20, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00, // ..r ......F.....
	0x00, 0x00, 0x3e, 0x00, 0x00, 0x01, 0x00, 0x02, 0x0e, 0x00, 0x01, 0x00, 0x80, 0x08,             // ..>...........
};
static const uint8_t vs_debugdraw_fill_lit_mesh_mtl[857] =
{
	0x56, 0x53, 0x48, 0x06, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xc8, 0x56, 0x5f, 0x03, 0x00, 0x07, 0x75, // VSH.......V_...u
	0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x04, 0x01, 0x80, 0x00, 0x04, 0x00, 0x0a, 0x75, 0x5f, 0x76, // _model.......u_v
	0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0x40, 0x00, 0x04, 0x00, 0x06, 0x75, 0x5f, // iewProj..@....u_
	0x76, 0x69, 0x65, 0x77, 0x04, 0x01, 0x00, 0x00, 0x04, 0x00, 0x13, 0x03, 0x00, 0x00, 0x23, 0x69, // view..........#i
	0x6e, 0x63, 0x6c, 0x75, 0x64, 0x65, 0x20, 0x3c, 0x6d, 0x65, 0x74, 0x61, 0x6c, 0x5f, 0x73, 0x74, // nclude <metal_st
	0x64, 0x6c, 0x69, 0x62, 0x3e, 0x0a, 0x23, 0x69, 0x6e, 0x63, 0x6c, 0x75, 0x64, 0x65, 0x20, 0x3c, // dlib>.#include <
	0x73, 0x69, 0x6d, 0x64, 0x2f, 0x73, 0x69, 0x6d, 0x64, 0x2e, 0x68, 0x3e, 0x0a, 0x0a, 0x75, 0x73, // simd/simd.h>..us
	0x69, 0x6e, 0x67, 0x20, 0x6e, 0x61, 0x6d, 0x65, 0x73, 0x70, 0x61, 0x63, 0x65, 0x20, 0x6d, 0x65, // ing namespace me
	0x74, 0x61, 0x6c, 0x3b, 0x0a, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x5f, 0x47, 0x6c, // tal;..struct _Gl
	0x6f, 0x62, 0x61, 0x6c, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, // obal.{.    float
	0x34, 0x78, 0x34, 0x20, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, // 4x4 u_view;.    
	0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x78, 0x34, 0x20, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, // float4x4 u_viewP
	0x72, 0x6f, 0x6a, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x78, // roj;.    float4x
	0x34, 0x20, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x5b, 0x33, 0x32, 0x5d, 0x3b, 0x0a, 0x7d, // 4 u_model[32];.}
	0x3b, 0x0a, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, // ;..struct xlatMt
	0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x6f, 0x75, 0x74, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, // lMain_out.{.    
	0x66, 0x6c, 0x6f, 0x61, 0x74, 0x33, 0x20, 0x5f, 0x65, 0x6e, 0x74, 0x72, 0x79, 0x50, 0x6f, 0x69, // float3 _entryPoi
	0x6e, 0x74, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x5f, 0x76, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x20, // ntOutput_v_view 
	0x5b, 0x5b, 0x75, 0x73, 0x65, 0x72, 0x28, 0x6c, 0x6f, 0x63, 0x6e, 0x30, 0x29, 0x5d, 0x5d, 0x3b, // [[user(locn0)]];
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x33, 0x20, 0x5f, 0x65, 0x6e, 0x74, // .    float3 _ent
	0x72, 0x79, 0x50, 0x6f, 0x69, 0x6e, 0x74, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x5f, 0x76, 0x5f, // ryPointOutput_v_
	0x77, 0x6f, 0x72, 0x6c, 0x64, 0x20, 0x5b, 0x5b, 0x75, 0x73, 0x65, 0x72, 0x28, 0x6c, 0x6f, 0x63, // world [[user(loc
	0x6e, 0x31, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, // n1)]];.    float
	0x34, 0x20, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x5b, 0x5b, // 4 gl_Position [[
	0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x5d, 0x5d, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x0a, // position]];.};..
	0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, // struct xlatMtlMa
	0x69, 0x6e, 0x5f, 0x69, 0x6e, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, // in_in.{.    floa
	0x74, 0x33, 0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x5b, 0x5b, // t3 a_position [[
	0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x28, 0x31, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, // attribute(1)]];.
	0x7d, 0x3b, 0x0a, 0x0a, 0x76, 0x65, 0x72, 0x74, 0x65, 0x78, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, // };..vertex xlatM
	0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x6f, 0x75, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, // tlMain_out xlatM
	0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x28, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, // tlMain(xlatMtlMa
	0x69, 0x6e, 0x5f, 0x69, 0x6e, 0x20, 0x69, 0x6e, 0x20, 0x5b, 0x5b, 0x73, 0x74, 0x61, 0x67, 0x65, // in_in in [[stage
	0x5f, 0x69, 0x6e, 0x5d, 0x5d, 0x2c, 0x20, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x61, 0x6e, 0x74, 0x20, // _in]], constant 
	0x5f, 0x47, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x26, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x20, // _Global& _mtl_u 
	0x5b, 0x5b, 0x62, 0x75, 0x66, 0x66, 0x65, 0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x29, 0x0a, 0x7b, // [[buffer(0)]]).{
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, // .    xlatMtlMain
	0x5f, 0x6f, 0x75, 0x74, 0x20, 0x6f, 0x75, 0x74, 0x20, 0x3d, 0x20, 0x7b, 0x7d, 0x3b, 0x0a, 0x20, // _out out = {};. 
	0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x5f, 0x31, 0x31, 0x32, 0x20, 0x3d, //    float4 _112 =
	0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x5b, //  _mtl_u.u_model[
	0x30, 0x5d, 0x20, 0x2a, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x28, 0x69, 0x6e, 0x2e, 0x61, // 0] * float4(in.a
	0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x2c, 0x20, 0x31, 0x2e, 0x30, 0x29, 0x3b, // _position, 1.0);
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x6f, 0x75, 0x74, 0x2e, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, // .    out.gl_Posi
	0x74, 0x69, 0x6f, 0x6e, 0x20, 0x3d, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, // tion = _mtl_u.u_
	0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x20, 0x2a, 0x20, 0x5f, 0x31, 0x31, 0x32, 0x3b, // viewProj * _112;
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x6f, 0x75, 0x74, 0x2e, 0x5f, 0x65, 0x6e, 0x74, 0x72, 0x79, 0x50, // .    out._entryP
	0x6f, 0x69, 0x6e, 0x74, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x5f, 0x76, 0x5f, 0x76, 0x69, 0x65, // ointOutput_v_vie
	0x77, 0x20, 0x3d, 0x20, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x76, 0x69, // w = (_mtl_u.u_vi
	0x65, 0x77, 0x20, 0x2a, 0x20, 0x5f, 0x31, 0x31, 0x32, 0x29, 0x2e, 0x78, 0x79, 0x7a, 0x3b, 0x0a, // ew * _112).xyz;.
	0x20, 0x20, 0x20, 0x20, 0x6f, 0x75, 0x74, 0x2e, 0x5f, 0x65, 0x6e, 0x74, 0x72, 0x79, 0x50, 0x6f, //     out._entryPo
	0x69, 0x6e, 0x74, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x5f, 0x76, 0x5f, 0x77, 0x6f, 0x72, 0x6c, // intOutput_v_worl
	0x64, 0x20, 0x3d, 0x20, 0x5f, 0x31, 0x31, 0x32, 0x2e, 0x78, 0x79, 0x7a, 0x3b, 0x0a, 0x20, 0x20, // d = _112.xyz;.  
	0x20, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x6f, 0x75, 0x74, 0x3b, 0x0a, 0x7d, 0x0a, //   return out;.}.
	0x0a, 0x00, 0x02, 0x0e, 0x00, 0x01, 0x00, 0xc0, 0x00,                                           // .........
};
extern const uint8_t* vs_debugdraw_fill_lit_mesh_pssl;
extern const uint32_t vs_debugdraw_fill_lit_mesh_pssl_size;
