// rea decompile_all
// name: FUN_005bc298
// address: 0x5bc298
// body: available
// range: 0x5bc298-0x5bc29d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_005bc298(int param_1,undefined4 param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  undefined *puVar4;
  bool bVar5;
  ushort in_FPUStatusWord;
  unkbyte10 extraout_ST0;
  float10 fVar6;
  
  uVar1 = (ushort)((uint)param_2 >> 0x10);
  uVar2 = (uVar1 & 0x7fff) + 0xcfd0;
  bVar5 = uVar2 == 0x10c5;
  if (uVar2 < 0x10c6) {
    return &DAT_005f1a70 +
           ((int)ROUND((double)CONCAT44(param_2,param_1) * 10.185916357881302) + 0x1c7610U & 0x3f) *
           0x20;
  }
  if ((short)uVar2 < 0x10c6) {
    return (undefined *)(uint)(uVar1 & 0x7fff);
  }
  uVar3 = __fload_withFB();
  if (bVar5) {
    if (((uVar3 & 0xfffff) == 0) && (param_1 == 0)) {
      puVar4 = (undefined *)0x1;
    }
    else {
      puVar4 = (undefined *)FUN_005ba18c();
    }
    if (DAT_0095ca40 == 0) {
      puVar4 = (undefined *)__startOneArgErrorHandling();
      return puVar4;
    }
  }
  else {
    fVar6 = (float10)fcos(extraout_ST0);
    if ((in_FPUStatusWord & 0x400) != 0) {
      do {
        fVar6 = fVar6 - ROUND(fVar6 / _DAT_005f0fea) * _DAT_005f0fea;
      } while ((in_FPUStatusWord & 0x400) != 0);
      fcos(fVar6);
    }
    puVar4 = (undefined *)(uint)in_FPUStatusWord;
    if (DAT_0095ca40 == 0) {
      puVar4 = (undefined *)__math_exit();
      return puVar4;
    }
  }
  return puVar4;
}

