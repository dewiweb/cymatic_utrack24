// rea decompile_all
// name: FUN_004181e4
// address: 0x4181e4
// body: available
// range: 0x4181e4-0x4182d6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004181e4(int param_1,byte *param_2,uint param_3,uint *param_4,uint *param_5)

{
  uint in_EAX;
  byte *pbVar1;
  byte *pbVar2;
  uint in_ECX;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint local_c;
  int local_8;
  
  local_8 = 4;
  if ((in_EAX & 1) != 0) {
    local_8 = 5;
  }
  if ((in_EAX & 2) != 0) {
    local_8 = local_8 + 1;
  }
  if ((in_EAX & 4) != 0) {
    local_8 = local_8 + 1;
  }
  local_c = 0;
  if (in_ECX != 0) {
    do {
      uVar3 = in_ECX + local_c >> 1;
      pbVar1 = (byte *)(uVar3 * local_8 + param_1);
      if (param_2 < pbVar1 + local_8) break;
      if ((in_EAX & 1) == 0) {
        uVar4 = (uint)*pbVar1;
        pbVar2 = pbVar1 + 1;
      }
      else {
        pbVar2 = pbVar1 + 2;
        uVar4 = (uint)CONCAT11(*pbVar1,pbVar1[1]);
      }
      if (uVar4 == param_3) {
        if ((in_EAX & 2) == 0) {
          uVar3 = (uint)*pbVar2;
          pbVar1 = pbVar2 + 1;
        }
        else {
          pbVar1 = pbVar2 + 2;
          uVar3 = (uint)CONCAT11(*pbVar2,pbVar2[1]);
        }
        *param_5 = uVar3;
        if ((in_EAX & 4) == 0) {
          pbVar2 = pbVar1 + 2;
          uVar3 = (uint)*pbVar1;
        }
        else {
          pbVar2 = pbVar1 + 3;
          uVar3 = (uint)CONCAT11(*pbVar1,pbVar1[1]);
        }
        *param_4 = uVar3 << 8 | (uint)pbVar2[-1];
        return;
      }
      uVar5 = uVar3;
      if (uVar4 < param_3) {
        uVar5 = in_ECX;
        local_c = uVar3;
      }
      in_ECX = uVar5;
    } while (local_c < uVar5);
  }
  *param_5 = 0;
  *param_4 = 0;
  return;
}

