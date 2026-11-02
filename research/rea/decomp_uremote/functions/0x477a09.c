// rea decompile_all
// name: FUN_00477a09
// address: 0x477a09
// body: available
// range: 0x477a09-0x477b83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_00477a09(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  
  *param_1 = 0;
  FUN_004a6333();
  FUN_004a51ab();
  param_1[5] = param_2[2] * 2;
  iVar1 = param_2[2];
  param_1[4] = param_1[4] + 1;
  param_1[6] = iVar1 * 4 + 1;
  *(undefined1 *)(param_1 + 7) = 1;
  FUN_00477dfd();
  FUN_00477e24();
  pfVar6 = (float *)*param_2;
  pfVar7 = pfVar6 + param_2[2] * 4;
  for (; pfVar6 != pfVar7; pfVar6 = pfVar6 + 4) {
    iVar2 = FUN_004a8e4a(*pfVar6 * 256.0);
    iVar3 = FUN_004a8e4a((pfVar6[2] + *pfVar6) * 256.0);
    iVar1 = param_1[2];
    iVar4 = FUN_004a8e4a(pfVar6[1] * 256.0);
    iVar4 = iVar4 + iVar1 * -0x100;
    iVar5 = FUN_004a8e4a((pfVar6[1] + pfVar6[3]) * 256.0);
    iVar5 = iVar5 + iVar1 * -0x100;
    if ((iVar2 < iVar3) && (iVar4 < iVar5)) {
      iVar4 = iVar4 >> 8;
      iVar5 = iVar5 >> 8;
      if (iVar4 != iVar5) {
        FUN_00477fef(iVar2,iVar3,iVar4);
        while (iVar4 = iVar4 + 1, iVar4 < iVar5) {
          FUN_00477fef(iVar2,iVar3,iVar4);
        }
      }
      FUN_00477fef(iVar2,iVar3,iVar4);
    }
  }
  FUN_00477e77(param_1,1);
  return param_1;
}

