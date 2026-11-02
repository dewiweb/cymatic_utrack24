// rea decompile_all
// name: FUN_00477b84
// address: 0x477b84
// body: available
// range: 0x477b84-0x477d70 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_00477b84(undefined4 *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  float *in_ECX;
  undefined4 *puVar8;
  uint uVar9;
  int local_1c;
  int local_18;
  
  *param_1 = 0;
  fVar1 = *in_ECX;
  iVar2 = FUN_004a8e4a(in_ECX[1] * 256.0);
  FUN_00474de5(fVar1);
  uVar3 = FUN_005b3fb0();
  param_1[1] = uVar3;
  param_1[2] = iVar2 >> 8;
  iVar2 = FUN_005b3fb0();
  param_1[3] = iVar2 + 2;
  iVar2 = FUN_005b3fb0();
  param_1[4] = iVar2 + 2;
  param_1[5] = 0x20;
  param_1[6] = 0x41;
  *(undefined1 *)(param_1 + 7) = 1;
  FUN_00477dfd();
  *(undefined4 *)*param_1 = 0;
  iVar4 = FUN_004a8e4a(*in_ECX * 256.0);
  iVar5 = FUN_004a8e4a((*in_ECX + in_ECX[2]) * 256.0);
  iVar2 = param_1[2];
  iVar6 = FUN_004a8e4a(in_ECX[1] * 256.0);
  uVar9 = iVar6 + iVar2 * -0x100;
  iVar6 = FUN_004a8e4a((in_ECX[3] + in_ECX[1]) * 256.0);
  uVar7 = iVar6 + iVar2 * -0x100;
  if ((iVar4 < iVar5) && ((int)uVar9 < (int)uVar7)) {
    puVar8 = (undefined4 *)*param_1;
    puVar8[4] = 0;
    iVar2 = (int)uVar7 >> 8;
    *puVar8 = 2;
    puVar8[1] = iVar4;
    if ((int)uVar9 >> 8 != iVar2) {
      puVar8[2] = 0xff - (uVar9 & 0xff);
      puVar8[3] = iVar5;
      puVar8 = puVar8 + param_1[6];
      local_1c = 1;
      if (1 < iVar2) {
        local_18 = iVar2 + -1;
        do {
          puVar8[4] = 0;
          local_18 = local_18 + -1;
          *puVar8 = 2;
          puVar8[1] = iVar4;
          puVar8[2] = 0xff;
          puVar8[3] = iVar5;
          puVar8 = puVar8 + param_1[6];
          local_1c = iVar2;
        } while (local_18 != 0);
      }
      puVar8[4] = 0;
      puVar8[2] = uVar7 & 0xff;
      *puVar8 = 2;
      puVar8[1] = iVar4;
      puVar8[3] = iVar5;
      goto LAB_00477d55;
    }
    puVar8[2] = uVar7 - uVar9;
    puVar8[3] = iVar5;
    for (local_1c = 1; puVar8 = puVar8 + param_1[6], local_1c < (int)param_1[4];
        local_1c = local_1c + 1) {
      *puVar8 = 0;
LAB_00477d55:
    }
  }
  else {
    param_1[4] = 0;
  }
  return param_1;
}

