// rea decompile_all
// name: FUN_004a6300
// address: 0x4a6300
// body: available
// range: 0x4a6300-0x4a63af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a6300(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  BOOL BVar5;
  int in_ECX;
  tagMSG local_30;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00703878;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  iVar2 = *(int *)(in_ECX + 4);
  if ((*(byte *)(iVar2 + 0x68) & 2) == 0) {
    return;
  }
  ExceptionList = &local_10;
  if (iVar2 == 0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)FUN_0040de70(iVar2);
  }
  if (puVar4 != (undefined4 *)0x0) {
    LOCK();
    puVar4[1] = puVar4[1] + 1;
    UNLOCK();
  }
  local_8 = 0;
  local_14 = puVar4;
  if (((*(byte *)(*(int *)(in_ECX + 4) + 0x68) & 4) == 0) ||
     (BVar5 = PeekMessageW(&local_30,*(HWND *)(in_ECX + 0x38),0xf,0xf,1), BVar5 != 0)) {
    if (puVar4 == (undefined4 *)0x0) {
      ExceptionList = local_10;
      return;
    }
    if (puVar4[2] != 0) {
      FUN_004a77d0(uVar3);
    }
  }
  if (puVar4 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = puVar4 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar4)(1);
    }
  }
  ExceptionList = local_10;
  return;
}

