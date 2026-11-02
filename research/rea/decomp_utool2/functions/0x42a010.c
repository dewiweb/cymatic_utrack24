// rea decompile_all
// name: FUN_0042a010
// address: 0x42a010
// body: available
// range: 0x42a010-0x42a0f0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042a010(undefined4 *param_1)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void **ppvVar5;
  int in_ECX;
  undefined4 local_50;
  void *local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  void *local_2c;
  uint local_c;
  
  local_c = DAT_00c76070 ^ (uint)&local_50;
  iVar1 = *(int *)(in_ECX + 0x60);
  local_50 = 0;
  if (iVar1 == 0) {
    local_4c = (void *)0x0;
    ppvVar5 = &local_4c;
    local_38 = 4;
    local_34 = 0xffffffff;
    local_30 = 0;
    local_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
  }
  else {
    ppvVar5 = (void **)FUN_006375e0(iVar1 + 0x4c);
  }
  *param_1 = *ppvVar5;
  *ppvVar5 = (void *)0x0;
  param_1[5] = ppvVar5[5];
  param_1[6] = ppvVar5[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(ppvVar5 + 7);
  pvVar2 = ppvVar5[2];
  pvVar3 = ppvVar5[3];
  pvVar4 = ppvVar5[4];
  param_1[1] = ppvVar5[1];
  param_1[2] = pvVar2;
  param_1[3] = pvVar3;
  param_1[4] = pvVar4;
  if (iVar1 == 0) {
    FID_conflict__free(local_4c);
  }
  else {
    FID_conflict__free(local_2c);
  }
  __security_check_cookie(local_c ^ (uint)&local_50);
  return;
}

