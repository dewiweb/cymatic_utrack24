// rea decompile_all
// name: FUN_00598650
// address: 0x598650
// body: available
// range: 0x598650-0x59888b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00598650(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *in_ECX;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = DAT_00c8a5e4;
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_007152d1;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = QueuedExportJob::vftable;
  in_ECX[0x2f] = QueuedExportJob::vftable;
  in_ECX[0x31] = QueuedExportJob::vftable;
  in_ECX[0x32] = QueuedExportJob::vftable;
  in_ECX[0x33] = QueuedExportJob::vftable;
  in_ECX[0x34] = QueuedExportJob::vftable;
  if (iVar1 != 0) {
    FUN_005b5d40(0x1000);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8c9));
  puVar2 = (undefined4 *)in_ECX[0x8d0];
  if (puVar2 != (undefined4 *)0x0) {
    in_ECX[0x8d0] = 0;
    LOCK();
    piVar4 = puVar2 + 1;
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*puVar2)(1,uVar3);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8c9));
  FUN_005532c0();
  FUN_0041caf0();
  piVar4 = (int *)(in_ECX[0x573] + -8);
  in_ECX[0x572] = juce::SettableTooltipClient::vftable;
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  in_ECX[0x572] = juce::TooltipClient::vftable;
  FUN_006ea0b0();
  FUN_006e4a60();
  FUN_006e4a60();
  FUN_006e4a60();
  FUN_006e4a60();
  FUN_006e4a60();
  FUN_006e4a60();
  FUN_006e2980();
  FUN_006e4a60();
  FUN_00508010();
  FUN_006e4a60();
  in_ECX[0x55] = TableComponent::vftable;
  FUN_00407640();
  FUN_006ea0b0();
  in_ECX[0x36] = TableComponent::vftable;
  FUN_00407640();
  FUN_006ea0b0();
  in_ECX[0x34] = ExportTask::Listener::vftable;
  in_ECX[0x33] = juce::ComboBox::Listener::vftable;
  in_ECX[0x32] = juce::ChangeListener::vftable;
  in_ECX[0x31] = TargetSelector::Listener::vftable;
  piVar4 = (int *)(in_ECX[0x30] + -8);
  in_ECX[0x2f] = juce::SettableTooltipClient::vftable;
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  in_ECX[0x2f] = juce::TooltipClient::vftable;
  FUN_004f9930();
  ExceptionList = local_10;
  return;
}

