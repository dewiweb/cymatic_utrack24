// rea decompile_all
// name: FUN_004177ce
// address: 0x4177ce
// body: available
// range: 0x4177ce-0x417a84 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004177ce(undefined4 param_1,int *param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  short sVar3;
  undefined2 *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  int *local_c;
  int local_8;
  
  local_8 = FUN_00415efb();
  if (local_8 == 0) {
    cVar2 = FUN_00415f28();
    if (cVar2 == '\0') {
      local_8 = 2;
    }
    else {
      local_8 = FUN_00415f4a(&local_c);
      if ((local_8 == 0) && (*param_2 = (int)local_c, -1 < param_3)) {
        if (param_3 < (int)local_c) {
          local_8 = FUN_00415f81(param_2 + 0x3c,param_1,param_2[0x33] != 0);
          if (local_8 == 0) {
            piVar8 = param_2 + 0x48;
            local_c = piVar8;
            local_8 = FUN_00416739(piVar8,param_1,param_2[0x47],param_2[0x46]);
            if (local_8 == 0) {
              param_2[1] = param_3;
              param_2[4] = param_2[0x66] + 1;
              param_2[2] = 1;
              uVar1 = param_2[0x66];
              uVar9 = 0;
              if (uVar1 != 0) {
                piVar6 = (int *)(param_2[0x68] + 0xc);
                do {
                  if (*piVar6 != 0) break;
                  uVar9 = uVar9 + 1;
                  piVar6 = piVar6 + 4;
                } while (uVar9 < uVar1);
              }
              if (uVar9 == uVar1) {
                if (param_2[0x5f] == 0) {
                  return 3;
                }
                param_2[2] = 0;
              }
              if ((*(byte *)(param_2 + 0x51) & 4) == 0) {
                param_2[2] = param_2[2] | 4;
              }
              if ((*(byte *)(param_2 + 0x51) & 1) == 0) {
                param_2[2] = param_2[2] | 0x10;
              }
              else {
                param_2[2] = param_2[2] | 0x20;
              }
              if (param_2[0x5f] != 0) {
                param_2[2] = param_2[2] | 2;
              }
              if (param_2[0x69] != 0) {
                param_2[2] = param_2[2] | 0x40;
              }
              param_2[5] = param_2[0x5d];
              if (param_2[0x5d] == 0) {
                param_2[5] = param_2[0x5c];
              }
              param_2[6] = param_2[0x5e];
              param_2[7] = 0;
              param_2[8] = 0;
              param_2[0xd] = param_2[0x4d];
              param_2[0xe] = param_2[0x4e];
              param_2[0xf] = param_2[0x4f];
              param_2[0x10] = param_2[0x50];
              *(short *)(param_2 + 0x11) = (short)param_2[0x4b];
              *(short *)((int)param_2 + 0x46) = (short)param_2[0x50];
              *(short *)(param_2 + 0x12) = (short)param_2[0x4e];
              sVar3 = (short)((ulonglong)((uint)*(ushort *)(param_2 + 0x11) * 0xc) / 10);
              *(short *)((int)param_2 + 0x4a) = sVar3;
              if ((int)sVar3 < (int)*(short *)((int)param_2 + 0x46) - (int)(short)param_2[0x12]) {
                *(short *)((int)param_2 + 0x4a) =
                     *(short *)((int)param_2 + 0x46) - (short)param_2[0x12];
              }
              iVar5 = param_2[0x5f];
              if (iVar5 != 0) {
                puVar4 = (undefined2 *)FUN_00411976(0x10,0,&local_8);
                param_2[8] = (int)puVar4;
                if (local_8 != 0) {
                  return local_8;
                }
                piVar8 = (int *)local_c[0x19];
                for (iVar7 = iVar5; iVar7 != 0; iVar7 = iVar7 + -1) {
                  *puVar4 = (short)piVar8[1];
                  puVar4[1] = (short)*piVar8;
                  *(int *)(puVar4 + 2) = piVar8[1] << 6;
                  *(int *)(puVar4 + 4) = *piVar8 << 6;
                  *(int *)(puVar4 + 6) = piVar8[1] << 6;
                  puVar4 = puVar4 + 8;
                  piVar8 = piVar8 + 9;
                }
                param_2[7] = iVar5;
                piVar8 = local_c;
              }
              if ((*(byte *)(piVar8 + 9) & 4) == 0) {
                *(short *)(param_2 + 0x13) = (short)piVar8[10];
              }
              else {
                iVar5 = piVar8[0x1e];
                iVar7 = 0;
                if (iVar5 != 0) {
                  piVar6 = (int *)(piVar8[0x20] + 4);
                  do {
                    if (iVar7 < *piVar6) {
                      iVar7 = *piVar6;
                    }
                    iVar5 = iVar5 + -1;
                    piVar6 = piVar6 + 4;
                  } while (iVar5 != 0);
                }
                *(short *)(param_2 + 0x13) = (short)iVar7;
              }
              *(undefined2 *)((int)param_2 + 0x4e) = *(undefined2 *)((int)param_2 + 0x4a);
              *(short *)(param_2 + 0x14) =
                   (short)((longlong)(ulonglong)(uint)*(ushort *)(param_2 + 0x11) / -10);
              *(short *)((int)param_2 + 0x52) =
                   (short)((ulonglong)(uint)*(ushort *)(param_2 + 0x11) / 0x1e);
              local_8 = FUN_0040f8e2(&DAT_008fc2cc,0,0);
              if (piVar8[0x21] != 0) {
                param_2[2] = param_2[2] | 0x40;
              }
            }
          }
        }
        else {
          local_8 = 6;
        }
      }
    }
  }
  return local_8;
}

