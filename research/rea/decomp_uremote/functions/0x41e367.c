// rea decompile_all
// name: FUN_0041e367
// address: 0x41e367
// body: available
// range: 0x41e367-0x41e4e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0041e367(int param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  int in_EAX;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  int in_ECX;
  int *piVar7;
  uint uVar8;
  undefined4 *unaff_ESI;
  int iVar9;
  uint local_c;
  int local_8;
  
  uVar2 = in_EAX - param_1;
  iVar9 = param_3 - param_2;
  uVar4 = uVar2;
  if (((0 < iVar9) && (in_ECX <= (int)param_3)) && (uVar4 = param_4, (int)param_2 <= (int)param_4))
  {
    if ((int)param_2 < in_ECX) {
      iVar3 = FUN_0040d230(in_ECX - param_2);
      param_1 = param_1 + iVar3;
      bVar6 = (byte)*unaff_ESI;
      local_c = in_ECX >> (bVar6 & 0x1f);
      param_2 = 0;
    }
    else {
      bVar6 = (byte)*unaff_ESI;
      local_c = (int)param_2 >> (bVar6 & 0x1f);
      param_2 = unaff_ESI[1] - 1 & param_2;
    }
    if ((int)param_4 < (int)param_3) {
      uVar4 = (int)param_4 >> (bVar6 & 0x1f);
      param_3 = 0;
      uVar8 = uVar4;
    }
    else {
      uVar8 = (int)param_3 >> (bVar6 & 0x1f);
      uVar4 = unaff_ESI[1] - 1 & param_3;
      param_3 = uVar4;
    }
    if ((int)param_2 < 1) {
      if (*(char *)((int)unaff_ESI + 0x57) != '\0') {
        unaff_ESI[10] = unaff_ESI[10] + -4;
        *(undefined1 *)((int)unaff_ESI + 0x57) = 0;
      }
    }
    else {
      if (local_c == uVar8) goto LAB_0041e4dc;
      iVar3 = FUN_0040d230(unaff_ESI[1] - param_2);
      param_1 = param_1 + iVar3;
      local_c = local_c + 1;
    }
    *(bool *)((int)unaff_ESI + 0x57) = param_3 == 0;
    if (*(char *)((int)unaff_ESI + 0x56) != '\0') {
      *(uint *)(unaff_ESI[0x16] + 0x14) = local_c;
      *(undefined1 *)((int)unaff_ESI + 0x56) = 0;
    }
    param_3 = (uVar8 - local_c) + 1;
    uVar4 = unaff_ESI[10] + param_3 * 4;
    if ((uint)unaff_ESI[9] <= uVar4) {
      unaff_ESI[0xb] = 0x62;
      return CONCAT31((int3)(uVar4 >> 8),1);
    }
    iVar3 = unaff_ESI[1];
    if ((int)uVar2 < 1) {
      iVar5 = FUN_0040d286(-uVar2);
      iVar3 = -(iVar3 * uVar2);
      iVar5 = -iVar5;
      local_8 = -1;
    }
    else {
      iVar5 = FUN_0040d286(uVar2);
      iVar3 = iVar3 * uVar2;
      local_8 = 1;
    }
    piVar7 = (int *)unaff_ESI[10];
    uVar4 = -iVar9;
    for (; 0 < (int)param_3; param_3 = param_3 + -1) {
      iVar1 = param_1 + iVar5;
      *piVar7 = param_1;
      piVar7 = piVar7 + 1;
      uVar4 = uVar4 + iVar3 % iVar9;
      param_1 = iVar1;
      if (-1 < (int)uVar4) {
        uVar4 = uVar4 - iVar9;
        param_1 = iVar1 + local_8;
      }
    }
    unaff_ESI[10] = piVar7;
  }
LAB_0041e4dc:
  return uVar4 & 0xffffff00;
}

