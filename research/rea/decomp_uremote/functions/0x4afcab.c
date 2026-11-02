// rea decompile_all
// name: FUN_004afcab
// address: 0x4afcab
// body: available
// range: 0x4afcab-0x4b0089 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004afcab(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  int in_EAX;
  int *piVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  short local_34;
  uint *local_30;
  int local_28;
  int local_24;
  int local_1c;
  byte local_14;
  byte local_13;
  byte local_12;
  byte local_10;
  byte local_f;
  byte local_e;
  byte local_c;
  byte local_b;
  byte local_a;
  byte local_8;
  byte local_7;
  byte local_6;
  
  local_28 = 0;
  piVar3 = (int *)*param_1;
  if (0 < (int)param_1[4]) {
    do {
      iVar1 = param_1[6];
      local_24 = *piVar3 + -1;
      if (0 < local_24) {
        local_1c = 0;
        local_30 = (uint *)(piVar3 + 1);
        uVar6 = *local_30;
        iVar10 = param_1[2];
        *(int *)(in_EAX + 0x60) = iVar10 + local_28;
        *(int *)(in_EAX + 100) =
             *(int *)(*(int *)(in_EAX + 0x48) + 8) * (iVar10 + local_28) + **(int **)(in_EAX + 0x48)
        ;
        while( true ) {
          local_24 = local_24 + -1;
          iVar10 = (int)uVar6 >> 8;
          if (local_24 < 0) break;
          uVar7 = local_30[1];
          local_30 = local_30 + 2;
          uVar2 = *local_30;
          if ((int)uVar2 >> 8 == iVar10) {
            local_1c = local_1c + (uVar2 - uVar6) * uVar7;
            uVar6 = uVar2;
          }
          else {
            iVar4 = (int)((0x100 - (uVar6 & 0xff)) * uVar7 + local_1c) >> 8;
            if (0 < iVar4) {
              if (iVar4 < 0xff) {
                FUN_004bea3e(iVar10,1);
                pbVar5 = (byte *)(*(int *)(*(int *)(in_EAX + 0x48) + 0xc) * iVar10 +
                                 *(int *)(in_EAX + 100));
                uVar9 = (uint)(*(int *)(in_EAX + 0x50) * iVar4) >> 8;
                uVar6 = (local_b | 0xff0000) * uVar9;
                iVar8 = 0x100 - (uVar6 >> 0x18);
                iVar4 = ((uint)pbVar5[1] * iVar8 >> 8) + (uVar6 >> 8 & 0xff00ff);
                uVar6 = (((uint)local_a << 0x10 | (uint)local_c) * uVar9 >> 8 & 0xff00ff) +
                        (((uint)pbVar5[2] << 0x10 | (uint)*pbVar5) * iVar8 >> 8 & 0xff00ff);
                uVar6 = 0x100 - (uVar6 >> 8 & 0xff00ff) | uVar6;
                local_1c._0_1_ = (byte)iVar4;
                pbVar5[1] = -(char)((uint)iVar4 >> 8) | (byte)local_1c;
              }
              else {
                FUN_004bea3e(iVar10,1);
                uVar6 = (local_7 | 0xff0000) * *(int *)(in_EAX + 0x50);
                pbVar5 = (byte *)(*(int *)(*(int *)(in_EAX + 0x48) + 0xc) * iVar10 +
                                 *(int *)(in_EAX + 100));
                iVar8 = 0x100 - (uVar6 >> 0x18);
                iVar4 = ((uint)pbVar5[1] * iVar8 >> 8) + (uVar6 >> 8 & 0xff00ff);
                uVar6 = (((uint)pbVar5[2] << 0x10 | (uint)*pbVar5) * iVar8 >> 8 & 0xff00ff) +
                        (((uint)local_6 << 0x10 | (uint)local_8) * *(int *)(in_EAX + 0x50) >> 8 &
                        0xff00ff);
                uVar6 = 0x100 - (uVar6 >> 8 & 0xff00ff) | uVar6;
                local_1c._0_1_ = (byte)iVar4;
                pbVar5[1] = -(char)((uint)iVar4 >> 8) | (byte)local_1c;
              }
              pbVar5[2] = (byte)((uVar6 & 0xff00ff) >> 0x10);
              *pbVar5 = (byte)(uVar6 & 0xff00ff);
            }
            if (0 < (int)uVar7) {
              iVar4 = ((int)uVar2 >> 8) - (iVar10 + 1);
              if (0 < iVar4) {
                FUN_004bb37b(iVar10 + 1,iVar4,uVar7);
              }
            }
            local_1c = (uVar2 & 0xff) * uVar7;
            uVar6 = uVar2;
          }
        }
        local_1c = local_1c >> 8;
        if (0 < local_1c) {
          if (local_1c < 0xff) {
            FUN_004bea3e(iVar10,1);
            pbVar5 = (byte *)(*(int *)(*(int *)(in_EAX + 0x48) + 0xc) * iVar10 +
                             *(int *)(in_EAX + 100));
            uVar7 = (uint)(*(int *)(in_EAX + 0x50) * local_1c) >> 8;
            uVar6 = (local_13 | 0xff0000) * uVar7;
            iVar10 = 0x100 - (uVar6 >> 0x18);
            local_34 = (short)((uint)pbVar5[1] * iVar10 >> 8) + ((ushort)(uVar6 >> 8) & 0xff);
            uVar7 = ((uint)local_12 << 0x10 | (uint)local_14) * uVar7;
            uVar6 = ((uint)pbVar5[2] << 0x10 | (uint)*pbVar5) * iVar10;
          }
          else {
            FUN_004bea3e(iVar10,1);
            pbVar5 = (byte *)(*(int *)(*(int *)(in_EAX + 0x48) + 0xc) * iVar10 +
                             *(int *)(in_EAX + 100));
            uVar6 = (local_f | 0xff0000) * *(int *)(in_EAX + 0x50);
            iVar10 = 0x100 - (uVar6 >> 0x18);
            local_34 = (short)((uint)pbVar5[1] * iVar10 >> 8) + ((ushort)(uVar6 >> 8) & 0xff);
            uVar7 = ((uint)local_e << 0x10 | (uint)local_10) * *(int *)(in_EAX + 0x50);
            uVar6 = ((uint)pbVar5[2] << 0x10 | (uint)*pbVar5) * iVar10;
          }
          uVar6 = (uVar7 >> 8 & 0xff00ff) + (uVar6 >> 8 & 0xff00ff);
          uVar6 = (0x100 - (uVar6 >> 8 & 0xff00ff) | uVar6) & 0xff00ff;
          pbVar5[1] = -(char)((ushort)local_34 >> 8) | (byte)local_34;
          *pbVar5 = (byte)uVar6;
          pbVar5[2] = (byte)(uVar6 >> 0x10);
        }
      }
      local_28 = local_28 + 1;
      piVar3 = piVar3 + iVar1;
    } while (local_28 < (int)param_1[4]);
  }
  return;
}

