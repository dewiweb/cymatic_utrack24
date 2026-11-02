// rea decompile_all
// name: CMFCVisualManager::OnDrawStatusBarSizeBox
// address: 0x10036d8d
// body: available
// range: 0x10036d8d-0x10036e30 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10036db5 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawStatusBarSizeBox(class CDC *,class
   CMFCStatusBar *,class CRect)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCVisualManager::OnDrawStatusBarSizeBox(undefined4 param_1_00,CDC *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int in_stack_00000014;
  int in_stack_00000018;
  LPCWSTR local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x10036d99;
  iVar1 = (**(code **)(*(int *)param_1 + 0x28))(&DAT_10166bfc);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  FUN_10006ce0(local_14,(short *)&DAT_10122940);
  local_8 = 0;
  uVar2 = CDC::SetTextAlign(param_1,10);
  uVar3 = (**(code **)(*(int *)param_1 + 0x30))(DAT_10166af0);
  ExtTextOutW(*(HDC *)(param_1 + 4),in_stack_00000014,in_stack_00000018,4,(RECT *)&stack0x0000000c,
              local_14[0],*(UINT *)(local_14[0] + -6),(INT *)0x0);
  (**(code **)(*(int *)param_1 + 0x28))(iVar1);
  (**(code **)(*(int *)param_1 + 0x30))(uVar3);
  CDC::SetTextAlign(param_1,uVar2);
  FUN_10001030((undefined4 *)(local_14[0] + -8));
  return;
}

