// rea decompile_all
// name: FUN_100ebc62
// address: 0x100ebc62
// body: available
// range: 0x100ebc62-0x100ebd89 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100ebd85 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_100ebc62(void *this,CMFCToolBarButton *param_1)

{
  int *piVar1;
  int iVar2;
  
  FUN_1007d38f(this,param_1);
  iVar2 = *(int *)(param_1 + 0xe8);
  *(int *)((int)this + 0xe8) = iVar2;
  piVar1 = CMap<unsigned_int,unsigned_int,int,int>::operator[]
                     ((CMap<unsigned_int,unsigned_int,int,int> *)&PTR_vftable_10163134,
                      *(uint *)((int)this + 0x20));
  *piVar1 = iVar2;
  FUN_10005790((void *)((int)this + 0xf0),*(int *)(param_1 + 0xf8),-1);
  iVar2 = 0;
  if (0 < *(int *)((int)this + 0xf8)) {
    do {
      if (((iVar2 < 0) || (*(int *)(param_1 + 0xf8) <= iVar2)) ||
         (*(int *)((int)this + 0xf8) <= iVar2)) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      *(undefined4 *)(*(int *)((int)this + 0xf4) + iVar2 * 4) =
           *(undefined4 *)(*(int *)(param_1 + 0xf4) + iVar2 * 4);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)this + 0xf8));
  }
  *(undefined4 *)((int)this + 0x118) = *(undefined4 *)(param_1 + 0x118);
  *(undefined4 *)((int)this + 0xec) = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)((int)this + 0x11c) = *(undefined4 *)(param_1 + 0x11c);
  *(undefined4 *)((int)this + 0x120) = *(undefined4 *)(param_1 + 0x120);
  FUN_10007c90((void *)((int)this + 0x124),(undefined4 *)(param_1 + 0x124));
  FUN_10007c90((void *)((int)this + 0x128),(undefined4 *)(param_1 + 0x128));
  FUN_10007c90((void *)((int)this + 300),(undefined4 *)(param_1 + 300));
  *(undefined4 *)((int)this + 0x10c) = *(undefined4 *)(param_1 + 0x10c);
  *(undefined4 *)((int)this + 0x110) = *(undefined4 *)(param_1 + 0x110);
  *(undefined4 *)((int)this + 0x114) = *(undefined4 *)(param_1 + 0x114);
  *(undefined4 *)((int)this + 0x130) = *(undefined4 *)(param_1 + 0x130);
  return;
}

