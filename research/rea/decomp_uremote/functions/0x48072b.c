// rea decompile_all
// name: FUN_0048072b
// address: 0x48072b
// body: available
// range: 0x48072b-0x48089f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048072b(int *param_1)

{
  double dVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  double *pdVar9;
  double *pdVar10;
  int *piVar11;
  int local_8;
  
  local_8 = 0;
  iVar2 = param_1[0x56];
  if (0 < param_1[0xf]) {
    puVar5 = (uint *)(param_1[0x11] + 0x10);
    do {
      uVar3 = *puVar5;
      if ((3 < uVar3) || (param_1[uVar3 + 0x12] == 0)) {
        *(undefined4 *)(*param_1 + 0x14) = 0x34;
        *(uint *)(*param_1 + 0x18) = uVar3;
        (**(code **)*param_1)(param_1);
      }
      iVar4 = param_1[uVar3 + 0x12];
      iVar6 = param_1[0x2e];
      if (iVar6 == 0) {
        piVar11 = (int *)(iVar2 + 0xc + uVar3 * 4);
        if (*piVar11 == 0) {
          iVar6 = (**(code **)param_1[1])(param_1,1,0x100);
          *piVar11 = iVar6;
        }
        iVar6 = *piVar11;
        iVar7 = 0;
        do {
          *(uint *)(iVar6 + iVar7 * 4) = (uint)*(ushort *)(iVar4 + iVar7 * 2) << 3;
          iVar7 = iVar7 + 1;
        } while (iVar7 < 0x40);
      }
      else if (iVar6 == 1) {
        piVar11 = (int *)(iVar2 + 0xc + uVar3 * 4);
        if (*piVar11 == 0) {
          iVar6 = (**(code **)param_1[1])(param_1,1,0x100);
          *piVar11 = iVar6;
        }
        piVar11 = (int *)*piVar11;
        psVar8 = &DAT_00919078;
        do {
          *piVar11 = (int)((uint)*(ushort *)(iVar4 + -0x919078 + (int)psVar8) * (int)*psVar8 + 0x400
                          ) >> 0xb;
          psVar8 = psVar8 + 1;
          piVar11 = piVar11 + 1;
        } while ((int)psVar8 < 0x9190f8);
      }
      else if (iVar6 == 2) {
        piVar11 = (int *)(iVar2 + 0x20 + uVar3 * 4);
        if (*piVar11 == 0) {
          iVar6 = (**(code **)param_1[1])(param_1,1,0x100);
          *piVar11 = iVar6;
        }
        iVar6 = *piVar11;
        iVar7 = 0;
        pdVar10 = (double *)&DAT_009190f8;
        do {
          pdVar9 = (double *)&DAT_009190f8;
          do {
            dVar1 = *pdVar9;
            pdVar9 = pdVar9 + 1;
            *(float *)(iVar6 + iVar7 * 4) =
                 1.0 / ((float)*(ushort *)(iVar4 + iVar7 * 2) * (float)*pdVar10 * (float)dVar1 * 8.0
                       );
            iVar7 = iVar7 + 1;
          } while ((int)pdVar9 < 0x919138);
          pdVar10 = pdVar10 + 1;
        } while ((int)pdVar10 < 0x919138);
      }
      else {
        *(undefined4 *)(*param_1 + 0x14) = 0x30;
        (**(code **)*param_1)(param_1);
      }
      local_8 = local_8 + 1;
      puVar5 = puVar5 + 0x15;
    } while (local_8 < param_1[0xf]);
  }
  return;
}

