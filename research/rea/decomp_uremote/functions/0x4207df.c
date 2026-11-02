// rea decompile_all
// name: FUN_004207df
// address: 0x4207df
// body: available
// range: 0x4207df-0x420961 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004207df(uint param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *extraout_ECX;
  uint uVar8;
  uint uVar9;
  short unaff_BX;
  undefined1 *puVar10;
  undefined1 *local_c;
  uint local_8;
  
  uVar9 = param_1;
  uVar8 = (uint)CONCAT11(*(undefined1 *)(param_1 + 2),*(undefined1 *)(param_1 + 3));
  puVar2 = (undefined1 *)(uVar8 + param_1);
  puVar10 = puVar2;
  if ((puVar2 <= *(undefined1 **)(param_2 + 4)) && (0x205 < uVar8)) {
    param_1 = 0;
    puVar10 = (undefined1 *)0x0;
    puVar5 = (undefined1 *)(uVar9 + 6);
    do {
      puVar7 = puVar5;
      puVar5 = puVar7 + 2;
      if ((1 < *(int *)(param_2 + 8)) && ((puVar7[1] & 7) != 0)) goto LAB_00420911;
      uVar9 = (uint)(ushort)(CONCAT11(*puVar7,puVar7[1]) >> 3);
      if (param_1 < uVar9) {
        param_1 = uVar9;
      }
      puVar10 = puVar10 + 1;
    } while (puVar10 < (undefined1 *)0x100);
    puVar10 = *(undefined1 **)(param_2 + 4);
    local_c = puVar7 + param_1 * 8 + 10;
    if (local_c <= puVar10) {
      local_8 = 0;
      goto LAB_00420877;
    }
  }
LAB_00420911:
  do {
    iVar4 = FUN_0040d9d1();
    puVar7 = extraout_ECX;
    while( true ) {
      puVar5 = puVar7 + 1;
      uVar3 = *puVar7;
      puVar7 = puVar7 + 2;
      if ((CONCAT11(uVar3,*puVar5) != 0) &&
         (*(uint *)(iVar4 + 0x50) <= (uint)(ushort)(CONCAT11(uVar3,*puVar5) + unaff_BX))) break;
      while (puVar5 = puVar7, puVar10 <= puVar7) {
        do {
          do {
            do {
              local_8 = local_8 + 1;
              if (param_1 < local_8) {
                return 0;
              }
LAB_00420877:
              puVar10 = (undefined1 *)(uint)CONCAT11(*puVar5,puVar5[1]);
              puVar6 = puVar5 + 6;
              uVar9 = (uint)CONCAT11(puVar5[2],puVar5[3]);
              puVar7 = puVar5 + 8;
              unaff_BX = CONCAT11(puVar5[4],puVar5[5]);
              puVar1 = puVar5 + 7;
              puVar5 = puVar7;
            } while (uVar9 == 0);
            if ((1 < *(int *)(param_2 + 8)) &&
               (((undefined1 *)0xff < puVar10 ||
                (puVar10 = puVar10 + uVar9, (undefined1 *)0x100 < puVar10)))) goto LAB_00420911;
          } while (CONCAT11(*puVar6,*puVar1) == 0);
          if ((puVar7 + (CONCAT11(*puVar6,*puVar1) - 2) < local_c) ||
             (puVar2 < puVar7 + (CONCAT11(*puVar6,*puVar1) - 2) + uVar9 * 2)) goto LAB_00420911;
        } while (*(int *)(param_2 + 8) < 1);
        iVar4 = param_2;
        puVar10 = puVar7 + uVar9 * 2;
      }
    }
  } while( true );
}

