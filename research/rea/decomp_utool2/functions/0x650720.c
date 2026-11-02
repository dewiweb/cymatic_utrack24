// rea decompile_all
// name: FUN_00650720
// address: 0x650720
// body: available
// range: 0x650720-0x650808 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00650720(int *param_1,int param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  undefined4 in_EDX;
  undefined4 extraout_EDX;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 local_408 [1024];
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  iVar6 = *param_1;
  *(undefined4 *)(in_ECX + 0x38) = in_EDX;
  iVar5 = *param_3;
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  *(undefined4 *)(in_ECX + 0x48) = 0;
  if (param_2 != 0) {
    *(int *)(in_ECX + 0x44) = param_2;
  }
  do {
    iVar6 = iVar6 + *(int *)(in_ECX + 0x3c);
    iVar2 = -1;
    if (iVar6 != -1) {
      iVar2 = iVar6;
    }
    uVar4 = iVar5 + *(int *)(in_ECX + 0x48);
    iVar6 = iVar6 - iVar2;
    *(int *)(in_ECX + 0x3c) = iVar2;
    uVar3 = 0xffffffff;
    if (param_2 == 0) {
      uVar3 = 0x400;
      *(undefined1 **)(in_ECX + 0x44) = local_408;
    }
    uVar1 = uVar4;
    if (uVar3 <= uVar4) {
      uVar1 = uVar3;
    }
    iVar5 = uVar4 - uVar1;
    *(uint *)(in_ECX + 0x48) = uVar1;
    iVar2 = FUN_006161a0();
  } while (iVar2 == 0);
  if (param_2 == 0) {
    *(undefined4 *)(in_ECX + 0x44) = 0;
  }
  iVar6 = iVar6 + *(int *)(in_ECX + 0x3c);
  iVar5 = iVar5 + *(int *)(in_ECX + 0x48);
  if (iVar5 != 0) {
    *param_3 = *param_3 - iVar5;
  }
  if (iVar6 != 0) {
    *param_1 = *param_1 - iVar6;
  }
  FUN_00658fd0();
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX,iVar2);
  return;
}

