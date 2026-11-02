// rea decompile_all
// name: FUN_005cb86d
// address: 0x5cb86d
// body: available
// range: 0x5cb86d-0x5cb924 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005cb86d(uint *param_1,uint *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  ushort uVar4;
  uint local_8;
  
  uVar1 = *(ushort *)((int)param_2 + 6) >> 4;
  uVar4 = uVar1 & 0x7ff;
  uVar2 = *(ushort *)((int)param_2 + 6) & 0x8000;
  uVar3 = *param_2;
  local_8 = 0x80000000;
  if ((uVar1 & 0x7ff) == 0) {
    if (((param_2[1] & 0xfffff) == 0) && (uVar3 == 0)) {
      param_1[1] = 0;
      *param_1 = 0;
      goto LAB_005cb91c;
    }
    uVar4 = uVar4 + 0x3c01;
    local_8 = 0;
  }
  else if (uVar4 == 0x7ff) {
    uVar4 = 0x7fff;
  }
  else {
    uVar4 = uVar4 + 0x3c00;
  }
  local_8 = uVar3 >> 0x15 | (param_2[1] & 0xfffff) << 0xb | local_8;
  uVar3 = uVar3 << 0xb;
  while( true ) {
    *param_1 = uVar3;
    param_1[1] = local_8;
    if ((local_8 & 0x80000000) != 0) break;
    local_8 = param_1[1] * 2 | *param_1 >> 0x1f;
    uVar3 = *param_1 * 2;
    uVar4 = uVar4 - 1;
  }
  uVar2 = uVar2 | uVar4;
LAB_005cb91c:
  *(ushort *)(param_1 + 2) = uVar2;
  return;
}

