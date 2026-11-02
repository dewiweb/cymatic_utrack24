// rea decompile_all
// name: __threadstartex@4
// address: 0x100f70aa
// body: available
// range: 0x100f70aa-0x100f710e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100f70de to EXTERNAL:0x5a KERNEL32.DLL::ExitThread (external=true, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x100f710e with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __threadstartex@4
   
   Library: Visual Studio 2010 Release */

void __threadstartex_4(DWORD *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  DWORD DVar4;
  DWORD *pDVar5;
  
  ___set_flsgetvalue();
  uVar2 = FUN_100ff535();
  iVar3 = ___fls_getvalue_4(uVar2);
  if (iVar3 == 0) {
    pDVar5 = param_1;
    uVar2 = FUN_100ff535();
    iVar3 = ___fls_setvalue_8(uVar2,pDVar5);
    if (iVar3 == 0) {
      DVar4 = GetLastError();
                    /* WARNING: Subroutine does not return */
      ExitThread(DVar4);
    }
    DVar4 = GetCurrentThreadId();
    *param_1 = DVar4;
  }
  else {
    *(DWORD *)(iVar3 + 0x54) = param_1[0x15];
    *(DWORD *)(iVar3 + 0x58) = param_1[0x16];
    *(DWORD *)(iVar3 + 4) = param_1[1];
    __freefls_4(param_1);
  }
  __callthreadstartex();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

