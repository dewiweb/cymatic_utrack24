// rea decompile_all
// name: FUN_0041771e
// address: 0x41771e
// body: available
// range: 0x41771e-0x417792 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0041771e(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint local_8;
  
  local_8 = 0;
  uVar5 = *param_2;
  do {
    uVar5 = uVar5 + 1;
    uVar4 = 0;
    uVar3 = *(uint *)(param_1 + 0x10);
    while( true ) {
      uVar2 = uVar3;
      if (uVar2 <= uVar4) {
        uVar5 = 0;
        if ((uVar4 < *(uint *)(param_1 + 0x10)) && (local_8 = uVar4, uVar4 != 0)) {
          local_8 = uVar4 + 1;
          uVar5 = *(uint *)(uVar4 * 0x10 + *(int *)(param_1 + 0x14));
        }
        goto LAB_00417786;
      }
      uVar3 = (uVar2 - uVar4 >> 1) + uVar4;
      uVar1 = *(uint *)(uVar3 * 0x10 + *(int *)(param_1 + 0x14));
      if (uVar1 == uVar5) break;
      if (uVar1 < uVar5) {
        uVar4 = uVar3 + 1;
        uVar3 = uVar2;
      }
    }
    local_8 = uVar3;
  } while (uVar3 == 0);
  local_8 = uVar3 + 1;
LAB_00417786:
  *param_2 = uVar5;
  return local_8;
}

