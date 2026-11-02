// rea decompile_all
// name: FUN_00422cc4
// address: 0x422cc4
// body: available
// range: 0x422cc4-0x422d4a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined2 FUN_00422cc4(uint param_1)

{
  undefined1 *puVar1;
  undefined1 *in_EAX;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint local_8;
  
  local_8 = 0;
  uVar2 = CONCAT31(CONCAT21(CONCAT11(*in_EAX,in_EAX[1]),in_EAX[2]),in_EAX[3]);
  if (uVar2 != 0) {
    do {
      uVar4 = uVar2 + local_8 >> 1;
      puVar1 = in_EAX + uVar4 * 5 + 7;
      uVar3 = (uint)CONCAT21(CONCAT11(puVar1[-3],puVar1[-2]),puVar1[-1]);
      if (uVar3 <= param_1) {
        if (param_1 <= uVar3) {
          return CONCAT11(*puVar1,puVar1[1]);
        }
        local_8 = uVar4 + 1;
        uVar4 = uVar2;
      }
      uVar2 = uVar4;
    } while (local_8 < uVar4);
  }
  return 0;
}

