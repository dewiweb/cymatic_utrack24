// rea decompile_all
// name: FUN_1003e35f
// address: 0x1003e35f
// body: available
// range: 0x1003e35f-0x1003e4aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003e4a6 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall
FUN_1003e35f(void *this,LONG param_1,LONG param_2,int param_3,char param_4,CRuntimeClass *param_5,
            int param_6,CObject *param_7)

{
  undefined4 *puVar1;
  POINT pt;
  undefined4 uVar2;
  int *piVar3;
  CObject *pCVar4;
  int iVar5;
  ulong uVar6;
  BOOL BVar7;
  undefined4 *puVar8;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if ((*(int *)((int)this + 0x1b8) == 0) || (3 < *(uint *)(*(int *)((int)this + 0x1b8) + 0x100))) {
    uVar2 = 0;
    if (param_7 != (CObject *)0x0) {
      uVar2 = (**(code **)(*(int *)param_7 + 0x224))(1);
    }
    piVar3 = (int *)(**(code **)(*(int *)this + 0x14))(param_1,param_2,uVar2,0);
    if ((((piVar3 == (int *)0x0) ||
         (pCVar4 = (CObject *)(**(code **)(*piVar3 + 0x1c0))(param_1,param_2,param_3,param_6),
         pCVar4 == (CObject *)0x0)) || (pCVar4 == param_7)) ||
       ((param_5 != (CRuntimeClass *)0x0 && (iVar5 = CObject::IsKindOf(pCVar4,param_5), iVar5 == 0))
       )) {
      puVar8 = *(undefined4 **)((int)this + 0x24);
      do {
        do {
          if (puVar8 == (undefined4 *)0x0) goto LAB_1003e495;
          if (puVar8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_10009068();
          }
          puVar1 = (undefined4 *)*puVar8;
          pCVar4 = (CObject *)puVar8[2];
          puVar8 = puVar1;
        } while ((((param_5 != (CRuntimeClass *)0x0) &&
                  (iVar5 = CObject::IsKindOf(pCVar4,param_5), iVar5 == 0)) ||
                 ((param_6 != 0 &&
                  (uVar6 = CWnd::GetExStyle((CWnd *)pCVar4), (uVar6 & 0x10000000) == 0)))) ||
                (pCVar4 == param_7));
        local_18.left = 0;
        local_18.top = 0;
        local_18.right = 0;
        local_18.bottom = 0;
        GetWindowRect(*(HWND *)(pCVar4 + 0x20),&local_18);
        if (param_4 == '\0') {
          InflateRect(&local_18,param_3,param_3);
        }
        pt.y = param_2;
        pt.x = param_1;
        BVar7 = PtInRect(&local_18,pt);
      } while (BVar7 == 0);
    }
  }
LAB_1003e495:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

