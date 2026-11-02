// rea decompile_all
// name: FUN_00468a40
// address: 0x468a40
// body: available
// range: 0x468a40-0x468b49 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00468a40(uint param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *in_ECX;
  char *pcVar6;
  undefined4 in_XMM2_Da;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_006fd660;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = juce::ReferenceCountedObject::vftable;
  in_ECX[1] = 0;
  *in_ECX = juce::Font::SharedFontInternal::vftable;
  in_ECX[2] = 0;
  piVar3 = (int *)FUN_00643f40(uVar2);
  iVar5 = *piVar3;
  in_ECX[3] = iVar5;
  piVar3 = (int *)(iVar5 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  if ((param_1 & 1) == 0) {
    pcVar6 = "Italic";
    pcVar4 = "Regular";
  }
  else {
    pcVar6 = "Bold Italic";
    pcVar4 = "Bold";
  }
  if ((param_1 >> 1 & 1) == 0) {
    pcVar6 = pcVar4;
  }
  FUN_0045c990(pcVar6);
  in_ECX[5] = in_XMM2_Da;
  in_ECX[6] = 0x3f800000;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  *(byte *)(in_ECX + 9) = (byte)(param_1 >> 2) & 1;
  if (param_1 == 0) {
    iVar5 = FUN_004681b0();
    iVar5 = *(int *)(iVar5 + 4);
    if (in_ECX[2] != iVar5) {
      if (iVar5 != 0) {
        LOCK();
        *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + 1;
        UNLOCK();
      }
      puVar1 = (undefined4 *)in_ECX[2];
      in_ECX[2] = iVar5;
      if (puVar1 != (undefined4 *)0x0) {
        LOCK();
        piVar3 = puVar1 + 1;
        iVar5 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)*puVar1)(1);
        }
      }
    }
  }
  ExceptionList = local_10;
  return;
}

