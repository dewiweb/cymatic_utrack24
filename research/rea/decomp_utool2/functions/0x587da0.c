// rea decompile_all
// name: FUN_00587da0
// address: 0x587da0
// body: available
// range: 0x587da0-0x587e4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00587da0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  int in_ECX;
  undefined1 local_44 [52];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00713574;
  local_10 = ExceptionList;
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar6 = FUN_00586c60(local_44);
  local_8 = CONCAT31(local_8._1_3_,1);
  piVar2 = *(int **)(in_ECX + 0x80);
  if ((undefined **)*piVar2 == PanelSupportComponent::MyNews::vftable) {
    piVar4 = (int *)piVar2[-0x19];
    piVar2 = piVar2 + -0x1c;
    while (piVar3 = piVar4, piVar3 != (int *)0x0) {
      piVar2 = piVar3;
      piVar4 = (int *)piVar3[3];
    }
    FUN_005b7c80(uVar6,piVar2);
  }
  else {
    (*(code *)((undefined **)*piVar2)[2])(uVar6,uVar5);
  }
  FUN_00636570();
  if (param_1 != (undefined4 *)0x0) {
    LOCK();
    piVar2 = param_1 + 1;
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*param_1)(1);
    }
  }
  ExceptionList = local_10;
  return;
}

