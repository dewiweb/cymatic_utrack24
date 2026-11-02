// rea decompile_all
// name: FUN_0046ff82
// address: 0x46ff82
// body: available
// range: 0x46ff82-0x470009 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 *
FUN_0046ff82(undefined4 *param_1,size_t param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  void *in_EAX;
  void *pvVar2;
  size_t sVar3;
  undefined4 *puVar4;
  
  while( true ) {
    pvVar2 = _memchr(in_EAX,0,param_2);
    sVar3 = param_2;
    if (pvVar2 != (void *)0x0) {
      sVar3 = (int)pvVar2 - (int)in_EAX;
    }
    puVar4 = (undefined4 *)FUN_0046ff50(param_4,param_5,sVar3);
    param_4 = *puVar4;
    param_5 = puVar4[1];
    if (param_2 - sVar3 == 0) break;
    if ((char)param_3 != '\0') {
      puVar4 = (undefined4 *)FUN_0046fbd0(*puVar4,puVar4[1],param_3,1);
      param_4 = *puVar4;
      param_5 = puVar4[1];
    }
    in_EAX = (void *)((int)in_EAX + sVar3 + 1);
    param_2 = (param_2 - sVar3) - 1;
  }
  uVar1 = *puVar4;
  param_1[1] = puVar4[1];
  *param_1 = uVar1;
  return param_1;
}

