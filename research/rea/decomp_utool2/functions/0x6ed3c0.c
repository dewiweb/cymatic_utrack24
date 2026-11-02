// rea decompile_all
// name: FUN_006ed3c0
// address: 0x6ed3c0
// body: available
// range: 0x6ed3c0-0x6ed49e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ed3c0(undefined4 param_1,float *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined1 local_58 [64];
  undefined4 local_18;
  ulonglong local_14;
  float local_c;
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  local_18 = param_1;
  if ((((*(byte *)(in_ECX + 0x158) & 2) == 0) || (param_2[1] == 0.0)) &&
     (((*(byte *)(in_ECX + 600) & 2) == 0 || (*param_2 == 0.0)))) {
    piVar1 = *(int **)(in_ECX + 0xc);
    if (piVar1 != (int *)0x0) {
      iVar2 = *piVar1;
      uVar3 = FUN_006cff90(local_58,piVar1);
      (**(code **)(iVar2 + 0x20))(uVar3,param_2);
    }
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  local_c = param_2[2];
  local_14 = *(ulonglong *)param_2 & 0xffffffff00000000;
  (**(code **)(*(int *)(in_ECX + 0xf0) + 0x20))(param_1,&local_14);
  local_c = param_2[2];
  local_14 = *(ulonglong *)param_2 & 0xffffffff;
  (**(code **)(*(int *)(in_ECX + 0x1f0) + 0x20))(local_18,&local_14);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

