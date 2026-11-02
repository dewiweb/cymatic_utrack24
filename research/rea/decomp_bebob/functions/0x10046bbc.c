// rea decompile_all
// name: FUN_10046bbc
// address: 0x10046bbc
// body: available
// range: 0x10046bbc-0x10046d6d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10046d69 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int __thiscall FUN_10046bbc(void *this,undefined4 param_1,int *param_2,_ITEMIDLIST *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  _ITEMIDLIST *p_Var3;
  uint *puVar4;
  uint *puVar5;
  undefined4 local_90;
  undefined4 local_8c;
  uint local_88 [15];
  uint local_4c [4];
  int local_3c;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c;
  undefined4 *local_28;
  int local_24;
  uint local_20;
  int *local_1c;
  _ITEMIDLIST *local_18;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x80;
  local_8 = 0x10046bcb;
  local_1c = (int *)0x0;
  iVar1 = (**(code **)(*param_2 + 0x10))(param_2,0,*(undefined4 *)((int)this + 0x80),&local_1c);
  if ((-1 < iVar1) && (local_1c != (int *)0x0)) {
    local_14[0] = 1;
    iVar1 = (**(code **)(*local_1c + 0xc))(local_1c,1,&local_18,local_14);
    while ((-1 < iVar1 && (local_14[0] != 0))) {
      _memset(local_4c,0,0x28);
      local_4c[0] = 0x67;
      (**(code **)(*param_2 + 4))(param_2);
      puVar2 = GlobalAlloc(0x40,0xc);
      if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      puVar2[2] = local_18;
      p_Var3 = CShellManager::ConcatenateItem(DAT_10169594,param_3,local_18);
      puVar2[1] = p_Var3;
      *puVar2 = param_2;
      local_28 = puVar2;
      (**(code **)(*(int *)this + 0x160))(&local_24,puVar2);
      local_8 = 0;
      local_3c = FUN_10002140(&local_24,*(int *)(local_24 + -0xc));
      local_34 = (**(code **)(*(int *)this + 0x164))(puVar2,0);
      local_30 = (**(code **)(*(int *)this + 0x164))(puVar2,1);
      local_20 = 0xb00fc010;
      (**(code **)(*param_2 + 0x24))(param_2,1,&local_18,&local_20);
      local_2c = local_20 & 0x90000000;
      if ((local_20 & 0x20000) != 0) {
        local_4c[0] = local_4c[0] | 8;
        local_4c[3] = local_4c[3] | 0xf00;
        local_4c[2] = local_4c[2] | 0x100;
      }
      puVar4 = local_4c;
      puVar5 = local_88;
      for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      local_90 = param_1;
      local_8c = 0xffff0002;
      SendMessageW(*(HWND *)((int)this + 0x20),0x1132,0,(LPARAM)&local_90);
      local_14[0] = 0;
      local_8 = 0xffffffff;
      FUN_10001030((undefined4 *)(local_24 + -0x10));
      iVar1 = (**(code **)(*local_1c + 0xc))(local_1c,1,&local_18,local_14);
    }
    (**(code **)(*local_1c + 8))(local_1c);
    iVar1 = 0;
  }
  return iVar1;
}

