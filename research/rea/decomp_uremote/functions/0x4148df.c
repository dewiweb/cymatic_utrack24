// rea decompile_all
// name: FUN_004148df
// address: 0x4148df
// body: available
// range: 0x4148df-0x414a5a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004148df(undefined4 param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  uint local_c;
  uint local_8;
  
  iVar10 = param_2;
  uVar9 = 0;
  iVar6 = FUN_0041106d();
  if ((iVar6 == 0) && (local_8 = FUN_00411560(param_1,(int *)(param_2 + 0xb8)), local_8 == 0)) {
    if (((*(int *)(param_2 + 0xb8) == 0x70636601) && (*(uint *)(param_2 + 0xbc) < 0x8000000)) &&
       (*(uint *)(param_2 + 0xbc) != 0)) {
      iVar6 = FUN_00411976(0x10,0,&local_8);
      *(int *)(param_2 + 0xc0) = iVar6;
      if (local_8 == 0) {
        piVar1 = (int *)(param_2 + 0xbc);
        param_2 = iVar6;
        if (*piVar1 != 0) {
          do {
            local_8 = FUN_00411560(param_1,param_2);
            if (local_8 != 0) {
              FUN_00411a5c(*(undefined4 *)(iVar10 + 0xc0));
              *(undefined4 *)(iVar10 + 0xc0) = 0;
              return local_8;
            }
            param_2 = param_2 + 0x10;
            uVar9 = uVar9 + 1;
            local_8 = 0;
          } while (uVar9 < *(uint *)(iVar10 + 0xbc));
        }
        iVar6 = *(int *)(iVar10 + 0xc0);
        local_8 = 0;
        iVar7 = *(int *)(iVar10 + 0xbc);
        if (iVar7 != 1) {
          do {
            bVar5 = false;
            local_c = 0;
            if (iVar7 - local_8 == 1) break;
            puVar8 = (uint *)(iVar6 + 0x1c);
            do {
              if (*puVar8 < puVar8[-4]) {
                uVar9 = puVar8[-7];
                uVar2 = puVar8[-6];
                uVar3 = puVar8[-5];
                uVar4 = puVar8[-4];
                puVar8[-7] = puVar8[-3];
                puVar8[-6] = puVar8[-2];
                puVar8[-5] = puVar8[-1];
                puVar8[-4] = *puVar8;
                puVar8[-3] = uVar9;
                puVar8[-2] = uVar2;
                puVar8[-1] = uVar3;
                *puVar8 = uVar4;
                bVar5 = true;
              }
              if ((*puVar8 < puVar8[-5]) || (*puVar8 - puVar8[-5] < puVar8[-4])) {
                return 9;
              }
              local_c = local_c + 1;
              puVar8 = puVar8 + 4;
            } while (local_c < (*(int *)(iVar10 + 0xbc) - local_8) - 1);
            if (!bVar5) break;
            iVar7 = *(int *)(iVar10 + 0xbc);
            local_8 = local_8 + 1;
          } while (local_8 < iVar7 - 1U);
        }
        iVar10 = 0;
      }
      else {
        iVar10 = 0x40;
      }
    }
    else {
      iVar10 = 3;
    }
  }
  else {
    iVar10 = 1;
  }
  return iVar10;
}

