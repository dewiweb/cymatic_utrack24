// rea decompile_all
// name: FUN_0043a35c
// address: 0x43a35c
// body: available
// range: 0x43a35c-0x43a51f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_0043a35c(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 *extraout_ECX;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar4;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  FUN_0049f4b3();
  FUN_004c6ae2();
  if (*param_2 == 0) {
    fVar1 = (float)*(int *)(param_1[1] + 0x1c) * (float)param_2[6];
    param_1[7] = fVar1;
    FUN_0049f51e(fVar1);
    FUN_0049f5e8();
    FUN_004c4d7a();
    fVar4 = (float10)FUN_0049fa7b(param_2 + 3);
    param_1[6] = (float)fVar4;
    FUN_0043a5ca(param_2[4],param_2[5]);
    extraout_ECX[2] = local_30 + local_28 * 0.5;
    extraout_ECX[3] = local_24 * 0.5 + local_2c;
    param_1 = extraout_ECX;
  }
  else if (*param_2 == 1) {
    param_1[7] = (float)*(int *)(param_1[1] + 0x1c) * (float)param_2[6];
    FUN_0043a7ad();
    FUN_0043a7ad();
    FUN_0047e366();
    iVar2 = FUN_0047e371();
    param_1[6] = (float)(extraout_ST0 / (float10)iVar2);
    FUN_004c4d7a();
    FUN_004c4d7a();
    iVar2 = param_2[0xb];
    do {
      iVar2 = iVar2 + -1;
      FUN_0043a7ad();
      iVar3 = FUN_0047e366();
      FUN_004c4d7a();
      if ((float10)iVar3 < extraout_ST0_00) break;
    } while (iVar2 != 0);
    FUN_0043a7ad();
    FUN_0049f5e8();
    FUN_004c4d7a();
    FUN_0043a5ca(param_2[4],param_2[5]);
    param_1[2] = local_30 + local_28 * 0.5;
    param_1[3] = local_24 * 0.5 + local_2c;
  }
  param_1[4] = 0;
  return param_1;
}

