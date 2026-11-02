// rea decompile_all
// name: FUN_0041e916
// address: 0x41e916
// body: available
// range: 0x41e916-0x41ea84 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_0041e916(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int unaff_EDI;
  bool bVar9;
  
  *(int *)(unaff_EDI + 0x34) = unaff_EDI + 0xb8;
  *(undefined4 *)(unaff_EDI + 0xd0) = *(undefined4 *)(unaff_EDI + 0x44);
  *(undefined4 *)(*(int *)(unaff_EDI + 0x34) + 0x1c) = *(undefined4 *)(unaff_EDI + 0x48);
  *(undefined4 *)(*(int *)(unaff_EDI + 0x34) + 0x10) = param_1;
  *(undefined4 *)(*(int *)(unaff_EDI + 0x34) + 0x14) = param_2;
  *(uint *)(*(int *)(unaff_EDI + 0x34) + 8) = param_3;
  *(uint *)(*(int *)(unaff_EDI + 0x34) + 0xc) = param_4;
  **(undefined4 **)(unaff_EDI + 0x34) = param_5;
  *(undefined4 *)(*(int *)(unaff_EDI + 0x34) + 4) = param_6;
  do {
    puVar1 = *(undefined4 **)(unaff_EDI + 0x34);
    uVar2 = puVar1[1];
    uVar3 = puVar1[7];
    iVar6 = puVar1[5];
    iVar8 = puVar1[3];
    uVar4 = *puVar1;
    param_3 = uVar2;
    param_4 = uVar3;
    if ((int)uVar3 <= (int)uVar2) {
      param_3 = uVar3;
      param_4 = uVar2;
    }
    iVar7 = iVar6;
    if (iVar6 <= iVar8) {
      iVar7 = iVar8;
      iVar8 = iVar6;
    }
    if ((iVar8 < (int)param_3) || ((int)param_4 < iVar7)) {
      FUN_0041e2db(puVar1);
      *(int *)(unaff_EDI + 0x34) = *(int *)(unaff_EDI + 0x34) + 0x18;
    }
    else if (uVar3 == uVar2) {
      *(undefined4 **)(unaff_EDI + 0x34) = puVar1 + -6;
    }
    else {
      iVar6 = ((int)uVar2 < (int)uVar3) + 1;
      if (*(int *)(unaff_EDI + 100) != iVar6) {
        iVar8 = *(int *)(unaff_EDI + 4);
        if (iVar6 == 1) {
          iVar8 = (iVar8 + -1 + uVar3 & -iVar8) - uVar3;
          bVar9 = SBORROW4(iVar8,*(int *)(unaff_EDI + 8));
          iVar8 = iVar8 - *(int *)(unaff_EDI + 8);
        }
        else {
          iVar8 = uVar3 - (-iVar8 & uVar3);
          bVar9 = SBORROW4(iVar8,*(int *)(unaff_EDI + 8));
          iVar8 = iVar8 - *(int *)(unaff_EDI + 8);
        }
        bVar9 = bVar9 == iVar8 < 0;
        if ((*(int *)(unaff_EDI + 100) != 0) && (cVar5 = FUN_0041e100(bVar9), cVar5 != '\0')) {
          return 1;
        }
        cVar5 = FUN_0041e056(bVar9);
        if (cVar5 != '\0') {
          return 1;
        }
      }
      if (iVar6 == 1) {
        cVar5 = FUN_0041e51f(FUN_0041e2db,*(undefined4 *)(unaff_EDI + 0x4c),
                             *(undefined4 *)(unaff_EDI + 0x50));
      }
      else {
        cVar5 = FUN_0041e671();
      }
      if (cVar5 != '\0') {
        return 1;
      }
    }
    if (*(uint *)(unaff_EDI + 0x34) < unaff_EDI + 0xb8U) {
      *(undefined4 *)(unaff_EDI + 0x44) = uVar4;
      *(uint *)(unaff_EDI + 0x48) = uVar2;
      return 0;
    }
  } while( true );
}

