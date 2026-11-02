// rea decompile_all
// name: FUN_0042660a
// address: 0x42660a
// body: available
// range: 0x42660a-0x4266ee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0042660a(int param_1,uint param_2,int *param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = *(uint *)(param_1 + 0x2dc);
  uVar4 = 0;
  uVar5 = 0;
  if (param_2 < uVar2) {
    iVar3 = *(int *)(param_1 + 0x2e0);
    if (*(short *)(param_1 + 0xd2) == 0) {
      puVar1 = (undefined1 *)(iVar3 + 2 + param_2 * 2);
      uVar5 = (uint)CONCAT11(puVar1[-2],puVar1[-1]);
      if (puVar1 + 2 <= (undefined1 *)(iVar3 + uVar2 * 2)) {
        uVar5 = (uint)CONCAT11(*puVar1,puVar1[1]);
      }
      uVar4 = (uint)CONCAT11(puVar1[-2],puVar1[-1]) * 2;
      uVar5 = uVar5 * 2;
    }
    else {
      puVar1 = (undefined1 *)(iVar3 + 4 + param_2 * 4);
      uVar4 = CONCAT31(CONCAT21(CONCAT11(puVar1[-4],puVar1[-3]),puVar1[-2]),puVar1[-1]);
      uVar5 = uVar4;
      if (puVar1 + 4 <= (undefined1 *)(iVar3 + uVar2 * 4)) {
        uVar5 = CONCAT31(CONCAT21(CONCAT11(*puVar1,puVar1[1]),puVar1[2]),puVar1[3]);
      }
    }
  }
  uVar2 = *(uint *)(param_1 + 0x2c0);
  if (uVar2 < uVar4) {
    *param_3 = 0;
    uVar4 = 0;
  }
  else {
    if (uVar2 < uVar5) {
      uVar5 = uVar2;
    }
    if (uVar5 < uVar4) {
      *param_3 = uVar2 - uVar4;
    }
    else {
      *param_3 = uVar5 - uVar4;
    }
  }
  return uVar4;
}

