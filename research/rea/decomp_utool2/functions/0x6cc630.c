// rea decompile_all
// name: FUN_006cc630
// address: 0x6cc630
// body: available
// range: 0x6cc630-0x6cc7ba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006cc630(undefined4 param_1)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int in_ECX;
  undefined4 *puVar5;
  char cVar6;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007265d3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((DAT_00c8a678 != in_ECX) &&
     (piVar2 = (int *)FUN_006d1d80(DAT_00c76070 ^ (uint)&stack0xfffffffc), piVar2 != (int *)0x0)) {
    if (in_ECX == 0) {
      local_14 = (undefined4 *)0x0;
    }
    else {
      local_14 = (undefined4 *)FUN_0040de70(in_ECX);
    }
    puVar5 = local_14;
    if (local_14 != (undefined4 *)0x0) {
      LOCK();
      local_14[1] = local_14[1] + 1;
      UNLOCK();
    }
    uVar1 = DAT_00c7eb78;
    local_8 = 0;
    local_18 = local_14;
    if ((undefined **)*piVar2 == juce::HWNDComponentPeer::vftable) {
      DAT_00c7eb78 = ~(byte)((uint)piVar2[2] >> 1) & 1;
      FUN_004a98b0();
      puVar5 = local_14;
      DAT_00c7eb78 = uVar1;
    }
    else {
      (*(code *)((undefined **)*piVar2)[0x19])();
    }
    if ((undefined **)*piVar2 == juce::HWNDComponentPeer::vftable) {
      iVar3 = FUN_004a98b0();
      cVar6 = iVar3 == piVar2[0xe];
    }
    else {
      cVar6 = (*(code *)((undefined **)*piVar2)[0x18])();
    }
    if ((cVar6 != '\0') && (DAT_00c8a678 != in_ECX)) {
      if (DAT_00c8a678 == 0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = (undefined4 *)FUN_0040de70(DAT_00c8a678);
      }
      if (puVar4 != (undefined4 *)0x0) {
        LOCK();
        puVar4[1] = puVar4[1] + 1;
        UNLOCK();
      }
      local_8 = CONCAT31(local_8._1_3_,1);
      DAT_00c8a678 = in_ECX;
      local_14 = puVar4;
      FUN_006e5f70();
      FUN_006cb310();
      if ((puVar4 != (undefined4 *)0x0) && (puVar4[2] != 0)) {
        FUN_006cc960(param_1);
      }
      if (DAT_00c8a678 == in_ECX) {
        FUN_006cca00(param_1,&local_18);
      }
      if (puVar4 != (undefined4 *)0x0) {
        LOCK();
        piVar2 = puVar4 + 1;
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)*puVar4)(1);
        }
      }
    }
    if (puVar5 != (undefined4 *)0x0) {
      LOCK();
      piVar2 = puVar5 + 1;
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)*puVar5)(1);
      }
    }
  }
  ExceptionList = local_10;
  return;
}

