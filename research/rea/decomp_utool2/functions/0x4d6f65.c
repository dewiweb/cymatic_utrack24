// rea decompile_all
// name: ___libm_error_support
// address: 0x4d6f65
// body: available
// range: 0x4d6f65-0x4d717c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    ___libm_error_support
   
   Library: Visual Studio 2015 Release */

void ___libm_error_support(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_28;
  char *local_24;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  if (DAT_00c8a268 == 0) {
    pcVar2 = ___acrt_invoke_user_matherr;
  }
  else {
    pcVar2 = DecodePointer(DAT_00d00094);
  }
  if (0x1a < param_4) {
    if (param_4 != 0x1b) {
      if (param_4 == 0x1c) {
        local_24 = "pow";
      }
      else if (param_4 == 0x31) {
        local_24 = "sqrt";
      }
      else if (param_4 == 0x3a) {
        local_24 = "acos";
      }
      else {
        if (param_4 != 0x3d) {
          if ((param_4 != 1000) && (param_4 != 0x3e9)) goto LAB_004d716d;
          uVar1 = *param_1;
          goto LAB_004d70ba;
        }
        local_24 = "asin";
      }
      goto LAB_004d6fd9;
    }
    local_28 = 2;
LAB_004d712b:
    local_24 = "pow";
    goto LAB_004d7132;
  }
  if (param_4 == 0x1a) {
    uVar1 = 0x3ff0000000000000;
LAB_004d70ba:
    *param_3 = uVar1;
    goto LAB_004d716d;
  }
  if (param_4 < 0xf) {
    if (param_4 == 0xe) {
      local_28 = 3;
      local_24 = "exp";
    }
    else {
      if (param_4 != 2) {
        if (param_4 == 3) {
          local_24 = "log";
        }
        else {
          if (param_4 == 8) {
            local_28 = 2;
            local_24 = "log10";
            goto LAB_004d7132;
          }
          if (param_4 != 9) goto LAB_004d716d;
          local_24 = "log10";
        }
LAB_004d6fd9:
        local_28 = 1;
        local_20 = *param_1;
        local_18 = *param_2;
        local_10 = *param_3;
        guard_check_icall(&local_28);
        iVar3 = (*pcVar2)();
        if (iVar3 == 0) {
          piVar4 = __errno();
          *piVar4 = 0x21;
        }
        goto LAB_004d7168;
      }
      local_28 = 2;
      local_24 = "log";
    }
LAB_004d7132:
    local_20 = *param_1;
    local_18 = *param_2;
    local_10 = *param_3;
    guard_check_icall(&local_28);
    iVar3 = (*pcVar2)();
    if (iVar3 == 0) {
      piVar4 = __errno();
      *piVar4 = 0x22;
    }
  }
  else {
    if (param_4 == 0xf) {
      local_24 = "exp";
    }
    else {
      if (param_4 == 0x18) {
        local_28 = 3;
        goto LAB_004d712b;
      }
      if (param_4 != 0x19) goto LAB_004d716d;
      local_24 = "pow";
    }
    local_28 = 4;
    local_20 = *param_1;
    local_18 = *param_2;
    local_10 = *param_3;
    guard_check_icall(&local_28);
    (*pcVar2)();
  }
LAB_004d7168:
  *param_3 = local_10;
LAB_004d716d:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

