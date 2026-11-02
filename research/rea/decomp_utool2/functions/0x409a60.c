// rea decompile_all
// name: FUN_00409a60
// address: 0x409a60
// body: available
// range: 0x409a60-0x409b31 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00409a60(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *_Memory;
  uint uVar3;
  int in_ECX;
  undefined4 in_stack_ffffffb4;
  undefined4 in_stack_ffffffb8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fc088;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_004099e0(in_stack_ffffffb4,in_stack_ffffffb8,param_1);
  local_8 = 0;
  iVar1 = *(int *)(in_ECX + 0xc);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    for (puVar2 = *(undefined4 **)(*(int *)(in_ECX + 4) + iVar1 * 4); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)puVar2[2]) {
      FUN_00409440(*puVar2,*(undefined1 *)(puVar2 + 1));
    }
  }
  _Memory = *(void **)(in_ECX + 4);
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  FUN_00409530(uVar3);
  FID_conflict__free(_Memory);
  ExceptionList = local_10;
  return;
}

