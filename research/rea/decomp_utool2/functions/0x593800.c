// rea decompile_all
// name: FUN_00593800
// address: 0x593800
// body: available
// range: 0x593800-0x59391b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00593800(void)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  int *in_ECX;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00714a8f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006ea2c0();
  in_ECX[0x1c] = (int)juce::SettableTooltipClient::vftable;
  in_ECX[0x1d] = (int)&DAT_00bfe12c;
  in_ECX[0x1e] = (int)juce::Timer::vftable;
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  local_8 = 2;
  bVar2 = *(byte *)(in_ECX + 0x1a);
  *in_ECX = (int)ExportToSynchedUnitWarningComponent::vftable;
  in_ECX[0x1c] = (int)ExportToSynchedUnitWarningComponent::vftable;
  in_ECX[0x1e] = (int)ExportToSynchedUnitWarningComponent::vftable;
  if ((bVar2 & 4) == 0) {
    *(byte *)(in_ECX + 0x1a) = bVar2 | 4;
    if ((bVar2 & 1) != 0) {
      iVar3 = FUN_0068db10();
      if (iVar3 != 0) {
        uStack_28 = *(undefined4 *)(iVar3 + 8);
        uStack_2c = 0x5938ae;
        (**(code **)(*in_ECX + 0x30))();
      }
    }
    FUN_006e6400(auStack_30);
    FUN_006ce9f0(1);
  }
  in_ECX[0x23] = 0;
  piVar1 = (int *)(DAT_00c8a734 + -8);
  if (piVar1 != &DAT_00bfe124) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  LOCK();
  iVar3 = in_ECX[0x1d];
  in_ECX[0x1d] = DAT_00c8a734;
  UNLOCK();
  piVar1 = (int *)(iVar3 + -8);
  if (piVar1 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      uStack_28 = 0x593907;
      FID_conflict__free(piVar1);
    }
  }
  ExceptionList = local_10;
  return;
}

