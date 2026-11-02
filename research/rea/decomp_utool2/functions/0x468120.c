// rea decompile_all
// name: FUN_00468120
// address: 0x468120
// body: available
// range: 0x468120-0x4681a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00468120(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *in_ECX;
  
  if (DAT_00c8a670 == in_ECX) {
    DAT_00c8a670 = (undefined4 *)0x0;
  }
  *in_ECX = juce::TypefaceCache::vftable;
  FUN_00470030();
  FID_conflict__free((void *)in_ECX[10]);
  FID_conflict__free((void *)in_ECX[7]);
  CloseHandle((HANDLE)in_ECX[3]);
  puVar3 = (undefined4 *)in_ECX[1];
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
  *in_ECX = juce::DeletedAtShutdown::vftable;
  FUN_00637f30();
  FUN_0063dc00();
  FUN_00415ff0(in_ECX);
  uVar4 = DAT_00c8a918;
  LOCK();
  DAT_00c8a918 = 0;
  UNLOCK();
  return uVar4;
}

