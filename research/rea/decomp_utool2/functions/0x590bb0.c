// rea decompile_all
// name: FUN_00590bb0
// address: 0x590bb0
// body: available
// range: 0x590bb0-0x590c29 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00590bb0(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  int *_Memory;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(in_ECX + 0x10);
  EnterCriticalSection(lpCriticalSection);
  FUN_0058a440((int *)(in_ECX + 8));
  *(undefined4 *)(in_ECX + 0xc) = 0;
  puVar2 = *(undefined4 **)(in_ECX + 0x28);
  if (puVar2 != (undefined4 *)0x0) {
    *(undefined4 *)(in_ECX + 0x28) = 0;
    (**(code **)*puVar2)(1);
  }
  LeaveCriticalSection(lpCriticalSection);
  if (*(undefined4 **)(in_ECX + 0x28) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(in_ECX + 0x28))(1);
  }
  DeleteCriticalSection(lpCriticalSection);
  _Memory = (int *)(*(int *)(in_ECX + 8) + -8);
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar1 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  return;
}

