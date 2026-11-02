// rea decompile_all
// name: FUN_0049bf93
// address: 0x49bf93
// body: available
// range: 0x49bf93-0x49c155 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x49bfee to 0x491122 FUN_00491122 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049bf93(int param_1,char *param_2,char *param_3,char *param_4)

{
  bool bVar1;
  int iVar2;
  size_t sVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *local_478;
  char *local_470;
  char *local_46c;
  uint local_464;
  undefined1 local_400 [932];
  undefined1 local_5c;
  undefined1 auStack_5b [83];
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)local_400;
  local_478 = param_2;
  local_470 = param_3;
  local_46c = param_4;
  iVar2 = FUN_0049b37e(&local_5c);
  if (iVar2 == 0) goto LAB_0049bfee;
  if (param_1 == -1) {
LAB_0049c018:
    bVar1 = false;
    auStack_5b[iVar2] = 0;
  }
  else {
    if (param_1 != 0) {
      if (param_1 == 1) goto LAB_0049c018;
      if (param_1 != 2) goto LAB_0049bfee;
    }
    auStack_5b[iVar2] = 1;
    bVar1 = true;
  }
  auStack_5b[iVar2 + 1] = 0;
  iVar2 = iVar2 + 3;
  if (param_2 == (char *)0x0) {
    local_478 = "";
  }
  sVar3 = _strlen(local_478);
  uVar5 = sVar3 + 1;
  if (param_3 == (char *)0x0) {
    local_470 = "";
  }
  sVar3 = _strlen(local_470);
  uVar4 = sVar3 + 1;
  if (param_4 == (char *)0x0) {
    local_46c = "";
  }
  if (0x7fffffffU - iVar2 < uVar5) {
    iVar6 = 0x7fffffff;
  }
  else {
    iVar6 = uVar5 + iVar2;
  }
  if (0x7fffffffU - iVar6 < uVar4) {
    iVar6 = 0x7fffffff;
  }
  else {
    iVar6 = iVar6 + uVar4;
  }
  sVar3 = _strlen(local_46c);
  FUN_0049b1fc(sVar3);
  if (bVar1) {
    iVar6 = FUN_0049b20a(0x69545874,iVar6);
    if (iVar6 == 0) {
LAB_0049c0d7:
      FUN_0049ad1f();
      FUN_0049ad91(&local_5c,iVar2);
      FUN_0049ad91(local_478,uVar5);
      FUN_0049ad91(local_470,uVar4);
      if (bVar1) {
        FUN_0049b330();
      }
      else {
        FUN_0049ad91(local_46c,local_464);
      }
      FUN_0049adc5();
      __security_check_cookie(local_8 ^ (uint)local_400);
      return;
    }
  }
  else if (local_464 <= 0x7fffffffU - iVar6) goto LAB_0049c0d7;
LAB_0049bfee:
                    /* WARNING: Subroutine does not return */
  FUN_00491122();
}

