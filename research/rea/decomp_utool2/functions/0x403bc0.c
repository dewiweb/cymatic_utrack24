// rea decompile_all
// name: FUN_00403bc0
// address: 0x403bc0
// body: available
// range: 0x403bc0-0x403fed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00403bc0(double *param_1,char param_2)

{
  int iVar1;
  double *in_ECX;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  uint local_14;
  
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffff0;
  if (param_1 == (double *)0x0) {
    iVar1 = *(int *)((int)in_ECX + 0xc) + -3;
    dVar5 = *(double *)(&DAT_00c06750 + iVar1 * 0x28);
    pdVar2 = (double *)(&DAT_00c06730 + iVar1 * 0x28);
  }
  else {
    dVar5 = *param_1;
    if (-4.0 <= dVar5) {
      local_38 = 4.0;
      if (dVar5 <= 4.0) {
        local_38 = dVar5;
      }
    }
    else {
      local_38 = -4.0;
    }
    dVar5 = param_1[1];
    if (-4.0 <= dVar5) {
      local_30 = 4.0;
      if (dVar5 <= 4.0) {
        local_30 = dVar5;
      }
    }
    else {
      local_30 = -4.0;
    }
    dVar5 = param_1[2];
    if (-4.0 <= dVar5) {
      local_28 = 4.0;
      if (dVar5 <= 4.0) {
        local_28 = dVar5;
      }
    }
    else {
      local_28 = -4.0;
    }
    dVar5 = param_1[3];
    local_20 = -4.0;
    if ((-4.0 <= dVar5) && (local_20 = 4.0, dVar5 <= 4.0)) {
      local_20 = dVar5;
    }
    pdVar2 = &local_38;
    dVar5 = ABS(param_1[4]);
  }
  in_ECX[4] = dVar5;
  if (param_2 == '\0') {
    dVar3 = (*pdVar2 * 3.141592653589793) / *in_ECX;
    dVar4 = (1.5707963267948966 - (double)*(int *)((int)in_ECX + 0xc) * dVar3) + in_ECX[2] * dVar3;
    dVar5 = dVar4;
    FUN_006f9250();
    in_ECX[0xc] = dVar5;
    dVar4 = dVar4 - dVar3;
    FUN_006f9250();
    in_ECX[0xd] = dVar4;
    FUN_006f7d20();
    in_ECX[0xe] = dVar3 * 2.0;
    dVar3 = (pdVar2[1] * 3.141592653589793) / *in_ECX;
    dVar4 = (1.5707963267948966 - (double)*(int *)((int)in_ECX + 0xc) * dVar3) + in_ECX[2] * dVar3;
    dVar5 = dVar4;
    FUN_006f9250();
    in_ECX[0xf] = dVar5;
    dVar4 = dVar4 - dVar3;
    FUN_006f9250();
    in_ECX[0x10] = dVar4;
    FUN_006f7d20();
    in_ECX[0x11] = dVar3 * 2.0;
    dVar3 = (pdVar2[2] * 3.141592653589793) / *in_ECX;
    dVar4 = (1.5707963267948966 - (double)*(int *)((int)in_ECX + 0xc) * dVar3) + in_ECX[2] * dVar3;
    dVar5 = dVar4;
    FUN_006f9250();
    in_ECX[0x12] = dVar5;
    dVar4 = dVar4 - dVar3;
    FUN_006f9250();
    in_ECX[0x13] = dVar4;
    FUN_006f7d20();
    in_ECX[0x14] = dVar3 * 2.0;
    local_40 = (pdVar2[3] * 3.141592653589793) / *in_ECX;
    dVar5 = (1.5707963267948966 - (double)*(int *)((int)in_ECX + 0xc) * local_40) +
            in_ECX[2] * local_40;
    dVar4 = dVar5;
    FUN_006f9250();
    in_ECX[0x15] = dVar4;
    dVar5 = dVar5 - local_40;
  }
  else {
    dVar3 = (*pdVar2 * 3.141592653589793) / *in_ECX;
    dVar5 = 1.5707963267948966;
    FUN_006f9250();
    in_ECX[0xc] = dVar5;
    dVar4 = 1.5707963267948966 - dVar3;
    FUN_006f9250();
    in_ECX[0xd] = dVar4;
    FUN_006f7d20();
    in_ECX[0xe] = dVar3 * 2.0;
    dVar3 = (pdVar2[1] * 3.141592653589793) / *in_ECX;
    in_ECX[0xf] = dVar5;
    dVar4 = 1.5707963267948966 - dVar3;
    FUN_006f9250();
    in_ECX[0x10] = dVar4;
    FUN_006f7d20();
    in_ECX[0x11] = dVar3 * 2.0;
    dVar3 = (pdVar2[2] * 3.141592653589793) / *in_ECX;
    in_ECX[0x12] = dVar5;
    dVar4 = 1.5707963267948966 - dVar3;
    FUN_006f9250();
    in_ECX[0x13] = dVar4;
    FUN_006f7d20();
    in_ECX[0x14] = dVar3 * 2.0;
    local_40 = (pdVar2[3] * 3.141592653589793) / *in_ECX;
    in_ECX[0x15] = dVar5;
    dVar5 = 1.5707963267948966 - local_40;
  }
  FUN_006f9250();
  in_ECX[0x16] = dVar5;
  FUN_006f7d20();
  in_ECX[0x17] = local_40 * 2.0;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffff0);
  return;
}

