// rea decompile_all
// name: FUN_006ae5e0
// address: 0x6ae5e0
// body: available
// range: 0x6ae5e0-0x6ae720 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_006ae5e0(uint param_1,uint param_2)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00723775;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_006d79e0(&local_20);
  iVar3 = *(int *)(*(int *)(in_ECX + 0xe0) + 0x8c);
  if ((iVar3 == 2) || (iVar3 == 3)) {
    if (param_1 < *(uint *)(in_ECX + 0x18)) {
      if ((*(int *)(in_ECX + 0xe4) + local_1c <= (int)param_2) &&
         ((int)param_2 < (local_14 + local_1c) - *(int *)(in_ECX + 0xe4))) {
        ExceptionList = local_10;
        return 1;
      }
    }
  }
  else if (param_2 < *(uint *)(in_ECX + 0x1c)) {
    if ((*(int *)(in_ECX + 0xe4) + local_20 <= (int)param_1) &&
       ((int)param_1 < (local_18 + local_20) - *(int *)(in_ECX + 0xe4))) {
      ExceptionList = local_10;
      return 1;
    }
  }
  local_8 = 0;
  iVar3 = FUN_006e9580(uVar2);
  (**(code **)(*(int *)(iVar3 + 0x3c) + 0x24))();
  uVar1 = FUN_0067b0b0();
  FID_conflict__free((void *)0x0);
  ExceptionList = local_10;
  return uVar1;
}

