// rea decompile_all
// name: FUN_004fabd0
// address: 0x4fabd0
// body: available
// range: 0x4fabd0-0x4fad23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fabd0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 in_ECX;
  int iVar5;
  int *piVar6;
  undefined4 in_EDX;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007068e2;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  operator_new(0x13c);
  local_8 = 0;
  iVar3 = FUN_004faf40(in_EDX);
  local_8 = 0xffffffff;
  operator_new(0x2598);
  local_8 = 1;
  if (iVar3 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = iVar3 + 0x130;
  }
  puVar4 = (undefined4 *)FUN_004fda80(iVar5);
  local_8 = 0xffffffff;
  puVar1 = *(undefined4 **)(iVar3 + 0x134);
  if ((puVar1 != puVar4) && (*(undefined4 **)(iVar3 + 0x134) = puVar4, puVar1 != (undefined4 *)0x0))
  {
    (**(code **)*puVar1)(1,uVar2);
  }
  FUN_004fd760(in_ECX);
  piVar6 = *(int **)(iVar3 + 0x134);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 0x28))(1);
    FUN_006e5050(piVar6,0xffffffff);
  }
  FUN_004eb250();
  FUN_006e9790(*(undefined4 *)(iVar3 + 0x7c),*(undefined4 *)(iVar3 + 0x80),
               *(undefined4 *)(iVar3 + 0x84),*(undefined4 *)(iVar3 + 0x88));
  FUN_0045c990("Edit Multitrack Song");
  local_8 = 2;
  FUN_004eb590(&local_14);
  piVar6 = (int *)(local_14 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  ExceptionList = local_10;
  return;
}

