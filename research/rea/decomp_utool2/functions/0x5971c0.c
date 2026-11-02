// rea decompile_all
// name: FUN_005971c0
// address: 0x5971c0
// body: available
// range: 0x5971c0-0x59736b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005971c0(undefined1 **param_1)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  int *piVar3;
  undefined4 *puStack_40;
  undefined1 *puStack_38;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071512d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  (**(code **)(*(int *)(in_ECX + 0x80) + 0x28))();
  (**(code **)(*(int *)(in_ECX + 0x160) + 0x28))();
  (**(code **)(*(int *)(in_ECX + 0x240) + 0x28))();
  FUN_00683e00();
  puStack_38 = &stack0xffffffcc;
  local_8 = 0;
  puStack_40 = (undefined4 *)0x597244;
  operator_new(0x28);
  puStack_40 = (undefined4 *)0x597258;
  puStack_38 = (undefined1 *)FUN_00468a40();
  if (puStack_38 != (undefined1 *)0x0) {
    LOCK();
    *(int *)(puStack_38 + 4) = *(int *)(puStack_38 + 4) + 1;
    UNLOCK();
  }
  local_8 = 0xffffffff;
  FUN_0057f500();
  FUN_00683e00();
  puStack_38 = &stack0xffffffcc;
  param_1 = &puStack_38;
  local_8 = 1;
  puStack_40 = (undefined4 *)0x5972a3;
  operator_new(0x28);
  puStack_40 = (undefined4 *)0x5972b7;
  puStack_38 = (undefined1 *)FUN_00468a40();
  if (puStack_38 != (undefined1 *)0x0) {
    LOCK();
    *(int *)(puStack_38 + 4) = *(int *)(puStack_38 + 4) + 1;
    UNLOCK();
  }
  local_8 = 0xffffffff;
  FUN_0057fa90();
  puStack_40 = &param_1;
  piVar2 = (int *)FUN_00636260();
  piVar3 = (int *)(*piVar2 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  LOCK();
  iVar1 = *(int *)(in_ECX + 0x78);
  *(int *)(in_ECX + 0x78) = *piVar2;
  UNLOCK();
  piVar2 = (int *)(iVar1 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      puStack_38 = (undefined1 *)0x597321;
      FID_conflict__free(piVar2);
    }
  }
  piVar2 = (int *)((int)param_1 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      puStack_38 = (undefined1 *)0x597341;
      FID_conflict__free(piVar2);
    }
  }
  FUN_006e6400(&puStack_40);
  FUN_006ce9f0(1);
  ExceptionList = local_10;
  return;
}

