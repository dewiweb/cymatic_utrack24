// rea decompile_all
// name: FUN_00618990
// address: 0x618990
// body: available
// range: 0x618990-0x618ae1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00618990(void)

{
  ushort *puVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  int *in_ECX;
  short *psVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  
  uVar2 = in_ECX[0xb];
  do {
    uVar10 = (in_ECX[0xf] - in_ECX[0x1d]) - in_ECX[0x1b];
    if (in_ECX[0xb] + -0x106 + uVar2 <= (uint)in_ECX[0x1b]) {
      FUN_004c2c30(in_ECX[0xe],in_ECX[0xe] + uVar2,uVar2);
      iVar11 = in_ECX[0x13];
      in_ECX[0x1c] = in_ECX[0x1c] - uVar2;
      in_ECX[0x1b] = in_ECX[0x1b] - uVar2;
      in_ECX[0x17] = in_ECX[0x17] - uVar2;
      psVar9 = (short *)(in_ECX[0x11] + iVar11 * 2);
      do {
        puVar1 = (ushort *)(psVar9 + -1);
        psVar9 = psVar9 + -1;
        if (*puVar1 < uVar2) {
          sVar6 = 0;
        }
        else {
          sVar6 = *puVar1 - (short)uVar2;
        }
        *psVar9 = sVar6;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      psVar9 = (short *)(in_ECX[0x10] + uVar2 * 2);
      uVar12 = uVar2;
      do {
        puVar1 = (ushort *)(psVar9 + -1);
        psVar9 = psVar9 + -1;
        if (*puVar1 < uVar2) {
          sVar6 = 0;
        }
        else {
          sVar6 = *puVar1 - (short)uVar2;
        }
        *psVar9 = sVar6;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
      uVar10 = uVar10 + uVar2;
    }
    piVar3 = (int *)*in_ECX;
    if (piVar3[1] == 0) {
      return;
    }
    iVar11 = in_ECX[0x1d];
    iVar4 = in_ECX[0x1b];
    iVar5 = in_ECX[0xe];
    uVar12 = piVar3[1];
    uVar7 = uVar12;
    if (uVar10 < uVar12) {
      uVar7 = uVar10;
    }
    if (uVar7 == 0) {
      uVar7 = 0;
    }
    else {
      piVar3[1] = uVar12 - uVar7;
      if (*(int *)(piVar3[7] + 0x18) == 1) {
        iVar8 = FUN_0061a0c0(uVar7);
LAB_00618a84:
        piVar3[0xc] = iVar8;
      }
      else if (*(int *)(piVar3[7] + 0x18) == 2) {
        if (*piVar3 == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = FUN_00619e10(uVar7);
        }
        goto LAB_00618a84;
      }
      FUN_004c2c30(iVar11 + iVar4 + iVar5,*piVar3,uVar7);
      *piVar3 = *piVar3 + uVar7;
      piVar3[2] = piVar3[2] + uVar7;
    }
    in_ECX[0x1d] = in_ECX[0x1d] + uVar7;
    if (2 < (uint)in_ECX[0x1d]) {
      uVar10 = (uint)*(byte *)(in_ECX[0xe] + in_ECX[0x1b]);
      in_ECX[0x12] = uVar10;
      in_ECX[0x12] = (uVar10 << ((byte)in_ECX[0x16] & 0x1f) ^
                     (uint)((byte *)(in_ECX[0xe] + in_ECX[0x1b]))[1]) & in_ECX[0x15];
    }
    if (0x105 < (uint)in_ECX[0x1d]) {
      return;
    }
    if (*(int *)(*in_ECX + 4) == 0) {
      return;
    }
  } while( true );
}

