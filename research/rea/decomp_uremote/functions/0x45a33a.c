// rea decompile_all
// name: FUN_0045a33a
// address: 0x45a33a
// body: available
// range: 0x45a33a-0x45a523 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0045a33a(void)

{
  int iVar1;
  char cVar2;
  int in_ECX;
  undefined1 **ppuStack_3c;
  char *pcStack_38;
  undefined1 **ppuStack_34;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined1 local_18 [4];
  uint local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x45a346;
  local_14 = 0;
  iVar1 = *(int *)(*(int *)(in_ECX + 0x18) + 0x7c);
  ppuStack_34 = (undefined1 **)0x45a358;
  FUN_0045ef8e();
  ppuStack_34 = (undefined1 **)(in_ECX + 0x3c);
  pcStack_38 = (char *)0x45a367;
  FUN_00465317();
  ppuStack_34 = (undefined1 **)(in_ECX + 0x40);
  pcStack_38 = (char *)0x45a376;
  FUN_00465317();
  ppuStack_34 = (undefined1 **)(in_ECX + 0x44);
  pcStack_38 = (char *)0x45a385;
  FUN_00465317();
  *(undefined1 *)(in_ECX + 0x54) = *(undefined1 *)(iVar1 + 0x2d0);
  ppuStack_34 = (undefined1 **)(in_ECX + 0x34);
  pcStack_38 = (char *)0x45a39d;
  FUN_00465317();
  ppuStack_34 = (undefined1 **)0x45a3a5;
  FUN_004652cd();
  local_8 = 0;
  ppuStack_34 = (undefined1 **)0x45a3b3;
  cVar2 = FUN_00448866();
  ppuStack_34 = (undefined1 **)(in_ECX + 0x38);
  if (cVar2 == '\0') {
    pcStack_38 = (char *)0x45a3d7;
    FUN_00465317();
  }
  else {
    pcStack_38 = (char *)0x45a3c5;
    FUN_00465317();
  }
  ppuStack_34 = &local_1c;
  pcStack_38 = (char *)0x45a3e5;
  FUN_0046537e();
  ppuStack_34 = (undefined1 **)local_18;
  pcStack_38 = (char *)0x45a3f1;
  FUN_00465317();
  ppuStack_34 = (undefined1 **)0x45a3f9;
  FUN_004652d6();
  ppuStack_34 = (undefined1 **)(iVar1 + 0x3dc);
  pcStack_38 = *ppuStack_34;
  if (*pcStack_38 == '\0') {
    ppuStack_34 = &local_20;
    pcStack_38 = (char *)0x45a413;
    FUN_0046537e();
    local_14 = 1;
  }
  else {
    local_20 = (undefined1 *)&ppuStack_3c;
    ppuStack_3c = (undefined1 **)pcStack_38;
    FUN_004652e4(local_18);
    FUN_00465c6b(&pcStack_38);
    ppuStack_3c = &local_1c;
    FUN_00465c30();
    local_14 = 2;
  }
  ppuStack_34 = (undefined1 **)(in_ECX + 0x50);
  pcStack_38 = (char *)0x45a458;
  FUN_00465317();
  if ((local_14 & 2) != 0) {
    local_14 = local_14 & 0xfffffffd;
    ppuStack_34 = (undefined1 **)0x45a46a;
    FUN_004652d6();
  }
  local_8 = 0;
  if ((local_14 & 1) != 0) {
    local_14 = local_14 & 0xfffffffe;
    ppuStack_34 = (undefined1 **)0x45a480;
    FUN_004652d6();
  }
  ppuStack_34 = (undefined1 **)(iVar1 + 0x3e4);
  if (**ppuStack_34 == '\0') {
    ppuStack_34 = &local_1c;
    pcStack_38 = (char *)0x45a49b;
    FUN_0046537e();
    local_14 = local_14 | 4;
  }
  else {
    local_20 = (undefined1 *)&ppuStack_3c;
    FUN_004652e4(local_18);
    FUN_00465c6b(&pcStack_38);
    ppuStack_3c = &local_20;
    FUN_00465c30();
    local_14 = local_14 | 8;
  }
  ppuStack_34 = (undefined1 **)(in_ECX + 0x4c);
  pcStack_38 = (char *)0x45a4dc;
  FUN_00465317();
  if ((local_14 & 8) != 0) {
    local_14 = local_14 & 0xfffffff7;
    ppuStack_34 = (undefined1 **)0x45a4ee;
    FUN_004652d6();
  }
  local_8 = 0;
  if ((local_14 & 4) != 0) {
    ppuStack_34 = (undefined1 **)0x45a500;
    FUN_004652d6();
  }
  ppuStack_34 = (undefined1 **)0x45a50b;
  FUN_0045efa9();
  ppuStack_34 = (undefined1 **)0x45a516;
  (**(code **)(*(int *)(in_ECX + -0x74) + 0x84))();
  ppuStack_34 = (undefined1 **)0x45a51e;
  FUN_004652d6();
  return;
}

