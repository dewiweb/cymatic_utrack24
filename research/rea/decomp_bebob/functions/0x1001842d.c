// rea decompile_all
// name: FUN_1001842d
// address: 0x1001842d
// body: available
// range: 0x1001842d-0x10018513 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_1001842d(void *this,HWND param_1)

{
  void *pvVar1;
  int iVar2;
  void **ppvVar3;
  undefined4 *puVar4;
  HWND local_64;
  int iStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  void *local_54 [8];
  undefined4 local_34 [7];
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_54[7] = this;
  if (((param_1 != (HWND)0x0) && (*(int *)((int)this + 4) == 0)) &&
     (FUN_10018eb8(&DAT_10166aa0,0,0), DAT_10166a74 != (int *)0x0)) {
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetClientRect(param_1,&local_18);
    iStack_5c = local_18.bottom - local_18.top;
    iStack_60 = local_18.right - local_18.left;
    local_64 = param_1;
    uStack_58 = 0;
    local_54[3] = (void *)0x0;
    local_54[4] = (void *)0x0;
    local_54[1] = (void *)0x0;
    local_54[0] = (void *)0x0;
    local_54[2] = (void *)0x0;
    local_54[5] = (void *)0x0;
    local_54[6] = (void *)0x0;
    ppvVar3 = local_54;
    puVar4 = local_34;
    for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *ppvVar3;
      ppvVar3 = ppvVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    FUN_10018eb8(&DAT_10166aa0,0,0);
    pvVar1 = local_54[7];
    puVar4 = (undefined4 *)((int)local_54[7] + 0x28);
    iVar2 = (**(code **)(*DAT_10166a74 + 0x38))(DAT_10166a74,local_34,&local_64,puVar4);
    if (-1 < iVar2) {
      *(undefined4 *)((int)pvVar1 + 4) = *puVar4;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

