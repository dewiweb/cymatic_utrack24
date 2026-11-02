// rea decompile_all
// name: FUN_004e0af0
// address: 0x4e0af0
// body: available
// range: 0x4e0af0-0x4e0c55 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_004e0af0(int *param_1)

{
  int iVar1;
  char cVar2;
  int in_ECX;
  int *piVar3;
  undefined4 uVar4;
  
  iVar1 = *param_1;
  if (iVar1 == 0x10028) {
    uVar4 = 1;
LAB_004e0b19:
    FUN_004e19c4(uVar4);
    return 1;
  }
  if (iVar1 == 0x10026) {
    uVar4 = 0xffffffff;
    goto LAB_004e0b19;
  }
  if (iVar1 == 0x10025) {
    if (*(int *)(in_ECX + 0x70) != 0) {
      FUN_004f5fb6();
      FUN_004f6f64();
      FUN_004f7a5c();
      FUN_004e09c5(1);
      cVar2 = FUN_004f5fe9(0);
      if (cVar2 != '\0') {
        uVar4 = FUN_004f6f64();
        FUN_004e179b(uVar4);
      }
      *(undefined1 *)(in_ECX + 0xc0) = 1;
      if (*(int *)(in_ECX + 0x70) != 0) {
        thunk_FUN_004e1a86();
      }
      FUN_00474d0f();
      return 1;
    }
    cVar2 = FUN_004f5fe9(0);
    if (cVar2 == '\0') {
      return 1;
    }
    if (*(int *)(in_ECX + 0xa8) != 0) {
      piVar3 = *(int **)(*(int *)(in_ECX + 0xa8) + 8);
      goto LAB_004e0c26;
    }
  }
  else {
    if (iVar1 != 0x10027) {
      if (iVar1 == 0xd) {
        FUN_004e195c();
        return 1;
      }
      if (iVar1 == 0x1b) {
        FUN_004e0a5f(0);
        return 1;
      }
      return 0;
    }
    *(undefined1 *)(in_ECX + 0xc0) = 1;
    if (*(int *)(in_ECX + 0x70) != 0) {
      thunk_FUN_004e1a86();
    }
    FUN_004f7a5c();
    cVar2 = FUN_004e1801();
    if (cVar2 != '\0') {
      if (*(int *)(in_ECX + 0xd4) == 0) {
        return 1;
      }
      if ((*(byte *)(*(int *)(in_ECX + 0xd4) + 0x68) & 2) == 0) {
        return 1;
      }
      uVar4 = 1;
      goto LAB_004e0b19;
    }
    cVar2 = FUN_004f5fe9(0);
    if (cVar2 == '\0') {
      return 1;
    }
    if (*(int *)(in_ECX + 0xa8) != 0) {
      piVar3 = *(int **)(*(int *)(in_ECX + 0xa8) + 8);
      goto LAB_004e0c26;
    }
  }
  piVar3 = (int *)0x0;
LAB_004e0c26:
  (**(code **)(*piVar3 + 0x6c))(param_1);
  return 1;
}

