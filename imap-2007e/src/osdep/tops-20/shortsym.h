/* ========================================================================
 * Copyright 1988-2008 University of Washington
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * 
 * ========================================================================
 */

/*
 * Program:	Definitions for compilers with 6-letter symbol limits
 *
 * Author:	Mark Crispin
 *		Networks and Distributed Computing
 *		Computing & Communications
 *		University of Washington
 *		Administration Building, AG-44
 *		Seattle, WA  98195
 *		Internet: MRC@CAC.Washington.EDU
 *
 * Date:	24 May 1995
 * Last Edited:	1 January 2008
 */

#define auth_link a_link
#define auth_log a_log
#define auth_login_client al_cli
#define auth_login_server al_ser
#define auth_ext a_ext
#define auth_external_client ae_cli
#define auth_external_server ae_ser
#define auth_md5 a_md5
#define auth_md5_valid a5_val
#define auth_md5_client a5_cli
#define auth_md5_server a5_ser
#define auth_pla a_pla
#define auth_plain_client ap_cli
#define auth_plain_server ap_ser
#define authenticate a_auth
#define authserver_login a_serv
#define body_encodings bencds
#define body_types btypes
#define compare_csizedtext cm_szt
#define compare_cstring cm_str
#define compare_uchar cm_uch
#define compare_ulong cm_uln
#define default_proto d_prot
#define dummy_append d_appn
#define dummy_canonicalize d_cano
#define dummy_check d_chck
#define dummy_close d_clos
#define dummy_copy d_copy
#define dummy_create d_crea
#define dummy_create_path d_crep
#define dummy_delete d_del
#define dummy_expunge d_exp
#define dummy_file d_fil
#define dummy_list d_list
#define dummy_list_work d_lstw
#define dummy_listed d_lstd
#define dummy_lsub d_lsub
#define dummy_open d_open
#define dummy_parameters d_parm
#define dummy_ping d_ping
#define dummy_rename d_ren
#define dummy_scan d_scan
#define dummy_search d_srch
#define dummy_subscribe d_subs
#define dummy_valid d_val
#define env_parameters e_parm
#define fatal fatal
#define file_string fl_str
#define file_string_init fl_ini
#define file_string_next fl_nxt
#define file_string_setpos fl_sps
#define fs_get f_get
#define fs_give f_give
#define fs_resize f_rsiz
#define hash_create h_crea
#define hash_destory h_dest
#define hash_index h_indx
#define hash_lookup h_lkup
#define hash_add h_add
#define hash_lookup_and_add h_lad
#define imap_OK i_OK
#define imap_acl_work i_aclw
#define imap_append i_appn
#define imap_append_single i_apps
#define imap_anon i_anon
#define imap_auth i_auth
#define imap_cache i_cach
#define imap_cap i_cap
#define imap_capability i_capa
#define imap_challenge i_chln
#define imap_check i_chck
#define imap_close i_clos
#define imap_copy i_copy
#define imap_create i_crea
#define imap_delete i_del
#define imap_deleteacl i_dacl
#define imap_expunge i_expn
#define imap_fake i_fake
#define imap_fast i_fast
#define imap_fetch i_fetc
#define imap_flag i_flag
#define imap_flags i_flgs
#define imap_gc i_gc
#define imap_gc_body ig_bdy
#define imap_getacl i_gacl
#define imap_getquota i_gqot
#define imap_getquotaroot i_gqtr
#define imap_host i_host
#define imap_list i_list
#define imap_listrights i_lrgh
#define imap_list_work il_wrk
#define imap_login i_logn
#define imap_lsub i_lsub
#define imap_manage i_man
#define imap_msgdata i_msgd
#define imap_msgno i_msgn
#define imap_myrights i_mrgh
#define imap_open i_open
#define imap_parameters i_parm
#define imap_parse_address ip_adr
#define imap_parse_adrlist ip_adl
#define imap_parse_astring ip_ast
#define imap_parse_body ip_bdy
#define imap_parse_body_parameter ipb_pa
#define imap_parse_body_structure ipb_st
#define imap_parse_capabilities ip_cap
#define imap_parse_disposition ip_dsp
#define imap_parse_envelope ip_env
#define imap_parse_extension ip_ext
#define imap_parse_flags ip_flg
#define imap_parse_header ip_hdr
#define imap_parse_language ip_lng
#define imap_parse_namespace ip_nam
#define imap_parse_reply ip_rep
#define imap_parse_response ip_rsp
#define imap_parse_string ip_str
#define imap_parse_stringlist ip_stl
#define imap_parse_thread ip_thr
#define imap_parse_unsolicited ip_uns
#define imap_parse_user_flag ipu_fl
#define imap_ping i_ping
#define imap_reform_sequence i_rfrs
#define imap_rename i_ren
#define imap_reply i_rep
#define imap_response i_rspn
#define imap_scan i_scan
#define imap_search i_srch
#define imap_send i_send
#define imap_send_astring is_ast
#define imap_send_literal is_lit
#define imap_send_sdate iss_da
#define imap_send_slist iss_sl
#define imap_send_spgm iss_pg
#define imap_send_spgm_trim iss_pt
#define imap_send_sset iss_st
#define imap_send_sset_work iss_sw
#define imap_setacl i_sacl
#define imap_setquota i_sqot
#define imap_sort i_sort
#define imap_sout i_sout
#define imap_soutr i_sotr
#define imap_status i_stat
#define imap_structure i_stru
#define imap_subscribe i_sub
#define imap_thread i_thrd
#define imap_thread_work i_thrw
#define imap_uid i_uid
#define imap_unsubscribe i_uns
#define imap_valid i_val
#define internal_date in_dat
#define mail_append_full m_appn
#define mail_append_multiple m_appm
#define mail_append_set m_apps
#define mail_auth m_auth
#define mail_body m_body
#define mail_cdate m_cdat
#define mail_check m_chck
#define mail_close_full m_clos
#define mail_copy_full m_copy
#define mail_create m_crea
#define mail_criteria m_crit
#define mail_criteria_date mc_dat
#define mail_criteria_string mc_str
#define mail_date m_date
#define mail_debug m_dbug
#define mail_delete m_del
#define mail_dlog m_dlog
#define mail_elt m_elt
#define mail_exists m_exst
#define mail_expunge_full m_expn
#define mail_expunged m_expd
#define mail_fetch_body fs_bdy
#define mail_fetch_fast mf_fst
#define mail_fetch_flags mf_flg
#define mail_fetch_header mf_hdr
#define mail_fetch_message mf_msg
#define mail_fetch_mime mf_mim
#define mail_fetch_overview mf_ovr
#define mail_fetch_overview_sequence mf_ovs
#define mail_fetch_overview_default mf_ovd
#define mail_fetch_structure mf_str
#define mail_fetch_text mf_txt
#define mail_fetch_text_return mf_txr
#define mail_fetch_string_return mf_tsr
#define mail_fetchfrom mf_frm
#define mail_fetchsubject mf_sub
#define mail_filter m_filt
#define mail_flag m_flag
#define mail_free_acl mr_acl
#define mail_free_address mr_add
#define mail_free_body mr_bdy
#define mail_free_body_data mrb_da
#define mail_free_body_parameter mrb_pr
#define mail_free_body_part mrb_pt
#define mail_free_cache mr_cac
#define mail_free_elt mr_elt
#define mail_free_envelope mr_env
#define mail_free_handle mr_han
#define mail_free_namespace mr_nsp
#define mail_free_quotalist mr_qtl
#define mail_free_searchheader mrs_hd
#define mail_free_searchor mrs_or
#define mail_free_searchpgm mrs_pg
#define mail_free_searchpgmlist mrs_pl
#define mail_free_searchset mrs_st
#define mail_free_sortpgm mr_spg
#define mail_free_stringlist mr_sls
#define mail_free_threadnode mr_thn
#define mail_gc m_gc
#define mail_gc_msg m_gcm
#define mail_gc_body m_gcb
#define mail_initbody m_ibdy
#define mail_link m_link
#define mail_list m_list
#define mail_lock m_lock
#define mail_longdate ml_lda
#define mail_lookup_auth m_laut
#define mail_lookup_auth_name m_latn
#define mail_lsub m_lsub
#define mail_makehandle m_mhdl
#define mail_match_lines m_mlns
#define mail_msgno m_msgn
#define mail_newacl mn_acl
#define mail_newaddr mn_add
#define mail_newbody mn_bdy
#define mail_newbody_parameter mnb_pr
#define mail_newbody_part mnb_pt
#define mail_newbody_message_part mnb_mp
#define mail_new_cache_elt mn_elt
#define mail_newenvelope mn_env
#define mail_newmsg mn_msg
#define mail_newquotalist mn_qtl
#define mail_newsearchheader mns_hd
#define mail_newsearchor mns_or
#define mail_newsearchpgm mns_pg
#define mail_newsearchpgmlist mns_pl
#define mail_newsearchset mns_st
#define mail_newsortpgm mn_spg
#define mail_newstringlist mn_sls
#define mail_newthreadnode mn_thr
#define mail_nodebug m_ndbg
#define mail_open m_open
#define mail_parameters m_parm
#define mail_parse_date mp_dat
#define mail_parse_flags mp_flg
#define mail_parse_set mp_set
#define mail_partial_body mpt_bd
#define mail_partial_text mpt_tx
#define mail_ping m_ping
#define mail_read m_read
#define mail_recent m_rcent
#define mail_rename m_ren
#define mail_scan m_scan
#define mail_search_addr ms_adr
#define mail_search_body ms_bdy
#define mail_search_default ms_def
#define mail_search_full m_srch
#define mail_search_gets ms_gts
#define mail_search_header ms_hdr
#define mail_search_header_text ms_hdt
#define mail_search_keyword ms_key
#define mail_search_msg ms_msg
#define mail_search_string ms_str
#define mail_search_string_work ms_stw
#define mail_search_text ms_txt
#define mail_sequence m_seq
#define mail_shortdate m_shtd
#define mail_skip_fwd msk_fw
#define mail_skip_re msk_re
#define mail_sort ml_srt
#define mail_sort_cache ms_csh
#define mail_sort_compare ms_cmp
#define mail_sort_loadcache ms_lcs
#define mail_sort_msgs ms_mgs
#define mail_status m_stat
#define mail_status_default m_stad
#define mail_stream m_strm
#define mail_string m_strg
#define mail_string_init mt_ini
#define mail_string_next mt_nxt
#define mail_string_setpos mt_sps
#define mail_strip_subject mst_sb
#define mail_strip_subject_wsp mst_ws
#define mail_strip_subject_blob mst_bl
#define mail_subscribe m_sub
#define mail_thread m_thr
#define mail_threadlist mt_lst
#define mail_thread_c2node mt_c2n
#define mail_thread_check_child mt_ckc
#define mail_thread_compare_date mtc_da
#define mail_thread_loadcache mt_ldc
#define mail_thread_msgs mt_mgs
#define mail_thread_orderedsubject mt_osb
#define mail_thread_parse_msgid mtp_mi
#define mail_thread_parse_references mtp_rf
#define mail_thread_prune_dummy mt_prd
#define mail_thread_references mt_ref
#define mail_thread_sort mt_srt
#define mail_uid m_uid
#define mail_uid_sequence mu_seq
#define mail_unlock m_unl
#define mail_unsubscribe m_uns
#define mail_usable_network_stream m_usns
#define mail_utf7_valid m_ut7v
#define mail_valid m_val
#define mail_valid_net mv_net
#define mail_valid_net_parse mvn_pr
#define mail_valid_net_parse_work mvn_pw
#define mail_versioncheck m_vers
#define mailboxfile mbxfil
#define md5_init m5_ini
#define md5_update m5_upd
#define md5_final m5_fin
#define mime2_decode m2_dec
#define mime2_text m2_txt
#define mime2_token m2_tok
#define mm_cache mm_cac
#define mm_critical mm_crt
#define mm_diskerror mm_dse
#define mm_dlog mm_dlg
#define mm_exists mm_exs
#define mm_expunged mm_exp
#define mm_fatal mm_ftl
#define mm_flags mm_flg
#define mm_list mm_lst
#define mm_log mm_log
#define mm_login mm_lgi
#define mm_lsub mm_lsb
#define mm_mailbox mm_mbx
#define mm_nocritical mm_ncr
#define mm_notify mm_not
#define mm_searched mm_src
#define myhomedir myhome
#define mylocalhost myhost
#define myusername_full myuser
#define net_aopen nt_aop
#define net_close nt_cls
#define net_getbuffer nt_gtb
#define net_getdata nt_gtd
#define net_getline nt_gtl
#define net_host nt_hst
#define net_localhost nt_lhs
#define net_open nt_opn
#define net_port nt_prt
#define net_sout nt_sot
#define net_soutr nt_str
#define netmsg_read nm_rea
#define netmsg_slurp nm_slr
#define netmsg_slurp_text nm_slt
#define newsrc_check_uid nsc_ui
#define newsrc_create ns_crea
#define newsrc_error ns_err
#define newsrc_lsub ns_lsub
#define newsrc_newmessages ns_nms
#define newsrc_newstate ns_nst
#define newsrc_read ns_rea
#define newsrc_status ns_sta
#define newsrc_update ns_upd
#define newsrc_write ns_wri
#define newsrc_write_error ns_wer
#define nntp_append n_appn
#define nntp_canonicalize n_cano
#define nntp_check n_chck
#define nntp_close n_clos
#define nntp_copy n_copy
#define nntp_create n_crea
#define nntp_delete n_del
#define nntp_expunge n_expn
#define nntp_fake n_fake
#define nntp_fetchfast nf_fst
#define nntp_fetchflags nf_flg
#define nntp_fetchmessage nf_msg
#define nntp_flagmsg n_fmsg
#define nntp_gc n_gc
#define nntp_getmap n_gmap
#define nntp_header n_head
#define nntp_isvalid n_isvl
#define nntp_list n_list
#define nntp_lsub n_lsub
#define nntp_mail n_mail
#define nntp_mclose n_mcls
#define nntp_mopen n_mopn
#define nntp_open_full n_open
#define nntp_over n_ovr
#define nntp_overview n_over
#define nntp_parameters n_parm
#define nntp_parsestructure n_pars
#define nntp_parse_overview n_povr
#define nntp_ping n_ping
#define nntp_rename n_ren
#define nntp_reply n_repl
#define nntp_scan n_scan
#define nntp_search n_srch
#define nntp_search_msg ns_msg
#define nntp_send n_send
#define nntp_send_auth ns_aut
#define nntp_send_auth_work ns_atw
#define nntp_send_work n_sndw
#define nntp_sort n_sort
#define nntp_sort_loadcache ns_lcs
#define nntp_soutr n_sout
#define nntp_status n_stat
#define nntp_subscribe n_sub
#define nntp_text n_text
#define nntp_text_slurp nt_slp
#define nntp_thread n_thrd
#define nntp_unsubscribe n_uns
#define nntp_valid n_val
#define pop3_append p_appn
#define pop3_auth p_auth
#define pop3_cache p_cach
#define pop3_challenge p_chal
#define pop3_check p_chck
#define pop3_close p_clos
#define pop3_copy p_copy
#define pop3_create p_crea
#define pop3_delete p_del
#define pop3_expunge p_exp
#define pop3_fake p_fake
#define pop3_fetchfast pf_fst
#define pop3_fetchflags pf_flg
#define pop3_fetchmessage pf_msg
#define pop3_gc p_gc
#define pop3_list p_list
#define pop3_lsub p_lsub
#define pop3_open p_open
#define pop3_parameters p_parm
#define pop3_parsestructure p_pars
#define pop3_ping p_ping
#define pop3_rename p_ren
#define pop3_reply p_rep
#define pop3_response p_resp
#define pop3_scan p_scan
#define pop3_send p_send
#define pop3_send_num ps_num
#define pop3_status p_stat
#define pop3_subscribe p_sub
#define pop3_unsubscribe p_uns
#define pop3_valid p_val
#define rfc822_8bit r
#define rfc822_address r_addr
#define rfc822_address_line ra_lin
#define rfc822_base64 r_b64
#define rfc822_binary r_bin
#define rfc822_cat r_cat
#define rfc822_contents r_cont
#define rfc822_cpy r_cpy
#define rfc822_cpy_adr rc_adr
#define rfc822_date r_date
#define rfc822_default_subtype rd_sub
#define rfc822_encode_body_7bit reb_7b
#define rfc822_encode_body_8bit reb_8b
#define rfc822_header r_head
#define rfc822_header_line rh_lin
#define rfc822_output r_out
#define rfc822_output_address ro_adr
#define rfc822_output_address_line roa_ln
#define rfc822_output_address_list roa_li
#define rfc822_output_body ro_bdy
#define rfc822_output_body_header rob_hd
#define rfc822_output_full ro_ful
#define rfc822_output_flush ro_flu
#define rfc822_output_header ro_hdr
#define rfc822_output_header_line roh_ln
#define rfc822_output_cat ro_cat
#define rfc822_output_parameter ro_par
#define rfc822_output_stringlist ro_stl
#define rfc822_output_text ro_txt
#define rfc822_parse_address rp_adr
#define rfc822_parse_addrspec rp_ads
#define rfc822_parse_adrlist rp_adl
#define rfc822_parse_content rp_cnt
#define rfc822_parse_content_header rpc_hd
#define rfc822_parse_group rp_grp
#define rfc822_parse_mailbox rp_mbx
#define rfc822_parse_msg_full rp_msg
#define rfc822_parse_parameter rp_par
#define rfc822_parse_phrase rp_phr
#define rfc822_parse_routeaddr rp_rte
#define rfc822_parse_word rp_wrd
#define rfc822_phraseonly r_poly
#define rfc822_qprint r_qpnt
#define rfc822_quote r_quot
#define rfc822_skip_comment rs_cmt
#define rfc822_skipws rs_ws
#define rfc822_timezone r_tz
#define rfc822_write_address_full rw_adr
#define rfc822_write_body_header rwbh_8
#define server_input_wait s_iwat
#define server_login s_log
#define server_init s_init
#define sm_read sm_rd
#define sm_subscribe sm_sub
#define sm_unsubscribe sm_uns
#define smtp_auth s_auth
#define smtp_challenge s_chal
#define smtp_close s_clos
#define smtp_ehlo s_ehlo
#define smtp_fake s_fake
#define smtp_mail s_mail
#define smtp_open_full s_open
#define smtp_rcpt s_rcpt
#define smtp_reply s_repl
#define smtp_response s_resp
#define smtp_send s_send
#define smtp_send_auth ss_aut
#define smtp_send_auth_work ss_atw
#define smtp_send_work ss_wrk
#define smtp_soutr s_str
#define strcrlfcpy sc_cpy
#define strcrlflen sc_len
#define tcp_aopen t_aopn
#define tcp_canonical t_cnon
#define tcp_clientaddr t_cadr
#define tcp_clienthost t_chst
#define tcp_clientport t_cprt
#define tcp_close t_clos
#define tcp_getbuffer tg_buf
#define tcp_getdata tg_dat
#define tcp_getline tg_lin
#define tcp_host t_host
#define tcp_localhost t_lhst
#define tcp_open t_open
#define tcp_parameters t_parameters
#define tcp_port t_port
#define tcp_remotehost t_rhst
#define tcp_serveraddr t_sadr
#define tcp_serverhost t_shst
#define tcp_serverport t_sprt
#define tcp_sout t_sout
#define tcp_soutr t_str
#define textcpy txcopy
#define textcpystring txcpst
#define textcpyoffstring txcpos
#define ucs4_cs_get u4_csg
#define ucs4_decompose u4_dcm
#define ucs4_decompose_recursive u4_dcr
#define ucs4_rmapbuf u4r_bf
#define ucs4_rmaplen u4r_ln
#define ucs4_rmaptext u4r_tx
#define ucs4_titlecase u4_tcs
#define ucs4_width u4_wid
#define utf8_badcharset u8_bcs
#define utf8_charset u8_chs
#define utf8_cstext u8_cst
#define utf8_cstocstext u8_cct
#define utf8_from_mutf7 u8fmu7
#define utf8_get u8_get
#define utf8_get_raw u8_gtr
#define utf8_iso2022text u8_i22
#define utf8_mime2text u8_mi2
#define utf8_put u8_put
#define utf8_rmap u8_rmp
#define utf8_rmap_cs u8r_cs
#define utf8_rmap_gen u8r_gn
#define utf8_rmapsize u8r_sz
#define utf8_rmaptext u8r_tx
#define utf8_script u8_scr
#define utf8_searchpgm u8_spg
#define utf8_size u8_siz
#define utf8_stringlist u8_lst
#define utf8_text u8_txt
#define utf8_text_2022 u8t_22
#define utf8_text_8859_1 u8t_we
#define utf8_text_1byte0 u8t_10
#define utf8_text_1byte u8t_1b
#define utf8_text_1byte8 u8t_18
#define utf8_text_cs ut8_cs
#define utf8_text_euc u8t_eu
#define utf8_text_dbyte u8t_db
#define utf8_text_dbyte2 u8t_d2
#define utf8_text_sjis u8t_sj
#define utf8_text_ucs2 u8t_u2
#define utf8_text_ucs4 ut8_u4
#define utf8_text_utf7 ut8_u7
#define utf8_text_utf8 ut8_u8
#define utf8_text_utf16 ut8_16
#define utf8_to_mutf7 u8tmu7
#define utf8_validate u8_val
#define utf8_textwidth u8_twd
