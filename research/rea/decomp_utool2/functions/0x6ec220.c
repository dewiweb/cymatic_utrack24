// rea decompile_all
// name: FUN_006ec220
// address: 0x6ec220
// body: available
// range: 0x6ec220-0x6ec340 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ec220(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00728fc8;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = juce::ColourSelector::vftable;
  in_ECX[0x1c] = juce::ColourSelector::vftable;
  in_ECX[0x23] = juce::ColourSelector::vftable;
  LOCK();
  iVar2 = *(int *)(in_ECX[0x1e] + 0xc);
  *(int *)(in_ECX[0x1e] + 0xc) = 0;
  UNLOCK();
  if (iVar2 != 0) {
    (**(code **)(in_ECX[0x1d] + 4))(uVar4);
  }
  FUN_00407fe0();
  if (in_ECX[0x2f] != 0) {
    FID_conflict__free((void *)in_ECX[0x2e]);
    in_ECX[0x2e] = 0;
    in_ECX[0x2f] = 0;
  }
  in_ECX[0x30] = 0;
  FUN_00407640();
  if ((undefined4 *)in_ECX[0x2d] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x2d])(1);
  }
  if ((undefined4 *)in_ECX[0x2c] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x2c])(1);
  }
  _eh_vector_destructor_iterator_(in_ECX + 0x28,4,4,FUN_00407680);
  in_ECX[0x23] = juce::Slider::Listener::vftable;
  in_ECX[0x1c] = juce::ChangeBroadcaster::vftable;
  FID_conflict__free((void *)in_ECX[0x20]);
  in_ECX[0x1d] = juce::AsyncUpdater::vftable;
  LOCK();
  *(undefined4 *)(in_ECX[0x1e] + 0xc) = 0;
  UNLOCK();
  puVar3 = (undefined4 *)in_ECX[0x1e];
  if (puVar3 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = puVar3 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(1);
    }
  }
  FUN_006ea0b0();
  ExceptionList = local_10;
  return;
}

