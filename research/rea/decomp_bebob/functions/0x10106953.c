// rea decompile_all
// name: ___libm_error_support
// address: 0x10106953
// body: available
// range: 0x10106953-0x10106be9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    ___libm_error_support
   
   Library: Visual Studio 2010 Release */

void __cdecl ___libm_error_support(double *param_1,undefined8 *param_2,double *param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_2c;
  char *local_28;
  double local_24;
  undefined8 local_1c;
  double local_14;
  undefined4 local_c;
  undefined4 uStack_8;
  
  local_c = 0;
  uStack_8 = 0;
  if (DAT_1016aea0 == 0) {
    pcVar1 = FUN_1003395a;
  }
  else {
    pcVar1 = DecodePointer(DAT_1016bfa4);
  }
  if (param_4 < 0xa7) {
    if (param_4 == 0xa6) {
      local_2c = 3;
      local_28 = "exp10";
LAB_101069e9:
      local_24 = *param_1;
      local_1c = *param_2;
      local_14 = *param_3;
      iVar2 = (*pcVar1)(&local_2c);
      if (iVar2 == 0) {
        piVar3 = __errno();
        *piVar3 = 0x22;
      }
    }
    else {
      if (0x19 < param_4) {
        if (param_4 == 0x1a) {
          *param_3 = 1.0;
          return;
        }
        if (param_4 != 0x1b) {
          if (param_4 == 0x1c) goto switchD_10106b40_caseD_3ee;
          if (param_4 != 0x1d) {
            if (param_4 != 0x3a) {
              if (param_4 != 0x3d) {
                return;
              }
              goto switchD_10106b40_caseD_3f1;
            }
            goto switchD_10106b40_caseD_3f0;
          }
          local_28 = "pow";
          goto LAB_10106aeb;
        }
        local_2c = 2;
LAB_101069e2:
        local_28 = "pow";
        goto LAB_101069e9;
      }
      if (param_4 != 0x19) {
        local_2c = 2;
        if (param_4 == 2) {
          local_2c = 2;
          local_28 = "log";
        }
        else {
          if (param_4 == 3) {
            local_28 = "log";
            goto LAB_10106a6f;
          }
          if (param_4 == 8) {
            local_28 = "log10";
          }
          else {
            if (param_4 == 9) {
              local_28 = "log10";
              goto LAB_10106a6f;
            }
            if (param_4 != 0xe) {
              if (param_4 != 0xf) {
                if (param_4 != 0x18) {
                  return;
                }
                local_2c = 3;
                goto LAB_101069e2;
              }
              local_28 = "exp";
              goto LAB_10106a27;
            }
            local_2c = 3;
            local_28 = "exp";
          }
        }
        goto LAB_101069e9;
      }
      local_28 = "pow";
LAB_10106a27:
      local_24 = *param_1;
      local_1c = *param_2;
      local_14 = *param_3;
      local_2c = 4;
      (*pcVar1)(&local_2c);
    }
    goto LAB_10106be2;
  }
  switch(param_4) {
  case 1000:
    local_28 = "log";
    break;
  case 0x3e9:
    local_28 = "log10";
    break;
  case 0x3ea:
    local_28 = "exp";
    break;
  case 0x3eb:
    local_28 = "atan";
    break;
  case 0x3ec:
    local_28 = "ceil";
    break;
  case 0x3ed:
    local_28 = "floor";
    break;
  case 0x3ee:
switchD_10106b40_caseD_3ee:
    local_28 = "pow";
    goto LAB_10106a6f;
  case 0x3ef:
    local_28 = "modf";
    break;
  case 0x3f0:
switchD_10106b40_caseD_3f0:
    local_28 = "acos";
    goto LAB_10106a6f;
  case 0x3f1:
switchD_10106b40_caseD_3f1:
    local_28 = "asin";
    goto LAB_10106a6f;
  case 0x3f2:
    local_28 = "sin";
    goto LAB_10106ba8;
  case 0x3f3:
    local_28 = "cos";
    goto LAB_10106ba8;
  case 0x3f4:
    local_28 = "tan";
LAB_10106ba8:
    local_14 = *param_1 * (double)CONCAT44(uStack_8,local_c);
    *param_3 = local_14;
    local_24 = *param_1;
    local_1c = *param_2;
    goto LAB_10106bc2;
  default:
    goto switchD_10106b40_default;
  }
LAB_10106aeb:
  *param_3 = *param_1;
LAB_10106a6f:
  local_24 = *param_1;
  local_1c = *param_2;
  local_14 = *param_3;
LAB_10106bc2:
  local_2c = 1;
  iVar2 = (*pcVar1)(&local_2c);
  if (iVar2 == 0) {
    piVar3 = __errno();
    *piVar3 = 0x21;
  }
LAB_10106be2:
  *param_3 = local_14;
switchD_10106b40_default:
  return;
}

