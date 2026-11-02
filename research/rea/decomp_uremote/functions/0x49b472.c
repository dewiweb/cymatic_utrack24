// rea decompile_all
// name: FUN_0049b472
// address: 0x49b472
// body: available
// range: 0x49b472-0x49b669 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x49b49d to 0x491122 FUN_00491122 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049b472(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  int in_ECX;
  char cVar4;
  int unaff_EBX;
  undefined1 local_18 [8];
  char local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  undefined1 local_c;
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  if (param_3 == 0) {
    if ((unaff_EBX < 1) ||
       ((((2 < unaff_EBX && (unaff_EBX != 4)) && (unaff_EBX != 8)) && (unaff_EBX != 0x10))))
    goto LAB_0049b49d;
  }
  else {
    if (param_3 == 2) {
      if ((unaff_EBX == 8) || (unaff_EBX == 0x10)) {
        *(undefined1 *)(in_ECX + 0x10f) = 3;
        goto LAB_0049b50f;
      }
LAB_0049b49d:
                    /* WARNING: Subroutine does not return */
      FUN_00491122();
    }
    if (param_3 != 3) {
      if (param_3 == 4) {
        if ((unaff_EBX != 8) && (unaff_EBX != 0x10)) goto LAB_0049b49d;
        *(undefined1 *)(in_ECX + 0x10f) = 2;
      }
      else {
        if ((param_3 != 6) || ((unaff_EBX != 8 && (unaff_EBX != 0x10)))) goto LAB_0049b49d;
        *(undefined1 *)(in_ECX + 0x10f) = 4;
      }
      goto LAB_0049b50f;
    }
    if ((unaff_EBX < 1) || (((2 < unaff_EBX && (unaff_EBX != 4)) && (unaff_EBX != 8))))
    goto LAB_0049b49d;
  }
  *(undefined1 *)(in_ECX + 0x10f) = 1;
LAB_0049b50f:
  if (param_4 != 0) {
    FUN_00491216();
    param_4 = 0;
  }
  if ((((((*(byte *)(in_ECX + 0x21c) & 4) == 0) || ((*(uint *)(in_ECX + 0x28) & 0x1000) != 0)) ||
       ((param_3 != 2 && (param_3 != 6)))) || (param_5 != 0x40)) && (param_5 != 0)) {
    FUN_00491216();
    param_5 = 0;
  }
  if ((param_6 != 0) && (param_6 != 1)) {
    FUN_00491216();
    param_6 = 1;
  }
  *(undefined1 *)(in_ECX + 0x10b) = (undefined1)param_3;
  *(undefined1 *)(in_ECX + 0x108) = (undefined1)param_6;
  *(undefined1 *)(in_ECX + 0x220) = (undefined1)param_5;
  *(undefined1 *)(in_ECX + 0x234) = (undefined1)param_4;
  cVar4 = (char)unaff_EBX;
  bVar2 = *(char *)(in_ECX + 0x10f) * cVar4;
  *(byte *)(in_ECX + 0x10e) = bVar2;
  *(char *)(in_ECX + 0x10c) = cVar4;
  *(int *)(in_ECX + 0xb4) = param_1;
  *(undefined4 *)(in_ECX + 0xb8) = param_2;
  if (bVar2 < 8) {
    uVar3 = (uint)bVar2 * param_1 + 7 >> 3;
  }
  else {
    uVar3 = (uint)(bVar2 >> 3) * param_1;
  }
  *(uint *)(in_ECX + 0xc4) = uVar3;
  *(char *)(in_ECX + 0x110) = *(char *)(in_ECX + 0x10f);
  *(int *)(in_ECX + 0xc0) = param_1;
  *(char *)(in_ECX + 0x10d) = cVar4;
  FUN_0049ac88();
  FUN_0049ac88();
  local_f = (undefined1)param_3;
  local_e = (undefined1)param_4;
  local_d = (undefined1)param_5;
  local_c = (undefined1)param_6;
  local_10 = cVar4;
  FUN_0049adf3(local_18,0xd);
  pcVar1 = (char *)(in_ECX + 0x10a);
  if (*pcVar1 == '\0') {
    if ((*(char *)(in_ECX + 0x10b) == '\x03') || (*(byte *)(in_ECX + 0x10c) < 8)) {
      *pcVar1 = '\b';
    }
    else {
      *pcVar1 = -8;
    }
  }
  *(undefined4 *)(in_ECX + 0x28) = 1;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

