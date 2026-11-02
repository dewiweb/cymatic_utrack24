// rea decompile_all
// name: FUN_004d93cf
// address: 0x4d93cf
// body: available
// range: 0x4d93cf-0x4d94b9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_004d93cf(undefined4 *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)(*(int *)(param_2 + 0xdc) + 0x8c);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (*(int *)(param_2 + 0xe8) == 0) {
    if (iVar1 < 0) {
      return param_1;
    }
    if (iVar1 < 2) {
      puVar3 = (undefined4 *)FUN_004f5b9e(*(undefined4 *)(param_4 + 0x18));
      goto LAB_004d9499;
    }
    if (iVar1 == 2) {
LAB_004d9458:
      puVar3 = (undefined4 *)FUN_004f5c0c(*(undefined4 *)(param_4 + 0x1c));
      *param_1 = *puVar3;
      param_1[1] = puVar3[1];
      uVar2 = puVar3[3];
      param_1[2] = puVar3[2];
      param_1[3] = uVar2;
      return param_1;
    }
    if (iVar1 != 3) {
      return param_1;
    }
  }
  else {
    if (iVar1 < 0) {
      return param_1;
    }
    if (iVar1 < 2) {
      puVar3 = (undefined4 *)FUN_004f5bd0(*(undefined4 *)(param_4 + 0x18));
      goto LAB_004d9499;
    }
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        return param_1;
      }
      goto LAB_004d9458;
    }
  }
  puVar3 = (undefined4 *)FUN_004f5b6b(*(undefined4 *)(param_4 + 0x1c));
LAB_004d9499:
  *param_1 = *puVar3;
  param_1[1] = puVar3[1];
  uVar2 = puVar3[2];
  param_1[3] = puVar3[3];
  param_1[2] = uVar2;
  return param_1;
}

