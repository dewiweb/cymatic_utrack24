// rea decompile_all
// name: FUN_0042dcc6
// address: 0x42dcc6
// body: available
// range: 0x42dcc6-0x42dff1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0042dcc6(int param_1)

{
  short *psVar1;
  uint *puVar2;
  int iVar3;
  ushort uVar4;
  short sVar5;
  int *in_EAX;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  short *psVar11;
  uint uVar12;
  short *psVar13;
  int local_34;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_10;
  int local_8;
  
  puVar2 = *(uint **)(param_1 + 0x2c8);
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  if ((((puVar2 == (uint *)0x0) || (*(int *)(param_1 + 0x2a0) == 0)) ||
      (iVar6 = (**(code **)(param_1 + 0x1fc))(param_1,0x63766172), iVar6 != 0)) ||
     (local_8 = FUN_004111b5(), local_8 != 0)) {
    local_8 = 0;
  }
  else {
    iVar6 = in_EAX[8];
    iVar3 = *in_EAX;
    iVar7 = FUN_004112c7();
    if (iVar7 == 0x10000) {
      local_1c = FUN_00411976(4,0,&local_8);
      if (((local_8 == 0) && (local_20 = FUN_00411976(4,0,&local_8), local_8 == 0)) &&
         (local_24 = FUN_00411976(4,0,&local_8), local_8 == 0)) {
        uVar8 = FUN_00411277();
        uVar9 = FUN_00411277();
        local_10 = (uVar9 & 0xffff) + (iVar6 - iVar3);
        for (uVar8 = uVar8 & 0xfff; uVar8 != 0; uVar8 = uVar8 - 1) {
          uVar9 = FUN_00411277();
          uVar4 = FUN_00411277();
          if ((uVar4 & 0x8000) == 0) {
            if (((uVar4 & 0x4000) != 0) && (uVar12 = 0, (*puVar2 & 0x7fffffff) != 0)) {
              do {
                FUN_00411277();
                uVar12 = uVar12 + 1;
              } while (uVar12 < *puVar2 * 2);
            }
          }
          else {
            uVar12 = 0;
            if (*puVar2 != 0) {
              do {
                sVar5 = FUN_00411277();
                *(int *)(local_1c + uVar12 * 4) = (int)sVar5 << 2;
                uVar12 = uVar12 + 1;
              } while (uVar12 < *puVar2);
            }
            if ((uVar4 & 0x4000) != 0) {
              uVar12 = 0;
              if (*puVar2 != 0) {
                do {
                  sVar5 = FUN_00411277();
                  *(int *)(local_20 + uVar12 * 4) = (int)sVar5 << 2;
                  uVar12 = uVar12 + 1;
                } while (uVar12 < *puVar2);
              }
              uVar12 = 0;
              if (*puVar2 != 0) {
                do {
                  sVar5 = FUN_00411277();
                  *(int *)(local_24 + uVar12 * 4) = (int)sVar5 << 2;
                  uVar12 = uVar12 + 1;
                } while (uVar12 < *puVar2);
              }
            }
            iVar6 = FUN_0042d52a(puVar2,uVar4);
            if ((iVar6 != 0) && ((uVar4 & 0x2000) != 0)) {
              iVar3 = *in_EAX;
              iVar7 = in_EAX[8];
              in_EAX[8] = iVar3 + local_10;
              iVar10 = FUN_0042d004();
              psVar11 = (short *)FUN_0042d116();
              if ((iVar10 == 0) || (psVar11 == (short *)0x0)) {
LAB_0042df7f:
                if (iVar10 != -1) {
                  FUN_00411a5c(iVar10);
                }
              }
              else {
                if (iVar10 != -1) {
                  if (local_28 != 0) {
                    local_34 = local_28;
                    psVar13 = psVar11;
                    do {
                      psVar1 = (short *)(*(int *)(param_1 + 0x2a0) +
                                        (uint)*(ushort *)((iVar10 - (int)psVar11) + (int)psVar13) *
                                        2);
                      sVar5 = thunk_FUN_00401000((int)*psVar13,iVar6);
                      *psVar1 = *psVar1 + sVar5;
                      psVar13 = psVar13 + 1;
                      local_34 = local_34 + -1;
                    } while (local_34 != 0);
                  }
                  goto LAB_0042df7f;
                }
                uVar12 = 0;
                if (*(int *)(param_1 + 0x29c) != 0) {
                  do {
                    psVar13 = (short *)(*(int *)(param_1 + 0x2a0) + uVar12 * 2);
                    sVar5 = thunk_FUN_00401000((int)psVar11[uVar12],iVar6);
                    *psVar13 = *psVar13 + sVar5;
                    uVar12 = uVar12 + 1;
                  } while (uVar12 < *(uint *)(param_1 + 0x29c));
                }
              }
              FUN_00411a5c(psVar11);
              in_EAX[8] = *in_EAX + (iVar7 - iVar3);
            }
          }
          local_10 = local_10 + (uVar9 & 0xffff);
        }
      }
    }
    else {
      local_8 = 0;
    }
    FUN_00411249();
  }
  FUN_00411a5c(local_1c);
  FUN_00411a5c(local_20);
  FUN_00411a5c(local_24);
  return local_8;
}

