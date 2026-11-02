// rea decompile_all
// name: FUN_00490236
// address: 0x490236
// body: available
// range: 0x490236-0x49033d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00490236(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int in_EAX;
  undefined4 uVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint local_8;
  
  uVar8 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(in_EAX + 0x80),*(undefined1 *)(in_EAX + 0x81)),
                            *(undefined1 *)(in_EAX + 0x82)),*(undefined1 *)(in_EAX + 0x83));
  puVar7 = (undefined1 *)(in_EAX + 0x84);
  local_8 = 0;
  if (uVar8 != 0) {
    do {
      uVar1 = puVar7[9];
      uVar5 = CONCAT31(CONCAT21(CONCAT11(*puVar7,puVar7[1]),puVar7[2]),puVar7[3]);
      uVar6 = CONCAT31(CONCAT21(CONCAT11(puVar7[4],puVar7[5]),puVar7[6]),puVar7[7]);
      uVar2 = puVar7[8];
      uVar3 = puVar7[10];
      uVar4 = puVar7[0xb];
      if ((puVar7[7] & 3) != 0) {
        FUN_0048fdfd(param_1,0,uVar5);
      }
      if ((param_4 < uVar6) ||
         (param_4 - uVar6 < CONCAT31(CONCAT21(CONCAT11(uVar2,uVar1),uVar3),uVar4))) {
        uVar5 = FUN_0048fdfd(param_1,param_2,uVar5);
        return uVar5;
      }
      local_8 = local_8 + 1;
      puVar7 = puVar7 + 0xc;
    } while (local_8 < uVar8);
  }
  return 1;
}

