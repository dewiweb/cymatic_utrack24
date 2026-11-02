// rea decompile_all
// name: FUN_0042196a
// address: 0x42196a
// body: available
// range: 0x42196a-0x421bc1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0042196a(int param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int extraout_ECX;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  uint local_1c;
  uint local_14;
  undefined1 *local_8;
  
  iVar2 = param_2;
  iVar6 = param_1;
  if (param_1 + 0x2010U <= *(uint *)(param_2 + 4)) goto LAB_0042198e;
LAB_00421989:
  do {
    do {
      iVar2 = FUN_0040d9d1();
      iVar6 = extraout_ECX;
LAB_0042198e:
      uVar9 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar6 + 4),*(undefined1 *)(iVar6 + 5)),
                                *(undefined1 *)(iVar6 + 6)),*(undefined1 *)(iVar6 + 7));
    } while (((uint)(*(int *)(iVar2 + 4) - iVar6) < uVar9) || (uVar9 < 0x2010));
    puVar14 = (undefined1 *)(iVar6 + 0x200c);
    puVar7 = (undefined1 *)(iVar6 + 0x200f);
    puVar5 = (undefined1 *)(iVar6 + 0x200d);
    local_8 = (undefined1 *)(iVar6 + 0x200e);
    uVar9 = CONCAT31(CONCAT21(CONCAT11(*puVar14,*puVar5),*local_8),*puVar7);
  } while (*(uint *)(param_2 + 4) < uVar9 * 0xc + iVar6 + 0x2010);
  local_1c = 0;
  local_14 = 0;
  if (uVar9 == 0) {
    return 0;
  }
  do {
    puVar3 = puVar5 + 4;
    puVar12 = puVar14 + 4;
    puVar1 = local_8 + 8;
    puVar8 = puVar7 + 8;
    puVar4 = puVar5 + 8;
    uVar10 = CONCAT31(CONCAT21(CONCAT11(*puVar12,*puVar3),local_8[4]),puVar7[4]);
    puVar13 = puVar14 + 8;
    local_8 = local_8 + 0xc;
    puVar7 = puVar7 + 0xc;
    puVar5 = puVar5 + 0xc;
    uVar11 = CONCAT31(CONCAT21(CONCAT11(*puVar13,*puVar4),*puVar1),*puVar8);
    puVar14 = puVar14 + 0xc;
    if ((uVar11 < uVar10) || ((local_14 != 0 && (uVar10 <= local_1c)))) goto LAB_00421989;
    if (0 < *(int *)(param_2 + 8)) {
      if (*(uint *)(param_2 + 0x50) <=
          (CONCAT31(CONCAT21(CONCAT11(*puVar14,*puVar5),*local_8),*puVar7) - uVar10) + uVar11)
      goto LAB_00421989;
      iVar2 = (uVar11 - uVar10) + 1;
      if (CONCAT11(*puVar12,*puVar3) == 0) {
        if (CONCAT11(*puVar13,*puVar4) != 0) goto LAB_00421989;
        for (; iVar2 != 0; iVar2 = iVar2 + -1) {
          if ((*(byte *)(((uVar10 & 0xffff) >> 3) + 0xc + param_1) &
              (byte)(0x80 >> ((byte)(uVar10 & 0xffff) & 7))) != 0) goto LAB_00421989;
          uVar10 = uVar10 + 1;
        }
      }
      else {
        for (; iVar2 != 0; iVar2 = iVar2 + -1) {
          if (((*(byte *)((uVar10 >> 0x13) + 0xc + param_1) &
               (byte)(0x80 >> ((byte)(uVar10 >> 0x10) & 7))) == 0) ||
             ((*(byte *)(((uVar10 & 0xffff) >> 3) + 0xc + param_1) &
              (byte)(0x80 >> ((byte)(uVar10 & 0xffff) & 7))) == 0)) goto LAB_00421989;
          uVar10 = uVar10 + 1;
        }
      }
    }
    local_14 = local_14 + 1;
    local_1c = uVar11;
    if (uVar9 <= local_14) {
      return 0;
    }
  } while( true );
}

