// rea decompile_all
// name: FUN_10093e17
// address: 0x10093e17
// body: available
// range: 0x10093e17-0x10093f27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10093f23 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_10093e17(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  CObject *pCVar3;
  int *piVar4;
  int iVar5;
  undefined1 local_34 [8];
  void *local_2c;
  int local_28;
  int local_20;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  *param_1 = 0;
  param_1[1] = 0;
  local_28 = *(int *)((int)this + 0x90);
  local_1c = 0;
  local_2c = this;
  if (0 < local_28) {
    do {
      iVar5 = 0;
      if ((local_1c < 0) || (*(int *)((int)this + 0x90) <= local_1c)) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      iVar1 = *(int *)(*(int *)((int)this + 0x8c) + local_1c * 4);
      if (*(CObject **)(iVar1 + 0x20) != (CObject *)0x0) {
        local_20 = 0;
        iVar2 = CObject::IsKindOf(*(CObject **)(iVar1 + 0x20),
                                  (CRuntimeClass *)&PTR_s_CBasePane_1012a214);
        if (iVar2 == 0) {
          local_18.left = 0;
          local_18.top = 0;
          local_18.right = 0;
          local_18.bottom = 0;
          GetWindowRect(*(HWND *)(*(int *)(iVar1 + 0x20) + 0x20),&local_18);
          iVar5 = local_18.right - local_18.left;
          local_20 = local_18.bottom - local_18.top;
        }
        else {
          pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_1012a214,
                                      *(CObject **)(iVar1 + 0x20));
          if (pCVar3 != (CObject *)0x0) {
            piVar4 = (int *)(**(code **)(*(int *)pCVar3 + 0x25c))(local_34,0,1);
            iVar5 = *piVar4;
            local_20 = piVar4[1];
          }
        }
        if (iVar5 <= *param_1) {
          iVar5 = *param_1;
        }
        *param_1 = iVar5;
        iVar5 = param_1[1];
        if (param_1[1] < local_20) {
          iVar5 = local_20;
        }
        param_1[1] = iVar5;
        this = local_2c;
      }
      local_1c = local_1c + 1;
    } while (local_1c < local_28);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

