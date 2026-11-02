// rea decompile_all
// name: FUN_0041b290
// address: 0x41b290
// body: available
// range: 0x41b290-0x41b3e0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0041b290(uint *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  byte *unaff_EBX;
  byte *pbVar3;
  int iVar4;
  bool bVar5;
  int local_c;
  
  pbVar3 = (byte *)*param_1;
  iVar4 = 0;
  local_c = 0;
  bVar5 = false;
  if (pbVar3 < unaff_EBX) {
    bVar1 = *pbVar3;
    if ((bVar1 == 0x2d) || (bVar1 == 0x2b)) {
      bVar5 = bVar1 == 0x2d;
      pbVar3 = pbVar3 + 1;
      if (pbVar3 == unaff_EBX) goto LAB_0041b2b4;
    }
    if (*pbVar3 != 0x2e) {
      iVar4 = FUN_0041b26a();
      iVar4 = iVar4 << 0x10;
    }
    if (((pbVar3 < unaff_EBX) && (*pbVar3 == 0x2e)) && (pbVar3 = pbVar3 + 1, pbVar3 < unaff_EBX)) {
      iVar2 = 1;
      do {
        bVar1 = *pbVar3;
        if (((((bVar1 == 0x20) || (bVar1 == 0xd)) ||
             ((bVar1 == 10 || ((bVar1 == 9 || (bVar1 == 0xc)))))) || (bVar1 == 0)) ||
           ((0x7f < bVar1 || (bVar1 = (&DAT_008fc4e8)[bVar1 & 0x7f], 9 < bVar1)))) break;
        if ((iVar4 == 0) && (0 < param_2)) {
          param_2 = param_2 + -1;
          local_c = local_c * 10 + (int)(char)bVar1;
        }
        else if (iVar2 < 10000000) {
          local_c = local_c * 10 + (int)(char)bVar1;
          iVar2 = iVar2 * 10;
        }
        pbVar3 = pbVar3 + 1;
      } while (pbVar3 < unaff_EBX);
    }
    if ((pbVar3 + 1 < unaff_EBX) && ((*pbVar3 == 0x65 || (*pbVar3 == 0x45)))) {
      iVar2 = FUN_0041b26a();
      param_2 = param_2 + iVar2;
      pbVar3 = pbVar3 + 1;
    }
    for (; 0 < param_2; param_2 = param_2 + -1) {
      iVar4 = iVar4 * 10;
      local_c = local_c * 10;
    }
    if (param_2 < 0) {
      param_2 = -param_2;
      do {
        iVar4 = iVar4 / 10;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
    if (local_c != 0) {
      iVar2 = FUN_0040d2d8();
      iVar4 = iVar4 + iVar2;
    }
    if (bVar5) {
      iVar4 = -iVar4;
    }
    *param_1 = (uint)pbVar3;
  }
  else {
LAB_0041b2b4:
    iVar4 = 0;
  }
  return iVar4;
}

