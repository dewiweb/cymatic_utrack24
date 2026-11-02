// rea decompile_all
// name: FUN_00411802
// address: 0x411802
// body: available
// range: 0x411802-0x4118aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00411802(int *param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int local_8;
  
  iVar2 = *param_1;
  iVar4 = param_1[1];
  iVar6 = 0;
  if (iVar2 < 0) {
    iVar2 = -iVar2;
    iVar4 = -iVar4;
    iVar6 = 0xb40000;
  }
  if (0 < iVar4) {
    iVar6 = -iVar6;
  }
  if (iVar4 < 0) {
    iVar7 = iVar2 * 2;
    iVar1 = iVar4 * -2;
    iVar6 = iVar6 + -0x3f6f59;
  }
  else {
    iVar7 = iVar2 * -2;
    iVar1 = iVar4 * 2;
    iVar6 = iVar6 + 0x3f6f59;
  }
  iVar4 = iVar4 + iVar7;
  iVar2 = iVar2 + iVar1;
  local_8 = 0;
  piVar9 = &DAT_008fb444;
  do {
    bVar3 = (byte)local_8;
    iVar7 = iVar2 >> (bVar3 & 0x1f);
    if (iVar4 < 0) {
      iVar8 = -(iVar4 >> (bVar3 & 0x1f));
      iVar1 = -*piVar9;
    }
    else {
      iVar7 = -iVar7;
      iVar8 = iVar4 >> (bVar3 & 0x1f);
      iVar1 = *piVar9;
    }
    iVar4 = iVar4 + iVar7;
    iVar6 = iVar6 + iVar1;
    iVar2 = iVar2 + iVar8;
    piVar9 = piVar9 + 1;
    local_8 = local_8 + 1;
  } while (local_8 < 0x17);
  if (iVar6 < 0) {
    uVar5 = -(0x10U - iVar6 & 0xffffffe0);
  }
  else {
    uVar5 = iVar6 + 0x10U & 0xffffffe0;
  }
  *param_1 = iVar2;
  param_1[1] = uVar5;
  return;
}

