// rea decompile_all
// name: FUN_100b0536
// address: 0x100b0536
// body: available
// range: 0x100b0536-0x100b05d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100b05d3 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_100b0536(void *this,int param_1)

{
  CObject *pCVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int local_8;
  
  local_8 = 0;
  iVar4 = 0;
  *(int *)((int)this + 0x2d8) = param_1;
  if (0 < *(int *)((int)this + 0x16c)) {
    do {
      if ((iVar4 < 0) || (*(int *)((int)this + 0x16c) <= iVar4)) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      pCVar1 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonGalleryIcon_10132734,
                                  *(CObject **)(*(int *)((int)this + 0x168) + iVar4 * 4));
      if (pCVar1 != (CObject *)0x0) {
        if (*(int *)(pCVar1 + 0x7c) != 0) {
          *(undefined4 *)(pCVar1 + 0x7c) = 0;
        }
        if (local_8 == param_1) {
          *(undefined4 *)(pCVar1 + 0x7c) = 1;
        }
        local_8 = local_8 + 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)((int)this + 0x16c));
  }
  uVar2 = *(uint *)((int)this + 0x2c0);
  if (uVar2 == 0) {
    uVar2 = *(uint *)((int)this + 0x48);
  }
  iVar4 = *(int *)((int)this + 0x2d8);
  piVar3 = CMap<unsigned_int,unsigned_int,int,int>::operator[]
                     ((CMap<unsigned_int,unsigned_int,int,int> *)&PTR_vftable_10161f68,uVar2);
  *piVar3 = iVar4;
  (**(code **)(*(int *)this + 0x118))();
  return;
}

