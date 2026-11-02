// rea decompile_all
// name: FUN_0041df3f
// address: 0x41df3f
// body: available
// range: 0x41df3f-0x41dfc4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0041df3f(uint param_1,uint *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint local_8;
  
  iVar2 = param_1;
  param_1 = *(uint *)(param_1 + 0x10);
  uVar5 = 0;
  uVar3 = *param_2 + 1;
  local_8 = 0;
  if (param_1 != 0) {
    do {
      uVar4 = (param_1 - uVar5 >> 1) + uVar5;
      puVar1 = (uint *)(*(int *)(iVar2 + 0x14) + uVar4 * 8);
      if (*puVar1 == uVar3) {
        local_8 = puVar1[1];
        goto LAB_0041dfb3;
      }
      uVar6 = *puVar1 & 0x7fffffff;
      if (uVar6 == uVar3) {
        local_8 = puVar1[1];
      }
      if (uVar6 < uVar3) {
        uVar5 = uVar4 + 1;
        uVar4 = param_1;
      }
      param_1 = uVar4;
    } while (uVar5 < param_1);
    if (local_8 != 0) goto LAB_0041dfb3;
  }
  uVar3 = 0;
  if (uVar5 < *(uint *)(iVar2 + 0x10)) {
    puVar1 = (uint *)(*(int *)(iVar2 + 0x14) + uVar5 * 8);
    local_8 = puVar1[1];
    uVar3 = *puVar1 & 0x7fffffff;
  }
LAB_0041dfb3:
  *param_2 = uVar3;
  return local_8;
}

