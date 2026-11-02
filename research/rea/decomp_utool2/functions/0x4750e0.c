// rea decompile_all
// name: FUN_004750e0
// address: 0x4750e0
// body: available
// range: 0x4750e0-0x4751d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004750e0(float *param_1,undefined4 param_2,undefined4 param_3,int param_4,char param_5)

{
  double dVar1;
  float fVar2;
  float fVar3;
  undefined4 local_78;
  int local_74;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  
  if (*(char *)(param_1 + 4) == '\0') {
    FUN_00464a00(param_1,param_2,param_3,param_4 + -1);
    FUN_0047fc70(&local_78);
    return;
  }
  if (param_5 != '\0') {
    local_70 = (double)*param_1;
    local_78 = param_3;
    fVar3 = *param_1 - param_1[2];
    local_68 = (double)param_1[1];
    fVar2 = param_1[1] - param_1[3];
    dVar1 = (double)(fVar2 * fVar2 + fVar3 * fVar3);
    local_74 = param_4 + -1;
    local_60 = dVar1;
    __libm_sse2_sqrt_precise();
    local_58 = (double)(param_4 + -1) / dVar1;
    FUN_0047f830(&local_78);
    return;
  }
  FUN_00464f50(param_1,param_2,param_3,param_4 + -1);
  FUN_0047fa40(&local_78);
  return;
}

