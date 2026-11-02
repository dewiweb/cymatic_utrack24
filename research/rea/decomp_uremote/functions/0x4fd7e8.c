// rea decompile_all
// name: FUN_004fd7e8
// address: 0x4fd7e8
// body: available
// range: 0x4fd7e8-0x4fd957 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_004fd7e8(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  int local_18;
  
  local_18 = 0;
  LOCK();
  iVar2 = *(int *)(in_ECX + 0xac);
  if (iVar2 == 1) {
    *(int *)(in_ECX + 0xac) = 0;
    iVar2 = 1;
  }
  UNLOCK();
  if ((*(char *)(*(int *)(in_ECX + 0x44) + 0x10c) != '\0') && (iVar2 == 1)) {
    uVar3 = FUN_00467ec4();
    if (uVar3 <= *(int *)(in_ECX + 0xb0) + 1U) {
      FUN_00467a43(2);
    }
    iVar4 = FUN_005af82d(8);
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_00473e7a(iVar4,in_ECX + 4);
    }
    if (iVar4 != 0) {
      local_18 = iVar4;
    }
    if (*(char *)(local_18 + 4) == '\0') goto LAB_004fd874;
    FUN_004fd958(in_ECX,0);
  }
  iVar4 = local_18;
  cVar1 = FUN_004fe22e();
  if (cVar1 != '\0') {
    if (*(int *)(*(int *)(in_ECX + 0x44) + 0xc4) != 0) {
      glViewport(0,0,*(undefined4 *)(in_ECX + 0x68),*(undefined4 *)(in_ECX + 0x6c));
      *(undefined8 *)(*(int *)(in_ECX + 0x44) + 200) = *(undefined8 *)(in_ECX + 0x80);
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x44) + 0xc4) + 8))();
      FUN_004fa480();
    }
    if (*(char *)(*(int *)(in_ECX + 0x44) + 0x10c) != '\0') {
      if (iVar2 == 1) {
        FUN_004fda75();
        if (local_18 != 0) {
          local_18 = 0;
          FUN_00473fa5();
          FUN_005af7b6(iVar4);
        }
        uVar5 = FUN_00467ec4();
        *(undefined4 *)(in_ECX + 0xb0) = uVar5;
      }
      glViewport(0,0,*(undefined4 *)(in_ECX + 0x68),*(undefined4 *)(in_ECX + 0x6c));
      FUN_004fdbb2();
    }
    FUN_004fe2b5();
    FUN_004fe27e();
    if (local_18 != 0) {
      FUN_00473fa5();
      FUN_005af7b6(local_18);
    }
    return 1;
  }
  if (local_18 == 0) {
    return 0;
  }
LAB_004fd874:
  FUN_00473fa5();
  FUN_005af7b6(local_18);
  return 0;
}

