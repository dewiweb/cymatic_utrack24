// rea decompile_all
// name: FUN_100af9b1
// address: 0x100af9b1
// body: available
// range: 0x100af9b1-0x100afbd6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100afbd2 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100af9b1(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  CObject *pCVar4;
  uint uVar5;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_18.left = param_1[6];
  local_18.top = param_1[7];
  local_18.right = param_1[8];
  local_18.bottom = param_1[9];
  (**(code **)(*param_1 + 0x1e4))(&local_34);
  uVar5 = -(uint)(param_1[0xbb] != 0) & 0xfffffffc;
  InflateRect(&local_18,0,-(uVar5 + 4));
  iVar1 = uVar5 * 2 + 8;
  local_2c = local_30 + iVar1;
  local_28 = 0;
  iVar3 = ((local_18.bottom - param_1[0xb3] * local_2c) - local_18.top) / 2;
  if (-1 < iVar3) {
    local_28 = iVar3;
  }
  iVar1 = iVar1 + local_34;
  local_20 = 0;
  local_1c = 0;
  local_24 = 0;
  if (0 < param_1[0x5b]) {
    do {
      if ((local_24 < 0) || (param_1[0x5b] <= local_24)) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonGalleryIcon_10132734,
                                  *(CObject **)(param_1[0x5a] + local_24 * 4));
      if (pCVar4 != (CObject *)0x0) {
        *(undefined4 *)(pCVar4 + 0x16c) = 0;
        *(undefined4 *)(pCVar4 + 0x170) = 0;
        *(undefined4 *)(pCVar4 + 0x174) = 0;
        *(undefined4 *)(pCVar4 + 0x178) = 0;
        *(int *)(pCVar4 + 0x38) = param_1[0xe];
        iVar3 = *(int *)(pCVar4 + 0x168);
        if (iVar3 < 0) {
          if (iVar3 == -1) {
            *(uint *)(pCVar4 + 0x78) = (uint)(param_1[0xb4] == 0);
          }
          else if (iVar3 == -2) {
            *(uint *)(pCVar4 + 0x78) = (uint)(param_1[0xb5] <= param_1[0xb4]);
          }
        }
        else {
          iVar3 = local_20 - param_1[0xb4];
          if ((iVar3 < param_1[0xb3]) && (param_1[0xb4] <= local_20)) {
            iVar2 = iVar1 * local_1c + 2 + local_18.left;
            iVar3 = iVar3 * local_2c + local_18.top + local_28;
            *(int *)(pCVar4 + 0x18) = iVar2;
            *(int *)(pCVar4 + 0x1c) = iVar3;
            *(uint *)(pCVar4 + 0x16c) = (uint)(local_1c == 0);
            *(int *)(pCVar4 + 0x20) = iVar2 + iVar1;
            *(int *)(pCVar4 + 0x24) = iVar3 + local_2c;
            *(uint *)(pCVar4 + 0x170) = (uint)(local_1c == param_1[0xb1] + -1);
            *(uint *)(pCVar4 + 0x174) = (uint)(local_20 == param_1[0xb4]);
            *(uint *)(pCVar4 + 0x178) = (uint)(local_20 - param_1[0xb4] == param_1[0xb3] + -1);
          }
          else {
            SetRectEmpty((LPRECT)(pCVar4 + 0x18));
          }
          local_1c = local_1c + 1;
          if (local_1c == param_1[0xb1]) {
            local_20 = local_20 + 1;
            local_1c = 0;
          }
        }
      }
      local_24 = local_24 + 1;
    } while (local_24 < param_1[0x5b]);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

