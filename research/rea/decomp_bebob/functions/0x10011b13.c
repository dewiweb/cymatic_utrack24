// rea decompile_all
// name: AfxInitNetworkAddressControl
// address: 0x10011b13
// body: available
// range: 0x10011b13-0x10011bae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10011b34 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    int __stdcall AfxInitNetworkAddressControl(void)
   
   Library: Visual Studio 2010 Release */

int AfxInitNetworkAddressControl(void)

{
  AFX_MODULE_STATE *pAVar1;
  BOOL BVar2;
  AFX_MODULE_STATE *pAVar3;
  int iVar4;
  _OSVERSIONINFOW local_11c;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  pAVar1 = AfxGetModuleState();
  if (pAVar1 == (AFX_MODULE_STATE *)0x0) {
LAB_10011b34:
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  if (*(int *)(pAVar1 + 0x88) == 0) {
    _memset(&local_11c,0,0x114);
    local_11c.dwOSVersionInfoSize = 0x114;
    BVar2 = GetVersionExW(&local_11c);
    if (BVar2 == 0) goto LAB_10011b34;
    if (5 < local_11c.dwMajorVersion) {
      pAVar3 = AfxGetModuleState();
      iVar4 = CShellWrapper::_InitNetworkAddressControl
                        (*(CShellWrapper **)(*(int *)(pAVar3 + 0x78) + 8));
      *(int *)(pAVar1 + 0x84) = iVar4;
    }
    *(undefined4 *)(pAVar1 + 0x88) = 1;
  }
  iVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar4;
}

