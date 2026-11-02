// rea decompile_all
// name: FUN_0046b939
// address: 0x46b939
// body: available
// range: 0x46b939-0x46bb04 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046b939(void)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int *in_EAX;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int in_EDX;
  int *piVar14;
  undefined4 *puVar15;
  short *psVar16;
  int local_20;
  int *local_14;
  int local_10;
  int local_8;
  
  iVar4 = in_EAX[1];
  iVar5 = *in_EAX;
  piVar14 = (int *)in_EAX[2];
  iVar13 = *piVar14;
  iVar6 = piVar14[1];
  local_8 = 0;
  iVar7 = piVar14[2];
  uVar8 = piVar14[4];
  puVar15 = (undefined4 *)(in_EDX + 0xb3c);
  for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar15 = 0;
    puVar15 = puVar15 + 1;
  }
  *(undefined2 *)(iVar5 + 2 + *(int *)(in_EDX + 0xb5c + *(int *)(in_EDX + 0x1454) * 4) * 4) = 0;
  iVar10 = *(int *)(in_EDX + 0x1454) + 1;
  if (iVar10 < 0x23d) {
    local_14 = (int *)(in_EDX + 0xb5c + iVar10 * 4);
    local_20 = 0x23d - iVar10;
    iVar10 = iVar10 + local_20;
    do {
      iVar9 = *local_14;
      iVar11 = iVar9 * 4;
      uVar12 = *(ushort *)(iVar5 + 2 + (uint)*(ushort *)(iVar11 + 2 + iVar5) * 4) + 1;
      if ((int)uVar8 < (int)uVar12) {
        local_8 = local_8 + 1;
        uVar12 = uVar8;
      }
      *(short *)(iVar11 + 2 + iVar5) = (short)uVar12;
      if (iVar9 <= iVar4) {
        psVar16 = (short *)(in_EDX + 0xb3c + uVar12 * 2);
        *psVar16 = *psVar16 + 1;
        local_10 = 0;
        if (iVar7 <= iVar9) {
          local_10 = *(int *)(iVar6 + (iVar9 - iVar7) * 4);
        }
        uVar3 = *(ushort *)(iVar11 + iVar5);
        *(int *)(in_EDX + 0x16a8) = *(int *)(in_EDX + 0x16a8) + (local_10 + uVar12) * (uint)uVar3;
        if (iVar13 != 0) {
          *(int *)(in_EDX + 0x16ac) =
               *(int *)(in_EDX + 0x16ac) +
               ((uint)*(ushort *)(iVar11 + 2 + iVar13) + local_10) * (uint)uVar3;
        }
      }
      local_14 = local_14 + 1;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
    if (local_8 != 0) {
      puVar2 = (ushort *)(in_EDX + 0xb3c + uVar8 * 2);
      do {
        iVar13 = uVar8 - 1;
        for (psVar16 = (short *)(in_EDX + 0xb3c + iVar13 * 2); *psVar16 == 0; psVar16 = psVar16 + -1
            ) {
          iVar13 = iVar13 + -1;
        }
        local_8 = local_8 + -2;
        psVar16 = (short *)(in_EDX + 0xb3c + iVar13 * 2);
        *psVar16 = *psVar16 + -1;
        psVar16 = (short *)(in_EDX + 0xb3e + iVar13 * 2);
        *psVar16 = *psVar16 + 2;
        *puVar2 = *puVar2 - 1;
      } while (0 < local_8);
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        local_14 = (int *)(uint)*puVar2;
        if (local_14 != (int *)0x0) {
          piVar14 = (int *)(in_EDX + 0xb5c + iVar10 * 4);
          do {
            piVar14 = piVar14 + -1;
            iVar10 = iVar10 + -1;
            if (*piVar14 <= iVar4) {
              puVar1 = (ushort *)(iVar5 + *piVar14 * 4);
              if (puVar1[1] != uVar8) {
                local_8._0_2_ = (ushort)uVar8;
                *(int *)(in_EDX + 0x16a8) =
                     *(int *)(in_EDX + 0x16a8) + (uVar8 - puVar1[1]) * (uint)*puVar1;
                puVar1[1] = (ushort)local_8;
              }
              local_14 = (int *)((int)local_14 - 1);
            }
          } while (local_14 != (int *)0x0);
        }
        puVar2 = puVar2 + -1;
      }
    }
  }
  return;
}

