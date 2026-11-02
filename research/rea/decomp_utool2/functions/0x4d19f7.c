// rea decompile_all
// name: __crt_strtox::parse_floating_point_from_source<__crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>_>
// address: 0x4d19f7
// body: available
// range: 0x4d19f7-0x4d1e5d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    enum __crt_strtox::floating_point_parse_result __cdecl
   __crt_strtox::parse_floating_point_from_source<class
   __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char>
   > >(struct __crt_locale_pointers * const,class __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::string_input_adapter<char> > &,struct __crt_strtox::floating_point_string &)
   
   Library: Visual Studio 2015 Release */

floating_point_parse_result __cdecl
__crt_strtox::
parse_floating_point_from_source<__crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>_>
          (__crt_locale_pointers *param_1,
          input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_> *param_2,
          floating_point_string *param_3)

{
  floating_point_string *pfVar1;
  __uint64 _Var2;
  __uint64 _Var3;
  char cVar4;
  int iVar5;
  uint uVar6;
  floating_point_parse_result fVar7;
  uint uVar8;
  floating_point_string *pfVar9;
  char cVar10;
  int local_10;
  char local_b [4];
  char local_7;
  char local_6;
  char local_5;
  
  cVar4 = validate();
  if (cVar4 == '\0') {
    return 7;
  }
  _Var3 = *(__uint64 *)(param_2 + 0x10);
  _Var2 = *(__uint64 *)(param_2 + 0x10);
  cVar4 = input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                    (param_2);
  while( true ) {
    local_b[0] = cVar4;
    iVar5 = __ischartype_l(cVar4,8,param_1);
    if (iVar5 == 0) break;
    cVar4 = input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                      (param_2);
  }
  param_3[0x308] = (floating_point_string)(local_b[0] == '-');
  if ((local_b[0] == '-') || (cVar4 = local_b[0], local_b[0] == '+')) {
    cVar4 = input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                      (param_2);
    local_b[0] = cVar4;
  }
  if ((cVar4 == 'I') || (cVar4 == 'i')) {
    fVar7 = parse_floating_point_possible_infinity<char,__crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>,unsigned___int64>
                      (local_b,param_2,_Var3);
    return fVar7;
  }
  if ((cVar4 == 'N') || (cVar4 == 'n')) {
    fVar7 = parse_floating_point_possible_nan<char,__crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>,unsigned___int64>
                      (local_b,param_2,_Var2);
    return fVar7;
  }
  local_5 = '\0';
  if (cVar4 == '0') {
    cVar4 = input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                      (param_2);
    if ((cVar4 == 'x') || (cVar4 == 'X')) {
      local_5 = '\x01';
      cVar4 = input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                        (param_2);
      local_b[0] = cVar4;
    }
    else {
      input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::unget
                (param_2,cVar4);
      cVar4 = local_b[0];
    }
  }
  local_10 = 0;
  local_6 = '\0';
  pfVar9 = param_3 + 8;
  if (cVar4 == '0') {
    local_6 = '\x01';
    do {
      cVar4 = input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                        (param_2);
      local_b[0] = cVar4;
    } while (cVar4 == '0');
  }
  uVar8 = ((local_5 == '\0') - 1 & 6) + 9;
  while( true ) {
    if ((byte)(cVar4 - 0x30U) < 10) {
      uVar6 = (int)cVar4 - 0x30;
    }
    else if ((byte)(cVar4 + 0x9fU) < 0x1a) {
      uVar6 = (int)cVar4 - 0x57;
    }
    else if ((byte)(cVar4 + 0xbfU) < 0x1a) {
      uVar6 = (int)cVar4 - 0x37;
    }
    else {
      uVar6 = 0xffffffff;
    }
    if (uVar8 < uVar6) break;
    local_6 = '\x01';
    if (pfVar9 != param_3 + 0x308) {
      *pfVar9 = SUB41(uVar6,0);
      pfVar9 = pfVar9 + 1;
    }
    local_10 = local_10 + 1;
    cVar4 = input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                      (param_2);
    local_b[0] = cVar4;
  }
  if (cVar4 == *(char *)**(undefined4 **)(*(int *)param_1 + 0x88)) {
    cVar4 = input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                      (param_2);
    local_b[0] = cVar4;
    if ((pfVar9 == param_3 + 8) && (cVar4 == '0')) {
      local_6 = '\x01';
      do {
        local_10 = local_10 + -1;
        cVar4 = input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                          (param_2);
        local_b[0] = cVar4;
      } while (cVar4 == '0');
    }
    while( true ) {
      if ((byte)(cVar4 - 0x30U) < 10) {
        uVar6 = (int)cVar4 - 0x30;
      }
      else if ((byte)(cVar4 + 0x9fU) < 0x1a) {
        uVar6 = (int)cVar4 - 0x57;
      }
      else if ((byte)(cVar4 + 0xbfU) < 0x1a) {
        uVar6 = (int)cVar4 - 0x37;
      }
      else {
        uVar6 = 0xffffffff;
      }
      if (uVar8 < uVar6) break;
      local_6 = '\x01';
      if (pfVar9 != param_3 + 0x308) {
        *pfVar9 = SUB41(uVar6,0);
        pfVar9 = pfVar9 + 1;
      }
      cVar4 = input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                        (param_2);
      local_b[0] = cVar4;
    }
  }
  iVar5 = 0;
  if (local_6 == '\0') {
    cVar4 = FID_conflict_operator__();
    if (cVar4 == '\0') {
      return 7;
    }
    return ((local_5 == '\0') - 1 & 0xfffffffb) + 7;
  }
  input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::unget
            (param_2,local_b[0]);
  cVar4 = input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                    (param_2);
  if (cVar4 == 'E') {
LAB_004d1c9d:
    cVar10 = local_5 == '\0';
  }
  else {
    if (cVar4 != 'P') {
      if (cVar4 == 'e') goto LAB_004d1c9d;
      cVar10 = '\0';
      if (cVar4 != 'p') goto LAB_004d1ca4;
    }
    cVar10 = local_5;
  }
LAB_004d1ca4:
  local_b[0] = cVar4;
  if (cVar10 != '\0') {
    local_b[0] = input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                           (param_2);
    local_7 = local_b[0] == '-';
    if ((local_b[0] == '+') || (local_b[0] == '-')) {
      local_b[0] = input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::
                   get(param_2);
    }
    local_6 = '\0';
    if (local_b[0] == '0') {
      local_6 = '\x01';
      local_b[0] = '0';
      do {
        local_b[0] = input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>
                     ::get(param_2);
      } while (local_b[0] == '0');
    }
    while( true ) {
      if ((byte)(local_b[0] - 0x30U) < 10) {
        uVar8 = (int)local_b[0] - 0x30;
      }
      else if ((byte)(local_b[0] + 0x9fU) < 0x1a) {
        uVar8 = (int)local_b[0] - 0x57;
      }
      else if ((byte)(local_b[0] + 0xbfU) < 0x1a) {
        uVar8 = (int)local_b[0] - 0x37;
      }
      else {
        uVar8 = 0xffffffff;
      }
      if (9 < uVar8) goto LAB_004d1d4e;
      local_6 = '\x01';
      iVar5 = iVar5 * 10 + uVar8;
      if (0x1450 < iVar5) break;
      local_b[0] = input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::
                   get(param_2);
    }
    iVar5 = 0x1451;
LAB_004d1d4e:
    while( true ) {
      if ((byte)(local_b[0] - 0x30U) < 10) {
        uVar8 = (int)local_b[0] - 0x30;
      }
      else if ((byte)(local_b[0] + 0x9fU) < 0x1a) {
        uVar8 = (int)local_b[0] - 0x57;
      }
      else if ((byte)(local_b[0] + 0xbfU) < 0x1a) {
        uVar8 = (int)local_b[0] - 0x37;
      }
      else {
        uVar8 = 0xffffffff;
      }
      if (9 < uVar8) break;
      local_b[0] = input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::
                   get(param_2);
    }
    if (local_7 != '\0') {
      iVar5 = -iVar5;
    }
    if (local_6 == '\0') {
      cVar4 = FID_conflict_operator__();
      if (cVar4 == '\0') {
        return 7;
      }
      local_b[0] = input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::
                   get(param_2);
    }
  }
  input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::unget
            (param_2,local_b[0]);
  pfVar1 = param_3 + 8;
  if (pfVar9 != pfVar1) {
    do {
      if (pfVar9[-1] != (floating_point_string)0x0) break;
      pfVar9 = pfVar9 + -1;
    } while (pfVar9 != pfVar1);
    if (pfVar9 != pfVar1) {
      if (0x1450 < iVar5) {
        return 9;
      }
      if (-0x1451 < iVar5) {
        iVar5 = iVar5 + (((local_5 == '\0') - 1 & 3) + 1) * local_10;
        if (0x1450 < iVar5) {
          return 9;
        }
        if (-0x1451 < iVar5) {
          *(int *)param_3 = iVar5;
          *(int *)(param_3 + 4) = (int)pfVar9 - (int)pfVar1;
          return (uint)(local_5 != '\0');
        }
      }
      return 8;
    }
  }
  return 2;
}

