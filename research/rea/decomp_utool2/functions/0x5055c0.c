// rea decompile_all
// name: FUN_005055c0
// address: 0x5055c0
// body: available
// range: 0x5055c0-0x50575a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005055c0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar4 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00707a69;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar3 = FUN_005b4560(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  *(undefined4 *)(in_ECX + 0x94) = uVar3;
  iVar1 = *piVar4;
  piVar4 = (int *)(iVar1 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  iVar5 = FUN_0054bdd0(iVar1);
  iVar1 = *(int *)(in_ECX + 0x8c);
  if ((iVar1 != iVar5) && (*(int *)(in_ECX + 0x8c) = iVar5, iVar1 != 0)) {
    FUN_0054be70();
    FUN_004bfe14(iVar1,0x30);
  }
  param_1 = operator_new(0x184);
  local_8 = 0;
  puVar6 = (undefined4 *)FUN_005192f0(1);
  local_8 = 0xffffffff;
  puVar2 = *(undefined4 **)(in_ECX + 0xab4);
  if ((puVar2 != puVar6) && (*(undefined4 **)(in_ECX + 0xab4) = puVar6, puVar2 != (undefined4 *)0x0)
     ) {
    (**(code **)*puVar2)(1);
  }
  FUN_004f9700(*(undefined4 *)(in_ECX + 0xab4),0,0,0xbff00000,0,0xbff00000);
  FUN_00504a40();
  *(undefined4 *)(in_ECX + 0xf10) = 0;
  FUN_0045c990(&DAT_00739f6c);
  local_8 = 1;
  FUN_006e4900(&param_1,0);
  local_8 = 0xffffffff;
  FUN_00637c10();
  FUN_006e6170(0x1000280,DAT_00c7ef78);
  FUN_006e6170(0x1000281,DAT_00c7ef94);
  FUN_00503b80();
  if (*(int *)(in_ECX + 0xab4) != 0) {
    FUN_00518eb0();
  }
  if (*(int *)(in_ECX + 0xab8) != 0) {
    FUN_0052ddf0();
  }
  ExceptionList = local_10;
  return;
}

