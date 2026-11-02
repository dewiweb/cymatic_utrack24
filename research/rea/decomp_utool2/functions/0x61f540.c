// rea decompile_all
// name: FUN_0061f540
// address: 0x61f540
// body: available
// range: 0x61f540-0x61f592 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0061f540(void)

{
  undefined4 uVar1;
  DWORD DVar2;
  undefined4 *in_ECX;
  DWORD *pDVar3;
  uint uVar4;
  
  DVar2 = GetCurrentThreadId();
  FUN_00637f30();
  uVar4 = 0;
  if (0 < (int)in_ECX[7]) {
    pDVar3 = (DWORD *)in_ECX[5];
    do {
      if (*pDVar3 == DVar2) {
        pDVar3 = pDVar3 + 1;
        *pDVar3 = *pDVar3 - 1;
        if (*pDVar3 == 0) {
          if (uVar4 < (uint)in_ECX[7]) {
            FUN_00435380(uVar4);
          }
          SetEvent((HANDLE)in_ECX[1]);
        }
        break;
      }
      uVar4 = uVar4 + 1;
      pDVar3 = pDVar3 + 2;
    } while ((int)uVar4 < (int)in_ECX[7]);
  }
  LOCK();
  uVar1 = *in_ECX;
  *in_ECX = 0;
  UNLOCK();
  return uVar1;
}

