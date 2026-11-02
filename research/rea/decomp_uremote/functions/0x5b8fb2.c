// rea decompile_all
// name: ___libm_error_support
// address: 0x5b8fb2
// body: available
// range: 0x5b8fb2-0x5b922d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    ___libm_error_support
   
   Library: Visual Studio 2008 Release */

void ___libm_error_support(double *param_1,undefined8 *param_2,double *param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_2c;
  char *local_28;
  double local_24;
  undefined8 local_1c;
  double local_14;
  undefined1 local_c;
  undefined1 uStack_b;
  undefined1 uStack_a;
  undefined1 uStack_9;
  undefined1 uStack_8;
  undefined1 uStack_7;
  undefined1 uStack_6;
  undefined1 uStack_5;
  
  local_c = 0;
  uStack_b = 0;
  uStack_a = 0;
  uStack_9 = 0;
  uStack_8 = 0;
  uStack_7 = 0;
  uStack_6 = 0;
  uStack_5 = 0;
  if (DAT_0095d244 == 0) {
    pcVar1 = FUN_0040d13e;
  }
  else {
    pcVar1 = (code *)__decode_pointer(DAT_0095dce4);
  }
  if (param_4 < 0xa7) {
    if (param_4 == 0xa6) {
      local_2c = 3;
      local_28 = "exp10";
LAB_005b9063:
      local_24 = *param_1;
      local_1c = *param_2;
      local_14 = *param_3;
      iVar2 = (*pcVar1)(&local_2c);
      if (iVar2 == 0) {
        piVar3 = __errno();
        *piVar3 = 0x22;
      }
    }
    else if (param_4 < 0x1a) {
      if (param_4 != 0x19) {
        local_2c = 2;
        if (param_4 == 2) {
          local_2c = 2;
          local_28 = "log";
        }
        else {
          if (param_4 == 3) {
            local_28 = "log";
            goto LAB_005b90d1;
          }
          if (param_4 == 8) {
            local_28 = "log10";
          }
          else {
            if (param_4 == 9) {
              local_28 = "log10";
              goto LAB_005b90d1;
            }
            if (param_4 != 0xe) {
              if (param_4 != 0xf) {
                if (param_4 != 0x18) {
                  return;
                }
                local_2c = 3;
                goto LAB_005b905c;
              }
              local_28 = "exp";
              goto LAB_005b9098;
            }
            local_2c = 3;
            local_28 = "exp";
          }
        }
        goto LAB_005b9063;
      }
      local_28 = "pow";
LAB_005b9098:
      local_24 = *param_1;
      local_1c = *param_2;
      local_2c = 4;
      local_14 = *param_3;
      (*pcVar1)(&local_2c);
    }
    else {
      if (param_4 != 0x1a) {
        if (param_4 != 0x1b) {
          if (param_4 == 0x1c) goto switchD_005b918e_caseD_3ee;
          if (param_4 != 0x1d) {
            if (param_4 != 0x3a) {
              if (param_4 != 0x3d) {
                return;
              }
              goto switchD_005b918e_caseD_3f1;
            }
            goto switchD_005b918e_caseD_3f0;
          }
          local_28 = "pow";
          goto LAB_005b9147;
        }
        local_2c = 2;
LAB_005b905c:
        local_28 = "pow";
        goto LAB_005b9063;
      }
      local_14 = 1.0;
    }
    goto LAB_005b9227;
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
switchD_005b918e_caseD_3ee:
    local_28 = "pow";
    goto LAB_005b90d1;
  case 0x3ef:
    local_28 = "modf";
    break;
  case 0x3f0:
switchD_005b918e_caseD_3f0:
    local_28 = "acos";
    goto LAB_005b90d1;
  case 0x3f1:
switchD_005b918e_caseD_3f1:
    local_28 = "asin";
    goto LAB_005b90d1;
  case 0x3f2:
    local_28 = "sin";
    goto LAB_005b91f3;
  case 0x3f3:
    local_28 = "cos";
    goto LAB_005b91f3;
  case 0x3f4:
    local_28 = "tan";
LAB_005b91f3:
    local_14 = *param_1 *
               (double)CONCAT17(uStack_5,CONCAT16(uStack_6,CONCAT15(uStack_7,CONCAT14(uStack_8,
                                                  CONCAT13(uStack_9,CONCAT12(uStack_a,CONCAT11(
                                                  uStack_b,local_c)))))));
    *param_3 = local_14;
    local_24 = *param_1;
    local_1c = *param_2;
    goto LAB_005b9204;
  default:
    goto switchD_005b918e_default;
  }
LAB_005b9147:
  *param_3 = *param_1;
LAB_005b90d1:
  local_24 = *param_1;
  local_1c = *param_2;
  local_14 = *param_3;
LAB_005b9204:
  local_2c = 1;
  iVar2 = (*pcVar1)(&local_2c);
  if (iVar2 == 0) {
    piVar3 = __errno();
    *piVar3 = 0x21;
  }
LAB_005b9227:
  *param_3 = local_14;
switchD_005b918e_default:
  return;
}

