// rea decompile_all
// name: FUN_0045a1c5
// address: 0x45a1c5
// body: available
// range: 0x45a1c5-0x45a339 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0045a1c5(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int iVar3;
  undefined1 local_20 [4];
  int local_1c;
  char local_11;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x45a1d1;
  iVar3 = *(int *)(*(int *)(in_ECX + 0x1c) + 0x7c);
  local_1c = iVar3;
  FUN_0045ef8e();
  *(undefined4 *)(in_ECX + 0x5c) = 0;
  *(undefined1 *)(in_ECX + 0xa4) = 0;
  *(undefined1 *)(in_ECX + 0xa5) = 0;
  iVar1 = *(int *)(iVar3 + 0x224);
  local_11 = '\0';
  if (iVar1 < 0) goto LAB_0045a252;
  if (iVar1 < 2) {
    *(undefined4 *)(in_ECX + 0x5c) = 3;
    if (*(char *)(iVar3 + 0x2d0) == '\0') {
      *(undefined4 *)(in_ECX + 0x5c) = 2;
    }
    *(undefined1 *)(in_ECX + 0xa5) = 1;
    *(undefined1 *)(in_ECX + 0xa4) = 1;
  }
  else if (iVar1 == 2) {
LAB_0045a227:
    *(undefined4 *)(in_ECX + 0x5c) = 1;
  }
  else {
    if (iVar1 != 3) {
      if (iVar1 < 4) goto LAB_0045a252;
      if (iVar1 < 6) goto LAB_0045a227;
      if (iVar1 != 6) goto LAB_0045a252;
    }
    *(undefined4 *)(in_ECX + 0x5c) = 3;
  }
  local_11 = '\x01';
LAB_0045a252:
  FUN_00465317(in_ECX + 0x2c);
  FUN_00465317(in_ECX + 0x30);
  FUN_00465317(in_ECX + 0x34);
  FUN_00459661();
  FUN_00465317(in_ECX + 0x4c);
  FUN_004652d6();
  if ((local_11 == '\0') || (0x1d < *(int *)(iVar3 + 0x288))) {
    if (0 < *(int *)(in_ECX + 0x10)) {
      FUN_00474839();
    }
  }
  else {
    *(undefined4 *)(in_ECX + 0x5c) = 4;
    if (*(int *)(in_ECX + 0x10) < 1) {
      FUN_0047479c();
      iVar3 = local_1c;
    }
  }
  FUN_00465317(in_ECX + 0x28);
  if (**(char **)(iVar3 + 0x234) != '\0') {
    uVar2 = FUN_00465bec(local_20,(undefined4 *)(iVar3 + 0x234));
    local_8 = 0;
    FUN_00465ac3(uVar2);
    local_8 = 0xffffffff;
    FUN_004652d6();
  }
  FUN_0045efa9();
  (**(code **)(*(int *)(in_ECX + -0x70) + 0x84))();
  return;
}

