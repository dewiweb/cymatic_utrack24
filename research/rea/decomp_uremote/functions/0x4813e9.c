// rea decompile_all
// name: FUN_004813e9
// address: 0x4813e9
// body: available
// range: 0x4813e9-0x48149b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004813e9(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int *local_8;
  
  iVar3 = param_1;
  iVar2 = *(int *)(param_1 + 0x15c);
  if (*(int *)(param_1 + 0xbc) != 0) {
    if (*(int *)(iVar2 + 0x24) == 0) {
      iVar5 = 0;
      if (0 < *(int *)(param_1 + 0xe4)) {
        puVar4 = (undefined4 *)(iVar2 + 0x14);
        do {
          *puVar4 = 0;
          iVar5 = iVar5 + 1;
          puVar4 = puVar4 + 1;
        } while (iVar5 < *(int *)(param_1 + 0xe4));
      }
      *(undefined4 *)(iVar2 + 0x24) = *(undefined4 *)(param_1 + 0xbc);
    }
    *(int *)(iVar2 + 0x24) = *(int *)(iVar2 + 0x24) + -1;
  }
  piVar1 = (int *)(param_1 + 0x100);
  param_1 = 0;
  if (0 < *piVar1) {
    local_8 = (int *)(iVar3 + 0x104);
    do {
      iVar5 = *(int *)(iVar3 + 0xe8 + *local_8 * 4);
      piVar1 = (int *)(iVar2 + 0x14 + *local_8 * 4);
      puVar4 = (undefined4 *)(param_2 + param_1 * 4);
      FUN_00481316(iVar3,*puVar4,*piVar1,*(undefined4 *)(iVar2 + 0x4c + *(int *)(iVar5 + 0x14) * 4),
                   *(undefined4 *)(iVar2 + 0x5c + *(int *)(iVar5 + 0x18) * 4));
      local_8 = local_8 + 1;
      param_1 = param_1 + 1;
      *piVar1 = (int)*(short *)*puVar4;
    } while (param_1 < *(int *)(iVar3 + 0x100));
  }
  return 1;
}

