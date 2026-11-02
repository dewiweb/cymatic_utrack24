// rea decompile_all
// name: FUN_004194b0
// address: 0x4194b0
// body: available
// range: 0x4194b0-0x419599 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004194b0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fcdb6;
  local_10 = ExceptionList;
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar3 = *(undefined4 **)(in_ECX + 0x20);
  if (puVar3 != (undefined4 *)0x0) {
    *(undefined4 *)(in_ECX + 0x20) = 0;
    (**(code **)*puVar3)(1,uVar5);
  }
  iVar4 = *(int *)(in_ECX + 0x24);
  if (iVar4 != 0) {
    *(undefined4 *)(in_ECX + 0x24) = 0;
    FUN_00419be0(iVar4);
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x100);
  if (puVar3 != (undefined4 *)0x0) {
    *(undefined4 *)(in_ECX + 0x100) = 0;
    (**(code **)*puVar3)(1);
  }
  local_8 = 0;
  if (DAT_00c8a67c == 0) {
    operator_new(0xd0);
    DAT_00c8a67c = FUN_006cb960();
  }
  iVar4 = DAT_00c8a67c;
  puVar3 = *(undefined4 **)(DAT_00c8a67c + 0x6c);
  if (puVar3 != (undefined4 *)0x0) {
    *(undefined4 *)(DAT_00c8a67c + 0x6c) = 0;
    LOCK();
    piVar1 = puVar3 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(1);
    }
  }
  uVar5 = *(uint *)(iVar4 + 0x44);
  while (uVar5 = uVar5 - 1, -1 < (int)uVar5) {
    if ((uVar5 < *(uint *)(iVar4 + 0x44)) && (*(int *)(*(int *)(iVar4 + 0x3c) + uVar5 * 4) != 0)) {
      FUN_006e9490();
    }
  }
  ExceptionList = local_10;
  return;
}

