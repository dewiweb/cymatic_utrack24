// rea decompile_all
// name: FUN_0040280a
// address: 0x40280a
// body: available
// range: 0x40280a-0x402954 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040280a(void)

{
  int *piVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  piVar7 = (int *)(in_EAX * 0x1c + 0x2c + in_ECX);
  piVar1 = (int *)piVar7[2];
  iVar3 = *(int *)(*(int *)(in_ECX + 0x6c) + 0x24);
  iVar2 = iVar3 * 8;
  local_c = (int)(iVar2 + (iVar2 >> 0x1f & 0x7ffU)) >> 0xb;
  piVar8 = piVar1 + *piVar7 * 0xc;
  if (local_c == 0) {
    local_c = 1;
  }
  iVar3 = iVar3 * 6000;
  if (piVar1 < piVar8) {
    piVar5 = piVar1 + 10;
    iVar2 = (uint)((int)piVar8 + (-1 - (int)piVar1)) / 0x30 + 1;
    local_14 = iVar2;
    do {
      if (((int)*(char *)((int)piVar5 + -0x27) == piVar7[6]) && (*piVar5 != piVar5[1])) {
        piVar6 = piVar1 + 1;
        local_10 = iVar2;
        do {
          if (((int)*(char *)((int)piVar6 + -3) + (int)*(char *)((int)piVar5 + -0x27) == 0) &&
             ((int)*(short *)((int)piVar5 + -0x26) < (int)*(short *)((int)piVar6 + -2))) {
            local_8 = (int)(short)piVar5[-9];
            if ((int)(short)piVar5[-9] < (int)(short)*piVar6) {
              local_8 = (int)(short)*piVar6;
            }
            iVar4 = (int)*(short *)((int)piVar5 + -0x22);
            if ((int)*(short *)((int)piVar6 + 2) < (int)*(short *)((int)piVar5 + -0x22)) {
              iVar4 = (int)*(short *)((int)piVar6 + 2);
            }
            if (local_c <= iVar4 - local_8) {
              iVar4 = ((int)(iVar3 + (iVar3 >> 0x1f & 0x7ffU)) >> 0xb) / (iVar4 - local_8) +
                      ((int)*(short *)((int)piVar6 + -2) - (int)*(short *)((int)piVar5 + -0x26));
              if (iVar4 < piVar5[-2]) {
                piVar5[-2] = iVar4;
                piVar5[-5] = (int)(piVar6 + -1);
              }
              if (iVar4 < piVar6[7]) {
                piVar6[7] = iVar4;
                piVar6[4] = (int)(piVar5 + -10);
              }
            }
          }
          piVar6 = piVar6 + 0xc;
          local_10 = local_10 + -1;
        } while (local_10 != 0);
      }
      piVar5 = piVar5 + 0xc;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
    if (piVar1 < piVar8) {
      piVar7 = piVar1 + 5;
      do {
        iVar3 = *piVar7;
        if ((iVar3 != 0) && (*(int **)(iVar3 + 0x14) != piVar7 + -5)) {
          *piVar7 = 0;
          piVar7[1] = *(int *)(iVar3 + 0x14);
        }
        piVar1 = piVar7 + 7;
        piVar7 = piVar7 + 0xc;
      } while (piVar1 < piVar8);
    }
  }
  return;
}

