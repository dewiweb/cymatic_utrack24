// rea decompile_all
// name: FUN_100dfae3
// address: 0x100dfae3
// body: available
// range: 0x100dfae3-0x100dfcfe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100dfcfa to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __fastcall FUN_100dfae3(CWnd *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  CClientDC local_78 [20];
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  undefined4 *local_54;
  int *local_50;
  int local_4c;
  int local_48;
  tagRECT local_44;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x68;
  local_8 = 0x100dfaef;
  if (((param_1 != (CWnd *)0x0) && (*(HWND *)(param_1 + 0x20) != (HWND)0x0)) &&
     (*(int *)(param_1 + 0x80) != 0)) {
    local_44.left = 0;
    local_44.top = 0;
    local_44.right = 0;
    local_44.bottom = 0;
    GetClientRect(*(HWND *)(param_1 + 0x20),&local_44);
    local_24.left = local_44.left;
    local_24.top = local_44.top;
    local_24.right = local_44.right;
    local_24.bottom = local_44.bottom;
    iVar2 = GetSystemMetrics(2);
    local_24.right = local_24.right + (-1 - iVar2);
    InflateRect(&local_24,-4,-5);
    iVar3 = local_24.left;
    iVar2 = local_24.top - *(int *)(param_1 + 0x114);
    local_4c = iVar2;
    CClientDC::CClientDC(local_78,param_1);
    local_8 = 0;
    puVar1 = *(undefined4 **)(param_1 + 0x78);
    while (puVar1 != (undefined4 *)0x0) {
      if (puVar1 == (undefined4 *)0x0) goto LAB_100dfcfa;
      local_54 = (undefined4 *)*puVar1;
      local_50 = (int *)puVar1[2];
      if (local_50 == (int *)0x0) goto LAB_100dfcfa;
      piVar4 = (int *)(**(code **)(*local_50 + 0x1c))(&local_34.right,local_78,param_1 + 0x94,1);
      local_5c = *piVar4;
      local_64 = iVar3;
      if (local_24.right < local_5c + iVar3) {
        if (iVar3 == local_24.left) {
          local_5c = local_24.right - local_24.left;
        }
        else {
          iVar2 = iVar2 + 5 + piVar4[1];
          local_64 = local_24.left;
          local_4c = iVar2;
        }
      }
      local_5c = local_5c + local_64;
      local_58 = *(int *)(param_1 + 0x98) + iVar2;
      local_50[0x15] = local_64;
      local_50[0x16] = iVar2;
      local_50[0x17] = local_5c;
      local_50[0x18] = local_58;
      local_60 = iVar2;
      local_48 = local_5c;
      (**(code **)(*local_50 + 0x30))();
      iVar3 = local_48 + 4;
      iVar2 = local_4c;
      puVar1 = local_54;
    }
    if (*(int *)(*(int *)(param_1 + 0x7c) + 8) == 0) {
LAB_100dfcfa:
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    iVar2 = (local_24.bottom - local_24.top) / (*(int *)(param_1 + 0x98) + 5);
    local_48 = *(int *)(*(int *)(*(int *)(param_1 + 0x7c) + 8) + 0x60) /
               (*(int *)(param_1 + 0x98) + 5) - iVar2;
    if (0 < local_48) {
      if ((param_1 + 0x9c == (CWnd *)0x0) || (*(int *)(param_1 + 0xbc) == 0)) {
        local_34.left = 0;
        local_34.top = 0;
        local_34.right = 0;
        local_34.bottom = 0;
        GetClientRect(*(HWND *)(param_1 + 0x20),&local_34);
        InflateRect(&local_34,-1,-1);
        iVar3 = GetSystemMetrics(2);
        local_34.left = (local_34.right - iVar3) + -1;
        (**(code **)(*(int *)(param_1 + 0x9c) + 0x160))(0x50000001,&local_34,param_1,1);
      }
      iVar3 = (*(int *)(param_1 + 0x98) + 5) * local_48;
      *(int *)(param_1 + 0x118) = iVar3;
      *(int *)(param_1 + 0x11c) = iVar2;
      CWnd::SetScrollRange(param_1,1,0,iVar3,1);
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x120) = 1;
    CClientDC::~CClientDC(local_78);
  }
  FUN_100f90cf();
  return;
}

