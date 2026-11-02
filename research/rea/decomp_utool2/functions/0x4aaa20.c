// rea decompile_all
// name: FUN_004aaa20
// address: 0x4aaa20
// body: available
// range: 0x4aaa20-0x4aab2c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004aaa20(int param_1,int *param_2,int *param_3,int param_4,uint param_5,undefined4 param_6,
                 char param_7)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00703bd8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0063ea10(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  uVar2 = 0x12000;
  local_8 = 0;
  *in_ECX = juce::WindowsMessageBox::vftable;
  if (param_1 == 1) {
    uVar2 = 0x12020;
  }
  else if (param_1 == 2) {
    uVar2 = 0x12030;
  }
  else if (param_1 == 3) {
    uVar2 = 0x12040;
  }
  in_ECX[2] = uVar2 | param_5;
  if ((param_4 == 0) || (piVar3 = (int *)FUN_006d1d80(), piVar3 == (int *)0x0)) {
    iVar4 = 0;
  }
  else if ((undefined **)*piVar3 == juce::HWNDComponentPeer::vftable) {
    iVar4 = piVar3[0xe];
  }
  else {
    iVar4 = (*(code *)((undefined **)*piVar3)[1])();
  }
  in_ECX[3] = iVar4;
  iVar4 = *param_2;
  in_ECX[4] = iVar4;
  piVar3 = (int *)(iVar4 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  iVar4 = *param_3;
  in_ECX[5] = iVar4;
  piVar3 = (int *)(iVar4 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  in_ECX[6] = param_6;
  if (param_7 != '\0') {
    LOCK();
    iVar4 = *(int *)(in_ECX[1] + 0xc);
    if (iVar4 == 0) {
      *(int *)(in_ECX[1] + 0xc) = 1;
      iVar4 = 0;
    }
    UNLOCK();
    if ((iVar4 == 0) && (cVar1 = FUN_0063e270(), cVar1 == '\0')) {
      LOCK();
      *(undefined4 *)(in_ECX[1] + 0xc) = 0;
      UNLOCK();
    }
  }
  ExceptionList = local_10;
  return;
}

