// rea decompile_all
// name: AfxRegisterClass
// address: 0x100143a1
// body: available
// range: 0x100143a1-0x1001441d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    int __stdcall AfxRegisterClass(struct tagWNDCLASSW *)
   
   Library: Visual Studio 2010 Release */

int AfxRegisterClass(tagWNDCLASSW *param_1)

{
  BOOL BVar1;
  uint uVar2;
  AFX_MODULE_STATE *pAVar3;
  tagWNDCLASSW local_3c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x30;
  local_8 = 0x100143ad;
  BVar1 = FID_conflict_AfxCtxGetClassInfoW(param_1->hInstance,param_1->lpszClassName,&local_3c);
  if (BVar1 == 0) {
    uVar2 = FID_conflict_AfxCtxRegisterClassA(param_1);
    if ((short)uVar2 == 0) {
      return 0;
    }
    pAVar3 = AfxGetModuleState();
    if (pAVar3[0x14] != (AFX_MODULE_STATE)0x0) {
      AfxLockGlobals(1);
      local_8 = 0;
      pAVar3 = AfxGetModuleState();
      ATL::CSimpleStringT<wchar_t,0>::Append
                ((CSimpleStringT<wchar_t,0> *)(pAVar3 + 0x34),param_1->lpszClassName);
      ATL::CSimpleStringT<wchar_t,0>::AppendChar((CSimpleStringT<wchar_t,0> *)(pAVar3 + 0x34),L'\n')
      ;
      local_8 = 0xffffffff;
      AfxUnlockGlobals(1);
    }
  }
  return 1;
}

