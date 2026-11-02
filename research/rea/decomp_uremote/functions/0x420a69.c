// rea decompile_all
// name: FUN_00420a69
// address: 0x420a69
// body: available
// range: 0x420a69-0x420b74 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


short FUN_00420a69(undefined4 param_1,uint *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint local_8;
  
  sVar4 = 0;
  local_8 = 0;
  for (uVar7 = *param_2 + 1; uVar5 = local_8, uVar7 < 0x10000; uVar7 = (uVar7 & 0xffffff00) + 0x100)
  {
    puVar1 = (undefined1 *)FUN_00420962();
    if (puVar1 != (undefined1 *)0x0) {
      uVar6 = (uint)CONCAT11(*puVar1,puVar1[1]);
      uVar5 = (uint)CONCAT11(puVar1[6],puVar1[7]);
      param_1 = uVar7 & 0xff;
      if (uVar5 != 0) {
        if (param_1 < uVar6) {
          uVar8 = 0;
          param_1 = uVar6;
        }
        else {
          uVar8 = param_1 - uVar6;
        }
        uVar7 = (uVar7 & 0xffffff00) + param_1;
        if (uVar8 < CONCAT11(puVar1[2],puVar1[3])) {
          puVar2 = puVar1 + 6 + uVar5 + uVar8 * 2 + -1;
          do {
            puVar3 = puVar2 + 1;
            puVar2 = puVar2 + 2;
            if ((CONCAT11(*puVar3,*puVar2) != 0) &&
               (sVar4 = CONCAT11(*puVar3,*puVar2) + CONCAT11(puVar1[4],puVar1[5]), uVar5 = uVar7,
               sVar4 != 0)) goto LAB_00420b67;
            uVar8 = uVar8 + 1;
            uVar7 = uVar7 + 1;
          } while (uVar8 < CONCAT11(puVar1[2],puVar1[3]));
        }
      }
    }
  }
LAB_00420b67:
  local_8 = uVar5;
  *param_2 = local_8;
  return sVar4;
}

