// rea decompile_all
// name: FUN_00686be0
// address: 0x686be0
// body: available
// range: 0x686be0-0x686c56 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00686be0(void)

{
  BOOL BVar1;
  int iVar2;
  HGLOBAL hMem;
  LPVOID pvVar3;
  undefined4 *in_ECX;
  
  BVar1 = OpenClipboard((HWND)0x0);
  if (BVar1 != 0) {
    BVar1 = EmptyClipboard();
    if (BVar1 != 0) {
      iVar2 = FUN_0045d6b0(*in_ECX);
      if (iVar2 + 4 != 0) {
        hMem = GlobalAlloc(0x2042,iVar2 + 6);
        if (hMem != (HGLOBAL)0x0) {
          pvVar3 = GlobalLock(hMem);
          if (pvVar3 != (LPVOID)0x0) {
            FUN_00620750(pvVar3,iVar2 + 4);
            GlobalUnlock(hMem);
            SetClipboardData(0xd,hMem);
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00686c4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    CloseClipboard();
    return;
  }
  return;
}

