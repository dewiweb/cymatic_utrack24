// rea decompile_all
// name: FUN_0040b0a0
// address: 0x40b0a0
// body: available
// range: 0x40b0a0-0x40b296 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0040b0a0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int in_EAX;
  int iVar8;
  int iVar9;
  int in_ECX;
  int unaff_EBX;
  int local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  if (*(char *)(unaff_EBX + 0x39c) == '\0') {
    param_2 = param_2 + *(int *)(unaff_EBX + 0x20);
    param_3 = param_3 + *(int *)(unaff_EBX + 0x24);
    local_14 = in_EAX;
    local_10 = in_ECX;
    if (*(int *)(*(int *)(*(int *)(unaff_EBX + 4) + 0x80) + 0x34) == 0) {
      local_10 = FUN_0040afd7();
      local_14 = FUN_0040afd7();
    }
    if ((-1 < local_10) && (-1 < local_14)) {
      if (*(char *)(unaff_EBX + 0x42) != '\0') {
        iVar9 = *(int *)(unaff_EBX + 8);
        iVar1 = **(int **)(iVar9 + 0x9c);
        iVar8 = FUN_0040d839(2);
        if (iVar8 != 0) {
          return iVar8;
        }
        piVar2 = *(int **)(iVar1 + 0x58);
        piVar2[2] = 0;
        piVar2[3] = 0;
        *piVar2 = local_10;
        *(undefined2 *)(piVar2 + 1) = 0x202;
        piVar2[8] = local_14;
        *(undefined2 *)(piVar2 + 9) = 2;
        piVar2[10] = param_2 >> 0x10;
        piVar2[0xb] = param_3 >> 0x10;
        *(undefined4 *)(iVar9 + 0x80) = 2;
        *(undefined4 *)(iVar9 + 0x84) = *(undefined4 *)(iVar1 + 0x34);
        *(undefined4 *)(iVar9 + 0x48) = 0x636f6d70;
        *(undefined4 *)(iVar1 + 0x54) = 2;
      }
      FUN_0040d888();
      iVar9 = FUN_0040b00b(local_10);
      if (iVar9 == 0) {
        *(undefined1 *)(unaff_EBX + 0x39c) = 1;
        iVar9 = FUN_0040b297();
        *(undefined1 *)(unaff_EBX + 0x39c) = 0;
        FUN_0040b057(local_c);
        if (iVar9 != 0) {
          return iVar9;
        }
      }
      uVar3 = *(undefined4 *)(unaff_EBX + 0x20);
      *(undefined4 *)(unaff_EBX + 0x20) = 0;
      uVar4 = *(undefined4 *)(unaff_EBX + 0x24);
      *(undefined4 *)(unaff_EBX + 0x24) = 0;
      uVar5 = *(undefined4 *)(unaff_EBX + 0x28);
      uVar6 = *(undefined4 *)(unaff_EBX + 0x2c);
      uVar7 = *(undefined4 *)(unaff_EBX + 0x2e8);
      *(int *)(unaff_EBX + 0x18) = param_2 - param_1;
      *(int *)(unaff_EBX + 0x1c) = param_3;
      local_8 = FUN_0040b00b(local_14);
      if (local_8 == 0) {
        *(undefined1 *)(unaff_EBX + 0x39c) = 1;
        local_8 = FUN_0040b297();
        *(undefined1 *)(unaff_EBX + 0x39c) = 0;
        FUN_0040b057(local_c);
        if (local_8 != 0) {
          return local_8;
        }
      }
      *(undefined4 *)(unaff_EBX + 0x20) = uVar3;
      *(undefined4 *)(unaff_EBX + 0x24) = uVar4;
      *(undefined4 *)(unaff_EBX + 0x28) = uVar5;
      *(undefined4 *)(unaff_EBX + 0x2c) = uVar6;
      *(undefined4 *)(unaff_EBX + 0x2e8) = uVar7;
      *(undefined4 *)(unaff_EBX + 0x18) = 0;
      *(undefined4 *)(unaff_EBX + 0x1c) = 0;
      return local_8;
    }
  }
  return 0xa0;
}

