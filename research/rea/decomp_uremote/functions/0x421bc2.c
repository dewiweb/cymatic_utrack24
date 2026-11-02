// rea decompile_all
// name: FUN_00421bc2
// address: 0x421bc2
// body: available
// range: 0x421bc2-0x421cb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00421bc2(int param_1,uint param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  
  iVar4 = *(int *)(param_1 + 0x10);
  puVar10 = (undefined1 *)(iVar4 + 0x200c);
  puVar8 = (undefined1 *)(iVar4 + 0x200d);
  puVar1 = (undefined1 *)(iVar4 + 0x200e);
  puVar5 = (undefined1 *)(iVar4 + 0x200f);
  iVar4 = CONCAT31(CONCAT21(CONCAT11(*puVar10,*puVar8),*puVar1),*puVar5);
  while( true ) {
    if (iVar4 == 0) {
      return 0;
    }
    puVar2 = puVar1 + 8;
    puVar3 = puVar5 + 8;
    puVar9 = puVar10 + 8;
    puVar7 = puVar8 + 8;
    uVar6 = CONCAT31(CONCAT21(CONCAT11(puVar10[4],puVar8[4]),puVar1[4]),puVar5[4]);
    puVar1 = puVar1 + 0xc;
    puVar5 = puVar5 + 0xc;
    puVar10 = puVar10 + 0xc;
    puVar8 = puVar8 + 0xc;
    if (param_2 < uVar6) break;
    if (param_2 <= CONCAT31(CONCAT21(CONCAT11(*puVar9,*puVar7),*puVar2),*puVar3)) {
      return (CONCAT31(CONCAT21(CONCAT11(*puVar10,*puVar8),*puVar1),*puVar5) - uVar6) + param_2;
    }
    iVar4 = iVar4 + -1;
  }
  return 0;
}

