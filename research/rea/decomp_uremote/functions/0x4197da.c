// rea decompile_all
// name: FUN_004197da
// address: 0x4197da
// body: available
// range: 0x4197da-0x41997b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004197da(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int in_EAX;
  int iVar6;
  int iVar7;
  int iVar8;
  int in_ECX;
  int in_EDX;
  undefined8 uVar9;
  int local_8;
  
  if ((*(char *)(in_EDX + 0x5d8) == '\0') &&
     ((iVar8 = *(int *)(in_EDX + 0x20), *(int *)(in_EDX + 0x54c) != 0 ||
      (*(int *)(*(int *)(*(int *)(in_EDX + 4) + 0x80) + 0x34) != 0)))) {
    local_8 = in_ECX;
    if (*(int *)(*(int *)(*(int *)(in_EDX + 4) + 0x80) + 0x34) == 0) {
      local_8 = FUN_0041977f();
      param_3 = FUN_0041977f();
    }
    if ((-1 < local_8) && (-1 < param_3)) {
      if (*(char *)(in_EDX + 0x45) != '\0') {
        iVar8 = *(int *)(in_EDX + 8);
        iVar7 = **(int **)(iVar8 + 0x9c);
        iVar6 = FUN_0040d839(2);
        if (iVar6 == 0) {
          piVar1 = *(int **)(iVar7 + 0x58);
          piVar1[2] = 0;
          piVar1[3] = 0;
          *piVar1 = local_8;
          *(undefined2 *)(piVar1 + 1) = 0x202;
          piVar1[8] = param_3;
          *(undefined2 *)(piVar1 + 9) = 2;
          uVar9 = FUN_0040d211();
          *(int *)((int)((ulonglong)uVar9 >> 0x20) + 8) = (int)uVar9 >> 0x10;
          uVar9 = FUN_0040d211();
          *(int *)((int)((ulonglong)uVar9 >> 0x20) + 0xc) = (int)uVar9 >> 0x10;
          *(undefined4 *)(iVar8 + 0x80) = 2;
          *(undefined4 *)(iVar8 + 0x84) = *(undefined4 *)(iVar7 + 0x34);
          *(undefined4 *)(iVar8 + 0x48) = 0x636f6d70;
          *(undefined4 *)(iVar7 + 0x54) = 2;
          return 0;
        }
        return iVar6;
      }
      FUN_0040d888();
      *(undefined1 *)(in_EDX + 0x5d8) = 1;
      iVar7 = FUN_0041a684(local_8);
      *(undefined1 *)(in_EDX + 0x5d8) = 0;
      if (iVar7 == 0) {
        uVar2 = *(undefined4 *)(in_EDX + 0x24);
        uVar3 = *(undefined4 *)(in_EDX + 0x20);
        *(undefined4 *)(in_EDX + 0x20) = 0;
        *(undefined4 *)(in_EDX + 0x24) = 0;
        uVar4 = *(undefined4 *)(in_EDX + 0x28);
        uVar5 = *(undefined4 *)(in_EDX + 0x2c);
        *(undefined4 *)(in_EDX + 0x1c) = param_2;
        *(int *)(in_EDX + 0x18) = (in_EAX + iVar8) - param_1;
        *(undefined1 *)(in_EDX + 0x5d8) = 1;
        iVar8 = FUN_0041a684(param_3);
        *(undefined1 *)(in_EDX + 0x5d8) = 0;
        if (iVar8 == 0) {
          *(undefined4 *)(in_EDX + 0x18) = 0;
          *(undefined4 *)(in_EDX + 0x1c) = 0;
          *(undefined4 *)(in_EDX + 0x24) = uVar2;
          *(undefined4 *)(in_EDX + 0x28) = uVar4;
          *(undefined4 *)(in_EDX + 0x20) = uVar3;
          *(undefined4 *)(in_EDX + 0x2c) = uVar5;
          return 0;
        }
        return iVar8;
      }
      return iVar7;
    }
  }
  return 0xa0;
}

