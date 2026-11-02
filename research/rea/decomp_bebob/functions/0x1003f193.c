// rea decompile_all
// name: FUN_1003f193
// address: 0x1003f193
// body: available
// range: 0x1003f193-0x1003f38c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003f388 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_1003f193(void *this,CObject *param_1)

{
  uint uVar1;
  int iVar2;
  CObject *pCVar3;
  BOOL BVar4;
  uint uVar5;
  undefined4 *puVar6;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  uVar1 = (**(code **)(*(int *)param_1 + 400))();
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetWindowRect(*(HWND *)(param_1 + 0x20),&local_18);
  puVar6 = *(undefined4 **)((int)this + 0x24);
LAB_1003f36f:
  do {
    do {
      if (puVar6 == (undefined4 *)0x0) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      pCVar3 = (CObject *)puVar6[2];
      puVar6 = (undefined4 *)*puVar6;
      iVar2 = CObject::IsKindOf(pCVar3,(CRuntimeClass *)&PTR_s_CAutoHideDockSite_10135b64);
    } while (iVar2 == 0);
    pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CAutoHideDockSite_10135b64,pCVar3);
  } while (pCVar3 == param_1);
  iVar2 = (**(code **)(*(int *)pCVar3 + 0x160))();
  if (iVar2 != 0) goto code_r0x1003f223;
  goto LAB_1003f235;
code_r0x1003f223:
  iVar2 = (**(code **)(*(int *)param_1 + 0x160))();
  if (iVar2 == 0) {
LAB_1003f235:
    iVar2 = (**(code **)(*(int *)pCVar3 + 0x160))();
    if (iVar2 == 0) {
      iVar2 = (**(code **)(*(int *)param_1 + 0x160))();
      if (iVar2 == 0) goto LAB_1003f36f;
    }
    local_28.left = 0;
    local_28.top = 0;
    local_28.right = 0;
    local_28.bottom = 0;
    GetWindowRect(*(HWND *)(pCVar3 + 0x20),&local_28);
    BVar4 = IsRectEmpty(&local_28);
    if (BVar4 == 0) {
      uVar5 = (**(code **)(*(int *)pCVar3 + 400))();
      if (((uVar1 & 0x1000) != 0) && ((uVar5 & 0x2000) != 0)) {
        if (local_18.top == local_28.bottom) {
          *(LONG *)(pCVar3 + 0x13c) = local_18.right - local_18.left;
        }
        if (local_18.right == local_28.left) {
          *(LONG *)(param_1 + 0x13c) = local_28.bottom - local_28.top;
        }
        goto LAB_1003f36f;
      }
      if (((uVar1 & 0x2000) == 0) || ((uVar5 & 0x4000) == 0)) {
        if (((uVar1 & 0x4000) != 0) && ((uVar5 & 0x8000) != 0)) {
          if (local_18.bottom == local_28.top) {
            *(LONG *)(pCVar3 + 0x140) = local_18.right - local_18.left;
          }
          if (local_18.left == local_28.right) {
            *(LONG *)(param_1 + 0x140) = local_18.right - local_18.left;
          }
          goto LAB_1003f36f;
        }
        if (((uVar1 & 0x1000) == 0) || ((uVar5 & 0x8000) == 0)) goto LAB_1003f36f;
        if (local_18.bottom == local_28.top) {
          *(LONG *)(pCVar3 + 0x13c) = local_18.right - local_18.left;
        }
        if (local_18.right != local_28.left) goto LAB_1003f36f;
        iVar2 = local_28.bottom - local_28.top;
      }
      else {
        if (local_18.right == local_28.left) {
          *(LONG *)(pCVar3 + 0x13c) = local_18.bottom - local_18.top;
        }
        if (local_18.bottom != local_28.top) goto LAB_1003f36f;
        iVar2 = local_28.right - local_28.left;
      }
      *(int *)(param_1 + 0x140) = iVar2;
    }
  }
  goto LAB_1003f36f;
}

