// rea decompile_all
// name: FUN_100ecf84
// address: 0x100ecf84
// body: available
// range: 0x100ecf84-0x100ed196 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100ed192 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_100ecf84(void *this,CObject *param_1)

{
  undefined4 uVar1;
  CObject *pCVar2;
  int iVar3;
  
  pCVar2 = param_1;
  FUN_100b07fb(this,param_1);
  iVar3 = CObject::IsKindOf(param_1,(CRuntimeClass *)&PTR_s_CMFCRibbonColorButton_1013e494);
  if (iVar3 != 0) {
    *(undefined4 *)((int)this + 0x30c) = *(undefined4 *)(param_1 + 0x30c);
    *(undefined4 *)((int)this + 0x314) = *(undefined4 *)(param_1 + 0x314);
    FUN_10005790((void *)((int)this + 0x318),0,-1);
    FUN_10005790((void *)((int)this + 0x32c),0,-1);
    CArray<int,int>::SetSize((CArray<int,int> *)((int)this + 0x340),0,-1);
    param_1 = (CObject *)0x0;
    if (0 < *(int *)(pCVar2 + 800)) {
      do {
        if (((int)param_1 < 0) || (*(int *)(pCVar2 + 800) <= (int)param_1)) goto LAB_100ed192;
        CArray<unsigned_long,unsigned_long>::SetAtGrow
                  ((CArray<unsigned_long,unsigned_long> *)((int)this + 0x318),
                   *(int *)((int)this + 800),*(ulong *)(*(int *)(pCVar2 + 0x31c) + (int)param_1 * 4)
                  );
        param_1 = param_1 + 1;
      } while ((int)param_1 < *(int *)(pCVar2 + 800));
    }
    iVar3 = 0;
    if (0 < *(int *)(pCVar2 + 0x334)) {
      do {
        if ((iVar3 < 0) || (*(int *)(pCVar2 + 0x334) <= iVar3)) goto LAB_100ed192;
        CArray<unsigned_long,unsigned_long>::SetAtGrow
                  ((CArray<unsigned_long,unsigned_long> *)((int)this + 0x32c),
                   *(int *)((int)this + 0x334),*(ulong *)(*(int *)(pCVar2 + 0x330) + iVar3 * 4));
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(pCVar2 + 0x334));
    }
    iVar3 = 0;
    if (0 < *(int *)(pCVar2 + 0x348)) {
      do {
        if ((iVar3 < 0) || (*(int *)(pCVar2 + 0x348) <= iVar3)) {
LAB_100ed192:
                    /* WARNING: Subroutine does not return */
          FUN_10009068();
        }
        CArray<int,int>::SetAtGrow
                  ((CArray<int,int> *)((int)this + 0x340),*(int *)((int)this + 0x348),
                   *(int *)(*(int *)(pCVar2 + 0x344) + iVar3 * 4));
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(pCVar2 + 0x348));
    }
    *(undefined4 *)((int)this + 0x354) = *(undefined4 *)(pCVar2 + 0x354);
    *(undefined4 *)((int)this + 0x358) = *(undefined4 *)(pCVar2 + 0x358);
    *(undefined4 *)((int)this + 0x35c) = *(undefined4 *)(pCVar2 + 0x35c);
    *(undefined4 *)((int)this + 0x360) = *(undefined4 *)(pCVar2 + 0x360);
    FUN_10007c90((void *)((int)this + 0x36c),(undefined4 *)(pCVar2 + 0x36c));
    FUN_10007c90((void *)((int)this + 0x370),(undefined4 *)(pCVar2 + 0x370));
    FUN_10007c90((void *)((int)this + 0x374),(undefined4 *)(pCVar2 + 0x374));
    FUN_10007c90((void *)((int)this + 0x378),(undefined4 *)(pCVar2 + 0x378));
    FUN_10007c90((void *)((int)this + 0x37c),(undefined4 *)(pCVar2 + 0x37c));
    *(undefined4 *)((int)this + 0x364) = *(undefined4 *)(pCVar2 + 0x364);
    *(undefined4 *)((int)this + 0x388) = *(undefined4 *)(pCVar2 + 0x388);
    *(undefined4 *)((int)this + 0x38c) = *(undefined4 *)(pCVar2 + 0x38c);
    *(undefined4 *)((int)this + 0x368) = *(undefined4 *)(pCVar2 + 0x368);
    uVar1 = *(undefined4 *)(pCVar2 + 500);
    *(undefined4 *)((int)this + 0x1f0) = *(undefined4 *)(pCVar2 + 0x1f0);
    *(undefined4 *)((int)this + 500) = uVar1;
  }
  return;
}

