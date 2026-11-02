// rea decompile_all
// name: FUN_00432a90
// address: 0x432a90
// body: available
// range: 0x432a90-0x432b22 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00432a90(int param_1)

{
  int iVar1;
  int iVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a8c0);
  iVar2 = 0;
  if (0 < DAT_00c8a8e0) {
    do {
      if (param_1 == *(int *)(DAT_00c8a8d8 + iVar2 * 4)) {
        DAT_00c8a8e0 = DAT_00c8a8e0 + -1;
        iVar1 = DAT_00c8a8d8 + iVar2 * 4;
        if (0 < DAT_00c8a8e0 - iVar2) {
          FUN_004c1df0(iVar1,iVar1 + 4,(DAT_00c8a8e0 - iVar2) * 4);
        }
        iVar2 = 0;
        if (0 < DAT_00c8a8e0 * 2) {
          iVar2 = DAT_00c8a8e0 * 2;
        }
        if (iVar2 < DAT_00c8a8dc) {
          iVar2 = DAT_00c8a8e0;
          if (DAT_00c8a8e0 < 0x10) {
            iVar2 = 0x10;
          }
          if (iVar2 < DAT_00c8a8dc) {
            FUN_00433920(iVar2);
          }
        }
        break;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_00c8a8e0);
  }
                    /* WARNING: Could not recover jumptable at 0x00432b1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a8c0);
  return;
}

