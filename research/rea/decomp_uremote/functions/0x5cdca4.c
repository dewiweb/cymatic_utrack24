// rea decompile_all
// name: __setjmp3
// address: 0x5cdca4
// body: available
// range: 0x5cdca4-0x5cdd1e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __setjmp3
   
   Library: Visual Studio */

undefined4 __setjmp3(undefined4 *param_1,int param_2,void *param_3,undefined4 param_4)

{
  void *pvVar1;
  uint uVar2;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 *puVar3;
  undefined4 unaff_EDI;
  undefined4 *puVar4;
  undefined4 unaff_retaddr;
  
  *param_1 = unaff_EBP;
  param_1[1] = unaff_EBX;
  param_1[2] = unaff_EDI;
  param_1[3] = unaff_ESI;
  param_1[4] = register0x00000010;
  param_1[5] = unaff_retaddr;
  param_1[8] = 0x56433230;
  param_1[9] = 0;
  pvVar1 = ExceptionList;
  param_1[6] = ExceptionList;
  if (pvVar1 == (void *)0xffffffff) {
    param_1[7] = 0xffffffff;
  }
  else if ((param_2 == 0) || (param_1[9] = param_3, pvVar1 = param_3, param_2 == 1)) {
    param_1[7] = *(undefined4 *)((int)pvVar1 + 0xc);
  }
  else {
    param_1[7] = param_4;
    uVar2 = param_2 - 2;
    if (uVar2 != 0) {
      puVar3 = (undefined4 *)&stack0x00000014;
      puVar4 = param_1 + 10;
      if (6 < uVar2) {
        uVar2 = 6;
      }
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
    }
  }
  return 0;
}

