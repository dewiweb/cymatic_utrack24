// rea decompile_all
// name: FUN_006eb640
// address: 0x6eb640
// body: available
// range: 0x6eb640-0x6eba7e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006eb640(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *in_ECX;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  bool bVar11;
  int local_28;
  int local_20;
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  int iStack_8;
  
  local_14 = (in_ECX[0x31] & 1U) + 3;
  iVar1 = (**(code **)(*in_ECX + 0xb0))();
  if (iVar1 < 1) {
    local_10 = 0;
  }
  else {
    local_10 = ((int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3) * 0x16 + in_ECX[0x32];
  }
  if ((in_ECX[0x31] & 4U) == 0) {
    iStack_8 = 0;
  }
  else {
    iStack_8 = local_14 * 0x16 + in_ECX[0x32];
    local_20 = SUB84((double)((float)in_ECX[7] * 0.3) + 6755399441055744.0,0);
    if (local_20 < iStack_8) {
      iStack_8 = local_20;
    }
  }
  iVar7 = in_ECX[0x32];
  iVar10 = iVar7;
  if ((in_ECX[0x31] & 2U) != 0) {
    iVar10 = iVar7 * 2 + 0x1e;
    local_28 = SUB84((double)((float)in_ECX[7] * 0.2) + 6755399441055744.0,0);
    if (local_28 < iVar10) {
      iVar10 = local_28;
    }
  }
  in_ECX[0x36] = iVar10 + iVar7 * -2;
  in_ECX[0x33] = iVar7;
  in_ECX[0x34] = iVar7;
  in_ECX[0x35] = in_ECX[6] + iVar7 * -2;
  if ((*(byte *)(in_ECX + 0x31) & 8) != 0) {
    iVar7 = in_ECX[0x32];
    local_28 = SUB84((double)((float)in_ECX[6] * 0.15) + 6755399441055744.0,0);
    iVar2 = 0x32;
    if (local_28 < 0x32) {
      iVar2 = local_28;
    }
    FUN_006e9790(iVar7,iVar10,((in_ECX[6] - iVar2) - iVar7) + -4,
                 (((in_ECX[7] - iVar7) - iVar10) - iStack_8) - local_10);
    iVar7 = in_ECX[0x2c];
    FUN_006e9790(*(int *)(iVar7 + 0x10) + *(int *)(iVar7 + 0x18) + 4,iVar10,
                 (((in_ECX[6] - *(int *)(iVar7 + 0x18)) - *(int *)(iVar7 + 0x10)) - in_ECX[0x32]) +
                 -4,*(undefined4 *)(iVar7 + 0x1c));
    iVar10 = ((in_ECX[7] - in_ECX[0x32]) - iStack_8) - local_10;
  }
  if ((*(byte *)(in_ECX + 0x31) & 4) != 0) {
    iVar7 = 4;
    if (4 < iStack_8 / local_14) {
      iVar7 = iStack_8 / local_14;
    }
    if (local_14 != 0) {
      do {
        local_28 = SUB84((double)((float)in_ECX[6] * 0.72) + 6755399441055744.0,0);
        local_c = SUB84((double)((float)in_ECX[6] * 0.2) + 6755399441055744.0,0);
        FUN_006e9790(local_c,iVar10,local_28,iVar7 + -2);
        iVar10 = iVar10 + iVar7;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
    }
  }
  if (0 < iVar1) {
    iVar7 = in_ECX[0x32];
    iVar2 = (int)(in_ECX[6] + -0x10 + (in_ECX[6] + -0x10 >> 0x1f & 7U)) >> 3;
    if (in_ECX[0x30] != iVar1) {
      FUN_00407fe0();
      if (in_ECX[0x2f] != 0) {
        FID_conflict__free((void *)in_ECX[0x2e]);
        in_ECX[0x2e] = 0;
        in_ECX[0x2f] = 0;
      }
      in_ECX[0x30] = 0;
      local_14 = 0;
      if (0 < iVar1) {
        do {
          piVar9 = in_ECX + 0x2e;
          piVar3 = operator_new(0x78);
          FUN_006ea2c0();
          *piVar3 = (int)juce::ColourSelector::SwatchComponent::vftable;
          piVar3[0x1c] = (int)in_ECX;
          piVar3[0x1d] = local_14;
          iVar8 = in_ECX[0x30] + 1;
          if (in_ECX[0x2f] < iVar8) {
            iVar4 = iVar8;
            if (iVar8 < 0) {
              iVar4 = in_ECX[0x30] + 2;
            }
            uVar5 = (iVar4 >> 1) + 8 + iVar8 & 0xfffffff8;
            if (in_ECX[0x2f] != uVar5) {
              if ((int)uVar5 < 1) {
                FID_conflict__free((void *)*piVar9);
                *piVar9 = 0;
              }
              else if (*piVar9 == 0) {
                iVar8 = FUN_004c554b();
                *piVar9 = iVar8;
              }
              else {
                iVar8 = FUN_004c553b(*piVar9,uVar5 << 2);
                *piVar9 = iVar8;
              }
              in_ECX[0x2f] = uVar5;
            }
          }
          iVar8 = in_ECX[0x30];
          in_ECX[0x30] = iVar8 + 1;
          *(int **)(*piVar9 + iVar8 * 4) = piVar3;
          (**(code **)(*piVar3 + 0x28))(1);
          iVar8 = -1;
          if ((int *)piVar3[3] != in_ECX) {
            if ((int *)piVar3[3] == (int *)0x0) {
              FUN_006cfd60();
            }
            else {
              FUN_006cf2a0(piVar3);
            }
            piVar3[3] = (int)in_ECX;
            if ((*(byte *)(piVar3 + 0x1a) & 2) != 0) {
              FUN_006ceba0();
            }
            if (((*(byte *)((int)piVar3 + 0x69) & 1) == 0) && (iVar8 = in_ECX[0xc], 0 < iVar8)) {
              piVar9 = (int *)(in_ECX[10] + (iVar8 + -1) * 4);
              do {
                if ((*(byte *)(*piVar9 + 0x69) & 1) == 0) break;
                iVar8 = iVar8 + -1;
                piVar9 = piVar9 + -1;
              } while (0 < iVar8);
            }
            FUN_00410380(iVar8,piVar3);
            FUN_006cedf0();
            FUN_006cef00();
          }
          local_14 = local_14 + 1;
        } while (local_14 < iVar1);
      }
    }
    uVar5 = 0;
    iVar1 = 8;
    if (0 < in_ECX[0x30]) {
      local_18 = iVar10 + iVar7 + 2;
      do {
        FUN_006e9790(iVar1 + 2,local_18,iVar2 + -4,0x12);
        uVar5 = uVar5 + 1;
        uVar6 = uVar5 & 0x80000007;
        bVar11 = uVar6 == 0;
        if ((int)uVar6 < 0) {
          bVar11 = (uVar6 - 1 | 0xfffffff8) == 0xffffffff;
        }
        if (bVar11) {
          local_18 = local_18 + 0x16;
          iVar1 = 8;
        }
        else {
          iVar1 = iVar1 + iVar2;
        }
      } while ((int)uVar5 < in_ECX[0x30]);
    }
  }
  return;
}

