// rea decompile_all
// name: FUN_1008f8bb
// address: 0x1008f8bb
// body: available
// range: 0x1008f8bb-0x1008fa80 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1008fa7c to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_1008f8bb(void *this,CObject *param_1,bool param_2)

{
  int *piVar1;
  uint uVar2;
  __POSITION *p_Var3;
  int iVar4;
  __POSITION *p_Var5;
  CPane *pCVar6;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  p_Var3 = CObList::Find((CObList *)((int)this + 0x24),param_1,(__POSITION *)0x0);
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  SetRectEmpty(&local_18);
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  CDockingPanesRow::GetWindowRect(this,(CRect *)&local_28);
LAB_1008fa63:
  do {
    if (p_Var3 == (__POSITION *)0x0) {
LAB_1008fa6b:
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    if (param_2) {
      if (p_Var3 == (__POSITION *)0x0) {
LAB_1008fa7c:
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      p_Var5 = *(__POSITION **)p_Var3;
    }
    else {
      if (p_Var3 == (__POSITION *)0x0) goto LAB_1008fa7c;
      p_Var5 = *(__POSITION **)(p_Var3 + 4);
    }
    piVar1 = *(int **)(p_Var3 + 8);
    iVar4 = (**(code **)(*piVar1 + 0x178))();
  } while ((iVar4 == 0) && (p_Var3 = p_Var5, *(int *)((int)this + 4) == 0));
  local_18.left = piVar1[0x27];
  local_18.top = piVar1[0x28];
  local_18.right = piVar1[0x29];
  local_18.bottom = piVar1[0x2a];
  if (p_Var5 == (__POSITION *)0x0) goto LAB_1008fa6b;
  do {
    p_Var3 = p_Var5;
    if (param_2) {
      if (p_Var3 == (__POSITION *)0x0) goto LAB_1008fa7c;
      pCVar6 = *(CPane **)(p_Var3 + 8);
      p_Var5 = *(__POSITION **)p_Var3;
    }
    else {
      if (p_Var3 == (__POSITION *)0x0) goto LAB_1008fa7c;
      pCVar6 = *(CPane **)(p_Var3 + 8);
      p_Var5 = *(__POSITION **)(p_Var3 + 4);
    }
    iVar4 = (**(code **)(*(int *)pCVar6 + 0x178))();
  } while (((iVar4 == 0) && (*(int *)((int)this + 4) == 0)) && (p_Var5 != (__POSITION *)0x0));
  uVar2 = *(uint *)((int)this + 0x40);
  if (param_2) {
    if ((((uVar2 & 0x2000) != 0) || ((uVar2 & 0x8000) != 0)) &&
       (local_18.right < *(int *)(pCVar6 + 0x9c))) goto LAB_1008fa63;
    if ((uVar2 & 0x2000) == 0) {
      if (((uVar2 & 0x8000) == 0) && (local_18.bottom < *(int *)(pCVar6 + 0xa0))) goto LAB_1008fa63;
      if ((uVar2 & 0x8000) == 0) {
        iVar4 = local_18.bottom - *(int *)(pCVar6 + 0xa0);
        goto LAB_1008fa50;
      }
    }
    iVar4 = local_18.right - *(int *)(pCVar6 + 0x9c);
  }
  else {
    if ((((uVar2 & 0x2000) != 0) || ((uVar2 & 0x8000) != 0)) &&
       (*(int *)(pCVar6 + 0xa4) < local_18.left)) goto LAB_1008fa63;
    if ((uVar2 & 0x2000) == 0) {
      if (((uVar2 & 0x8000) == 0) && (*(int *)(pCVar6 + 0xa8) < local_18.top)) goto LAB_1008fa63;
      if ((uVar2 & 0x8000) == 0) {
        iVar4 = *(int *)(pCVar6 + 0xa8) - local_18.top;
        goto LAB_1008fa50;
      }
    }
    iVar4 = *(int *)(pCVar6 + 0xa4) - local_18.left;
  }
LAB_1008fa50:
  CDockingPanesRow::MovePaneRect(this,pCVar6,iVar4,param_2);
  goto LAB_1008fa63;
}

