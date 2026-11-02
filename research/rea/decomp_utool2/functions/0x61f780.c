// rea decompile_all
// name: FUN_0061f780
// address: 0x61f780
// body: available
// range: 0x61f780-0x61f7f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0061f780(void)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  DWORD DVar4;
  int *in_ECX;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 3));
  uVar2 = in_ECX[2];
  while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
    piVar3 = (int *)(*(int *)(*in_ECX + uVar2 * 4) + -8);
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3;
    UNLOCK();
    if ((iVar1 == 0) && (uVar2 < (uint)in_ECX[2])) {
      FUN_004179e0(uVar2);
    }
  }
  if ((DAT_00c8a644 == 0) &&
     ((DVar4 = timeGetTime(), DAT_00c8a644 <= DVar4 || (DVar4 < DAT_00c8a644 - 1000)))) {
    DAT_00c8a644 = DVar4;
  }
  in_ECX[9] = DAT_00c8a644;
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 3));
  return;
}

