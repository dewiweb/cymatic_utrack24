// rea decompile_all
// name: FUN_004707d0
// address: 0x4707d0
// body: available
// range: 0x4707d0-0x470869 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004707d0(undefined4 *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  byte *pbVar2;
  byte *in_ECX;
  uint uVar3;
  byte *local_8;
  
  uVar3 = 0;
  if (((param_2 == (byte *)0x0) || (*param_2 == 0)) || (param_3 == 0)) {
    *param_1 = &DAT_005ffbd8;
  }
  else {
    if (param_3 != 0) {
      do {
        if (param_2[uVar3] == 0) break;
        FUN_0046089e();
        uVar3 = uVar3 + 1;
      } while (uVar3 < param_3);
    }
    FUN_004651d8();
    pbVar2 = in_ECX;
    for (; 0 < (int)uVar3; uVar3 = uVar3 - 1) {
      bVar1 = *param_2;
      param_2 = param_2 + 1;
      if (bVar1 == 0) break;
      if (bVar1 < 0x80) {
        local_8 = pbVar2 + 1;
        *pbVar2 = bVar1;
      }
      else {
        FUN_004608c3(bVar1);
        local_8 = pbVar2;
      }
      pbVar2 = local_8;
    }
    *pbVar2 = 0;
    *param_1 = in_ECX;
  }
  return;
}

