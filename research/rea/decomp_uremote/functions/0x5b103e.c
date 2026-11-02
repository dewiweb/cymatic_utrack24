// rea decompile_all
// name: __threadstartex@4
// address: 0x5b103e
// body: available
// range: 0x5b103e-0x5b10c0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x5b1072 to EXTERNAL:0x51 KERNEL32.DLL::ExitThread (external=true, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x5b10c0 with no resolved callee; its no-return basis is unknown.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __threadstartex@4
   
   Library: Visual Studio 2008 Release */

void __threadstartex_4(DWORD *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  DWORD DVar4;
  BOOL BVar5;
  DWORD *pDVar6;
  
  ___set_flsgetvalue();
  uVar2 = FUN_005b8524();
  iVar3 = ___fls_getvalue_4(uVar2);
  if (iVar3 == 0) {
    pDVar6 = param_1;
    uVar2 = FUN_005b8524(param_1);
    iVar3 = ___fls_setvalue_8(uVar2,pDVar6);
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
  BVar5 = __IsNonwritableInCurrentImage((PBYTE)&PTR_FUN_005f07f4);
  if (BVar5 != 0) {
    FUN_0041f3a2();
  }
  __callthreadstartex();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

