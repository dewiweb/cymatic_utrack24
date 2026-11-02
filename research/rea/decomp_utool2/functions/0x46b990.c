// rea decompile_all
// name: FUN_0046b990
// address: 0x46b990
// body: available
// range: 0x46b990-0x46ba4e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046b990(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  HDC pHVar4;
  undefined4 *in_ECX;
  
  iVar1 = *param_1;
  *in_ECX = juce::ReferenceCountedObject::vftable;
  in_ECX[1] = 0;
  *in_ECX = juce::Typeface::vftable;
  iVar2 = *(int *)(iVar1 + 0xc);
  in_ECX[2] = iVar2;
  piVar3 = (int *)(iVar2 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  iVar1 = *(int *)(iVar1 + 0x10);
  in_ECX[3] = iVar1;
  piVar3 = (int *)(iVar1 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  in_ECX[4] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(in_ECX + 5));
  *in_ECX = juce::WindowsTypeface::vftable;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  pHVar4 = CreateCompatibleDC((HDC)0x0);
  in_ECX[0xd] = pHVar4;
  in_ECX[0x1d] = 0;
  in_ECX[0x1e] = 0x3f800000;
  in_ECX[0x1f] = 0x3f800000;
  in_ECX[0x20] = 0xffffffff;
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0;
  in_ECX[0x24] = 0;
  FUN_0046c3a0();
  return;
}

