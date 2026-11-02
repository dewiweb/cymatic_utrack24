// rea decompile_all
// name: FUN_005bdc8e
// address: 0x5bdc8e
// body: available
// range: 0x5bdc8e-0x5bdec1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_005bdc8e(int param_1)

{
  ushort uVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  ushort in_FPUStatusWord;
  unkbyte10 extraout_ST0;
  float10 fVar5;
  double in_XMM0_Qa;
  
  uVar1 = ((ushort)((ulonglong)in_XMM0_Qa >> 0x30) & 0x7fff) + 0xc7e0;
  bVar4 = uVar1 == 0x8a8;
  if (uVar1 < 0x8a9) {
    return &DAT_005f6610 + ((int)ROUND(in_XMM0_Qa * 10.185916357881302) + 0x72900U & 0x1f) * 0xb0;
  }
  if ((short)uVar1 < 0x8a9) {
    return (undefined *)(uint)(uVar1 >> 4);
  }
  uVar2 = __fload_withFB();
  if (bVar4) {
    if (((uVar2 & 0xfffff) == 0) && (param_1 == 0)) {
      puVar3 = (undefined *)0x1;
    }
    else {
      puVar3 = (undefined *)FUN_005ba18c();
    }
    if (DAT_0095ca40 == 0) {
      puVar3 = (undefined *)__startOneArgErrorHandling();
      return puVar3;
    }
  }
  else {
    fptan(extraout_ST0);
    fVar5 = (float10)1;
    if ((in_FPUStatusWord & 0x400) != 0) {
      do {
        fVar5 = fVar5 - ROUND(fVar5 / _DAT_005f0fea) * _DAT_005f0fea;
      } while ((in_FPUStatusWord & 0x400) != 0);
      fptan(fVar5);
    }
    puVar3 = (undefined *)(uint)in_FPUStatusWord;
    if (DAT_0095ca40 == 0) {
      puVar3 = (undefined *)__math_exit();
      return puVar3;
    }
  }
  return puVar3;
}

