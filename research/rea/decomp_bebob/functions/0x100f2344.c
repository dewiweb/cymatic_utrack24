// rea decompile_all
// name: FUN_100f2344
// address: 0x100f2344
// body: available
// range: 0x100f2344-0x100f242d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100f2429 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall
FUN_100f2344(void *this,int *param_1,LONG param_2,LONG param_3,LONG param_4,LONG param_5,int param_6
            ,int *param_7,int param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  iVar1 = param_7[0x1f];
  param_7[0x1f] = 0;
  iVar2 = param_7[0x1b];
  param_7[0x1b] = (uint)(param_6 < *(int *)((int)this + 0x30c));
  (**(code **)(*param_7 + 0x1cc))(param_1);
  local_18.left = param_2;
  local_18.top = param_3;
  local_18.right = param_4;
  local_18.bottom = param_5;
  InflateRect(&local_18,-5,0);
  uVar4 = 0xffffffff;
  if (param_8 != -1) {
    uVar4 = (**(code **)(*param_1 + 0x30))(param_8);
  }
  if ((-1 < param_6) && (param_6 < *(int *)((int)this + 0x32c))) {
    iVar3 = *(int *)(*(int *)((int)this + 0x328) + param_6 * 4);
    (**(code **)(*param_1 + 0x68))(iVar3,*(undefined4 *)(iVar3 + -0xc),&local_18,0x24);
    if (param_8 != -1) {
      (**(code **)(*param_1 + 0x30))(uVar4);
    }
    (**(code **)(*param_7 + 0x1d0))(param_1);
    param_7[0x1f] = iVar1;
    param_7[0x1b] = iVar2;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

