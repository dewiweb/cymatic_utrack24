// rea decompile_all
// name: FUN_00526800
// address: 0x526800
// body: available
// range: 0x526800-0x526996 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_00526800(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined1 local_5;
  
  if ((uint)(param_1 - *(int *)(in_ECX + 0x10)) < *(uint *)(in_ECX + 0x14)) {
    local_5 = '\0';
  }
  else {
    *(int *)(in_ECX + 0x10) = param_1;
    if (100 < (uint)(param_1 - *(int *)(in_ECX + 0x18))) {
      *(int *)(in_ECX + 0x18) = param_1;
      FUN_00526b10();
    }
    local_5 = '\0';
    if (*(int *)(in_ECX + 0x30) == 0) {
      uVar3 = FUN_005270a0();
      *(undefined4 *)(in_ECX + 0x30) = uVar3;
    }
    if (*(int *)(in_ECX + 0x30) != 0) {
      iVar1 = *(int *)(in_ECX + 0x30);
      while( true ) {
        (*(code *)**(undefined4 **)
                    (*(int *)(in_ECX + 0x30) + 0x28 +
                    *(int *)(*(int *)(*(int *)(in_ECX + 0x30) + 0x28) + 8)))();
        local_5 = FUN_00560ef0(param_1);
        if (local_5 != '\0') break;
        iVar2 = *(int *)(in_ECX + 0x30);
        uVar3 = FUN_005270f0(*(undefined4 *)(in_ECX + 0x30));
        *(undefined4 *)(in_ECX + 0x30) = uVar3;
        (**(code **)(*(int *)(iVar2 + 0x28 + *(int *)(*(int *)(iVar2 + 0x28) + 8)) + 4))();
        if (*(int *)(in_ECX + 0x30) == 0) {
          uVar3 = FUN_005270a0();
          *(undefined4 *)(in_ECX + 0x30) = uVar3;
        }
        if ((*(int *)(in_ECX + 0x30) == 0) || (iVar1 == *(int *)(in_ECX + 0x30))) goto LAB_00526970;
      }
      (**(code **)(*(int *)(*(int *)(in_ECX + 0x30) + 0x28 +
                           *(int *)(*(int *)(*(int *)(in_ECX + 0x30) + 0x28) + 8)) + 4))();
LAB_00526970:
      if (local_5 == '\0') {
        *(undefined4 *)(in_ECX + 0x14) = 100;
      }
      else {
        *(undefined4 *)(in_ECX + 0x14) = 5;
      }
    }
  }
  return local_5;
}

