// rea decompile_all
// name: FUN_004f6c10
// address: 0x4f6c10
// body: available
// range: 0x4f6c10-0x4f6cc9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f6c10(int param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  undefined4 extraout_ECX;
  void *local_1c;
  void *local_18;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  void *local_8;
  
  local_8 = (void *)0xffffffff;
  puStack_c = &LAB_0070634c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_1 == in_ECX + 0x14) {
    local_1c = (void *)FUN_004ae6c0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
    if (local_1c == (void *)0x0) {
      local_18 = local_1c;
      local_14 = local_1c;
      local_8 = local_1c;
      iVar1 = (**(code **)(*(int *)(in_ECX + -4) + 4))();
      iVar2 = 0;
      if (0 < iVar1) {
        iVar2 = iVar1;
      }
      FUN_004100a0(0,iVar2);
      FUN_006e3920(&local_1c,extraout_ECX);
      FID_conflict__free(local_1c);
      ExceptionList = local_10;
      return;
    }
    FUN_006e3a40();
  }
  ExceptionList = local_10;
  return;
}

