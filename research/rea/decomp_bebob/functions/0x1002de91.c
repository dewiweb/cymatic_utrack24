// rea decompile_all
// name: FUN_1002de91
// address: 0x1002de91
// body: available
// range: 0x1002de91-0x1002df3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002df2d to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1002df37 to 0x10001000 FUN_10001000 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1002de91(int param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  void **ppvVar4;
  HMENU__ *local_c;
  WCHAR local_8;
  undefined2 local_6;
  
  CMap<int,int,int,int>::RemoveAll((CMap<int,int,int,int> *)(param_1 + 0xcac));
  puVar1 = *(undefined4 **)(param_1 + 0xbcc);
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return;
    }
    if (puVar1 == (undefined4 *)0x0) break;
    pvVar2 = (void *)puVar1[2];
    puVar1 = (undefined4 *)*puVar1;
    if (pvVar2 == (void *)0x0) {
      return;
    }
    if (((((*(byte *)((int)pvVar2 + 0x24) & 1) == 0) && (*(int *)((int)pvVar2 + 8) != 0)) &&
        (iVar3 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Find
                           ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                            ((int)pvVar2 + 0x2c),L'&',0), -1 < iVar3)) &&
       (iVar3 < *(int *)(*(int *)((int)pvVar2 + 0x2c) + -0xc) + -1)) {
      iVar3 = iVar3 + 1;
      if ((iVar3 < 0) || (*(int *)(*(int *)((int)pvVar2 + 0x2c) + -0xc) < iVar3)) {
                    /* WARNING: Subroutine does not return */
        FUN_10001000((undefined4 *)0x80070057);
      }
      local_8 = *(WCHAR *)(*(int *)((int)pvVar2 + 0x2c) + iVar3 * 2);
      local_6 = 0;
      CharUpperW(&local_8);
      local_c = (HMENU__ *)(uint)(ushort)local_8;
      ppvVar4 = CMap<HMENU__*,HMENU__*&,void*,void*&>::operator[]
                          ((CMap<HMENU__*,HMENU__*&,void*,void*&> *)(param_1 + 0xcac),&local_c);
      *ppvVar4 = pvVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

