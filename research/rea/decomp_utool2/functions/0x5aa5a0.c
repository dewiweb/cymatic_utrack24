// rea decompile_all
// name: FUN_005aa5a0
// address: 0x5aa5a0
// body: available
// range: 0x5aa5a0-0x5aa789 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005aa5a0(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_ECX;
  int *_Memory;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00717d05;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006ea2c0();
  in_ECX[0x1c] = juce::ComponentListener::vftable;
  puVar1 = in_ECX + 0x1d;
  *puVar1 = juce::Label::Listener::vftable;
  *in_ECX = SessionSelectorComponent::vftable;
  in_ECX[0x1c] = SessionSelectorComponent::vftable;
  *puVar1 = SessionSelectorComponent::vftable;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = 0;
  local_14 = &DAT_00bfe12c;
  local_8 = 5;
  FUN_006e8b40(&local_14);
  _Memory = (int *)(local_14 + -8);
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar2 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  in_ECX[0x55] = 0;
  *(undefined1 *)(in_ECX + 0x56) = 0;
  in_ECX[0x57] = 0;
  in_ECX[0x58] = 0;
  in_ECX[0x59] = 0;
  in_ECX[0x5a] = 0;
  local_8 = CONCAT31(local_8._1_3_,0xb);
  *(byte *)(in_ECX + 0x3b) = *(byte *)(in_ECX + 0x3b) | 0x60;
  *(undefined2 *)(in_ECX + 0x54) = 0x101;
  *(undefined1 *)((int)in_ECX + 0x152) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_004097d0();
  }
  FUN_006e6170(0x1000280);
  FUN_006e8e70(&stack0xffffffd0,0x1000a00,0);
  FUN_006e6170(0x1000281);
  FUN_006e8e70(&stack0xffffffd0,0x1000a00,0);
  FUN_006e6170(0x1000201);
  FUN_006e6170(0x1000200);
  FUN_006e8e70(&stack0xffffffd0,0x1000202,0);
  FUN_006e6170(0x1000202);
  FUN_006e6170(0x1000205);
  (**(code **)(in_ECX[0x21] + 0x28))();
  FUN_006e5050(in_ECX + 0x21,0xffffffff);
  FUN_005a8b60();
  ExceptionList = local_10;
  return;
}

