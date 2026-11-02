// rea decompile_all
// name: FUN_0042b864
// address: 0x42b864
// body: available
// range: 0x42b864-0x42ba58 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042b864(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort *in_EAX;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  int unaff_ESI;
  int iVar15;
  int iVar16;
  
  uVar13 = (uint)*in_EAX;
  if ((((in_EAX[6] < *(ushort *)(unaff_ESI + 0x2c)) && (in_EAX[8] < *(ushort *)(unaff_ESI + 0x2c)))
      && (in_EAX[2] < *(ushort *)(unaff_ESI + 0x50))) &&
     ((in_EAX[4] < *(ushort *)(unaff_ESI + 0x50) && (*in_EAX < *(ushort *)(unaff_ESI + 0x74))))) {
    iVar10 = (uint)in_EAX[8] * 8;
    piVar1 = (int *)(*(int *)(unaff_ESI + 0x34) + iVar10);
    iVar11 = (uint)in_EAX[6] * 8;
    piVar14 = (int *)(iVar11 + *(int *)(unaff_ESI + 0x34));
    iVar7 = piVar1[1];
    iVar12 = *piVar1 - *piVar14;
    iVar8 = piVar14[1];
    iVar15 = (uint)in_EAX[4] * 8;
    piVar1 = (int *)(*(int *)(unaff_ESI + 0x58) + iVar15);
    iVar16 = (uint)in_EAX[2] * 8;
    piVar14 = (int *)(*(int *)(unaff_ESI + 0x58) + iVar16);
    iVar2 = *piVar14;
    iVar3 = *piVar1;
    iVar4 = piVar1[1];
    iVar5 = piVar14[1];
    pbVar6 = (byte *)(uVar13 + *(int *)(unaff_ESI + 0x84));
    *pbVar6 = *pbVar6 | 0x18;
    iVar7 = -(iVar7 - iVar8);
    iVar8 = FUN_0040d230(iVar7);
    iVar9 = FUN_0040d230(iVar12);
    iVar8 = iVar8 + iVar9;
    if (iVar8 < 0) {
      iVar8 = -iVar8;
    }
    if (iVar8 < 0x40) {
      iVar7 = *(int *)(iVar16 + *(int *)(unaff_ESI + 0x58)) +
              *(int *)(*(int *)(unaff_ESI + 0x58) + iVar15) +
              *(int *)(iVar11 + *(int *)(unaff_ESI + 0x34)) +
              *(int *)(*(int *)(unaff_ESI + 0x34) + iVar10);
      *(int *)(uVar13 * 8 + *(int *)(unaff_ESI + 0x7c)) = (int)(iVar7 + (iVar7 >> 0x1f & 3U)) >> 2;
      iVar7 = *(int *)(iVar16 + 4 + *(int *)(unaff_ESI + 0x58)) +
              *(int *)(*(int *)(unaff_ESI + 0x58) + 4 + iVar15) +
              *(int *)(iVar11 + 4 + *(int *)(unaff_ESI + 0x34)) +
              *(int *)(*(int *)(unaff_ESI + 0x34) + 4 + iVar10);
      *(int *)(uVar13 * 8 + 4 + *(int *)(unaff_ESI + 0x7c)) =
           (int)(iVar7 + (iVar7 >> 0x1f & 3U)) >> 2;
    }
    else {
      FUN_0040d230(iVar7);
      FUN_0040d230(iVar12);
      iVar7 = FUN_0040d230(iVar3 - iVar2);
      iVar8 = FUN_0040d230(iVar4 - iVar5);
      *(int *)(uVar13 * 8 + *(int *)(unaff_ESI + 0x7c)) =
           *(int *)(*(int *)(unaff_ESI + 0x58) + iVar16) + iVar7;
      *(int *)(uVar13 * 8 + 4 + *(int *)(unaff_ESI + 0x7c)) =
           *(int *)(*(int *)(unaff_ESI + 0x58) + 4 + iVar16) + iVar8;
    }
  }
  else if (*(char *)(unaff_ESI + 0x231) != '\0') {
    *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
  }
  return;
}

