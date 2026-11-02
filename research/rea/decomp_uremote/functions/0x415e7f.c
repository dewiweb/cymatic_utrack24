// rea decompile_all
// name: FUN_00415e7f
// address: 0x415e7f
// body: available
// range: 0x415e7f-0x415efa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00415e7f(byte *param_1,uint *param_2,undefined4 param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  uint *unaff_EBX;
  byte *pbVar5;
  byte *pbVar6;
  int local_8;
  
  local_8 = 0;
  pbVar6 = (byte *)*unaff_EBX;
  if (param_1 < pbVar6 + 1) {
LAB_00415eeb:
    local_8 = 8;
  }
  else {
    uVar3 = (uint)*pbVar6;
    pbVar6 = pbVar6 + 1;
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      if (param_1 < pbVar6 + 2) goto LAB_00415eeb;
      bVar2 = *pbVar6;
      pbVar5 = pbVar6 + 1;
      pbVar6 = pbVar6 + 2;
      pbVar1 = pbVar6 + bVar2;
      if (param_1 < pbVar1) goto LAB_00415eeb;
      puVar4 = param_2;
      if (param_2 != (uint *)0x0) {
        for (; puVar4[1] != 0; puVar4 = puVar4 + 2) {
          if (*puVar4 == (uint)*pbVar5) {
            local_8 = (*(code *)puVar4[1])(pbVar6,pbVar1,param_3);
            if (local_8 != 0) goto LAB_00415ef2;
            break;
          }
        }
      }
      pbVar6 = pbVar1;
    }
  }
LAB_00415ef2:
  *unaff_EBX = (uint)pbVar6;
  return local_8;
}

