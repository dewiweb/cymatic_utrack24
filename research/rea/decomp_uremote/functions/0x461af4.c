// rea decompile_all
// name: FUN_00461af4
// address: 0x461af4
// body: available
// range: 0x461af4-0x461c51 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

bool FUN_00461af4(char **param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char **ppcVar4;
  undefined4 uVar5;
  bool bVar6;
  char **local_3c [5];
  undefined1 *local_28;
  char *local_20;
  undefined1 *local_1c;
  char **local_18;
  undefined4 local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x461b00;
  local_14 = 0;
  if (*(char *)param_1 == '\0') {
    local_3c[0] = (char **)0x5c;
    iVar2 = FUN_00465d67();
    local_3c[0] = (char **)0x2e;
    iVar3 = FUN_00465d67();
    bVar6 = iVar3 <= iVar2;
  }
  else {
    local_3c[0] = (char **)0x3b;
    ppcVar4 = (char **)FUN_00470235();
    local_28 = (undefined1 *)local_3c;
    local_3c[0] = param_1;
    if ((int)ppcVar4 < 0) {
      cVar1 = FUN_00466389();
      if (cVar1 != '\0') {
        local_3c[0] = (char **)0x0;
        iVar2 = FUN_0046085c();
        if (iVar2 == 0x2e) {
          return true;
        }
        local_3c[0] = (char **)0x461c28;
        iVar2 = FUN_0046087d();
        local_3c[0] = (char **)0x461c31;
        iVar3 = thunk_FUN_0046087d();
        local_3c[0] = (char **)((iVar3 - iVar2) + -1);
        if (-1 < (int)local_3c[0]) {
          iVar2 = thunk_FUN_0046085c();
          return iVar2 == 0x2e;
        }
      }
      bVar6 = false;
    }
    else {
      local_28 = (undefined1 *)local_3c;
      uVar5 = FUN_004653c3();
      local_8 = 0;
      bVar6 = true;
      local_14 = 1;
      local_3c[0] = ppcVar4;
      FUN_0046642b(uVar5);
      local_3c[0] = &local_20;
      local_8 = 1;
      local_14 = 3;
      FUN_0046674d();
      local_1c = (undefined1 *)local_3c;
      local_8 = 2;
      local_14 = 7;
      FUN_004d076d();
      cVar1 = FUN_00461af4();
      if (cVar1 == '\0') {
        local_3c[0] = (char **)&local_18;
        local_18 = param_1;
        FUN_00460825();
        local_1c = (undefined1 *)local_3c;
        FUN_00460973();
        FUN_00476147();
        cVar1 = FUN_00461af4();
        if (cVar1 == '\0') {
          bVar6 = false;
        }
      }
      local_3c[0] = (char **)0x461bf1;
      FUN_004652d6();
      local_3c[0] = (char **)0x461bf9;
      FUN_004652d6();
      local_3c[0] = (char **)0x461c01;
      FUN_004652d6();
    }
  }
  return bVar6;
}

