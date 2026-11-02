// rea decompile_all
// name: FUN_00421e1e
// address: 0x421e1e
// body: available
// range: 0x421e1e-0x421ec8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00421e1e(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  
  uVar7 = CONCAT44(param_1,param_2);
  puVar6 = (undefined1 *)(param_1 + 0x14);
  puVar5 = puVar6;
  if (puVar6 <= *(undefined1 **)(param_2 + 4)) goto LAB_00421e3c;
  while( true ) {
    do {
      uVar7 = FUN_0040d9d1();
      puVar5 = puVar6;
LAB_00421e3c:
      iVar3 = (int)((ulonglong)uVar7 >> 0x20);
      iVar1 = (int)uVar7;
      uVar2 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar3 + 4),*(undefined1 *)(iVar3 + 5)),
                                *(undefined1 *)(iVar3 + 6)),*(undefined1 *)(iVar3 + 7));
      puVar6 = puVar5 + -1;
      iVar4 = CONCAT31(CONCAT21(CONCAT11(puVar5[-4],puVar5[-3]),puVar5[-2]),*puVar6);
    } while (((uint)(*(int *)(iVar1 + 4) - iVar3) < uVar2) || (uVar2 < iVar4 * 2 + 0x14U));
    if ((*(int *)(iVar1 + 8) < 1) || (iVar4 == 0)) break;
    while (puVar5 = puVar6 + 1, puVar6 = puVar6 + 2,
          (uint)CONCAT11(*puVar5,*puVar6) < *(uint *)(iVar1 + 0x50)) {
      iVar4 = iVar4 + -1;
      if (iVar4 == 0) {
        return 0;
      }
    }
  }
  return 0;
}

