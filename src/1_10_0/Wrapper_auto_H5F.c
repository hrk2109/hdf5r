
/**************************************************************************
 * 
 * Copyright 2016 Novartis Institutes for BioMedical Research Inc.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 *************************************************************************/

#include "Wrapper_auto_H5F.h"
/* H5_DLL herr_t H5Fclear_elink_file_cache(hid_t file_id); */
SEXP R_H5Fclear_elink_file_cache(SEXP R_file_id){
  int vars_protected=0;
  hid_t file_id = SEXP_to_longlong(R_file_id, 0);
  herr_t return_val = H5Fclear_elink_file_cache(file_id);
  SEXP R_return_val= R_NilValue;
  R_return_val = PROTECT(ScalarInteger64_or_int(return_val));
  vars_protected++;
  SEXP __ret_list;
  PROTECT(__ret_list = allocVector(VECSXP, 1));
  SET_VECTOR_ELT(__ret_list, 0, R_return_val);
  SEXP __ret_list_names;
  PROTECT(__ret_list_names = allocVector(STRSXP, 1));
  SET_STRING_ELT(__ret_list_names, 0, mkChar("return_val"));
  SET_NAMES(__ret_list, __ret_list_names);
  vars_protected += 2;
  UNPROTECT(vars_protected);
  return(__ret_list);
}

/* H5_DLL herr_t H5Fclose(hid_t file_id); */
SEXP R_H5Fclose(SEXP R_file_id){
  int vars_protected=0;
  hid_t file_id = SEXP_to_longlong(R_file_id, 0);
  herr_t return_val = H5Fclose(file_id);
  SEXP R_return_val= R_NilValue;
  R_return_val = PROTECT(ScalarInteger64_or_int(return_val));
  vars_protected++;
  SEXP __ret_list;
  PROTECT(__ret_list = allocVector(VECSXP, 1));
  SET_VECTOR_ELT(__ret_list, 0, R_return_val);
  SEXP __ret_list_names;
  PROTECT(__ret_list_names = allocVector(STRSXP, 1));
  SET_STRING_ELT(__ret_list_names, 0, mkChar("return_val"));
  SET_NAMES(__ret_list, __ret_list_names);
  vars_protected += 2;
  UNPROTECT(vars_protected);
  return(__ret_list);
}

/* H5_DLL hid_t H5Fcreate(const char *filename, unsigned flags, hid_t create_plist, hid_t access_plist); */
SEXP R_H5Fcreate(SEXP R_filename, SEXP R_flags, SEXP R_create_plist, SEXP R_access_plist){
  int vars_protected=0;
  const char* filename = CHAR(STRING_ELT(R_filename, 0));
  unsigned flags = SEXP_to_longlong(R_flags, 0);
  hid_t create_plist = SEXP_to_longlong(R_create_plist, 0);
  hid_t access_plist = SEXP_to_longlong(R_access_plist, 0);
  hid_t return_val = H5Fcreate(filename, flags, create_plist, access_plist);
  SEXP R_return_val= R_NilValue;
  R_return_val = PROTECT(ScalarInteger64_or_int(return_val));
  vars_protected++;
  SEXP __ret_list;
  PROTECT(__ret_list = allocVector(VECSXP, 1));
  SET_VECTOR_ELT(__ret_list, 0, R_return_val);
  SEXP __ret_list_names;
  PROTECT(__ret_list_names = allocVector(STRSXP, 1));
  SET_STRING_ELT(__ret_list_names, 0, mkChar("return_val"));
  SET_NAMES(__ret_list, __ret_list_names);
  vars_protected += 2;
  UNPROTECT(vars_protected);
  return(__ret_list);
}

/* H5_DLL herr_t H5Fflush(hid_t object_id, H5F_scope_t scope); */
SEXP R_H5Fflush(SEXP R_object_id, SEXP R_scope){
  int vars_protected=0;
  hid_t object_id = SEXP_to_longlong(R_object_id, 0);
  H5F_scope_t scope = SEXP_to_longlong(R_scope, 0);
  herr_t return_val = H5Fflush(object_id, scope);
  SEXP R_return_val= R_NilValue;
  R_return_val = PROTECT(ScalarInteger64_or_int(return_val));
  vars_protected++;
  SEXP __ret_list;
  PROTECT(__ret_list = allocVector(VECSXP, 1));
  SET_VECTOR_ELT(__ret_list, 0, R_return_val);
  SEXP __ret_list_names;
  PROTECT(__ret_list_names = allocVector(STRSXP, 1));
  SET_STRING_ELT(__ret_list_names, 0, mkChar("return_val"));
  SET_NAMES(__ret_list, __ret_list_names);
  vars_protected += 2;
  UNPROTECT(vars_protected);
  return(__ret_list);
}

/* H5_DLL herr_t H5Fformat_convert(hid_t fid); */
SEXP R_H5Fformat_convert(SEXP R_fid){
  int vars_protected=0;
  hid_t fid = SEXP_to_longlong(R_fid, 0);
  herr_t return_val = H5Fformat_convert(fid);
  SEXP R_return_val= R_NilValue;
  R_return_val = PROTECT(ScalarInteger64_or_int(return_val));
  vars_protected++;
  SEXP __ret_list;
  PROTECT(__ret_list = allocVector(VECSXP, 1));
  SET_VECTOR_ELT(__ret_list, 0, R_return_val);
  SEXP __ret_list_names;
  PROTECT(__ret_list_names = allocVector(STRSXP, 1));
  SET_STRING_ELT(__ret_list_names, 0, mkChar("return_val"));
  SET_NAMES(__ret_list, __ret_list_names);
  vars_protected += 2;
  UNPROTECT(vars_protected);
  return(__ret_list);
}

/* H5_DLL hid_t H5Fget_access_plist(hid_t file_id); */
SEXP R_H5Fget_access_plist(SEXP R_file_id){
  int vars_protected=0;
  hid_t file_id = SEXP_to_longlong(R_file_id, 0);
  hid_t return_val = H5Fget_access_plist(file_id);
  SEXP R_return_val= R_NilValue;
  R_return_val = PROTECT(ScalarInteger64_or_int(return_val));
  vars_protected++;
  SEXP __ret_list;
  PROTECT(__ret_list = allocVector(VECSXP, 1));
  SET_VECTOR_ELT(__ret_list, 0, R_return_val);
  SEXP __ret_list_names;
  PROTECT(__ret_list_names = allocVector(STRSXP, 1));
  SET_STRING_ELT(__ret_list_names, 0, mkChar("return_val"));
  SET_NAMES(__ret_list, __ret_list_names);
  vars_protected += 2;
  UNPROTECT(vars_protected);
  return(__ret_list);
}

/* H5_DLL hid_t H5Fget_create_plist(hid_t file_id); */
SEXP R_H5Fget_create_plist(SEXP R_file_id){
  int vars_protected=0;
  hid_t file_id = SEXP_to_longlong(R_file_id, 0);
  hid_t return_val = H5Fget_create_plist(file_id);
  SEXP R_return_val= R_NilValue;
  R_return_val = PROTECT(ScalarInteger64_or_int(return_val));
  vars_protected++;
  SEXP __ret_list;
  PROTECT(__ret_list = allocVector(VECSXP, 1));
  SET_VECTOR_ELT(__ret_list, 0, R_return_val);
  SEXP __ret_list_names;
  PROTECT(__ret_list_names = allocVector(STRSXP, 1));
  SET_STRING_ELT(__ret_list_names, 0, mkChar("return_val"));
  SET_NAMES(__ret_list, __ret_list_names);
  vars_protected += 2;
  UNPROTECT(vars_protected);
  return(__ret_list);
}

/* H5_DLL ssize_t H5Fget_file_image(hid_t file_id, void * buf_ptr, size_t buf_len); */
SEXP R_H5Fget_file_image(SEXP R_file_id, SEXP R_buf_ptr, SEXP R_buf_len, SEXP _dupl_buf_ptr){
  int vars_protected=0;
  if(SEXP_to_logical(_dupl_buf_ptr)) {
    R_buf_ptr = PROTECT(duplicate(R_buf_ptr));
    vars_protected++;
  }
  hid_t file_id = SEXP_to_longlong(R_file_id, 0);
  void* buf_ptr;
  if(XLENGTH(R_buf_ptr) == 0) {
    buf_ptr = NULL;
  }
  else {
    buf_ptr = (void *) VOIDPTR(R_buf_ptr);
  }
  size_t buf_len = SEXP_to_longlong(R_buf_len, 0);
  ssize_t return_val = H5Fget_file_image(file_id, buf_ptr, buf_len);
  SEXP R_return_val= R_NilValue;
  R_return_val = PROTECT(ScalarInteger64_or_int(return_val));
  vars_protected++;
  SEXP __ret_list;
  PROTECT(__ret_list = allocVector(VECSXP, 2));
  SET_VECTOR_ELT(__ret_list, 0, R_return_val);
  SET_VECTOR_ELT(__ret_list, 1, R_buf_ptr);
  SEXP __ret_list_names;
  PROTECT(__ret_list_names = allocVector(STRSXP, 2));
  SET_STRING_ELT(__ret_list_names, 0, mkChar("return_val"));
  SET_STRING_ELT(__ret_list_names, 1, mkChar("buf_ptr"));
  SET_NAMES(__ret_list, __ret_list_names);
  vars_protected += 2;
  UNPROTECT(vars_protected);
  return(__ret_list);
}

/* H5_DLL herr_t H5Fget_filesize(hid_t file_id, hsize_t *size); */
SEXP R_H5Fget_filesize(SEXP R_file_id, SEXP R_size){
  hsize_t size_helper;
  SEXP R_helper = R_NilValue;
  int vars_protected=0;
  R_size = PROTECT(duplicate(R_size));
  vars_protected++;
  hid_t file_id = SEXP_to_longlong(R_file_id, 0);
  hsize_t* size;
  if(XLENGTH(R_size) == 0) {
    size = NULL;
  }
  else {
    R_helper = PROTECT(RToH5(R_size, h5_datatype[DT_hsize_t], XLENGTH(R_size)));
    size= (hsize_t*) VOIDPTR(R_helper);
    vars_protected++;
  }
  herr_t return_val = H5Fget_filesize(file_id, size);
  SEXP R_return_val= R_NilValue;
  R_return_val = PROTECT(ScalarInteger64_or_int(return_val));
  vars_protected++;
  size_helper = guess_nelem(R_size, h5_datatype[DT_hsize_t]);
  R_size = PROTECT(H5ToR_single_step(size, h5_datatype[DT_hsize_t], size_helper, H5TOR_CONV_INT64_NOLOSS));
  vars_protected++;
  SEXP __ret_list;
  PROTECT(__ret_list = allocVector(VECSXP, 2));
  SET_VECTOR_ELT(__ret_list, 0, R_return_val);
  SET_VECTOR_ELT(__ret_list, 1, R_size);
  SEXP __ret_list_names;
  PROTECT(__ret_list_names = allocVector(STRSXP, 2));
  SET_STRING_ELT(__ret_list_names, 0, mkChar("return_val"));
  SET_STRING_ELT(__ret_list_names, 1, mkChar("size"));
  SET_NAMES(__ret_list, __ret_list_names);
  vars_protected += 2;
  UNPROTECT(vars_protected);
  return(__ret_list);
}

/* H5_DLL ssize_t H5Fget_free_sections(hid_t file_id, H5F_mem_t type, size_t nsects, H5F_sect_info_t *sect_info); */
SEXP R_H5Fget_free_sections(SEXP R_file_id, SEXP R_type, SEXP R_nsects, SEXP R_sect_info){
  hsize_t size_helper;
  SEXP R_helper = R_NilValue;
  int vars_protected=0;
  R_sect_info = PROTECT(duplicate(R_sect_info));
  vars_protected++;
  hid_t file_id = SEXP_to_longlong(R_file_id, 0);
  H5F_mem_t type = SEXP_to_longlong(R_type, 0);
  size_t nsects = SEXP_to_longlong(R_nsects, 0);
  R_helper = PROTECT(RToH5(R_sect_info, h5_datatype[DT_H5F_sect_info_t], guess_nelem(R_sect_info, h5_datatype[DT_H5F_sect_info_t])));
  H5F_sect_info_t* sect_info= (H5F_sect_info_t*) VOIDPTR(R_helper);
  vars_protected++;
  ssize_t return_val = H5Fget_free_sections(file_id, type, nsects, sect_info);
  SEXP R_return_val= R_NilValue;
  R_return_val = PROTECT(ScalarInteger64_or_int(return_val));
  vars_protected++;
  size_helper = guess_nelem(R_sect_info, h5_datatype[DT_H5F_sect_info_t]);
  R_sect_info = PROTECT(H5ToR_single_step(sect_info, h5_datatype[DT_H5F_sect_info_t], size_helper, H5TOR_CONV_INT64_NOLOSS));
  vars_protected++;
  SEXP __ret_list;
  PROTECT(__ret_list = allocVector(VECSXP, 2));
  SET_VECTOR_ELT(__ret_list, 0, R_return_val);
  SET_VECTOR_ELT(__ret_list, 1, R_sect_info);
  SEXP __ret_list_names;
  PROTECT(__ret_list_names = allocVector(STRSXP, 2));
  SET_STRING_ELT(__ret_list_names, 0, mkChar("return_val"));
  SET_STRING_ELT(__ret_list_names, 1, mkChar("sect_info"));
  SET_NAMES(__ret_list, __ret_list_names);
  vars_protected += 2;
  UNPROTECT(vars_protected);
  return(__ret_list);
}

/* H5_DLL hssize_t H5Fget_freespace(hid_t file_id); */
SEXP R_H5Fget_freespace(SEXP R_file_id){
  int vars_protected=0;
  hid_t file_id = SEXP_to_longlong(R_file_id, 0);
  hssize_t return_val = H5Fget_freespace(file_id);
  SEXP R_return_val= R_NilValue;
  R_return_val = PROTECT(ScalarInteger64_or_int(return_val));
  vars_protected++;
  SEXP __ret_list;
  PROTECT(__ret_list = allocVector(VECSXP, 1));
  SET_VECTOR_ELT(__ret_list, 0, R_return_val);
  SEXP __ret_list_names;
  PROTECT(__ret_list_names = allocVector(STRSXP, 1));
  SET_STRING_ELT(__ret_list_names, 0, mkChar("return_val"));
  SET_NAMES(__ret_list, __ret_list_names);
  vars_protected += 2;
  UNPROTECT(vars_protected);
  return(__ret_list);
}

/* H5_DLL herr_t H5Fget_info1(hid_t obj_id, H5F_info1_t *finfo); */
SEXP R_H5Fget_info1(SEXP R_obj_id, SEXP R_finfo){
  hsize_t size_helper;
  SEXP R_helper = R_NilValue;
  int vars_protected=0;
  R_finfo = PROTECT(duplicate(R_finfo));
  vars_protected++;
  hid_t obj_id = SEXP_to_longlong(R_obj_id, 0);
  R_helper = PROTECT(RToH5(R_finfo, h5_datatype[DT_H5F_info1_t], guess_nelem(R_finfo, h5_datatype[DT_H5F_info1_t])));
  H5F_info1_t* finfo= (H5F_info1_t*) VOIDPTR(R_helper);
  vars_protected++;
  herr_t return_val = H5Fget_info1(obj_id, finfo);
  SEXP R_return_val= R_NilValue;
  R_return_val = PROTECT(ScalarInteger64_or_int(return_val));
  vars_protected++;
  size_helper = guess_nelem(R_finfo, h5_datatype[DT_H5F_info1_t]);
  R_finfo = PROTECT(H5ToR_single_step(finfo, h5_datatype[DT_H5F_info1_t], size_helper, H5TOR_CONV_INT64_NOLOSS));
  vars_protected++;
  SEXP __ret_list;
  PROTECT(__ret_list = allocVector(VECSXP, 2));
  SET_VECTOR_ELT(__ret_list, 0, R_return_val);
  SET_VECTOR_ELT(__ret_list, 1, R_finfo);
  SEXP __ret_list_names;
  PROTECT(__ret_list_names = allocVector(STRSXP, 2));
  SET_STRING_ELT(__ret_list_names, 0, mkChar("return_val"));
  SET_STRING_ELT(__ret_list_names, 1, mkChar("finfo"));
  SET_NAMES(__ret_list, __ret_list_names);
  vars_protected += 2;
  UNPROTECT(vars_protected);
  return(__ret_list);
}

/* H5_DLL herr_t H5Fget_info2(hid_t obj_id, H5F_info2_t *finfo); */
SEXP R_H5Fget_info2(SEXP R_obj_id, SEXP R_finfo){
  hsize_t size_helper;
  SEXP R_helper = R_NilValue;
  int vars_protected=0;
  R_finfo = PROTECT(duplicate(R_finfo));
  vars_protected++;
  hid_t obj_id = SEXP_to_longlong(R_obj_id, 0);
  R_helper = PROTECT(RToH5(R_finfo, h5_datatype[DT_H5F_info2_t], guess_nelem(R_finfo, h5_datatype[DT_H5F_info2_t])));
  H5F_info2_t* finfo= (H5F_info2_t*) VOIDPTR(R_helper);
  vars_protected++;
  herr_t return_val = H5Fget_info2(obj_id, finfo);
  SEXP R_return_val= R_NilValue;
  R_return_val = PROTECT(ScalarInteger64_or_int(return_val));
  vars_protected++;
  size_helper = guess_nelem(R_finfo, h5_datatype[DT_H5F_info2_t]);
  R_finfo = PROTECT(H5ToR_single_step(finfo, h5_datatype[DT_H5F_info2_t], size_helper, H5TOR_CONV_INT64_NOLOSS));
  vars_protected++;
  SEXP __ret_list;
  PROTECT(__ret_list = allocVector(VECSXP, 2));
  SET_VECTOR_ELT(__ret_list, 0, R_return_val);
  SET_VECTOR_ELT(__ret_list, 1, R_finfo);
  SEXP __ret_list_names;
  PROTECT(__ret_list_names = allocVector(STRSXP, 2));
  SET_STRING_ELT(__ret_list_names, 0, mkChar("return_val"));
  SET_STRING_ELT(__ret_list_names, 1, mkChar("finfo"));
  SET_NAMES(__ret_list, __ret_list_names);
  vars_protected += 2;
  UNPROTECT(vars_protected);
  return(__ret_list);
}

/* H5_DLL herr_t H5Fget_intent(hid_t file_id, unsigned * intent); */
SEXP R_H5Fget_intent(SEXP R_file_id, SEXP R_intent){
  hsize_t size_helper;
  SEXP R_helper = R_NilValue;
  int vars_protected=0;
  R_intent = PROTECT(duplicate(R_intent));
  vars_protected++;
  hid_t file_id = SEXP_to_longlong(R_file_id, 0);
  unsigned* intent;
  if(XLENGTH(R_intent) == 0) {
    intent = NULL;
  }
  else {
    R_helper = PROTECT(RToH5(R_intent, h5_datatype[DT_unsigned], XLENGTH(R_intent)));
    intent= (unsigned*) VOIDPTR(R_helper);
    vars_protected++;
  }
  herr_t return_val = H5Fget_intent(file_id, intent);
  SEXP R_return_val= R_NilValue;
  R_return_val = PROTECT(ScalarInteger64_or_int(return_val));
  vars_protected++;
  size_helper = guess_nelem(R_intent, h5_datatype[DT_unsigned]);
  R_intent = PROTECT(H5ToR_single_step(intent, h5_datatype[DT_unsigned], size_helper, H5TOR_CONV_INT64_NOLOSS));
  vars_protected++;
  SEXP __ret_list;
  PROTECT(__ret_list = allocVector(VECSXP, 2));
  SET_VECTOR_ELT(__ret_list, 0, R_return_val);
  SET_VECTOR_ELT(__ret_list, 1, R_intent);
  SEXP __ret_list_names;
  PROTECT(__ret_list_names = allocVector(STRSXP, 2));
  SET_STRING_ELT(__ret_list_names, 0, mkChar("return_val"));
  SET_STRING_ELT(__ret_list_names, 1, mkChar("intent"));
  SET_NAMES(__ret_list, __ret_list_names);
  vars_protected += 2;
  UNPROTECT(vars_protected);
  return(__ret_list);
}

/* H5_DLL herr_t H5Fget_mdc_config(hid_t file_id, H5AC_cache_config_t * config_ptr); */
SEXP R_H5Fget_mdc_config(SEXP R_file_id, SEXP R_config_ptr){
  hsize_t size_helper;
  SEXP R_helper = R_NilValue;
  int vars_protected=0;
  R_config_ptr = PROTECT(duplicate(R_config_ptr));
  vars_protected++;
  hid_t file_id = SEXP_to_longlong(R_file_id, 0);
  R_helper = PROTECT(RToH5(R_config_ptr, h5_datatype[DT_H5AC_cache_config_t], guess_nelem(R_config_ptr, h5_datatype[DT_H5AC_cache_config_t])));
  H5AC_cache_config_t* config_ptr= (H5AC_cache_config_t*) VOIDPTR(R_helper);
  vars_protected++;
  herr_t return_val = H5Fget_mdc_config(file_id, config_ptr);
  SEXP R_return_val= R_NilValue;
  R_return_val = PROTECT(ScalarInteger64_or_int(return_val));
  vars_protected++;
  size_helper = guess_nelem(R_config_ptr, h5_datatype[DT_H5AC_cache_config_t]);
  R_config_ptr = PROTECT(H5ToR_single_step(config_ptr, h5_datatype[DT_H5AC_cache_config_t], size_helper, H5TOR_CONV_INT64_NOLOSS));
  vars_protected++;
  SEXP __ret_list;
  PROTECT(__ret_list = allocVector(VECSXP, 2));
  SET_VECTOR_ELT(__ret_list, 0, R_return_val);
  SET_VECTOR_ELT(__ret_list, 1, R_config_ptr);
  SEXP __ret_list_names;
  PROTECT(__ret_list_names = allocVector(STRSXP, 2));
  SET_STRING_ELT(__ret_list_names, 0, mkChar("return_val"));
  SET_STRING_ELT(__ret_list_names, 1, mkChar("config_ptr"));
  SET_NAMES(__ret_list, __ret_list_names);
  vars_protected += 2;
  UNPROTECT(vars_protected);
  return(__ret_list);
}

/* H5_DLL herr_t H5Fget_mdc_hit_rate(hid_t file_id, double * hit_rate_ptr); */
SEXP R_H5Fget_mdc_hit_rate(SEXP R_file_id, SEXP R_hit_rate_ptr){
  hsize_t size_helper;
  SEXP R_helper = R_NilValue;
  int vars_protected=0;
  R_hit_rate_ptr = PROTECT(duplicate(R_hit_rate_ptr));
  vars_protected++;
  hid_t file_id = SEXP_to_longlong(R_file_id, 0);
  double* hit_rate_ptr;
  if(XLENGTH(R_hit_rate_ptr) == 0) {
    hit_rate_ptr = NULL;
  }
  else {
    R_helper = PROTECT(RToH5(R_hit_rate_ptr, h5_datatype[DT_double], XLENGTH(R_hit_rate_ptr)));
    hit_rate_ptr= (double*) VOIDPTR(R_helper);
    vars_protected++;
  }
  herr_t return_val = H5Fget_mdc_hit_rate(file_id, hit_rate_ptr);
  SEXP R_return_val= R_NilValue;
  R_return_val = PROTECT(ScalarInteger64_or_int(return_val));
  vars_protected++;
  size_helper = guess_nelem(R_hit_rate_ptr, h5_datatype[DT_double]);
  R_hit_rate_ptr = PROTECT(H5ToR_single_step(hit_rate_ptr, h5_datatype[DT_double], size_helper, H5TOR_CONV_INT64_NOLOSS));
  vars_protected++;
  SEXP __ret_list;
  PROTECT(__ret_list = allocVector(VECSXP, 2));
  SET_VECTOR_ELT(__ret_list, 0, R_return_val);
  SET_VECTOR_ELT(__ret_list, 1, R_hit_rate_ptr);
  SEXP __ret_list_names;
  PROTECT(__ret_list_names = allocVector(STRSXP, 2));
  SET_STRING_ELT(__ret_list_names, 0, mkChar("return_val"));
  SET_STRING_ELT(__ret_list_names, 1, mkChar("hit_rate_ptr"));
  SET_NAMES(__ret_list, __ret_list_names);
  vars_protected += 2;
  UNPROTECT(vars_protected);
  return(__ret_list);
}

/* H5_DLL herr_t H5Fget_mdc_logging_status(hid_t file_id, hbool_t *is_enabled, hbool_t *is_currently_logging); */
SEXP R_H5Fget_mdc_logging_status(SEXP R_file_id, SEXP R_is_enabled, SEXP R_is_currently_logging){
  hsize_t size_helper;
  SEXP R_helper = R_NilValue;
  int vars_protected=0;
  R_is_enabled = PROTECT(duplicate(R_is_enabled));
  vars_protected++;
  R_is_currently_logging = PROTECT(duplicate(R_is_currently_logging));
  vars_protected++;
  hid_t file_id = SEXP_to_longlong(R_file_id, 0);
  hbool_t* is_enabled;
  if(XLENGTH(R_is_enabled) == 0) {
    is_enabled = NULL;
  }
  else {
    R_helper = PROTECT(RToH5(R_is_enabled, h5_datatype[DT_hbool_t], XLENGTH(R_is_enabled)));
    is_enabled= (hbool_t*) VOIDPTR(R_helper);
    vars_protected++;
  }
  hbool_t* is_currently_logging;
  if(XLENGTH(R_is_currently_logging) == 0) {
    is_currently_logging = NULL;
  }
  else {
    R_helper = PROTECT(RToH5(R_is_currently_logging, h5_datatype[DT_hbool_t], XLENGTH(R_is_currently_logging)));
    is_currently_logging= (hbool_t*) VOIDPTR(R_helper);
    vars_protected++;
  }
  herr_t return_val = H5Fget_mdc_logging_status(file_id, is_enabled, is_currently_logging);
  SEXP R_return_val= R_NilValue;
  R_return_val = PROTECT(ScalarInteger64_or_int(return_val));
  vars_protected++;
  size_helper = guess_nelem(R_is_enabled, h5_datatype[DT_hbool_t]);
  R_is_enabled = PROTECT(H5ToR_single_step(is_enabled, h5_datatype[DT_hbool_t], size_helper, H5TOR_CONV_INT64_NOLOSS));
  vars_protected++;
  size_helper = guess_nelem(R_is_currently_logging, h5_datatype[DT_hbool_t]);
  R_is_currently_logging = PROTECT(H5ToR_single_step(is_currently_logging, h5_datatype[DT_hbool_t], size_helper, H5TOR_CONV_INT64_NOLOSS));
  vars_protected++;
  SEXP __ret_list;
  PROTECT(__ret_list = allocVector(VECSXP, 3));
  SET_VECTOR_ELT(__ret_list, 0, R_return_val);
  SET_VECTOR_ELT(__ret_list, 1, R_is_enabled);
  SET_VECTOR_ELT(__ret_list, 2, R_is_currently_logging);
  SEXP __ret_list_names;
  PROTECT(__ret_list_names = allocVector(STRSXP, 3));
  SET_STRING_ELT(__ret_list_names, 0, mkChar("return_val"));
  SET_STRING_ELT(__ret_list_names, 1, mkChar("is_enabled"));
  SET_STRING_ELT(__ret_list_names, 2, mkChar("is_currently_logging"));
  SET_NAMES(__ret_list, __ret_list_names);
  vars_protected += 2;
  UNPROTECT(vars_protected);
  return(__ret_list);
}

/* H5_DLL herr_t H5Fget_mdc_size(hid_t file_id, size_t * max_size_ptr, size_t * min_clean_size_ptr, size_t * cur_size_ptr, int * cur_num_entries_ptr); */
SEXP R_H5Fget_mdc_size(SEXP R_file_id, SEXP R_max_size_ptr, SEXP R_min_clean_size_ptr, SEXP R_cur_size_ptr, SEXP R_cur_num_entries_ptr){
  hsize_t size_helper;
  SEXP R_helper = R_NilValue;
  int vars_protected=0;
  R_max_size_ptr = PROTECT(duplicate(R_max_size_ptr));
  vars_protected++;
  R_min_clean_size_ptr = PROTECT(duplicate(R_min_clean_size_ptr));
  vars_protected++;
  R_cur_size_ptr = PROTECT(duplicate(R_cur_size_ptr));
  vars_protected++;
  R_cur_num_entries_ptr = PROTECT(duplicate(R_cur_num_entries_ptr));
  vars_protected++;
  hid_t file_id = SEXP_to_longlong(R_file_id, 0);
  size_t* max_size_ptr;
  if(XLENGTH(R_max_size_ptr) == 0) {
    max_size_ptr = NULL;
  }
  else {
    R_helper = PROTECT(RToH5(R_max_size_ptr, h5_datatype[DT_size_t], XLENGTH(R_max_size_ptr)));
    max_size_ptr= (size_t*) VOIDPTR(R_helper);
    vars_protected++;
  }
  size_t* min_clean_size_ptr;
  if(XLENGTH(R_min_clean_size_ptr) == 0) {
    min_clean_size_ptr = NULL;
  }
  else {
    R_helper = PROTECT(RToH5(R_min_clean_size_ptr, h5_datatype[DT_size_t], XLENGTH(R_min_clean_size_ptr)));
    min_clean_size_ptr= (size_t*) VOIDPTR(R_helper);
    vars_protected++;
  }
  size_t* cur_size_ptr;
  if(XLENGTH(R_cur_size_ptr) == 0) {
    cur_size_ptr = NULL;
  }
  else {
    R_helper = PROTECT(RToH5(R_cur_size_ptr, h5_datatype[DT_size_t], XLENGTH(R_cur_size_ptr)));
    cur_size_ptr= (size_t*) VOIDPTR(R_helper);
    vars_protected++;
  }
  int* cur_num_entries_ptr;
  if(XLENGTH(R_cur_num_entries_ptr) == 0) {
    cur_num_entries_ptr = NULL;
  }
  else {
    R_helper = PROTECT(RToH5(R_cur_num_entries_ptr, h5_datatype[DT_int], XLENGTH(R_cur_num_entries_ptr)));
    cur_num_entries_ptr= (int*) VOIDPTR(R_helper);
    vars_protected++;
  }
  herr_t return_val = H5Fget_mdc_size(file_id, max_size_ptr, min_clean_size_ptr, cur_size_ptr, cur_num_entries_ptr);
  SEXP R_return_val= R_NilValue;
  R_return_val = PROTECT(ScalarInteger64_or_int(return_val));
  vars_protected++;
  size_helper = guess_nelem(R_max_size_ptr, h5_datatype[DT_size_t]);
  R_max_size_ptr = PROTECT(H5ToR_single_step(max_size_ptr, h5_datatype[DT_size_t], size_helper, H5TOR_CONV_INT64_NOLOSS));
  vars_protected++;
  size_helper = guess_nelem(R_min_clean_size_ptr, h5_datatype[DT_size_t]);
  R_min_clean_size_ptr = PROTECT(H5ToR_single_step(min_clean_size_ptr, h5_datatype[DT_size_t], size_helper, H5TOR_CONV_INT64_NOLOSS));
  vars_protected++;
  size_helper = guess_nelem(R_cur_size_ptr, h5_datatype[DT_size_t]);
  R_cur_size_ptr = PROTECT(H5ToR_single_step(cur_size_ptr, h5_datatype[DT_size_t], size_helper, H5TOR_CONV_INT64_NOLOSS));
  vars_protected++;
  size_helper = guess_nelem(R_cur_num_entries_ptr, h5_datatype[DT_int]);
  R_cur_num_entries_ptr = PROTECT(H5ToR_single_step(cur_num_entries_ptr, h5_datatype[DT_int], size_helper, H5TOR_CONV_INT64_NOLOSS));
  vars_protected++;
  SEXP __ret_list;
  PROTECT(__ret_list = allocVector(VECSXP, 5));
  SET_VECTOR_ELT(__ret_list, 0, R_return_val);
  SET_VECTOR_ELT(__ret_list, 1, R_max_size_ptr);
  SET_VECTOR_ELT(__ret_list, 2, R_min_clean_size_ptr);
  SET_VECTOR_ELT(__ret_list, 3, R_cur_size_ptr);
  SET_VECTOR_ELT(__ret_list, 4, R_cur_num_entries_ptr);
  SEXP __ret_list_names;
  PROTECT(__ret_list_names = allocVector(STRSXP, 5));
  SET_STRING_ELT(__ret_list_names, 0, mkChar("return_val"));
  SET_STRING_ELT(__ret_list_names, 1, mkChar("max_size_ptr"));
  SET_STRING_ELT(__ret_list_names, 2, mkChar("min_clean_size_ptr"));
  SET_STRING_ELT(__ret_list_names, 3, mkChar("cur_size_ptr"));
  SET_STRING_ELT(__ret_list_names, 4, mkChar("cur_num_entries_ptr"));
  SET_NAMES(__ret_list, __ret_list_names);
  vars_protected += 2;
  UNPROTECT(vars_protected);
  return(__ret_list);
}

/* H5_DLL herr_t H5Fget_metadata_read_retry_info(hid_t file_id, H5F_retry_info_t *info); */
SEXP R_H5Fget_metadata_read_retry_info(SEXP R_file_id, SEXP R_info){
  hsize_t size_helper;
  SEXP R_helper = R_NilValue;
  int vars_protected=0;
  R_info = PROTECT(duplicate(R_info));
  vars_protected++;
  hid_t file_id = SEXP_to_longlong(R_file_id, 0);
  R_helper = PROTECT(RToH5(R_info, h5_datatype[DT_H5F_retry_info_t], guess_nelem(R_info, h5_datatype[DT_H5F_retry_info_t])));
  H5F_retry_info_t* info= (H5F_retry_info_t*) VOIDPTR(R_helper);
  vars_protected++;
  herr_t return_val = H5Fget_metadata_read_retry_info(file_id, info);
  SEXP R_return_val= R_NilValue;
  R_return_val = PROTECT(ScalarInteger64_or_int(return_val));
  vars_protected++;
  size_helper = guess_nelem(R_info, h5_datatype[DT_H5F_retry_info_t]);
  R_info = PROTECT(H5ToR_single_step(info, h5_datatype[DT_H5F_retry_info_t], size_helper, H5TOR_CONV_INT64_NOLOSS));
  vars_protected++;
  SEXP __ret_list;
  PROTECT(__ret_list = allocVector(VECSXP, 2));
  SET_VECTOR_ELT(__ret_list, 0, R_return_val);
  SET_VECTOR_ELT(__ret_list, 1, R_info);
  SEXP __ret_list_names;
  PROTECT(__ret_list_names = allocVector(STRSXP, 2));
  SET_STRING_ELT(__ret_list_names, 0, mkChar("return_val"));
  SET_STRING_ELT(__ret_list_names, 1, mkChar("info"));
  SET_NAMES(__ret_list, __ret_list_names);
  vars_protected += 2;
  UNPROTECT(vars_protected);
  return(__ret_list);
}

/* H5_DLL ssize_t H5Fget_name(hid_t obj_id, char *name, size_t size); */
SEXP R_H5Fget_name(SEXP R_obj_id, SEXP R_name, SEXP R_size){
  int vars_protected=0;
  R_name = PROTECT(duplicate(R_name));
  vars_protected++;
  hid_t obj_id = SEXP_to_longlong(R_obj_id, 0);
  char* name;
  if(XLENGTH(R_name) == 0) {
    name = NULL;
  }
  else {
    name = R_alloc(strlen(CHAR(STRING_ELT(R_name, 0))) + 1, 1);
    strcpy(name, CHAR(STRING_ELT(R_name, 0)));
  }
  size_t size = SEXP_to_longlong(R_size, 0);
  ssize_t return_val = H5Fget_name(obj_id, name, size);
  SEXP R_return_val= R_NilValue;
  R_return_val = PROTECT(ScalarInteger64_or_int(return_val));
  vars_protected++;
  if(name==NULL) {
    R_name = PROTECT(NEW_CHARACTER(0));
    vars_protected++;
  }
  else {
    R_name = PROTECT(mkString(name));
    vars_protected++;
  }
  SEXP __ret_list;
  PROTECT(__ret_list = allocVector(VECSXP, 2));
  SET_VECTOR_ELT(__ret_list, 0, R_return_val);
  SET_VECTOR_ELT(__ret_list, 1, R_name);
  SEXP __ret_list_names;
  PROTECT(__ret_list_names = allocVector(STRSXP, 2));
  SET_STRING_ELT(__ret_list_names, 0, mkChar("return_val"));
  SET_STRING_ELT(__ret_list_names, 1, mkChar("name"));
  SET_NAMES(__ret_list, __ret_list_names);
  vars_protected += 2;
  UNPROTECT(vars_protected);
  return(__ret_list);
}

/* H5_DLL ssize_t H5Fget_obj_count(hid_t file_id, unsigned types); */
SEXP R_H5Fget_obj_count(SEXP R_file_id, SEXP R_types){
  int vars_protected=0;
  hid_t file_id = SEXP_to_longlong(R_file_id, 0);
  unsigned types = SEXP_to_longlong(R_types, 0);
  ssize_t return_val = H5Fget_obj_count(file_id, types);
  SEXP R_return_val= R_NilValue;
  R_return_val = PROTECT(ScalarInteger64_or_int(return_val));
  vars_protected++;
  SEXP __ret_list;
  PROTECT(__ret_list = allocVector(VECSXP, 1));
  SET_VECTOR_ELT(__ret_list, 0, R_return_val);
  SEXP __ret_list_names;
  PROTECT(__ret_list_names = allocVector(STRSXP, 1));
  SET_STRING_ELT(__ret_list_names, 0, mkChar("return_val"));
  SET_NAMES(__ret_list, __ret_list_names);
  vars_protected += 2;
  UNPROTECT(vars_protected);
  return(__ret_list);
}

/* H5_DLL ssize_t H5Fget_obj_ids(hid_t file_id, unsigned types, size_t max_objs, hid_t *obj_id_list); */
SEXP R_H5Fget_obj_ids(SEXP R_file_id, SEXP R_types, SEXP R_max_objs, SEXP R_obj_id_list){
  hsize_t size_helper;
  SEXP R_helper = R_NilValue;
  int vars_protected=0;
  R_obj_id_list = PROTECT(duplicate(R_obj_id_list));
  vars_protected++;
  hid_t file_id = SEXP_to_longlong(R_file_id, 0);
  unsigned types = SEXP_to_longlong(R_types, 0);
  size_t max_objs = SEXP_to_longlong(R_max_objs, 0);
  hid_t* obj_id_list;
  if(XLENGTH(R_obj_id_list) == 0) {
    obj_id_list = NULL;
  }
  else {
    R_helper = PROTECT(RToH5(R_obj_id_list, h5_datatype[DT_hid_t], XLENGTH(R_obj_id_list)));
    obj_id_list= (hid_t*) VOIDPTR(R_helper);
    vars_protected++;
  }
  ssize_t return_val = H5Fget_obj_ids(file_id, types, max_objs, obj_id_list);
  SEXP R_return_val= R_NilValue;
  R_return_val = PROTECT(ScalarInteger64_or_int(return_val));
  vars_protected++;
  size_helper = guess_nelem(R_obj_id_list, h5_datatype[DT_hid_t]);
  R_obj_id_list = PROTECT(H5ToR_single_step(obj_id_list, h5_datatype[DT_hid_t], size_helper, H5TOR_CONV_INT64_NOLOSS));
  vars_protected++;
  SEXP __ret_list;
  PROTECT(__ret_list = allocVector(VECSXP, 2));
  SET_VECTOR_ELT(__ret_list, 0, R_return_val);
  SET_VECTOR_ELT(__ret_list, 1, R_obj_id_list);
  SEXP __ret_list_names;
  PROTECT(__ret_list_names = allocVector(STRSXP, 2));
  SET_STRING_ELT(__ret_list_names, 0, mkChar("return_val"));
  SET_STRING_ELT(__ret_list_names, 1, mkChar("obj_id_list"));
  SET_NAMES(__ret_list, __ret_list_names);
  vars_protected += 2;
  UNPROTECT(vars_protected);
  return(__ret_list);
}

/* H5_DLL htri_t H5Fis_hdf5(const char *filename); */
SEXP R_H5Fis_hdf5(SEXP R_filename){
  int vars_protected=0;
  const char* filename = CHAR(STRING_ELT(R_filename, 0));
  htri_t return_val = H5Fis_hdf5(filename);
  SEXP R_return_val= R_NilValue;
  R_return_val = PROTECT(ScalarInteger64_or_int(return_val));
  vars_protected++;
  SEXP __ret_list;
  PROTECT(__ret_list = allocVector(VECSXP, 1));
  SET_VECTOR_ELT(__ret_list, 0, R_return_val);
  SEXP __ret_list_names;
  PROTECT(__ret_list_names = allocVector(STRSXP, 1));
  SET_STRING_ELT(__ret_list_names, 0, mkChar("return_val"));
  SET_NAMES(__ret_list, __ret_list_names);
  vars_protected += 2;
  UNPROTECT(vars_protected);
  return(__ret_list);
}

/* H5_DLL herr_t H5Fmount(hid_t loc, const char *name, hid_t child, hid_t plist); */
SEXP R_H5Fmount(SEXP R_loc, SEXP R_name, SEXP R_child, SEXP R_plist){
  int vars_protected=0;
  hid_t loc = SEXP_to_longlong(R_loc, 0);
  const char* name = CHAR(STRING_ELT(R_name, 0));
  hid_t child = SEXP_to_longlong(R_child, 0);
  hid_t plist = SEXP_to_longlong(R_plist, 0);
  herr_t return_val = H5Fmount(loc, name, child, plist);
  SEXP R_return_val= R_NilValue;
  R_return_val = PROTECT(ScalarInteger64_or_int(return_val));
  vars_protected++;
  SEXP __ret_list;
  PROTECT(__ret_list = allocVector(VECSXP, 1));
  SET_VECTOR_ELT(__ret_list, 0, R_return_val);
  SEXP __ret_list_names;
  PROTECT(__ret_list_names = allocVector(STRSXP, 1));
  SET_STRING_ELT(__ret_list_names, 0, mkChar("return_val"));
  SET_NAMES(__ret_list, __ret_list_names);
  vars_protected += 2;
  UNPROTECT(vars_protected);
  return(__ret_list);
}

/* H5_DLL hid_t H5Fopen(const char *filename, unsigned flags, hid_t access_plist); */
SEXP R_H5Fopen(SEXP R_filename, SEXP R_flags, SEXP R_access_plist){
  int vars_protected=0;
  const char* filename = CHAR(STRING_ELT(R_filename, 0));
  unsigned flags = SEXP_to_longlong(R_flags, 0);
  hid_t access_plist = SEXP_to_longlong(R_access_plist, 0);
  hid_t return_val = H5Fopen(filename, flags, access_plist);
  SEXP R_return_val= R_NilValue;
  R_return_val = PROTECT(ScalarInteger64_or_int(return_val));
  vars_protected++;
  SEXP __ret_list;
  PROTECT(__ret_list = allocVector(VECSXP, 1));
  SET_VECTOR_ELT(__ret_list, 0, R_return_val);
  SEXP __ret_list_names;
  PROTECT(__ret_list_names = allocVector(STRSXP, 1));
  SET_STRING_ELT(__ret_list_names, 0, mkChar("return_val"));
  SET_NAMES(__ret_list, __ret_list_names);
  vars_protected += 2;
  UNPROTECT(vars_protected);
  return(__ret_list);
}

/* H5_DLL hid_t H5Freopen(hid_t file_id); */
SEXP R_H5Freopen(SEXP R_file_id){
  int vars_protected=0;
  hid_t file_id = SEXP_to_longlong(R_file_id, 0);
  hid_t return_val = H5Freopen(file_id);
  SEXP R_return_val= R_NilValue;
  R_return_val = PROTECT(ScalarInteger64_or_int(return_val));
  vars_protected++;
  SEXP __ret_list;
  PROTECT(__ret_list = allocVector(VECSXP, 1));
  SET_VECTOR_ELT(__ret_list, 0, R_return_val);
  SEXP __ret_list_names;
  PROTECT(__ret_list_names = allocVector(STRSXP, 1));
  SET_STRING_ELT(__ret_list_names, 0, mkChar("return_val"));
  SET_NAMES(__ret_list, __ret_list_names);
  vars_protected += 2;
  UNPROTECT(vars_protected);
  return(__ret_list);
}

/* H5_DLL herr_t H5Freset_mdc_hit_rate_stats(hid_t file_id); */
SEXP R_H5Freset_mdc_hit_rate_stats(SEXP R_file_id){
  int vars_protected=0;
  hid_t file_id = SEXP_to_longlong(R_file_id, 0);
  herr_t return_val = H5Freset_mdc_hit_rate_stats(file_id);
  SEXP R_return_val= R_NilValue;
  R_return_val = PROTECT(ScalarInteger64_or_int(return_val));
  vars_protected++;
  SEXP __ret_list;
  PROTECT(__ret_list = allocVector(VECSXP, 1));
  SET_VECTOR_ELT(__ret_list, 0, R_return_val);
  SEXP __ret_list_names;
  PROTECT(__ret_list_names = allocVector(STRSXP, 1));
  SET_STRING_ELT(__ret_list_names, 0, mkChar("return_val"));
  SET_NAMES(__ret_list, __ret_list_names);
  vars_protected += 2;
  UNPROTECT(vars_protected);
  return(__ret_list);
}

/* H5_DLL herr_t H5Fset_mdc_config(hid_t file_id, H5AC_cache_config_t * config_ptr); */
SEXP R_H5Fset_mdc_config(SEXP R_file_id, SEXP R_config_ptr){
  hsize_t size_helper;
  SEXP R_helper = R_NilValue;
  int vars_protected=0;
  R_config_ptr = PROTECT(duplicate(R_config_ptr));
  vars_protected++;
  hid_t file_id = SEXP_to_longlong(R_file_id, 0);
  R_helper = PROTECT(RToH5(R_config_ptr, h5_datatype[DT_H5AC_cache_config_t], guess_nelem(R_config_ptr, h5_datatype[DT_H5AC_cache_config_t])));
  H5AC_cache_config_t* config_ptr= (H5AC_cache_config_t*) VOIDPTR(R_helper);
  vars_protected++;
  herr_t return_val = H5Fset_mdc_config(file_id, config_ptr);
  SEXP R_return_val= R_NilValue;
  R_return_val = PROTECT(ScalarInteger64_or_int(return_val));
  vars_protected++;
  size_helper = guess_nelem(R_config_ptr, h5_datatype[DT_H5AC_cache_config_t]);
  R_config_ptr = PROTECT(H5ToR_single_step(config_ptr, h5_datatype[DT_H5AC_cache_config_t], size_helper, H5TOR_CONV_INT64_NOLOSS));
  vars_protected++;
  SEXP __ret_list;
  PROTECT(__ret_list = allocVector(VECSXP, 2));
  SET_VECTOR_ELT(__ret_list, 0, R_return_val);
  SET_VECTOR_ELT(__ret_list, 1, R_config_ptr);
  SEXP __ret_list_names;
  PROTECT(__ret_list_names = allocVector(STRSXP, 2));
  SET_STRING_ELT(__ret_list_names, 0, mkChar("return_val"));
  SET_STRING_ELT(__ret_list_names, 1, mkChar("config_ptr"));
  SET_NAMES(__ret_list, __ret_list_names);
  vars_protected += 2;
  UNPROTECT(vars_protected);
  return(__ret_list);
}

/* H5_DLL herr_t H5Fstart_mdc_logging(hid_t file_id); */
SEXP R_H5Fstart_mdc_logging(SEXP R_file_id){
  int vars_protected=0;
  hid_t file_id = SEXP_to_longlong(R_file_id, 0);
  herr_t return_val = H5Fstart_mdc_logging(file_id);
  SEXP R_return_val= R_NilValue;
  R_return_val = PROTECT(ScalarInteger64_or_int(return_val));
  vars_protected++;
  SEXP __ret_list;
  PROTECT(__ret_list = allocVector(VECSXP, 1));
  SET_VECTOR_ELT(__ret_list, 0, R_return_val);
  SEXP __ret_list_names;
  PROTECT(__ret_list_names = allocVector(STRSXP, 1));
  SET_STRING_ELT(__ret_list_names, 0, mkChar("return_val"));
  SET_NAMES(__ret_list, __ret_list_names);
  vars_protected += 2;
  UNPROTECT(vars_protected);
  return(__ret_list);
}

/* H5_DLL herr_t H5Fstart_swmr_write(hid_t file_id); */
SEXP R_H5Fstart_swmr_write(SEXP R_file_id){
  int vars_protected=0;
  hid_t file_id = SEXP_to_longlong(R_file_id, 0);
  herr_t return_val = H5Fstart_swmr_write(file_id);
  SEXP R_return_val= R_NilValue;
  R_return_val = PROTECT(ScalarInteger64_or_int(return_val));
  vars_protected++;
  SEXP __ret_list;
  PROTECT(__ret_list = allocVector(VECSXP, 1));
  SET_VECTOR_ELT(__ret_list, 0, R_return_val);
  SEXP __ret_list_names;
  PROTECT(__ret_list_names = allocVector(STRSXP, 1));
  SET_STRING_ELT(__ret_list_names, 0, mkChar("return_val"));
  SET_NAMES(__ret_list, __ret_list_names);
  vars_protected += 2;
  UNPROTECT(vars_protected);
  return(__ret_list);
}

/* H5_DLL herr_t H5Fstop_mdc_logging(hid_t file_id); */
SEXP R_H5Fstop_mdc_logging(SEXP R_file_id){
  int vars_protected=0;
  hid_t file_id = SEXP_to_longlong(R_file_id, 0);
  herr_t return_val = H5Fstop_mdc_logging(file_id);
  SEXP R_return_val= R_NilValue;
  R_return_val = PROTECT(ScalarInteger64_or_int(return_val));
  vars_protected++;
  SEXP __ret_list;
  PROTECT(__ret_list = allocVector(VECSXP, 1));
  SET_VECTOR_ELT(__ret_list, 0, R_return_val);
  SEXP __ret_list_names;
  PROTECT(__ret_list_names = allocVector(STRSXP, 1));
  SET_STRING_ELT(__ret_list_names, 0, mkChar("return_val"));
  SET_NAMES(__ret_list, __ret_list_names);
  vars_protected += 2;
  UNPROTECT(vars_protected);
  return(__ret_list);
}

/* H5_DLL herr_t H5Funmount(hid_t loc, const char *name); */
SEXP R_H5Funmount(SEXP R_loc, SEXP R_name){
  int vars_protected=0;
  hid_t loc = SEXP_to_longlong(R_loc, 0);
  const char* name = CHAR(STRING_ELT(R_name, 0));
  herr_t return_val = H5Funmount(loc, name);
  SEXP R_return_val= R_NilValue;
  R_return_val = PROTECT(ScalarInteger64_or_int(return_val));
  vars_protected++;
  SEXP __ret_list;
  PROTECT(__ret_list = allocVector(VECSXP, 1));
  SET_VECTOR_ELT(__ret_list, 0, R_return_val);
  SEXP __ret_list_names;
  PROTECT(__ret_list_names = allocVector(STRSXP, 1));
  SET_STRING_ELT(__ret_list_names, 0, mkChar("return_val"));
  SET_NAMES(__ret_list, __ret_list_names);
  vars_protected += 2;
  UNPROTECT(vars_protected);
  return(__ret_list);
}

