// rea decompile_all
// name: FUN_0041e7d0
// address: 0x41e7d0
// body: available
// range: 0x41e7d0-0x41e915 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0041e7d0(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int unaff_EDI;
  bool bVar9;
  
  *(int *)(unaff_EDI + 0x34) = unaff_EDI + 0xb8;
  *(undefined4 *)(unaff_EDI + 200) = *(undefined4 *)(unaff_EDI + 0x44);
  *(undefined4 *)(*(int *)(unaff_EDI + 0x34) + 0x14) = *(undefined4 *)(unaff_EDI + 0x48);
  *(undefined4 *)(*(int *)(unaff_EDI + 0x34) + 8) = param_1;
  *(uint *)(*(int *)(unaff_EDI + 0x34) + 0xc) = param_2;
  **(undefined4 **)(unaff_EDI + 0x34) = param_3;
  *(undefined4 *)(*(int *)(unaff_EDI + 0x34) + 4) = param_4;
  do {
    puVar1 = *(undefined4 **)(unaff_EDI + 0x34);
    uVar2 = puVar1[5];
    uVar3 = puVar1[1];
    uVar4 = *puVar1;
    uVar7 = uVar3;
    param_2 = uVar2;
    if ((int)uVar2 <= (int)uVar3) {
      uVar7 = uVar2;
      param_2 = uVar3;
    }
    if (((int)puVar1[3] < (int)uVar7) || ((int)param_2 < (int)puVar1[3])) {
      FUN_0041e27b(puVar1);
      *(int *)(unaff_EDI + 0x34) = *(int *)(unaff_EDI + 0x34) + 0x10;
    }
    else if (uVar2 == uVar3) {
      *(undefined4 **)(unaff_EDI + 0x34) = puVar1 + -4;
    }
    else {
      iVar6 = ((int)uVar3 <= (int)uVar2) + 1;
      if (*(int *)(unaff_EDI + 100) != iVar6) {
        iVar8 = *(int *)(unaff_EDI + 4);
        if (iVar6 == 1) {
          iVar8 = (iVar8 + -1 + uVar2 & -iVar8) - uVar2;
          bVar9 = SBORROW4(iVar8,*(int *)(unaff_EDI + 8));
          iVar8 = iVar8 - *(int *)(unaff_EDI + 8);
        }
        else {
          iVar8 = uVar2 - (-iVar8 & uVar2);
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
        cVar5 = FUN_0041e51f(FUN_0041e27b,*(undefined4 *)(unaff_EDI + 0x4c),
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
      *(uint *)(unaff_EDI + 0x48) = uVar3;
      return 0;
    }
  } while( true );
}

