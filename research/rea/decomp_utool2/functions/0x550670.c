// rea decompile_all
// name: FUN_00550670
// address: 0x550670
// body: available
// range: 0x550670-0x55079d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00550670(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00710756;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = juce::ReferenceCountedObject::vftable;
  in_ECX[1] = 0;
  *in_ECX = TargetTreeNode::vftable;
  in_ECX[2] = 2;
  iVar1 = *param_1;
  in_ECX[3] = iVar1;
  piVar4 = (int *)(iVar1 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  in_ECX[4] = &DAT_00bfe12c;
  in_ECX[5] = &DAT_00bfe12c;
  in_ECX[6] = &DAT_00bfe12c;
  in_ECX[9] = &DAT_00bfe12c;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = &DAT_00bfe12c;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  local_8 = 0xc;
  in_ECX[0x17] = 0;
  if ((undefined4 *)in_ECX[0xc] != param_2) {
    if (param_2 != (undefined4 *)0x0) {
      LOCK();
      param_2[1] = param_2[1] + 1;
      UNLOCK();
    }
    puVar2 = (undefined4 *)in_ECX[0xc];
    in_ECX[0xc] = param_2;
    if (puVar2 != (undefined4 *)0x0) {
      LOCK();
      piVar4 = puVar2 + 1;
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        (**(code **)*puVar2)(1,uVar3);
      }
    }
  }
  FUN_0054f850(param_3);
  if (param_2 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = param_2 + 1;
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*param_2)(1);
    }
  }
  ExceptionList = local_10;
  return;
}

