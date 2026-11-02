// rea decompile_all
// name: FUN_004e8e98
// address: 0x4e8e98
// body: available
// range: 0x4e8e98-0x4e8f76 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int FUN_004e8e98(float param_1)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  undefined8 uVar4;
  undefined1 local_20 [8];
  int local_18;
  float local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x4e8ea4;
  if ((float)in_ECX[4] < param_1) {
    iVar3 = in_ECX[6];
    cVar1 = FUN_004e7e03(iVar3);
    if (cVar1 == '\0') {
      if ((float)in_ECX[5] < param_1 != ((float)in_ECX[5] == param_1)) {
        return *(int *)(iVar3 + 8) + *in_ECX;
      }
      FUN_0049fe5a(local_20);
      local_8 = 0;
      FUN_004e7e2d(in_ECX[6]);
      local_8 = CONCAT31(local_8._1_3_,1);
      FUN_0049fec9(in_ECX[7],in_ECX[4],0);
      FUN_004652d6();
      iVar3 = 0;
      if (0 < local_18) {
        do {
          uVar4 = FUN_0049feb2();
          iVar3 = (int)((ulonglong)uVar4 >> 0x20);
          iVar2 = (int)uVar4;
          local_14 = *(float *)(iVar2 + 0x14) + *(float *)(iVar2 + 0xc);
          if (param_1 < (local_14 + *(float *)(iVar2 + 0xc)) * 0.5) break;
          iVar3 = iVar3 + 1;
        } while (iVar3 < local_18);
      }
      iVar2 = *in_ECX;
      FUN_0049fea0();
      return iVar2 + iVar3;
    }
  }
  return *in_ECX;
}

