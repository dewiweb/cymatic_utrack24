// rea decompile_all
// name: FUN_0043886b
// address: 0x43886b
// body: available
// range: 0x43886b-0x438b2d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0043886b(void)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  short *unaff_EBX;
  int *piVar11;
  int *piVar12;
  int local_2c;
  int local_28;
  int local_10;
  int *local_c;
  byte *local_8;
  
  iVar10 = 0;
  iVar6 = 0;
  local_10 = 0;
  if (0 < *unaff_EBX) {
    do {
      iVar7 = (int)*(short *)(*(int *)(unaff_EBX + 6) + local_10 * 2);
      iVar6 = *(int *)(unaff_EBX + 2);
      local_c = (int *)(iVar6 + iVar7 * 8);
      local_2c = *(int *)(iVar6 + iVar10 * 8);
      local_28 = *(int *)(iVar6 + 4 + iVar10 * 8);
      piVar9 = (int *)(iVar7 * 8 + *(int *)(unaff_EBX + 2));
      piVar12 = (int *)(*(int *)(unaff_EBX + 2) + iVar10 * 8);
      local_8 = (byte *)(iVar10 + *(int *)(unaff_EBX + 4));
      piVar8 = (int *)(CONCAT31((int3)((uint)piVar9[1] >> 8),*local_8) & 0xffffff03);
      if ((char)piVar8 == '\x02') {
LAB_00438b2a:
        return (uint)piVar8 & 0xffffff00;
      }
      if ((char)piVar8 == '\0') {
        if ((*(byte *)(*(int *)(unaff_EBX + 4) + iVar7) & 3) == 1) {
          local_2c = *piVar9;
          local_c = local_c + -2;
          local_28 = piVar9[1];
        }
        else {
          local_2c = (*piVar9 + local_2c) / 2;
          local_28 = (piVar9[1] + local_28) / 2;
        }
        piVar12 = piVar12 + -2;
        local_8 = local_8 + -1;
      }
      fVar4 = (float)local_28;
      fVar5 = (float)local_2c;
      FUN_00478b0d(fVar5,fVar4);
      while (piVar12 < local_c) {
        piVar9 = piVar12 + 2;
        pbVar1 = local_8 + 1;
        if ((*pbVar1 & 3) == 0) {
          iVar6 = piVar12[3];
          iVar10 = *piVar9;
          piVar12 = piVar9;
          local_8 = pbVar1;
          while( true ) {
            if (local_c <= piVar12) {
              FUN_00478c33((float)iVar10,(float)iVar6,fVar5,fVar4);
              goto LAB_00438ab4;
            }
            iVar2 = piVar12[3];
            piVar12 = piVar12 + 2;
            local_8 = local_8 + 1;
            iVar3 = *piVar12;
            piVar8 = (int *)(CONCAT31((int3)((uint)local_8 >> 8),*local_8) & 0xffffff03);
            if ((char)piVar8 == '\x01') break;
            if ((char)piVar8 != '\0') goto LAB_00438b2a;
            FUN_00478c33((float)iVar10,(float)iVar6,(float)((iVar3 + iVar10) / 2),
                         (float)((iVar6 + iVar2) / 2));
            iVar6 = iVar2;
            iVar10 = iVar3;
          }
          FUN_00478c33((float)iVar10,(float)iVar6,(float)iVar3,(float)iVar2);
        }
        else if ((*pbVar1 & 3) == 1) {
          FUN_00478ba1((float)*piVar9,(float)piVar12[3]);
          piVar12 = piVar9;
          local_8 = pbVar1;
        }
        else {
          piVar8 = piVar12 + 4;
          if ((local_c < piVar8) || ((local_8[2] & 3) != 2)) goto LAB_00438b2a;
          piVar11 = piVar12 + 6;
          if (local_c < piVar11) {
            FUN_00478d07((float)*piVar9,(float)piVar12[3],(float)*piVar8,(float)piVar12[5],fVar5,
                         fVar4);
            goto LAB_00438ab4;
          }
          FUN_00478d07((float)*piVar9,(float)piVar12[3],(float)*piVar8,(float)piVar12[5],
                       (float)*piVar11,(float)piVar12[7]);
          piVar12 = piVar11;
          local_8 = local_8 + 3;
        }
      }
      FUN_00478e1f();
LAB_00438ab4:
      iVar6 = (int)*unaff_EBX;
      iVar10 = iVar7 + 1;
      local_10 = local_10 + 1;
    } while (local_10 < iVar6);
  }
  return CONCAT31((int3)((uint)iVar6 >> 8),1);
}

