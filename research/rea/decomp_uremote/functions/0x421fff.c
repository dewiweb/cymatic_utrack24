// rea decompile_all
// name: FUN_00421fff
// address: 0x421fff
// body: available
// range: 0x421fff-0x422189 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00421fff(undefined1 *param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  int extraout_EDX;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  uint local_14;
  uint local_c;
  undefined1 *local_8;
  
  uVar7 = (int)param_1 + 0x10;
  if (uVar7 <= *(uint *)(param_2 + 4)) goto LAB_00422020;
  while( true ) {
    do {
      FUN_0040d9d1();
      param_1 = (undefined1 *)extraout_EDX;
LAB_00422020:
      puVar1 = (undefined1 *)(uVar7 - 2);
      puVar6 = (undefined1 *)(uVar7 - 4);
      uVar5 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)((int)param_1 + 4),
                                         *(undefined1 *)((int)param_1 + 5)),
                                *(undefined1 *)((int)param_1 + 6)),*(undefined1 *)((int)param_1 + 7)
                      );
      puVar4 = (undefined1 *)(uVar7 - 3);
      local_8 = (undefined1 *)(uVar7 - 1);
      uVar8 = CONCAT31(CONCAT21(CONCAT11(*puVar6,*puVar4),*puVar1),*local_8);
      uVar7 = *(int *)(param_2 + 4) - (int)param_1;
    } while ((uVar7 < uVar5) || (uVar5 < uVar8 * 0xc + 0x10));
    local_14 = 0;
    local_c = 0;
    param_1 = puVar1;
    if (uVar8 == 0) break;
    while( true ) {
      puVar1 = param_1 + 8;
      puVar3 = puVar4 + 8;
      puVar2 = local_8 + 8;
      uVar5 = CONCAT31(CONCAT21(CONCAT11(puVar6[4],puVar4[4]),param_1[4]),local_8[4]);
      param_1 = param_1 + 0xc;
      local_8 = local_8 + 0xc;
      puVar4 = puVar4 + 0xc;
      uVar7 = CONCAT31(CONCAT21(CONCAT11(puVar6[8],*puVar3),*puVar1),*puVar2);
      puVar6 = puVar6 + 0xc;
      if (((uVar7 < uVar5) || ((local_c != 0 && (uVar5 <= local_14)))) ||
         ((0 < *(int *)(param_2 + 8) &&
          (*(uint *)(param_2 + 0x50) <=
           (CONCAT31(CONCAT21(CONCAT11(*puVar6,*puVar4),*param_1),*local_8) - uVar5) + uVar7))))
      break;
      local_c = local_c + 1;
      local_14 = uVar7;
      if (uVar8 <= local_c) {
        return 0;
      }
    }
  }
  return 0;
}

