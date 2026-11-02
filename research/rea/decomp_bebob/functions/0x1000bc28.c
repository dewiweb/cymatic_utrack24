// rea decompile_all
// name: Catch@1000bc28
// address: 0x1000bc28
// body: available
// range: 0x1000bc28-0x1000bcac inclusive
// range: 0x1000bcae-0x1000bcbb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000bc63 to 0x10009030 FUN_10009030 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void Catch_1000bc28(void)

{
  uint uBytes;
  HLOCAL pvVar1;
  int unaff_EBP;
  LPVOID unaff_ESI;
  DWORD *unaff_EDI;
  UINT uFlags;
  
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)(unaff_EBP + -0x18) + 0x1c));
  __CxxThrowException_8(0,(byte *)0x0);
  uFlags = 2;
  uBytes = ATL::AtlMultiplyThrow<unsigned_int>(unaff_EDI[3],4);
  pvVar1 = LocalReAlloc(*(HLOCAL *)((int)unaff_ESI + 0xc),uBytes,uFlags);
  if (pvVar1 == (HLOCAL)0x0) {
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
    FUN_10009030();
  }
  *(HLOCAL *)((int)unaff_ESI + 0xc) = pvVar1;
  _memset((void *)((int)pvVar1 + *(int *)((int)unaff_ESI + 8) * 4),0,
          (unaff_EDI[3] - *(int *)((int)unaff_ESI + 8)) * 4);
  *(DWORD *)((int)unaff_ESI + 8) = unaff_EDI[3];
  TlsSetValue(*unaff_EDI,unaff_ESI);
  if ((*(int *)((int)unaff_ESI + 0xc) != 0) &&
     (*(int *)(unaff_EBP + 8) < *(int *)((int)unaff_ESI + 8))) {
    *(undefined4 *)(*(int *)((int)unaff_ESI + 0xc) + *(int *)(unaff_EBP + 8) * 4) =
         *(undefined4 *)(unaff_EBP + 0xc);
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(unaff_EBP + -0x14));
  return;
}

