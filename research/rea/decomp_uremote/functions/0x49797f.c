// rea decompile_all
// name: FUN_0049797f
// address: 0x49797f
// body: available
// range: 0x49797f-0x497b59 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4979d8 to 0x491122 FUN_00491122 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049797f(int param_1,undefined4 param_2)

{
  char cVar1;
  uint in_EAX;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  iVar2 = *(int *)(param_1 + 0x240);
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      FUN_00495a5d();
      return;
    }
    *(int *)(param_1 + 0x240) = iVar2 + -1;
    if (iVar2 + -1 == 1) {
      FUN_00495a5d();
      FUN_004914ad();
      return;
    }
  }
  uVar6 = *(uint *)(param_1 + 0x28);
  if ((uVar6 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00491122();
  }
  if ((uVar6 & 4) != 0) {
    *(uint *)(param_1 + 0x28) = uVar6 | 8;
  }
  iVar2 = FUN_00495b75(1);
  if (iVar2 == 0) {
    FUN_00495a5d();
    goto LAB_00497b50;
  }
  FUN_00495a35(iVar2);
  iVar3 = FUN_00495a5d();
  if (iVar3 != 0) {
    return;
  }
  uVar6 = 0;
  if (in_EAX == 0) goto LAB_00497b50;
  do {
    if (*(char *)(uVar6 + iVar2) == '\0') break;
    uVar6 = uVar6 + 1;
  } while (uVar6 < in_EAX);
  if ((((0x4f < uVar6) || (uVar6 == 0)) || (in_EAX < uVar6 + 5)) ||
     ((cVar1 = *(char *)(uVar6 + 1 + iVar2), cVar1 != '\0' &&
      ((cVar1 != '\x01' || (*(char *)(uVar6 + 2 + iVar2) != '\0')))))) goto LAB_00497b50;
  local_c = (uint)(cVar1 != '\0');
  local_10 = uVar6 + 3;
  for (local_14 = local_10; (local_14 < in_EAX && (*(char *)(local_14 + iVar2) != '\0'));
      local_14 = local_14 + 1) {
  }
  local_14 = local_14 + 1;
  for (uVar6 = local_14; (uVar6 < in_EAX && (*(char *)(uVar6 + iVar2) != '\0')); uVar6 = uVar6 + 1)
  {
  }
  uVar6 = uVar6 + 1;
  if (local_c == 0) {
    if (in_EAX < uVar6) {
LAB_00497af0:
      pcVar5 = "truncated";
      iVar3 = 0;
      goto LAB_00497af5;
    }
    iVar3 = in_EAX - uVar6;
  }
  else {
    if (in_EAX <= uVar6) goto LAB_00497af0;
    local_8 = -1;
    iVar4 = FUN_00495d75();
    iVar3 = local_8;
    if (iVar4 == 1) {
      iVar2 = *(int *)(param_1 + 0x260);
      goto LAB_00497af9;
    }
    pcVar5 = *(char **)(param_1 + 0x50);
LAB_00497af5:
    if (pcVar5 != (char *)0x0) goto LAB_00497b50;
  }
LAB_00497af9:
  *(undefined1 *)(iVar3 + uVar6 + iVar2) = 0;
  local_24 = 0;
  local_28 = uVar6 + iVar2;
  local_30 = (local_c == 0) + 1;
  local_1c = local_10 + iVar2;
  local_18 = local_14 + iVar2;
  local_2c = iVar2;
  local_20 = iVar3;
  iVar2 = FUN_00499216(param_1,param_2,&local_30);
  if (iVar2 == 0) {
    return;
  }
LAB_00497b50:
  FUN_004914ad();
  return;
}

