// rea decompile_all
// name: FUN_0043489d
// address: 0x43489d
// body: available
// range: 0x43489d-0x434b69 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043489d(int param_1,int *param_2)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  char *pcVar4;
  byte *pbVar5;
  bool bVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  uint local_34;
  char *local_30;
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  byte *local_1c;
  uint local_18;
  int local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  local_20 = param_2[4];
  pcVar3 = (char *)param_2[2];
  local_28 = 0;
  local_18 = 0;
  local_c = 0;
  bVar6 = false;
  local_30 = pcVar3;
  (*(code *)param_2[7])(param_2);
  pcVar4 = (char *)*param_2;
  if ((pcVar4 < pcVar3) && (cVar1 = *pcVar4, *param_2 = (int)(pcVar4 + 1), cVar1 == '[')) {
    (*(code *)param_2[7])(param_2);
    local_24 = 0;
    local_10 = 0;
    local_2c = 0;
    local_8 = 0;
    if ((char *)*param_2 < pcVar3) {
      do {
        pbVar5 = (byte *)*param_2;
        bVar2 = *pbVar5;
        local_1c = pbVar5;
        if (bVar2 == 0x5d) {
          *param_2 = *param_2 + 1;
          goto LAB_00434b4f;
        }
        if (bVar2 == 0x3c) {
          (*(code *)param_2[8])(param_2);
          if (param_2[3] != 0) goto LAB_00434b4f;
          local_10 = ((*param_2 - (int)pbVar5) + -1) / 2;
          local_c = FUN_00411976(1,local_c,&local_14);
          uVar7 = local_10;
          if (local_14 != 0) goto LAB_00434b4c;
          *param_2 = (int)local_1c;
          bVar6 = true;
          (*(code *)param_2[0xb])(param_2,local_c,local_10,&local_34,1);
          local_2c = uVar7;
          local_10 = local_34;
        }
        else if (bVar2 - 0x30 < 10) {
          if ((bVar6) || (uVar7 = (*(code *)param_2[9])(param_2), local_10 = uVar7, (int)uVar7 < 0))
          break;
          (*(code *)param_2[8])(param_2);
          if (param_2[3] != 0) {
            return;
          }
          iVar10 = *param_2;
          local_c = iVar10 + 1;
          if ((int)local_30 - iVar10 < (int)uVar7) break;
          *param_2 = iVar10 + 1 + uVar7;
        }
        if (local_c == 0) break;
        if (((local_10 & 1) != 0) && (*(char *)((local_10 - 1) + local_c) == '\0')) {
          local_10 = local_10 - 1;
        }
        if (local_10 == 0) break;
        local_1c = (byte *)0x0;
        iVar10 = local_c;
        if (0 < (int)local_10) {
          do {
            if (local_24 == 0) {
              iVar11 = *(int *)(param_1 + 0x1ec);
              if (0xb < local_8) {
                local_28 = (uint)*(byte *)(iVar11 + 4) * 0x10 + (uint)*(byte *)(iVar11 + 5);
                local_18 = local_28 * 0x10 + 0xc;
                local_24 = 1;
                uVar9 = FUN_00411976(1,iVar11,&local_14);
                *(undefined4 *)(param_1 + 0x1ec) = uVar9;
                iVar10 = local_c;
                if (local_14 == 0) goto LAB_00434a77;
                goto LAB_00434b4c;
              }
LAB_00434a1f:
              *(byte *)(local_8 + iVar11) = local_1c[iVar10];
              local_8 = local_8 + 1;
            }
            else {
              if (local_24 == 1) {
LAB_00434a77:
                if (local_8 < local_18) {
                  iVar11 = *(int *)(param_1 + 0x1ec);
                  goto LAB_00434a1f;
                }
                if (0 < local_28) {
                  puVar8 = (undefined1 *)(*(int *)(param_1 + 0x1ec) + 0x1a);
                  local_24 = local_28;
                  do {
                    local_18 = local_18 +
                               (CONCAT31(CONCAT21(CONCAT11(puVar8[-2],puVar8[-1]),*puVar8),puVar8[1]
                                        ) + 3U & 0xfffffffc);
                    puVar8 = puVar8 + 0x10;
                    local_24 = local_24 + -1;
                  } while (local_24 != 0);
                }
                *(uint *)(param_1 + 0x1f0) = local_18;
                local_24 = 2;
                uVar9 = FUN_00411976(1,*(undefined4 *)(param_1 + 0x1ec),&local_14);
                *(undefined4 *)(param_1 + 0x1ec) = uVar9;
                iVar10 = local_c;
                if (local_14 != 0) goto LAB_00434b4c;
              }
              else if (local_24 != 2) goto LAB_00434b29;
              if (local_18 <= local_8) goto LAB_00434b49;
              *(byte *)(local_8 + *(int *)(param_1 + 0x1ec)) = local_1c[iVar10];
              local_8 = local_8 + 1;
            }
LAB_00434b29:
            local_1c = local_1c + 1;
          } while ((int)local_1c < (int)local_10);
        }
        (*(code *)param_2[7])(param_2);
        if (local_30 <= (char *)*param_2) break;
      } while( true );
    }
  }
LAB_00434b49:
  local_14 = 3;
LAB_00434b4c:
  param_2[3] = local_14;
LAB_00434b4f:
  if (bVar6) {
    FUN_00411a5c(local_c);
  }
  return;
}

