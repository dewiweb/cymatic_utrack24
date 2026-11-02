// rea decompile_all
// name: FUN_005013fc
// address: 0x5013fc
// body: available
// range: 0x5013fc-0x5016b2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005013fc(void)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int *in_EAX;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int unaff_EDI;
  int local_38;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  FUN_00475194();
  piVar10 = *(int **)*in_EAX;
  piVar11 = piVar10 + ((int *)*in_EAX)[2] * 4;
  do {
    if (piVar10 == piVar11) {
      return;
    }
    iVar7 = piVar10[1];
    iVar6 = *piVar10;
    iVar1 = piVar10[2];
    iVar5 = piVar10[3] + iVar7;
    if ((((iVar7 < local_20) && (local_28 < iVar5)) && (iVar6 < local_1c)) &&
       (local_24 < iVar1 + iVar6)) {
      cVar4 = FUN_004752d2();
      if (cVar4 == '\0') {
        iVar8 = FUN_00439b5a(local_38);
        iVar9 = FUN_00440367(local_30);
        iVar9 = iVar9 - iVar8;
        if ((local_14 == 0) || (bVar2 = true, local_24 < iVar6)) {
          bVar2 = false;
        }
        if ((local_c == 0) || (bVar3 = true, iVar1 + iVar6 <= local_30)) {
          bVar3 = false;
        }
        if ((local_18 != 0) && (iVar7 <= local_28)) {
          *(int *)(unaff_EDI + 8) = local_28;
          if (bVar2) {
            FUN_005016b3(local_24);
          }
          if (0 < iVar9) {
            FUN_005016fc(iVar8,iVar9);
          }
          if (bVar3) {
            FUN_005016b3(local_30);
          }
        }
        iVar6 = FUN_00440367(local_2c);
        for (iVar7 = FUN_00439b5a(iVar7); iVar7 < iVar6; iVar7 = iVar7 + 1) {
          *(int *)(unaff_EDI + 8) = iVar7;
          if (bVar2) {
            FUN_005016b3(local_24);
          }
          if (0 < iVar9) {
            FUN_004fb67f(iVar9,*(undefined4 *)(unaff_EDI + 4));
          }
          if (bVar3) {
            FUN_005016b3(local_30);
          }
        }
        if ((local_10 != 0) && (local_2c < iVar5)) {
          *(int *)(unaff_EDI + 8) = local_2c;
          if (bVar2) {
            FUN_005016b3(local_24);
          }
          if (0 < iVar9) {
            FUN_005016fc(iVar8,iVar9);
          }
          iVar7 = local_30;
          if (bVar3) goto LAB_00501691;
        }
      }
      else {
        if ((local_18 != 0) && (iVar7 <= local_28)) {
          *(int *)(unaff_EDI + 8) = local_28;
          FUN_005016b3(local_38);
        }
        iVar6 = FUN_00440367(local_2c);
        for (iVar7 = FUN_00439b5a(iVar7); iVar7 < iVar6; iVar7 = iVar7 + 1) {
          *(int *)(unaff_EDI + 8) = iVar7;
          FUN_004fb67f(1,*(undefined4 *)(unaff_EDI + 4));
        }
        if ((local_10 != 0) && (local_2c < iVar5)) {
          *(int *)(unaff_EDI + 8) = local_2c;
          iVar7 = local_38;
LAB_00501691:
          FUN_005016b3(iVar7);
        }
      }
    }
    piVar10 = piVar10 + 4;
  } while( true );
}

