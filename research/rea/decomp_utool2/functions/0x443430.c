// rea decompile_all
// name: FUN_00443430
// address: 0x443430
// body: available
// range: 0x443430-0x4434c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00443430(undefined4 param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *lParam;
  int *piVar4;
  BOOL BVar5;
  undefined4 *in_ECX;
  
  lParam = operator_new(0x18);
  uVar2 = *in_ECX;
  piVar1 = lParam + 1;
  *lParam = juce::ReferenceCountedObject::vftable;
  *piVar1 = 0;
  *lParam = juce::AudioPluginFormatHelpers::CallbackInvoker::InvokeOnMessageThread::vftable;
  lParam[2] = param_1;
  iVar3 = *param_2;
  lParam[3] = iVar3;
  piVar4 = (int *)(iVar3 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  lParam[4] = uVar2;
  lParam[5] = in_ECX;
  if ((DAT_00c8a658 != 0) && (*(char *)(DAT_00c8a658 + 4) == '\0')) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    BVar5 = PostMessageW(DAT_00c8a650,0x47b,0,(LPARAM)lParam);
    if (BVar5 != 0) {
      return;
    }
  }
  LOCK();
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  LOCK();
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar3 == 1) {
    (**(code **)*lParam)(1);
  }
  return;
}

