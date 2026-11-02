// rea decompile_all
// name: FUN_00513170
// address: 0x513170
// body: available
// range: 0x513170-0x51327b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00513170(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int in_ECX;
  int *piVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00708e68;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  operator_new(0x40);
  iVar4 = *param_1;
  piVar3 = (int *)(iVar4 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  uVar2 = FUN_00512b30(iVar4);
  FUN_0050c960(uVar2);
  FUN_00512000(uVar1);
  iVar4 = *(int *)(in_ECX + 0x3b8) + 1;
  if (*(int *)(in_ECX + 0x3b4) < iVar4) {
    FUN_00409cf0(iVar4 / 2 + *(int *)(in_ECX + 0x3b8) + 9 & 0xfffffff8);
  }
  iVar4 = *(int *)(in_ECX + 0x3b8);
  *(int *)(in_ECX + 0x3b8) = iVar4 + 1;
  *(undefined4 *)(*(int *)(in_ECX + 0x3b0) + iVar4 * 4) = uVar2;
  if (*(int *)(in_ECX + 0x3a8) != 0) {
    FUN_006e7e60();
  }
  *(undefined1 *)(in_ECX + 0x3ac) = 0;
  FUN_006e4900(&PTR_DAT_00c7ed68,0);
  FUN_006e6170(0x1000280,DAT_00c8a948);
  FUN_006e6170(0x1000281,DAT_00c8a948);
  ExceptionList = local_10;
  return;
}

