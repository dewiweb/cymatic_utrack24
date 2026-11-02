// rea decompile_all
// name: FUN_00597570
// address: 0x597570
// body: available
// range: 0x597570-0x5977f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00597570(undefined1 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_ECX;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007151cc;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006ea2c0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  puVar1 = in_ECX + 0x1c;
  *puVar1 = juce::Button::Listener::vftable;
  in_ECX[0x1d] = juce::SettableTooltipClient::vftable;
  in_ECX[0x1e] = &DAT_00bfe12c;
  *in_ECX = QueuedExportJob::ExportControl::vftable;
  *puVar1 = QueuedExportJob::ExportControl::vftable;
  in_ECX[0x1d] = QueuedExportJob::ExportControl::vftable;
  in_ECX[0x1f] = param_1;
  param_1 = &DAT_00bfe12c;
  local_8._0_1_ = 3;
  local_8._1_3_ = 0;
  FUN_006e3660(&param_1);
  in_ECX[0x20] = juce::TextButton::vftable;
  in_ECX[0x3c] = juce::TextButton::vftable;
  param_1 = &DAT_00bfe12c;
  local_8._0_1_ = 5;
  FUN_006e3660(&param_1);
  in_ECX[0x58] = juce::TextButton::vftable;
  in_ECX[0x74] = juce::TextButton::vftable;
  local_8._0_1_ = 6;
  FUN_004ecb70();
  in_ECX[0x32a] = &DAT_00bfe12c;
  in_ECX[0x32b] = 0;
  in_ECX[0x32c] = 1;
  in_ECX[0x32d] = 1;
  in_ECX[0x32e] = 0;
  in_ECX[0x32f] = 0;
  in_ECX[0x330] = 0;
  in_ECX[0x331] = 0;
  in_ECX[0x332] = &DAT_00bfe12c;
  in_ECX[0x333] = 0;
  in_ECX[0x334] = 1;
  in_ECX[0x335] = 1;
  in_ECX[0x336] = 0;
  in_ECX[0x337] = 0;
  in_ECX[0x338] = 0;
  in_ECX[0x339] = 0;
  local_8._0_1_ = 9;
  FUN_0045c990("Export");
  local_8._0_1_ = 10;
  FUN_006e54f0(&param_1);
  local_8 = CONCAT31(local_8._1_3_,9);
  piVar3 = (int *)(param_1 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  if (puVar1 != (undefined4 *)0x0) {
    FUN_004097d0(puVar1);
  }
  (**(code **)(in_ECX[0x20] + 0x28))(1);
  FUN_006e5050(in_ECX + 0x20,0xffffffff);
  FUN_0045c990("Cancel");
  local_8._0_1_ = 0xb;
  FUN_006e54f0(&param_1);
  local_8 = CONCAT31(local_8._1_3_,9);
  piVar3 = (int *)(param_1 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  if (puVar1 != (undefined4 *)0x0) {
    FUN_004097d0(puVar1);
  }
  FUN_006e5050(in_ECX + 0x58,0xffffffff);
  FUN_006e5050(in_ECX + 0x90,0xffffffff);
  ExceptionList = local_10;
  return;
}

