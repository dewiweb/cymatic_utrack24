// rea decompile_all
// name: FUN_0048de20
// address: 0x48de20
// body: available
// range: 0x48de20-0x48dea4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048de20(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00701c98;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = juce::ReferenceCountedObject::vftable;
  in_ECX[1] = 0;
  local_8 = 0;
  *in_ECX = `public:_void___thiscall_juce::Component::exitModalState(int)'::__l10::
            ExitModalStateMessage::vftable;
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_0040de70(param_1);
  }
  in_ECX[2] = iVar1;
  if (iVar1 != 0) {
    LOCK();
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
    UNLOCK();
  }
  in_ECX[3] = param_2;
  ExceptionList = local_10;
  return;
}

