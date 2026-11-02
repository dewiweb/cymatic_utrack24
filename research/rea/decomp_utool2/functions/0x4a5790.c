// rea decompile_all
// name: FUN_004a5790
// address: 0x4a5790
// body: available
// range: 0x4a5790-0x4a588a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a5790(void)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_006fd660;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = juce::HWNDComponentPeer::vftable;
  puVar2 = (undefined4 *)in_ECX[0x10];
  if (puVar2 != (undefined4 *)0x0) {
    in_ECX[0x10] = 0;
    (**(code **)*puVar2)(1,uVar4);
  }
  SetWindowLongW((HWND)in_ECX[0xe],-0x15,0);
  FUN_004a98b0();
  if ((HICON)in_ECX[0x1c] != (HICON)0x0) {
    DestroyIcon((HICON)in_ECX[0x1c]);
  }
  if (in_ECX[0x1d] != 0) {
    FUN_004a6550();
    piVar3 = (int *)in_ECX[0x1d];
    if ((undefined **)*piVar3 == juce::HWNDComponentPeer::JuceDropTarget::vftable) {
      piVar3 = piVar3 + 1;
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        FUN_004ad260(1);
      }
    }
    else {
      (*(code *)((undefined **)*piVar3)[2])(piVar3);
    }
    in_ECX[0x1d] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x27];
  if (puVar2 != (undefined4 *)0x0) {
    LOCK();
    piVar3 = puVar2 + 1;
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*puVar2)(1);
    }
  }
  in_ECX[0x22] = juce::Timer::vftable;
  FUN_0063eab0();
  FID_conflict__free((void *)in_ECX[0x1f]);
  if ((undefined4 *)in_ECX[0x10] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x10])(1);
  }
  FUN_0068dc80();
  ExceptionList = local_10;
  return;
}

